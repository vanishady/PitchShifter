#pragma once
#include <JuceHeader.h>
#include "Parameters.h"

//#define LEVEL_SMOOTHING_TIME 0.02f
//#define NAME_DW "dw"
//#define DEFAULT_DW 0.5f

class DryWet
{
public:
	DryWet() {}
	~DryWet() {}

	void prepareToPlay(double sr, int maxNumSamples)
	{
		drySignal.setSize(2, maxNumSamples);

		dryLevel.reset(sr, LEVEL_SMOOTHING_TIME);
		wetLevel.reset(sr, LEVEL_SMOOTHING_TIME);

		setDryWetRatio(dryWetRatio);
	}

	void releaseResources()
	{
		drySignal.setSize(0, 0);
	}

	void setDry(const AudioBuffer<float>& buffer)
	{
		for (int ch = buffer.getNumChannels(); --ch >= 0; )
			drySignal.copyFrom(ch, 0, buffer, ch, 0, buffer.getNumSamples());
	}

	void merge(AudioBuffer<float>& buffer)
	{
		//buffer.applyGain(wetLevel);
		//drySignal.applyGain(dryLevel);
		auto numSamples = buffer.getNumSamples();
		wetLevel.applyGain(buffer, numSamples);
		dryLevel.applyGain(drySignal, numSamples);

		for (int ch = buffer.getNumChannels(); --ch >= 0; )
		{
			//buffer.addFrom(ch, 0, drySignal, ch, 0, buffer.getNumSamples(), dryLevel);
			buffer.addFrom(ch, 0, drySignal, ch, 0, numSamples);
		}
	}

	void setDryWetRatio(const float newValue)
	{
		dryWetRatio = newValue/100.0f;
		//dryLevel = sqrt(1 - dryWetRatio);
		//wetLevel = sqrt(dryWetRatio);
		dryLevel.setTargetValue(sqrt(1 - dryWetRatio));
		wetLevel.setTargetValue(sqrt(dryWetRatio));
	}

private:

	float dryWetRatio = 50.0f;
	//float dryLevel = 0;
	//float wetLevel = 0;
	SmoothedValue<float, ValueSmoothingTypes::Linear> dryLevel;
	SmoothedValue<float, ValueSmoothingTypes::Linear> wetLevel;

	AudioBuffer<float> drySignal;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(DryWet)
};
