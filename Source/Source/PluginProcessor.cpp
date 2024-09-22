#include "PluginProcessor.h"
#include "Parameters.h"
#include "PitchEditor.h"

#define DEFAULT_FILTER 20000.0f
#define DEFAULT_QFILTER 0.707f

PitchShifterAudioProcessor::PitchShifterAudioProcessor()
    : parameters(*this, &undoManager, "APVTS", Parameters::createParameterLayout())
{

    parameters.addParameterListener(NAME_MUTE, this);
    parameters.addParameterListener(NAME_LEVEL, this);
    parameters.addParameterListener(NAME_PAN, this);

    parameters.addParameterListener(NAME_MUTE1, this);
    parameters.addParameterListener(NAME_LEVEL1, this);
    parameters.addParameterListener(NAME_PAN1, this);
    parameters.addParameterListener(NAME_ST1, this);
    parameters.addParameterListener(NAME_CENT1, this);
    parameters.addParameterListener(NAME_DT1, this);
    parameters.addParameterListener(NAME_FB1, this);

    parameters.addParameterListener(NAME_MUTE2, this);
    parameters.addParameterListener(NAME_LEVEL2, this);
    parameters.addParameterListener(NAME_PAN2, this);
    parameters.addParameterListener(NAME_ST2, this);
    parameters.addParameterListener(NAME_CENT2, this);
    parameters.addParameterListener(NAME_DT2, this);
    parameters.addParameterListener(NAME_FB2, this);

    parameters.addParameterListener(NAME_MUTE3, this);
    parameters.addParameterListener(NAME_LEVEL3, this);
    parameters.addParameterListener(NAME_PAN3, this);
    parameters.addParameterListener(NAME_ST3, this);
    parameters.addParameterListener(NAME_CENT3, this);
    parameters.addParameterListener(NAME_DT3, this);
    parameters.addParameterListener(NAME_FB3, this);

   
    parameters.addParameterListener(NAME_DW, this);
    parameters.addParameterListener(NAME_FREQ, this);
    parameters.addParameterListener(NAME_MOD, this);

    channelStripOriginal.setMute(DEFAULT_MUTE);
    channelStripOriginal.setLevel(DEFAULT_LEVEL);
    channelStripOriginal.setPan(DEFAULT_PAN);

    drywetter.setDryWetRatio(DEFAULT_DW);

    pitchShift1.pitchSetParameters();
    pitchShift2.pitchSetParameters();
    pitchShift3.pitchSetParameters();

}

PitchShifterAudioProcessor::~PitchShifterAudioProcessor()
{
}


void PitchShifterAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    sr = sampleRate;
    drywetter.prepareToPlay(sampleRate, samplesPerBlock);
    dualmono.setSize(2, samplesPerBlock);
    dualmono.clear();

    channelStripOriginal.prepareToPlay(sampleRate);
    pitchShift1.prepareToPlay(sr, samplesPerBlock);
    pitchShift2.prepareToPlay(sr, samplesPerBlock);
    pitchShift3.prepareToPlay(sr, samplesPerBlock);

}

void PitchShifterAudioProcessor::releaseResources()
{
    
    drywetter.releaseResources();
    dualmono.setSize(0, 0);

    pitchShift1.releaseResources();
    pitchShift2.releaseResources();
    pitchShift3.releaseResources();
}


void PitchShifterAudioProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    juce::ScopedNoDenormals noDenormals;
    auto totalNumInputChannels = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();
    const auto numSamples = buffer.getNumSamples();

    // Salvo il segnale in input pulito
    drywetter.setDry(buffer);


    if (totalNumInputChannels == 1) {   //trasformo in stereo
        dualmono.copyFrom(0, 0, buffer, 0, 0, numSamples);
        dualmono.copyFrom(1, 0, buffer, 0, 0, numSamples);
    }
    else {
        dualmono.copyFrom(0, 0, buffer, 0, 0, numSamples);
        dualmono.copyFrom(1, 0, buffer, 1, 0, numSamples);
        dualmono.addFrom(0, 0, dualmono, 1, 0, numSamples);
        dualmono.copyFrom(1, 0, dualmono, 0, 0, numSamples);
        dualmono.applyGain(0.5f);
    }

    channelStripOriginal.processBlock(buffer, totalNumInputChannels, totalNumOutputChannels);
    envelope.set(jmax(buffer.getMagnitude(0, buffer.getNumSamples()), envelope.get()));

    pitchShift1.processBlock(buffer, dualmono, numSamples, totalNumInputChannels, totalNumOutputChannels);
    envelopeVoice1.set(jmax(pitchShift1.copyDualMono.getMagnitude(0, pitchShift1.copyDualMono.getNumSamples()), envelopeVoice1.get()));

    pitchShift2.processBlock(buffer, dualmono, numSamples, totalNumInputChannels, totalNumOutputChannels);
    envelopeVoice2.set(jmax(pitchShift2.copyDualMono.getMagnitude(0, pitchShift2.copyDualMono.getNumSamples()), envelopeVoice2.get()));

    pitchShift3.processBlock(buffer, dualmono, numSamples, totalNumInputChannels, totalNumOutputChannels);
    envelopeVoice3.set(jmax(pitchShift3.copyDualMono.getMagnitude(0, pitchShift3.copyDualMono.getNumSamples()), envelopeVoice3.get()));

    // Miscelo il segnale pulito salvato in drywetter con quello processato da delay
    drywetter.merge(buffer);

        
}

