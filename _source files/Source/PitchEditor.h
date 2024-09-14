/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.1.6

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "Meter.h"

typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;
typedef AudioProcessorValueTreeState::ButtonAttachment ButtonAttachment;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class PitchEditor  : public juce::AudioProcessorEditor,
                     public juce::Button::Listener
{
public:
    //==============================================================================
    PitchEditor (PitchShifterAudioProcessor& p, AudioProcessorValueTreeState& vts);
    ~PitchEditor() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* undo2128_png;
    static const int undo2128_pngSize;
    static const char* redoButton_png;
    static const int redoButton_pngSize;
    static const char* pngItem_1171946_png;
    static const int pngItem_1171946_pngSize;
    static const char* saveas128_png;
    static const int saveas128_pngSize;
    static const char* load_jpg;
    static const int load_jpgSize;
    static const char* _1241246578_obsoletewhitesaveiconpng_jpg;
    static const int _1241246578_obsoletewhitesaveiconpng_jpgSize;
    static const char* muteoff_png;
    static const int muteoff_pngSize;
    static const char* save_png;
    static const int save_pngSize;
    static const char* load_png;
    static const int load_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.

    PitchShifterAudioProcessor& processor;
    AudioProcessorValueTreeState& valueTreeState;

    std::unique_ptr<ButtonAttachment> muteButtonAtt;
    std::unique_ptr<SliderAttachment> gainSliderAtt;
    std::unique_ptr<SliderAttachment> panSliderAtt;
    std::unique_ptr<SliderAttachment> dryWetAtt;

    std::unique_ptr<ButtonAttachment> muteButtonAtt1;
    std::unique_ptr<SliderAttachment> gainSliderAtt1;
    std::unique_ptr<SliderAttachment> panSliderAtt1;
    std::unique_ptr<SliderAttachment> semitoneSliderAtt1;
    std::unique_ptr<SliderAttachment> centSliderAtt1;
    std::unique_ptr<SliderAttachment> delaySliderAtt1;
    std::unique_ptr<SliderAttachment> fbSliderAtt1;

    std::unique_ptr<ButtonAttachment> muteButtonAtt2;
    std::unique_ptr<SliderAttachment> gainSliderAtt2;
    std::unique_ptr<SliderAttachment> panSliderAtt2;
    std::unique_ptr<SliderAttachment> semitoneSliderAtt2;
    std::unique_ptr<SliderAttachment> centSliderAtt2;
    std::unique_ptr<SliderAttachment> delaySliderAtt2;
    std::unique_ptr<SliderAttachment> fbSliderAtt2;

    std::unique_ptr<ButtonAttachment> muteButtonAtt3;
    std::unique_ptr<SliderAttachment> gainSliderAtt3;
    std::unique_ptr<SliderAttachment> panSliderAtt3;
    std::unique_ptr<SliderAttachment> semitoneSliderAtt3;
    std::unique_ptr<SliderAttachment> centSliderAtt3;
    std::unique_ptr<SliderAttachment> delaySliderAtt3;
    std::unique_ptr<SliderAttachment> fbSliderAtt3;

    MyLookAndFeel temaBellissimo;
    MyLinearSlider temaSlider;
    MyHorizontalSlider temaPan;
    CustomButton temaButton;
    MyIncDecSlider temaIncDec;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::Slider> fbSlider2;
    std::unique_ptr<juce::Slider> gainSlider;
    std::unique_ptr<Meter> meterComponent;
    std::unique_ptr<juce::Slider> panSlider;
    std::unique_ptr<juce::Slider> gainSlider1;
    std::unique_ptr<Meter> meterComponent1;
    std::unique_ptr<juce::Slider> panSlider1;
    std::unique_ptr<juce::Slider> dryWet;
    std::unique_ptr<juce::Slider> semitoneSlider1;
    std::unique_ptr<juce::Slider> centSlider1;
    std::unique_ptr<juce::Slider> delaySlider1;
    std::unique_ptr<juce::Slider> fbSlider1;
    std::unique_ptr<juce::Slider> gainSlider2;
    std::unique_ptr<Meter> meterComponent2;
    std::unique_ptr<juce::Slider> panSlider2;
    std::unique_ptr<juce::Slider> semitoneSlider2;
    std::unique_ptr<juce::Slider> centSlider2;
    std::unique_ptr<juce::Slider> delaySlider2;
    std::unique_ptr<juce::Slider> gainSlider3;
    std::unique_ptr<Meter> meterComponent3;
    std::unique_ptr<juce::Slider> panSlider3;
    std::unique_ptr<juce::Slider> semitoneSlider3;
    std::unique_ptr<juce::Slider> centSlider3;
    std::unique_ptr<juce::Slider> delaySlider3;
    std::unique_ptr<juce::Slider> fbSlider3;
    std::unique_ptr<juce::ToggleButton> muteButton;
    std::unique_ptr<juce::ToggleButton> muteButton1;
    std::unique_ptr<juce::ToggleButton> muteButton2;
    std::unique_ptr<juce::ToggleButton> muteButton3;
    std::unique_ptr<juce::ImageButton> undoButton;
    std::unique_ptr<juce::ImageButton> redoButton;
    std::unique_ptr<juce::ImageButton> loadButton;
    std::unique_ptr<juce::ImageButton> saveButton;
    juce::Path internalPath1;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PitchEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

