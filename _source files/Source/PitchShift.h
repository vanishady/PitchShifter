#pragma once
#include <JuceHeader.h>
#include "Filter.h"
#include "ChannelStrip.h"
#include "Delay.h"
#include "Merger.h"
#include "Oscillator.h"
#include "Parameters.h"

class PitchShift
{
public:
	PitchShift() {};
	~PitchShift() {};

	void pitchSetParameters()
	{
		filter.setFrequency(DEFAULT_FILTER);
		filter.setQuality(DEFAULT_QFILTER);

		merger.setSemitones(DEFAULT_ST);
		merger.setCent(DEFAULT_CENT);

		delay.setFeedback(DEFAULT_FB);

		channelStripVoice.setMute(DEFAULT_MUTE);
		channelStripVoice.setLevel(DEFAULT_LEVEL);
		channelStripVoice.setPan(DEFAULT_PAN);

		LFO.setFrequency(DEFAULT_FREQ);
		LFO.setWaveform(DEFAULT_WF);
		timeAdapter.setShift(1.0f);
		timeAdapter.setParameter(DEFAULT_DT);
	}

	void prepareToPlay(double sr, int samplesPerBlock)
	{
		filter.prepareToPlay(sr);
		LFO.prepareToPlay(sr);
	    copyDualMono.setSize(2, samplesPerBlock);
		copyDualMono.clear();
		modulationSignal.setSize(2, samplesPerBlock);
		modulationSignal.clear();
		phasor.setSize(2, samplesPerBlock);
		phasor.clear();
		delay.prepareToPlay(sr, samplesPerBlock);

		channelStripVoice.prepareToPlay(sr);
		timeAdapter.prepareToPlay(sr);
	}

	void releaseResources() {

		delay.releaseResurces();
		copyDualMono.setSize(0, 0);
		modulationSignal.setSize(0, 0);
		phasor.setSize(0, 0);
	}

	void setMute(float newValue)
	{
		channelStripVoice.setMute(newValue);
	}

	void setPan(float newValue)
	{
		channelStripVoice.setPan(newValue);
	}

	void setLevel(float newValue)
	{
		channelStripVoice.setLevel(newValue);
	}

	void setFeedback(float newValue)
	{
		delay.setFeedback(newValue);
	}

	void setDelay(float newValue)
	{
		timeAdapter.setParameter(newValue);
	}

	void setSemitones(float newValue, int sr)
	{
		merger.setSemitones(newValue);
		timeAdapter.setShift(merger.getShift());
		float maxFreq = sr * 0.49999;
		float ffreq = (merger.getShift() <= 1.0 ? maxFreq : maxFreq / merger.getShift());
		filter.setFrequency(ffreq);
	}

	void setCent(float newValue, int sr)
	{
		merger.setCent(newValue);
		timeAdapter.setShift(merger.getShift());
		float maxFreq = sr * 0.49999;
		float ffreq = (merger.getShift() <= 1.0 ? maxFreq : maxFreq / merger.getShift());
		filter.setFrequency(ffreq);
	}


	void processBlock(juce::AudioBuffer<float>& buffer, juce::AudioBuffer<float>& dualmono, int numSamples, int inCh, int outCh)
	{
		auto shift = merger.getShift();

		copyDualMono.copyFrom(0, 0, dualmono, 0, 0, numSamples);
		copyDualMono.copyFrom(1, 0, dualmono, 1, 0, numSamples);

		filter.processBlock(copyDualMono, numSamples);
		LFO.setWaveform(shift);

		// Genero una modulante
		LFO.getNextAudioBlock(modulationSignal, numSamples);

		phasor.copyFrom(0, 0, modulationSignal, 0, 0, numSamples);
		phasor.copyFrom(1, 0, modulationSignal, 1, 0, numSamples);

		// Scalare modulante
		timeAdapter.processBlock(modulationSignal, numSamples);
		
		// Applicare delay
		delay.processBlock(copyDualMono, modulationSignal);

		channelStripVoice.moltiplicator(copyDualMono, phasor, numSamples);

		copyDualMono.addFrom(0, 0, copyDualMono, 1, 0, numSamples);
		copyDualMono.copyFrom(1, 0, copyDualMono, 0, 0, numSamples);
		copyDualMono.applyGain(0.5f);

		channelStripVoice.processBlock(copyDualMono, inCh, outCh);
		//envelope.set(jmax(copyDualMono.getMagnitude(0, copyDualMono.getNumSamples()), envelope.get()));
		

		// Somma sul buffer di output
		buffer.addFrom(0, 0, copyDualMono, 0, 0, numSamples);

		if (inCh == 2) {   //trasformo in stereo
			buffer.addFrom(1, 0, copyDualMono, 1, 0, numSamples);
		}
		
	}
	

	Atomic<float> envelope;
	AudioBuffer<float> copyDualMono;



private:



	Filter filter;
	Merger merger;
	ChannelStrip channelStripVoice;
	ModDelay delay;
	NaiveOscillator LFO;
	ParametrModulation timeAdapter;
	AudioBuffer<float> modulationSignal;
	AudioBuffer<float> phasor;


	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PitchShift)
};