//==============================================================================

juce::AudioProcessorEditor* PitchShifterAudioProcessor::createEditor()
{
    return new PitchEditor (*this, parameters); 
}

void PitchShifterAudioProcessor::getStateInformation(juce::MemoryBlock& destData)
{
    auto state = parameters.copyState();
    std::unique_ptr<XmlElement> xml(state.createXml());
    copyXmlToBinary(*xml, destData);
}

void PitchShifterAudioProcessor::setStateInformation(const void* data, int sizeInBytes)
{
    std::unique_ptr<XmlElement> xmlState(getXmlFromBinary(data, sizeInBytes));
    if (xmlState.get() != nullptr)
        if (xmlState->hasTagName(parameters.state.getType()))
            parameters.replaceState(ValueTree::fromXml(*xmlState));
}

void PitchShifterAudioProcessor::parameterChanged(const String& paramID, float newValue)
{
    if (paramID == NAME_MUTE)
        channelStripOriginal.setMute(newValue);

    if (paramID == NAME_LEVEL)
        channelStripOriginal.setLevel(newValue);

    if (paramID == NAME_PAN)
        channelStripOriginal.setPan(newValue);

    if (paramID == NAME_DW)
        drywetter.setDryWetRatio(newValue);

    if (paramID == NAME_MUTE1)
        pitchShift1.setMute(newValue);

    if (paramID == NAME_LEVEL1)
        pitchShift1.setLevel(newValue);

    if (paramID == NAME_PAN1)
        pitchShift1.setPan(newValue);

    if (paramID == NAME_DT1)
        pitchShift1.setDelay(newValue);

    if (paramID == NAME_FB1)
        pitchShift1.setFeedback(newValue);

    if (paramID == NAME_ST1)
        pitchShift1.setSemitones(newValue, sr);

    if (paramID == NAME_CENT1)
        pitchShift1.setCent(newValue, sr);


    if (paramID == NAME_MUTE2)
        pitchShift2.setMute(newValue);

    if (paramID == NAME_LEVEL2)
        pitchShift2.setLevel(newValue);

    if (paramID == NAME_PAN2)
        pitchShift2.setPan(newValue);

    if (paramID == NAME_DT2)
        pitchShift2.setDelay(newValue);

    if (paramID == NAME_FB2)
        pitchShift2.setFeedback(newValue);

    if (paramID == NAME_ST2)
        pitchShift2.setSemitones(newValue, sr);

    if (paramID == NAME_CENT2)
        pitchShift2.setCent(newValue, sr);

        if (paramID == NAME_MUTE2)
        pitchShift2.setMute(newValue);

    if (paramID == NAME_LEVEL2)
        pitchShift2.setLevel(newValue);

    if (paramID == NAME_PAN2)
        pitchShift2.setPan(newValue);

    if (paramID == NAME_DT2)
        pitchShift2.setDelay(newValue);

    if (paramID == NAME_FB2)
        pitchShift2.setFeedback(newValue);

    if (paramID == NAME_ST2)
        pitchShift2.setSemitones(newValue, sr);

    if (paramID == NAME_CENT2)
        pitchShift2.setCent(newValue, sr);


    if (paramID == NAME_MUTE3)
        pitchShift3.setMute(newValue);

    if (paramID == NAME_LEVEL3)
        pitchShift3.setLevel(newValue);

    if (paramID == NAME_PAN3)
        pitchShift3.setPan(newValue);

    if (paramID == NAME_DT3)
        pitchShift3.setDelay(newValue);

    if (paramID == NAME_FB3)
        pitchShift3.setFeedback(newValue);

    if (paramID == NAME_ST3)
        pitchShift3.setSemitones(newValue, sr);

    if (paramID == NAME_CENT3)
        pitchShift3.setCent(newValue, sr);

}


//==============================================================================
// This creates new instances of the plugin..
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new PitchShifterAudioProcessor();
}









