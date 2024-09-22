/*
  ==============================================================================

    Meter.h
    Created: 27 Apr 2022 11:23:21am
    Author:  PC

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

#define FPS       25
#define DB_FLOOR -48.0f
#define RT         0.5f

class Meter : public Component, public Timer
{
public:
    Meter()
    {
        alpha = exp(-1.0f / (FPS * RT));
        startTimerHz(FPS);
    }

    ~Meter()
    {
        stopTimer();
    }

    void paint(Graphics& g) override
    {
        auto W = getWidth();
        auto H = getHeight();

        g.fillAll(Colours::black);
        g.setColour(Colours::grey);
        g.drawRect(0, 0, W, H, 1);

        if (observedEnvelope != nullptr)
        {
            auto envelopeSnapshot = observedEnvelope->get();
            observedEnvelope->set(envelopeSnapshot * alpha);

            auto peak = Decibels::gainToDecibels(envelopeSnapshot);

            auto barHeight = jmap(peak, DB_FLOOR, 0.0f, 0.0f, H - 2.0f);
            barHeight = jlimit(0.0f, H - 2.0f, barHeight);

            auto topColour = peak >= 0.0f ? Colours::red : Colours::yellow;
            ColourGradient filler = ColourGradient(Colours::blue, 0, H, topColour, 0, 0, false);
            filler.addColour(0.8f, Colours::green);

            g.setGradientFill(filler);

            g.fillRect(1.0f, H - 1.0f - barHeight, W - 2.0f, barHeight);
        }

    }

    void resized() override {}

    void connectTo(Atomic<float>& targetVariable)
    {
        observedEnvelope = &targetVariable;
    }

private:

    void timerCallback() override
    {
        repaint();
    }

    float alpha = 0.0f;

    Atomic<float>* observedEnvelope = nullptr;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(Meter)
};


#define BORDER_WIDTH 1.5f
#define SCALE_TO_KNOB_RATIO 0.85f

class MyLookAndFeel : public LookAndFeel_V4
{
public:
	MyLookAndFeel()
	{
		//setColour(Slider::thumbColourId, Colours::red);
	}

	void drawRotarySlider(Graphics& g,
		int x, int y, int width, int height,
		float sliderPosProportional, float rotaryStartAngle, float rotaryEndAngle,
		Slider& slider) override
	{
		// Useful variables
		const auto radius = jmin(width, height) * 0.5f * SCALE_TO_KNOB_RATIO - BORDER_WIDTH * 0.5f;
		const auto centreX = x + width * 0.5f;
		const auto centreY = y + height * 0.5f;
		const auto rx = centreX - radius;
		const auto ry = centreY - radius;
		const auto rw = radius * 2.0f;

		const Colour brightColour = Colour(0xff2b2d31);
		const Colour darkColour = Colour(0xff0d0d11);

		// Draw knob body
		g.setGradientFill(ColourGradient(brightColour, rx, ry, darkColour.brighter(0.05), rx, ry + rw, false));
		g.fillEllipse(rx, ry, rw, rw);

		// Draw outline
		g.setGradientFill(ColourGradient(brightColour.brighter(0.9), rx, ry, darkColour.darker(0.9), rx, ry + rw, false));
		g.drawEllipse(rx, ry, rw, rw, BORDER_WIDTH);

		// Prepare pointer shape
		Path p;
		const auto pointerLength = radius * 0.33f;
		const auto pointerThickness = 2.0f;
		p.addRectangle(pointerThickness * -0.5f, -radius, pointerThickness, pointerLength);

		// Draw pointer shape
		const auto angle = jmap(sliderPosProportional, rotaryStartAngle, rotaryEndAngle);
		p.applyTransform(AffineTransform::rotation(angle).translated(centreX, centreY));
		g.setGradientFill(ColourGradient(Colours::white, rx, ry, Colours::white.darker(0.2f), rx, ry + rw, false));
		g.fillPath(p);

		// Draw ticks
		Path originalTickShape, t;
		auto tickThickness = 2.0f;
		originalTickShape.addEllipse(tickThickness * -0.5f, radius / -SCALE_TO_KNOB_RATIO, tickThickness, tickThickness);
		g.setColour(Colours::grey);

		for (int i = 0; i < numTicks; ++i)
		{
			t = originalTickShape;
			auto normValue = pow((float)i / (numTicks - 1), (float)slider.getSkewFactor());
			float angle = jmap(normValue, rotaryStartAngle, rotaryEndAngle);
			t.applyTransform(AffineTransform::rotation(angle).translated(centreX, centreY));
			g.fillPath(t);
		}

	}

	void setNumTicks(int newValue)
	{
		numTicks = newValue;
	}

private:

	int numTicks = 21;
};


class MyLinearSlider : public LookAndFeel_V4
{
public:
	MyLinearSlider()
	{
		//setColour(Slider::thumbColourId, Colours::red);
	}


	void drawLinearSlider(Graphics& g,
		int x, int y, int width, int height,
		float sliderPos, float minSliderPos, float maxSliderPos,
		const juce::Slider::SliderStyle, Slider& slider) override
	{
		g.setColour(Colours::white);
		Rectangle<int> rint(x, y, width, height);

		Rectangle<float> r = rint.toFloat().reduced(0.5f);
		g.drawRoundedRectangle(r, 5, 1);

		g.setColour(Colours::whitesmoke);

		float radius = (r.getWidth() - 1) / 4.f;

		g.drawLine(r.getX() + r.getWidth() / 2.f,
			r.getY() + radius,
			r.getX() + r.getWidth() / 2.f,
			r.getHeight() - radius*0.5f);

		auto l = (r.getHeight() - radius) - (r.getY() + radius);
		float originalPos = sliderPos / (float)height;

		sliderPos = l * originalPos; 
		g.setColour(Colours::whitesmoke);

		g.fillEllipse(x + width * 0.5f - radius*0.25f,
			sliderPos + radius + 4.f,
			radius * 0.5f,
			radius * 0.5f);

	}

};

class MyHorizontalSlider : public LookAndFeel_V4
{
public:
	MyHorizontalSlider()
	{
		//setColour(Slider::thumbColourId, Colours::red);
	}


	void drawLinearSlider(Graphics& g,
		int x, int y, int width, int height,
		float sliderPos, float minSliderPos, float maxSliderPos,
		const juce::Slider::SliderStyle, Slider& slider) override
	{

		g.setColour(Colours::white);
		Rectangle<int> rint(x, y, width, height - 2.f);

		Rectangle<float> r = rint.toFloat().reduced(0.5f);
		g.drawRoundedRectangle(r, 5, 1);

		g.setColour(Colours::whitesmoke);

		float radius = (r.getWidth() - 1) / 4.f;
		float border = r.getWidth() / 10.f;

		g.drawLine(r.getX() + border,
			r.getY() + r.getHeight() / 2.f,
			r.getX() + r.getWidth() - border,
			r.getY() + r.getHeight() / 2.f);

		auto l = (r.getWidth() - 2.f * border) ;
		float originalPos = sliderPos / (float)r.getWidth();

		sliderPos = l * originalPos; 
		g.setColour(Colours::whitesmoke);

		g.fillEllipse(sliderPos + radius * 0.25f,
			r.getY() + r.getHeight() / 2.f - radius*0.5f/2.f,
			radius * 0.5f,
			radius * 0.5f);

	}

};


class CustomButton : public LookAndFeel_V4
{
public:
	CustomButton()
	{
		//setColour(Slider::thumbColourId, Colours::red);
	}

	void drawLinearSlider(Graphics& g,
		int x, int y, int width, int height,
		float sliderPos, float minSliderPos, float maxSliderPos,
		const juce::Slider::SliderStyle, Slider& slider) override
	{

		g.setColour(Colours::whitesmoke);
		Rectangle<int> rint(x, y, width, height - 2.f);

		Rectangle<float> r = rint.toFloat().reduced(0.5f);
		g.drawRoundedRectangle(r, 5, 1);

		g.setColour(Colours::white);

		float radius = (r.getWidth() - 1) / 4.f;
		float border = r.getWidth() / 10.f;

		g.drawLine(r.getX() + border,
			r.getY() + r.getHeight() / 2.f,
			r.getX() + r.getWidth() - border,
			r.getY() + r.getHeight() / 2.f);

		auto l = (r.getWidth() - 2.f * border);
		float originalPos = sliderPos / (float)r.getWidth();

		sliderPos = l * originalPos; 
		g.setColour(Colours::whitesmoke);

		g.fillEllipse(sliderPos + radius * 0.25f,
			r.getY() + r.getHeight() / 2.f - radius * 0.5f / 2.f,
			radius * 0.5f,
			radius * 0.5f);

	}

};


class MyIncDecSlider : public LookAndFeel_V4
{
public:
	MyIncDecSlider()
	{
		
	}

	void drawButtonBackground(Graphics& g, Button& b, const Colour&, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) override
	{
		auto buttonArea = b.getLocalBounds();
		Colour backColour = juce::Colour(0xff171717);
		Rectangle<float> r = buttonArea.toFloat();


		g.setColour(Colours::whitesmoke);
		Rectangle<float> round = r.toFloat().reduced(0.8f);
		g.drawRoundedRectangle(round, 5.0f, 1);

		if (shouldDrawButtonAsDown) 
		{ 
			g.setColour(backColour.brighter(0.4));
			g.fillRoundedRectangle(r, 5.0f);

		}
		else if (shouldDrawButtonAsHighlighted) 
		{ 
			g.setColour(backColour.brighter(0.2));
			g.fillRoundedRectangle(r, 5.0f);
		}


	}
};