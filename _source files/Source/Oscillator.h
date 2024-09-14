#pragma once
#include <JuceHeader.h>
#include "Parameters.h"

class NaiveOscillator
{
public:
	NaiveOscillator() {};
	~NaiveOscillator() {};

	void prepareToPlay(double sr)
	{
		samplePeriod = 1.0 / sr;
		frequency.reset(sr, GLIDE_TIME);
	}

	void setFrequency(float newValue)
	{
		frequency.setTargetValue(newValue);
	}

	void setWaveform(float newValue)
	{
		if (newValue > 1)
			waveform = 1; // saw down
		else
			waveform = 0; // saw up
	}

	float getPhase()
	{
		return currentPhase;
	}


	void getNextAudioBlock(AudioBuffer<float>& buffer, const int numSamples)
	{
		const int numCh = buffer.getNumChannels();
		auto bufferData = buffer.getArrayOfWritePointers();

		for (int smp = 0; smp < numSamples; ++smp)
		{

			for (int ch = 0; ch < numCh; ++ch)
			{
				const auto sampleValue = getNextAudioSample(ch * 0.5f);
				bufferData[ch][smp] = sampleValue;
			}

			phaseIncrement = (frequency.getNextValue() * samplePeriod); // /modAmount
			currentPhase += phaseIncrement;
			currentPhase -= static_cast<int>(currentPhase);
		}
	}

	float getNextAudioSample(float shift)
	{
		auto sampleValue = 0.0f;

		switch (waveform)
		{
		case 0: // Saw up
		{
			sampleValue = currentPhase;
			break;
		}
		case 1: // Saw down
		{
			sampleValue = 1.0f - currentPhase;
			break;
		}
		default:
			break;
		}

		sampleValue += shift;
		sampleValue -= static_cast<int>(sampleValue);

		// -0.5 * cos(2*pi*phasor) + 0.5

		return sampleValue;
	}

private:

	int waveform = 0; // Un enum sarebbe stato meglio, ma per ora teniamo le cose semplici

	double samplePeriod = 1.0;
	float currentPhase = 0.0f;
	float phaseIncrement = 0.0f;
	SmoothedValue<float, ValueSmoothingTypes::Multiplicative> frequency;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(NaiveOscillator)
};

class ParametrModulation
{
public:
	ParametrModulation() {}
	~ParametrModulation() {}

	void prepareToPlay(double sr)
	{
		parameter.reset(sr, SMOOTHING_TIME);
		modAmount.reset(sr, SMOOTHING_TIME);
	}

	void setParameter(float newValue)
	{
		parameter.setTargetValue(newValue);
	}

	void setShift(float newValue)
	{
		auto amount = newValue > 1 ? (newValue - 1.0f) / DEFAULT_FREQ : (1.0f - newValue) / DEFAULT_FREQ;
		modAmount.setTargetValue(amount);
	}

	void processBlock(AudioBuffer<float>& buffer, const int numSamples)
	{
		auto bufferData = buffer.getArrayOfWritePointers();
		auto numCh = buffer.getNumChannels();

		// Scalo la modulante tra 0 e 1
		for (int ch = 0; ch < numCh; ++ch)
		{
			FloatVectorOperations::add(bufferData[ch], 1.0, numSamples);
			FloatVectorOperations::multiply(bufferData[ch], 0.5f, numSamples);
		}

		// Scalo la modulante tra 0 e la modulaziuone massima desiderata
		modAmount.applyGain(buffer, numSamples);

		// Sommo alla modulante il tempo di delay proveniente dal parametro
		if (parameter.isSmoothing())
			for (int smp = 0; smp < numSamples; ++smp)
			{
				const auto param = parameter.getNextValue();

				for (int ch = 0; ch < numCh; ++ch)
					bufferData[ch][smp] += param;
			}
		else
			for (int ch = 0; ch < numCh; ++ch)
				FloatVectorOperations::add(bufferData[ch], parameter.getCurrentValue(), numSamples);

		// Controllo di essere dentro al tempo di delay massimo
		for (int ch = 0; ch < numCh; ++ch)
			FloatVectorOperations::min(bufferData[ch], bufferData[ch], MAX_DELAY_TIME, numSamples);

	}

private:

	SmoothedValue<float, ValueSmoothingTypes::Linear> modAmount;
	SmoothedValue<float, ValueSmoothingTypes::Linear> parameter;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ParametrModulation)

};