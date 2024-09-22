#pragma once

#include <JuceHeader.h>
#include "Merger.h"
#include "ChannelStrip.h"
#include "Delay.h"
#include "DryWet.h"
#include "Oscillator.h"
#include "Filter.h"
#include "PitchShift.h"
#include "Parameters.h"

class PitchShifterAudioProcessor  : public juce::AudioProcessor, public AudioProcessorValueTreeState::Listener
{
public:
    //==============================================================================
    PitchShifterAudioProcessor();
    ~PitchShifterAudioProcessor() override;

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

    void processBlock (juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    //==============================================================================
    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override { return true;  }

    //==============================================================================
    const juce::String getName() const override { return JucePlugin_Name; }

    bool acceptsMidi() const override  { return false; }
    bool producesMidi() const override { return false; }
    bool isMidiEffect() const override { return false; }
    double getTailLengthSeconds() const override { return 0.0; }

    //==============================================================================

    int getNumPrograms() override { return 1; }
    int getCurrentProgram() override { return 0; }
    void setCurrentProgram(int index) override {}
    const juce::String getProgramName(int index) override { return {}; }
    void changeProgramName(int index, const juce::String& newName) override {}

    //==============================================================================
    void getStateInformation (juce::MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

    Atomic<float> envelope;
    Atomic<float> envelopeVoice1;
    Atomic<float> envelopeVoice2;
    Atomic<float> envelopeVoice3;

private:
    void parameterChanged(const String& paramID, float newValue) override;

    AudioProcessorValueTreeState parameters;
    ChannelStrip channelStripOriginal;
    DryWet drywetter;

    double sr = 1.0;

    AudioBuffer<float> dualmono;

    PitchShift pitchShift1;
    PitchShift pitchShift2;
    PitchShift pitchShift3;

    UndoManager undoManager;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PitchShifterAudioProcessor)
};
