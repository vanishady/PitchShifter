#pragma once
#include <JuceHeader.h>

#define MAX_NUM_CH 2

//#define DEFAULT_R 0.25
//#define NAME_R "release"

//#define DEFAULT_F 1000.0f
//#define DEFAULT_Q 0.707f
#define NAME_Q "quality"

//class ReleaseFilter
//{
//public:
//	ReleaseFilter() {}
//	~ReleaseFilter() {}
//
//	void prepareToPlay(double sr)
//	{
//		sampleRate = sr;
//		updateAlpha();
//	}
//
//	void processBlock(AudioBuffer<float>& buffer, const int numSamples)
//	{
//		float* bufferData = buffer.getWritePointer(0);
//
//		for (int smp = 0; smp < numSamples; ++smp)
//		{
//			envelope = jmax(bufferData[smp], envelope * (float)alpha);
//			bufferData[smp] = envelope;
//		}
//	}
//
//	void setRelease(float newValue)
//	{
//		release = newValue;
//		updateAlpha();
//	}
//
//private:
//
//	void updateAlpha()
//	{
//		const auto n = jmax(1.0, release * sampleRate);
//		alpha = exp(-1.0 / n);
//	}
//
//	float release = DEFAULT_R;
//	double sampleRate = 1.0;
//	double alpha = 0.0;
//	float envelope = 0.0f;
//};

class Filter
{
public:
	Filter()
	{
		for (int f = 0; f < MAX_NUM_CH; ++f)
			iirFilters.add(new IIRFilter());
	}

	~Filter() {}

	void prepareToPlay(double sr)
	{
		sampleRate = sr;

		reset();

		updateCoefficients();
	}

	void processBlock(AudioBuffer<float>& buffer, const int numSamples)
	{
		for (int ch = buffer.getNumChannels(); --ch >= 0;)
			iirFilters.getUnchecked(ch)->processSamples(buffer.getWritePointer(ch), numSamples);
	}

	void setFrequency(float newValue)
	{
		frequency = jmin(newValue, (float)(sampleRate * 0.499));
		updateCoefficients();
	}

	void setQuality(float newValue)
	{
		quality = newValue;
		updateCoefficients();
	}

	void reset()
	{
		for (int f = iirFilters.size(); --f >= 0;)
			iirFilters.getUnchecked(f)->reset();
	}

private:

	void updateCoefficients()
	{
		// Esercizio: un bello switch-case col tipo di filtro scelto da parametro
		const IIRCoefficients iirCoeffs = IIRCoefficients::makeLowPass(sampleRate, frequency, quality);
		// (fine swirtch)

		for (int f = iirFilters.size(); --f >= 0;)
			iirFilters.getUnchecked(f)->setCoefficients(iirCoeffs);
	}

	float frequency = DEFAULT_FILTER;
	float quality = DEFAULT_QFILTER;
	double sampleRate = 44100.0;

	OwnedArray<IIRFilter> iirFilters;
};