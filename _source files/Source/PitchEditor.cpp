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

//[Headers] You can add your own extra header files here...
#include "PluginProcessor.h"
#include "Parameters.h"
//[/Headers]

#include "PitchEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PitchEditor::PitchEditor (PitchShifterAudioProcessor& p, AudioProcessorValueTreeState& vts)
    : AudioProcessorEditor (&p), processor (p), valueTreeState(vts)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    fbSlider2.reset (new juce::Slider ("FB"));
    addAndMakeVisible (fbSlider2.get());
    fbSlider2->setRange (0, 10, 0);
    fbSlider2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    fbSlider2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 16);

    fbSlider2->setBounds (468, 590, 56, 80);

    gainSlider.reset (new juce::Slider ("Gain"));
    addAndMakeVisible (gainSlider.get());
    gainSlider->setRange (0, 10, 0);
    gainSlider->setSliderStyle (juce::Slider::LinearVertical);
    gainSlider->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 90, 16);

    gainSlider->setBounds (48, 136, 95, 240);

    meterComponent.reset (new Meter());
    addAndMakeVisible (meterComponent.get());
    meterComponent->setName ("VU Meter");

    meterComponent->setBounds (125, 170, 12, 156);

    panSlider.reset (new juce::Slider ("Panpot"));
    addAndMakeVisible (panSlider.get());
    panSlider->setRange (0, 1, 0);
    panSlider->setSliderStyle (juce::Slider::LinearHorizontal);
    panSlider->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 16);

    panSlider->setBounds (36, 410, 118, 48);

    gainSlider1.reset (new juce::Slider ("Gain"));
    addAndMakeVisible (gainSlider1.get());
    gainSlider1->setRange (0, 10, 0);
    gainSlider1->setSliderStyle (juce::Slider::LinearVertical);
    gainSlider1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 90, 16);

    gainSlider1->setBounds (235, 136, 95, 240);

    meterComponent1.reset (new Meter());
    addAndMakeVisible (meterComponent1.get());
    meterComponent1->setName ("VU Meter");

    meterComponent1->setBounds (312, 170, 12, 156);

    panSlider1.reset (new juce::Slider ("Panpot"));
    addAndMakeVisible (panSlider1.get());
    panSlider1->setRange (0, 1, 0);
    panSlider1->setSliderStyle (juce::Slider::LinearHorizontal);
    panSlider1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 16);

    panSlider1->setBounds (223, 410, 118, 48);

    dryWet.reset (new juce::Slider ("DryWet"));
    addAndMakeVisible (dryWet.get());
    dryWet->setRange (0, 10, 0);
    dryWet->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    dryWet->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 16);

    dryWet->setBounds (64, 500, 70, 100);

    semitoneSlider1.reset (new juce::Slider ("Semitone"));
    addAndMakeVisible (semitoneSlider1.get());
    semitoneSlider1->setRange (0, 10, 0);
    semitoneSlider1->setSliderStyle (juce::Slider::IncDecButtons);
    semitoneSlider1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    semitoneSlider1->setColour (juce::Slider::thumbColourId, juce::Colour (0xff3587a8));

    semitoneSlider1->setBounds (235, 495, 35, 60);

    centSlider1.reset (new juce::Slider ("Cent"));
    addAndMakeVisible (centSlider1.get());
    centSlider1->setRange (0, 10, 0);
    centSlider1->setSliderStyle (juce::Slider::IncDecButtons);
    centSlider1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 20);

    centSlider1->setBounds (295, 495, 35, 60);

    delaySlider1.reset (new juce::Slider ("Delay"));
    addAndMakeVisible (delaySlider1.get());
    delaySlider1->setRange (0, 10, 0);
    delaySlider1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    delaySlider1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 16);

    delaySlider1->setBounds (216, 590, 56, 80);

    fbSlider1.reset (new juce::Slider ("FB"));
    addAndMakeVisible (fbSlider1.get());
    fbSlider1->setRange (0, 10, 0);
    fbSlider1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    fbSlider1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 16);

    fbSlider1->setBounds (296, 590, 56, 80);

    gainSlider2.reset (new juce::Slider ("Gain"));
    addAndMakeVisible (gainSlider2.get());
    gainSlider2->setRange (0, 10, 0);
    gainSlider2->setSliderStyle (juce::Slider::LinearVertical);
    gainSlider2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 90, 16);

    gainSlider2->setBounds (407, 136, 95, 240);

    meterComponent2.reset (new Meter());
    addAndMakeVisible (meterComponent2.get());
    meterComponent2->setName ("VU Meter");

    meterComponent2->setBounds (477, 170, 12, 156);

    panSlider2.reset (new juce::Slider ("Panpot"));
    addAndMakeVisible (panSlider2.get());
    panSlider2->setRange (0, 1, 0);
    panSlider2->setSliderStyle (juce::Slider::LinearHorizontal);
    panSlider2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 16);

    panSlider2->setBounds (395, 410, 118, 48);

    semitoneSlider2.reset (new juce::Slider ("Semitone"));
    addAndMakeVisible (semitoneSlider2.get());
    semitoneSlider2->setRange (0, 10, 0);
    semitoneSlider2->setSliderStyle (juce::Slider::IncDecButtons);
    semitoneSlider2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    semitoneSlider2->setColour (juce::Slider::thumbColourId, juce::Colour (0xff3587a8));

    semitoneSlider2->setBounds (407, 495, 35, 60);

    centSlider2.reset (new juce::Slider ("Cent"));
    addAndMakeVisible (centSlider2.get());
    centSlider2->setRange (0, 10, 0);
    centSlider2->setSliderStyle (juce::Slider::IncDecButtons);
    centSlider2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 20);

    centSlider2->setBounds (467, 495, 35, 60);

    delaySlider2.reset (new juce::Slider ("Delay"));
    addAndMakeVisible (delaySlider2.get());
    delaySlider2->setRange (0, 10, 0);
    delaySlider2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    delaySlider2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 16);

    delaySlider2->setBounds (388, 590, 56, 80);

    gainSlider3.reset (new juce::Slider ("Gain"));
    addAndMakeVisible (gainSlider3.get());
    gainSlider3->setRange (0, 10, 0);
    gainSlider3->setSliderStyle (juce::Slider::LinearVertical);
    gainSlider3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 90, 16);

    gainSlider3->setBounds (579, 136, 95, 240);

    meterComponent3.reset (new Meter());
    addAndMakeVisible (meterComponent3.get());
    meterComponent3->setName ("VU Meter");

    meterComponent3->setBounds (656, 170, 12, 156);

    panSlider3.reset (new juce::Slider ("Panpot"));
    addAndMakeVisible (panSlider3.get());
    panSlider3->setRange (0, 1, 0);
    panSlider3->setSliderStyle (juce::Slider::LinearHorizontal);
    panSlider3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 16);

    panSlider3->setBounds (567, 410, 118, 48);

    semitoneSlider3.reset (new juce::Slider ("Semitone"));
    addAndMakeVisible (semitoneSlider3.get());
    semitoneSlider3->setRange (0, 10, 0);
    semitoneSlider3->setSliderStyle (juce::Slider::IncDecButtons);
    semitoneSlider3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    semitoneSlider3->setColour (juce::Slider::thumbColourId, juce::Colour (0xff3587a8));

    semitoneSlider3->setBounds (579, 495, 35, 60);

    centSlider3.reset (new juce::Slider ("Cent"));
    addAndMakeVisible (centSlider3.get());
    centSlider3->setRange (0, 10, 0);
    centSlider3->setSliderStyle (juce::Slider::IncDecButtons);
    centSlider3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 20);

    centSlider3->setBounds (639, 495, 35, 60);

    delaySlider3.reset (new juce::Slider ("Delay"));
    addAndMakeVisible (delaySlider3.get());
    delaySlider3->setRange (0, 10, 0);
    delaySlider3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    delaySlider3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 16);

    delaySlider3->setBounds (560, 590, 56, 80);

    fbSlider3.reset (new juce::Slider ("FB"));
    addAndMakeVisible (fbSlider3.get());
    fbSlider3->setRange (0, 10, 0);
    fbSlider3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    fbSlider3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 16);

    fbSlider3->setBounds (640, 590, 56, 80);

    muteButton.reset (new juce::ToggleButton (""));
    addAndMakeVisible (muteButton.get());

    muteButton->setBounds (48, 117, 80, 24);

    muteButton1.reset (new juce::ToggleButton (""));
    addAndMakeVisible (muteButton1.get());

    muteButton1->setBounds (235, 117, 80, 24);

    muteButton2.reset (new juce::ToggleButton (""));
    addAndMakeVisible (muteButton2.get());

    muteButton2->setBounds (407, 117, 80, 24);

    muteButton3.reset (new juce::ToggleButton (""));
    addAndMakeVisible (muteButton3.get());

    muteButton3->setBounds (579, 117, 80, 24);

    undoButton.reset (new juce::ImageButton ("Undo"));
    addAndMakeVisible (undoButton.get());
    undoButton->addListener (this);

    undoButton->setImages (false, true, true,
                           juce::ImageCache::getFromMemory (undo2128_png, undo2128_pngSize), 1.000f, juce::Colour (0x00000000),
                           juce::Image(), 1.000f, juce::Colour (0x00000000),
                           juce::Image(), 1.000f, juce::Colour (0x00000000));
    undoButton->setBounds (616, 16, 24, 24);

    redoButton.reset (new juce::ImageButton ("Redo"));
    addAndMakeVisible (redoButton.get());
    redoButton->setButtonText (TRANS("redo"));
    redoButton->addListener (this);

    redoButton->setImages (false, true, true,
                           juce::ImageCache::getFromMemory (redoButton_png, redoButton_pngSize), 1.000f, juce::Colour (0x00000000),
                           juce::Image(), 1.000f, juce::Colour (0x00000000),
                           juce::Image(), 1.000f, juce::Colour (0x00000000));
    redoButton->setBounds (648, 16, 24, 24);

    loadButton.reset (new juce::ImageButton ("Load"));
    addAndMakeVisible (loadButton.get());
    loadButton->setButtonText (TRANS("load"));
    loadButton->addListener (this);

    loadButton->setImages (false, true, true,
                           juce::ImageCache::getFromMemory (load_png, load_pngSize), 1.000f, juce::Colour (0x00000000),
                           juce::Image(), 1.000f, juce::Colour (0x00000000),
                           juce::Image(), 1.000f, juce::Colour (0x00000000));
    loadButton->setBounds (16, 16, 32, 32);

    saveButton.reset (new juce::ImageButton ("Save"));
    addAndMakeVisible (saveButton.get());
    saveButton->setButtonText (TRANS("save"));
    saveButton->addListener (this);

    saveButton->setImages (false, true, true,
                           juce::ImageCache::getFromMemory (save_png, save_pngSize), 1.000f, juce::Colour (0x00000000),
                           juce::Image(), 1.000f, juce::Colour (0x00000000),
                           juce::Image(), 1.000f, juce::Colour (0x00000000));
    saveButton->setBounds (56, 20, 31, 24);


    //[UserPreSize]

    muteButtonAtt.reset(new ButtonAttachment(valueTreeState, NAME_MUTE, *muteButton));
    gainSliderAtt.reset(new SliderAttachment(valueTreeState, NAME_LEVEL, *gainSlider));
    panSliderAtt.reset(new SliderAttachment(valueTreeState, NAME_PAN, *panSlider));
    dryWetAtt.reset(new SliderAttachment(valueTreeState, NAME_DW, *dryWet));

    muteButtonAtt1.reset(new ButtonAttachment(valueTreeState, NAME_MUTE1, *muteButton1));
    gainSliderAtt1.reset(new SliderAttachment(valueTreeState, NAME_LEVEL1, *gainSlider1));
    panSliderAtt1.reset(new SliderAttachment(valueTreeState, NAME_PAN1, *panSlider1));
    semitoneSliderAtt1.reset(new SliderAttachment(valueTreeState, NAME_ST1, *semitoneSlider1));
    centSliderAtt1.reset(new SliderAttachment(valueTreeState, NAME_CENT1, *centSlider1));
    delaySliderAtt1.reset(new SliderAttachment(valueTreeState, NAME_DT1, *delaySlider1));
    fbSliderAtt1.reset(new SliderAttachment(valueTreeState, NAME_FB1, *fbSlider1));

    muteButtonAtt2.reset(new ButtonAttachment(valueTreeState, NAME_MUTE2, *muteButton2));
    gainSliderAtt2.reset(new SliderAttachment(valueTreeState, NAME_LEVEL2, *gainSlider2));
    panSliderAtt2.reset(new SliderAttachment(valueTreeState, NAME_PAN2, *panSlider2));
    semitoneSliderAtt2.reset(new SliderAttachment(valueTreeState, NAME_ST2, *semitoneSlider2));
    centSliderAtt2.reset(new SliderAttachment(valueTreeState, NAME_CENT2, *centSlider2));
    delaySliderAtt2.reset(new SliderAttachment(valueTreeState, NAME_DT2, *delaySlider2));
    fbSliderAtt2.reset(new SliderAttachment(valueTreeState, NAME_FB2, *fbSlider2));

    muteButtonAtt3.reset(new ButtonAttachment(valueTreeState, NAME_MUTE3, *muteButton3));
    gainSliderAtt3.reset(new SliderAttachment(valueTreeState, NAME_LEVEL3, *gainSlider3));
    panSliderAtt3.reset(new SliderAttachment(valueTreeState, NAME_PAN3, *panSlider3));
    semitoneSliderAtt3.reset(new SliderAttachment(valueTreeState, NAME_ST3, *semitoneSlider3));
    centSliderAtt3.reset(new SliderAttachment(valueTreeState, NAME_CENT3, *centSlider3));
    delaySliderAtt3.reset(new SliderAttachment(valueTreeState, NAME_DT3, *delaySlider3));
    fbSliderAtt3.reset(new SliderAttachment(valueTreeState, NAME_FB3, *fbSlider3));

    meterComponent->connectTo(processor.envelope);
    meterComponent1->connectTo(processor.envelopeVoice1);
    meterComponent2->connectTo(processor.envelopeVoice2);
    meterComponent3->connectTo(processor.envelopeVoice3);

    dryWet->setLookAndFeel(&temaBellissimo);

    muteButton->setLookAndFeel(&temaButton);

    gainSlider->setLookAndFeel(&temaSlider);
    gainSlider1->setLookAndFeel(&temaSlider);
    gainSlider2->setLookAndFeel(&temaSlider);
    gainSlider3->setLookAndFeel(&temaSlider);

    panSlider->setLookAndFeel(&temaPan);
    panSlider1->setLookAndFeel(&temaPan);
    panSlider2->setLookAndFeel(&temaPan);
    panSlider3->setLookAndFeel(&temaPan);

    semitoneSlider1->setLookAndFeel(&temaIncDec);
    semitoneSlider2->setLookAndFeel(&temaIncDec);
    semitoneSlider3->setLookAndFeel(&temaIncDec);

    centSlider1->setLookAndFeel(&temaIncDec);
    centSlider2->setLookAndFeel(&temaIncDec);
    centSlider3->setLookAndFeel(&temaIncDec);

    delaySlider1->setLookAndFeel(&temaBellissimo);
    delaySlider2->setLookAndFeel(&temaBellissimo);
    delaySlider3->setLookAndFeel(&temaBellissimo);

    fbSlider1->setLookAndFeel(&temaBellissimo);
    fbSlider2->setLookAndFeel(&temaBellissimo);
    fbSlider3->setLookAndFeel(&temaBellissimo);

    internalPath1.startNewSubPath(0.0f, 700.0f);
    internalPath1.lineTo(0.0f, 0.0f);
    internalPath1.lineTo(750.0f, 0.0f);
    internalPath1.lineTo(750.0f, 700.0f);
    internalPath1.closeSubPath();

    //[/UserPreSize]

    setSize (750, 700);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

PitchEditor::~PitchEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    muteButtonAtt = nullptr;
    gainSliderAtt = nullptr;
    panSliderAtt = nullptr;
    dryWetAtt = nullptr;

    muteButtonAtt1 = nullptr;
    gainSliderAtt1 = nullptr;
    panSliderAtt1 = nullptr;
    semitoneSliderAtt1 = nullptr;
    centSliderAtt1 = nullptr;
    delaySliderAtt1 = nullptr;
    fbSliderAtt1 = nullptr;

    muteButtonAtt2 = nullptr;
    gainSliderAtt2 = nullptr;
    panSliderAtt2 = nullptr;
    semitoneSliderAtt2 = nullptr;
    centSliderAtt2 = nullptr;
    delaySliderAtt2 = nullptr;
    fbSliderAtt2 = nullptr;

    muteButtonAtt3 = nullptr;
    gainSliderAtt3 = nullptr;
    panSliderAtt3 = nullptr;
    semitoneSliderAtt3 = nullptr;
    centSliderAtt3 = nullptr;
    delaySliderAtt3 = nullptr;
    fbSliderAtt3 = nullptr;

    dryWet->setLookAndFeel(nullptr);

    gainSlider->setLookAndFeel(nullptr);
    gainSlider1->setLookAndFeel(nullptr);
    gainSlider2->setLookAndFeel(nullptr);
    gainSlider3->setLookAndFeel(nullptr);

    panSlider->setLookAndFeel(nullptr);
    panSlider1->setLookAndFeel(nullptr);
    panSlider2->setLookAndFeel(nullptr);
    panSlider3->setLookAndFeel(nullptr);

    semitoneSlider1->setLookAndFeel(nullptr);
    semitoneSlider2->setLookAndFeel(nullptr);
    semitoneSlider3->setLookAndFeel(nullptr);

    centSlider1->setLookAndFeel(nullptr);
    centSlider2->setLookAndFeel(nullptr);
    centSlider3->setLookAndFeel(nullptr);

    delaySlider1->setLookAndFeel(nullptr);
    delaySlider2->setLookAndFeel(nullptr);
    delaySlider3->setLookAndFeel(nullptr);

    fbSlider1->setLookAndFeel(nullptr);
    fbSlider2->setLookAndFeel(nullptr);
    fbSlider3->setLookAndFeel(nullptr);

    //[/Destructor_pre]

    fbSlider2 = nullptr;
    gainSlider = nullptr;
    meterComponent = nullptr;
    panSlider = nullptr;
    gainSlider1 = nullptr;
    meterComponent1 = nullptr;
    panSlider1 = nullptr;
    dryWet = nullptr;
    semitoneSlider1 = nullptr;
    centSlider1 = nullptr;
    delaySlider1 = nullptr;
    fbSlider1 = nullptr;
    gainSlider2 = nullptr;
    meterComponent2 = nullptr;
    panSlider2 = nullptr;
    semitoneSlider2 = nullptr;
    centSlider2 = nullptr;
    delaySlider2 = nullptr;
    gainSlider3 = nullptr;
    meterComponent3 = nullptr;
    panSlider3 = nullptr;
    semitoneSlider3 = nullptr;
    centSlider3 = nullptr;
    delaySlider3 = nullptr;
    fbSlider3 = nullptr;
    muteButton = nullptr;
    muteButton1 = nullptr;
    muteButton2 = nullptr;
    muteButton3 = nullptr;
    undoButton = nullptr;
    redoButton = nullptr;
    loadButton = nullptr;
    saveButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PitchEditor::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll(juce::Colour(0xff171717));
    {
        float x = 0, y = 0;
        juce::Colour fillColour1 = juce::Colour(0xff171717), fillColour2 = juce::Colour(0xff1b1b1b);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setGradientFill(juce::ColourGradient(fillColour1,
            264.0f - 0.0f + x,
            24.0f - 0.0f + y,
            fillColour2,
            288.0f - 0.0f + x,
            384.0f - 0.0f + y,
            false));
        g.fillPath(internalPath1, juce::AffineTransform::translation(x, y));
    }

    {
        float x = 172.0f, y = 14.0f, width = 406.0f, height = 48.0f;
        juce::Colour strokeColour = juce::Colours::whitesmoke;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(strokeColour);
        g.drawRoundedRectangle(x, y, width, height, 10.000f, 2.000f);
    }

    {
        int x = 175, y = 18, width = 400, height = 40;
        juce::String text(TRANS("F@*ks with the Fabric of Time"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(17.00f, juce::Font::plain).withTypefaceStyle("Bold").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 40, y = 85, width = 116, height = 16;
        juce::String text(TRANS("Input Voice"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 44, y = 120, width = 108, height = 16;
        juce::String text(TRANS("Mute"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }



    {
        int x = 231, y = 85, width = 116, height = 16;
        juce::String text(TRANS("Voice 1"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 400, y = 85, width = 116, height = 16;
        juce::String text(TRANS("Voice 2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 572, y = 85, width = 116, height = 16;
        juce::String text(TRANS("Voice 3"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 403, y = 120, width = 108, height = 16;
        juce::String text(TRANS("Mute"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 231, y = 120, width = 108, height = 16;
        juce::String text(TRANS("Mute"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 575, y = 120, width = 108, height = 16;
        juce::String text(TRANS("Mute"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 44, y = 390, width = 108, height = 16;
        juce::String text(TRANS("Pan"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 228, y = 390, width = 108, height = 16;
        juce::String text(TRANS("Pan"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 404, y = 390, width = 108, height = 16;
        juce::String text(TRANS("Pan"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 575, y = 390, width = 108, height = 16;
        juce::String text(TRANS("Pan"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 44, y = 480, width = 108, height = 16;
        juce::String text(TRANS("Dry/Wet"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 225, y = 474, width = 56, height = 20;
        juce::String text(TRANS("St "));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 28, y = 412, width = 28, height = 20;
        juce::String text(TRANS("L"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 212, y = 412, width = 28, height = 20;
        juce::String text(TRANS("L"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 386, y = 412, width = 28, height = 20;
        juce::String text(TRANS("L"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 556, y = 412, width = 28, height = 20;
        juce::String text(TRANS("L"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 140, y = 412, width = 28, height = 20;
        juce::String text(TRANS("R"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 324, y = 412, width = 28, height = 20;
        juce::String text(TRANS("R"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 500, y = 412, width = 28, height = 20;
        juce::String text(TRANS("R"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 668, y = 412, width = 28, height = 20;
        juce::String text(TRANS("R"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 204, y = 570, width = 80, height = 20;
        juce::String text(TRANS("Delay"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 376, y = 570, width = 80, height = 20;
        juce::String text(TRANS("Delay"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 397, y = 474, width = 56, height = 20;
        juce::String text(TRANS("St "));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 284, y = 474, width = 56, height = 20;
        juce::String text(TRANS("Cent"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 460, y = 474, width = 56, height = 20;
        juce::String text(TRANS("Cent"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font("Tahoma", 15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 628, y = 474, width = 56, height = 20;
        juce::String text(TRANS("Cent"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font("Tahoma", 15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 569, y = 474, width = 56, height = 20;
        juce::String text(TRANS("St "));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 550, y = 570, width = 80, height = 20;
        juce::String text(TRANS("Delay"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 284, y = 570, width = 80, height = 20;
        juce::String text(TRANS("Fb"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 457, y = 570, width = 80, height = 20;
        juce::String text(TRANS("Fb"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    {
        int x = 628, y = 570, width = 80, height = 20;
        juce::String text(TRANS("Fb"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour(fillColour);
        g.setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
        g.drawText(text, x, y, width, height,
            juce::Justification::centred, true);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PitchEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}


void PitchEditor::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == undoButton.get())
    {
        //[UserButtonCode_undoButton] -- add your button handler code here..
        valueTreeState.undoManager->undo();
        //undoButtonsEnabler();
        //[/UserButtonCode_undoButton]
    }
    else if (buttonThatWasClicked == redoButton.get())
    {
        //[UserButtonCode_redoButton] -- add your button handler code here..
        valueTreeState.undoManager->redo();
        //undoButtonsEnabler();
        //[/UserButtonCode_redoButton]
    }
    else if (buttonThatWasClicked == loadButton.get())
    {
        //[UserButtonCode_loadButton] -- add your button handler code here..
        auto defaultPresetLocation = File::getSpecialLocation(File::SpecialLocationType::commonDocumentsDirectory);
        juce::FileChooser chooser("Select preset to load...", defaultPresetLocation, "*.xml");

        if (chooser.browseForFileToOpen())
        {
            auto file = chooser.getResult();
            MemoryBlock sourceData;
            file.loadFileAsData(sourceData);
            processor.setStateInformation(sourceData.getData(), sourceData.getSize());
        }
        //[/UserButtonCode_loadButton]
    }
    else if (buttonThatWasClicked == saveButton.get())
    {
        //[UserButtonCode_saveButton] -- add your button handler code here..
        auto defaultPresetLocation = File::getSpecialLocation(File::SpecialLocationType::commonDocumentsDirectory);
        juce::FileChooser chooser("Select save position...", defaultPresetLocation, "*.xml");

        if (chooser.browseForFileToSave(true))
        {
            auto file = chooser.getResult();

            if (file.exists())
                file.deleteFile();

            juce::FileOutputStream outputStream(file);

            if (outputStream.openedOk())
            {
                MemoryBlock destData;
                processor.getStateInformation(destData);
                outputStream.write(destData.getData(), destData.getSize());
            }
        }
        //[/UserButtonCode_saveButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PitchEditor" componentName=""
                 parentClasses="public juce::AudioProcessorEditor" constructorParams="PitchShifterAudioProcessor&amp; p, AudioProcessorValueTreeState&amp; vts"
                 variableInitialisers="AudioProcessorEditor (&amp;p), processor (p), valueTreeState(vts)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="800" initialHeight="800">
  <BACKGROUND backgroundColour="ff232a2e">
    <TEXT pos="44 120 108 16" fill="solid: ffffffff" hasStroke="0" text="Gain"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="44 68 116 16" fill="solid: ffffffff" hasStroke="0" text="Input Voice"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="236 68 116 16" fill="solid: ffffffff" hasStroke="0" text="Voice 1"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="404 68 116 16" fill="solid: ffffffff" hasStroke="0" text="Voice 2"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="580 68 116 16" fill="solid: ffffffff" hasStroke="0" text="Voice 3"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="404 120 108 16" fill="solid: ffffffff" hasStroke="0" text="Gain"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="236 120 108 16" fill="solid: ffffffff" hasStroke="0" text="Gain"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="580 120 108 16" fill="solid: ffffffff" hasStroke="0" text="Gain"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="44 396 108 16" fill="solid: ffffffff" hasStroke="0" text="Pan"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="228 396 108 16" fill="solid: ffffffff" hasStroke="0" text="Pan"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="404 396 108 16" fill="solid: ffffffff" hasStroke="0" text="Pan"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="580 396 108 16" fill="solid: ffffffff" hasStroke="0" text="Pan"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="44 468 108 16" fill="solid: ffffffff" hasStroke="0" text="Dry/Wet"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="228 460 56 20" fill="solid: ffffffff" hasStroke="0" text="St "
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="28 411 28 20" fill="solid: ffffffff" hasStroke="0" text="L"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="212 411 28 20" fill="solid: ffffffff" hasStroke="0" text="L"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="388 411 28 20" fill="solid: ffffffff" hasStroke="0" text="L"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="556 411 28 20" fill="solid: ffffffff" hasStroke="0" text="L"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="140 411 28 20" fill="solid: ffffffff" hasStroke="0" text="R"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="324 411 28 20" fill="solid: ffffffff" hasStroke="0" text="R"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="500 411 28 20" fill="solid: ffffffff" hasStroke="0" text="R"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="668 411 28 20" fill="solid: ffffffff" hasStroke="0" text="R"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="204 545 80 20" fill="solid: ffffffff" hasStroke="0" text="Delay"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="372 545 80 20" fill="solid: ffffffff" hasStroke="0" text="Delay"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="404 460 56 20" fill="solid: ffffffff" hasStroke="0" text="St "
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="284 460 56 20" fill="solid: ffffffff" hasStroke="0" text="Cent"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="460 460 56 20" fill="solid: ffffffff" hasStroke="0" text="Cent"
          fontname="Tahoma" fontsize="15.0" kerning="0.25" bold="0" italic="0"
          justification="36"/>
    <TEXT pos="628 460 56 20" fill="solid: ffffffff" hasStroke="0" text="Cent"
          fontname="Tahoma" fontsize="15.0" kerning="0.25" bold="0" italic="0"
          justification="36"/>
    <TEXT pos="572 460 56 20" fill="solid: ffffffff" hasStroke="0" text="St "
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="548 545 80 20" fill="solid: ffffffff" hasStroke="0" text="Delay"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="284 545 80 20" fill="solid: ffffffff" hasStroke="0" text="Fb"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="457 545 80 20" fill="solid: ffffffff" hasStroke="0" text="Fb"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="628 545 80 20" fill="solid: ffffffff" hasStroke="0" text="Fb"
          fontname="Default font" fontsize="15.0" kerning="0.25" bold="0"
          italic="0" justification="36"/>
    <ROUNDRECT pos="142 14 406 48" cornerSize="10.0" fill="solid: 0" hasStroke="1"
               stroke="2, mitered, butt" strokeColour="solid: fff5f5f5"/>
    <TEXT pos="148 18 400 40" fill="solid: ffffffff" hasStroke="0" text="F@*ks with the Fabric of Time"
          fontname="Default font" fontsize="17.0" kerning="0.25" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
  </BACKGROUND>
  <SLIDER name="FB" id="3d3bf09c8beb858e" memberName="fbSlider2" virtualName=""
          explicitFocusOrder="0" pos="468 552 56 80" min="0.0" max="10.0"
          int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="16" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="Gain" id="850aadcea8d82ee4" memberName="gainSlider" virtualName=""
          explicitFocusOrder="0" pos="48 136 95 240" min="0.0" max="10.0"
          int="0.0" style="LinearVertical" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="90" textBoxHeight="16" skewFactor="1.0" needsCallback="0"/>
  <GENERICCOMPONENT name="VU Meter" id="194f03689f4fff5e" memberName="meterComponent"
                    virtualName="" explicitFocusOrder="0" pos="128 146 12 204" class="juce::Component"
                    params=""/>
  <SLIDER name="Panpot" id="afa957666754b803" memberName="panSlider" virtualName=""
          explicitFocusOrder="0" pos="48 404 104 48" min="0.0" max="1.0"
          int="0.0" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="16" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="Gain" id="405e46723e6e710d" memberName="gainSlider1" virtualName=""
          explicitFocusOrder="0" pos="235 136 95 240" min="0.0" max="10.0"
          int="0.0" style="LinearVertical" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="90" textBoxHeight="16" skewFactor="1.0" needsCallback="0"/>
  <GENERICCOMPONENT name="VU Meter" id="a2bd469dcffa9a65" memberName="meterComponent1"
                    virtualName="" explicitFocusOrder="0" pos="315 146 12 204" class="juce::Component"
                    params=""/>
  <SLIDER name="Panpot" id="bec158168d70380f" memberName="panSlider1" virtualName=""
          explicitFocusOrder="0" pos="235 404 104 48" min="0.0" max="1.0"
          int="0.0" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="16" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="DryWet" id="a10496568deac78e" memberName="dryWet" virtualName=""
          explicitFocusOrder="0" pos="64 480 70 100" min="0.0" max="10.0"
          int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="16" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Semitone" id="9539061ff5b2d790" memberName="semitoneSlider1"
          virtualName="" explicitFocusOrder="0" pos="240 480 35 60" thumbcol="ff3587a8"
          min="0.0" max="10.0" int="0.0" style="IncDecButtons" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="Cent" id="53d85f2a7599a2ea" memberName="centSlider1" virtualName=""
          explicitFocusOrder="0" pos="296 480 35 60" min="0.0" max="10.0"
          int="0.0" style="IncDecButtons" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="50" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="Delay" id="2eb991ba5e474367" memberName="delaySlider1"
          virtualName="" explicitFocusOrder="0" pos="216 552 56 80" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="16" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="FB" id="742fda2b46b70ac4" memberName="fbSlider1" virtualName=""
          explicitFocusOrder="0" pos="296 552 56 80" min="0.0" max="10.0"
          int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="16" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="Gain" id="ed36139debeb89a9" memberName="gainSlider2" virtualName=""
          explicitFocusOrder="0" pos="407 136 95 240" min="0.0" max="10.0"
          int="0.0" style="LinearVertical" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="90" textBoxHeight="16" skewFactor="1.0" needsCallback="0"/>
  <GENERICCOMPONENT name="VU Meter" id="6cccffd5574b1382" memberName="meterComponent2"
                    virtualName="" explicitFocusOrder="0" pos="487 146 12 204" class="juce::Component"
                    params=""/>
  <SLIDER name="Panpot" id="607deedc738c2a49" memberName="panSlider2" virtualName=""
          explicitFocusOrder="0" pos="407 404 104 48" min="0.0" max="1.0"
          int="0.0" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="16" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="Semitone" id="5ffcdb184197a684" memberName="semitoneSlider2"
          virtualName="" explicitFocusOrder="0" pos="412 480 35 60" thumbcol="ff3587a8"
          min="0.0" max="10.0" int="0.0" style="IncDecButtons" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="Cent" id="da5ff6dd10ff488d" memberName="centSlider2" virtualName=""
          explicitFocusOrder="0" pos="468 480 35 60" min="0.0" max="10.0"
          int="0.0" style="IncDecButtons" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="50" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="Delay" id="316b5d937004581e" memberName="delaySlider2"
          virtualName="" explicitFocusOrder="0" pos="388 552 56 80" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="16" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="Gain" id="cc9143c8bf0ebd3c" memberName="gainSlider3" virtualName=""
          explicitFocusOrder="0" pos="579 136 95 240" min="0.0" max="10.0"
          int="0.0" style="LinearVertical" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="90" textBoxHeight="16" skewFactor="1.0" needsCallback="0"/>
  <GENERICCOMPONENT name="VU Meter" id="859c32def4845e3" memberName="meterComponent3"
                    virtualName="" explicitFocusOrder="0" pos="659 146 12 204" class="juce::Component"
                    params=""/>
  <SLIDER name="Panpot" id="a312830b99c269f1" memberName="panSlider3" virtualName=""
          explicitFocusOrder="0" pos="579 404 104 48" min="0.0" max="1.0"
          int="0.0" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="16" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="Semitone" id="87972ee550abccc6" memberName="semitoneSlider3"
          virtualName="" explicitFocusOrder="0" pos="584 480 35 60" thumbcol="ff3587a8"
          min="0.0" max="10.0" int="0.0" style="IncDecButtons" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="Cent" id="7a7a1910846e65a9" memberName="centSlider3" virtualName=""
          explicitFocusOrder="0" pos="640 480 35 60" min="0.0" max="10.0"
          int="0.0" style="IncDecButtons" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="50" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="Delay" id="ded2e29cabcb81e7" memberName="delaySlider3"
          virtualName="" explicitFocusOrder="0" pos="560 552 56 80" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="16" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="FB" id="18638482fa819dfa" memberName="fbSlider3" virtualName=""
          explicitFocusOrder="0" pos="640 552 56 80" min="0.0" max="10.0"
          int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="16" skewFactor="1.0"
          needsCallback="0"/>
  <TOGGLEBUTTON name="Mute" id="dcc3434abfe00e1d" memberName="muteButton" virtualName=""
                explicitFocusOrder="0" pos="48 88 128 24" buttonText="Mute" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="Mute" id="1e7fd10fbe017774" memberName="muteButton1" virtualName=""
                explicitFocusOrder="0" pos="235 88 80 24" buttonText="Mute" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="Mute" id="4038d703ae3ef23b" memberName="muteButton2" virtualName=""
                explicitFocusOrder="0" pos="407 88 129 24" buttonText="Mute"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="Mute" id="d91ad1afd10dd655" memberName="muteButton3" virtualName=""
                explicitFocusOrder="0" pos="579 88 80 24" buttonText="Mute" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="0"/>
  <IMAGEBUTTON name="Undo" id="c559f5532a5dd85d" memberName="undoButton" virtualName=""
               explicitFocusOrder="0" pos="616 16 24 24" buttonText="Undo" connectedEdges="0"
               needsCallback="1" radioGroupId="0" keepProportions="1" resourceNormal="undo2128_png"
               opacityNormal="1.0" colourNormal="0" resourceOver="" opacityOver="1.0"
               colourOver="0" resourceDown="" opacityDown="1.0" colourDown="0"/>
  <IMAGEBUTTON name="Redo" id="fdb1c7d8825aa0d8" memberName="redoButton" virtualName=""
               explicitFocusOrder="0" pos="648 16 23 24" buttonText="redo" connectedEdges="0"
               needsCallback="1" radioGroupId="0" keepProportions="1" resourceNormal="redoButton_png"
               opacityNormal="1.0" colourNormal="0" resourceOver="" opacityOver="1.0"
               colourOver="0" resourceDown="" opacityDown="1.0" colourDown="0"/>
  <IMAGEBUTTON name="Load" id="a71e2da664aefc37" memberName="loadButton" virtualName=""
               explicitFocusOrder="0" pos="16 16 32 32" buttonText="load" connectedEdges="0"
               needsCallback="1" radioGroupId="0" keepProportions="1" resourceNormal="load_png"
               opacityNormal="1.0" colourNormal="0" resourceOver="" opacityOver="1.0"
               colourOver="0" resourceDown="" opacityDown="1.0" colourDown="0"/>
  <IMAGEBUTTON name="Save" id="19e2db3f9983cd7f" memberName="saveButton" virtualName=""
               explicitFocusOrder="0" pos="56 20 31 24" buttonText="save" connectedEdges="0"
               needsCallback="1" radioGroupId="0" keepProportions="1" resourceNormal="save_png"
               opacityNormal="1.0" colourNormal="0" resourceOver="" opacityOver="1.0"
               colourOver="0" resourceDown="" opacityDown="1.0" colourDown="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: undo2128_png, 2596, "../undo-2-128.png"
static const unsigned char resource_PitchEditor_undo2128_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,128,0,0,0,128,8,6,0,0,0,195,62,97,203,0,0,0,9,112,72,89,115,0,0,14,196,0,0,14,196,
1,149,43,14,27,0,0,9,214,73,68,65,84,120,156,237,157,127,172,214,85,29,199,95,159,187,59,118,199,24,99,196,152,50,114,142,24,57,100,77,10,144,63,28,52,3,39,148,9,106,225,200,31,20,106,182,146,106,179,
63,88,203,214,172,92,99,43,155,22,75,199,152,110,70,54,4,17,134,196,48,69,136,17,168,25,153,34,99,76,217,149,24,53,163,27,99,87,186,220,119,127,156,239,21,188,207,143,251,252,248,126,207,57,207,243,156,
215,246,108,119,207,175,207,121,238,121,127,63,231,124,207,249,124,206,199,104,3,36,1,244,0,19,129,41,192,100,224,18,224,82,96,92,246,218,24,96,20,48,0,244,103,143,51,192,63,128,147,217,163,23,56,6,156,
49,179,1,175,63,34,16,22,186,1,141,32,105,2,112,85,246,152,9,204,0,46,195,117,118,179,12,0,199,129,35,192,27,192,65,224,0,208,219,142,162,104,9,1,72,26,13,204,5,22,1,243,128,233,184,43,218,23,3,56,239,
176,31,248,3,176,203,204,122,61,218,47,140,104,5,32,105,12,112,61,176,12,88,64,62,87,119,94,156,3,14,1,219,129,167,129,195,102,54,24,182,73,141,17,149,0,36,117,3,115,128,187,129,37,196,213,233,149,24,
4,94,3,54,0,27,205,236,120,224,246,212,69,20,2,200,174,246,229,192,55,113,227,121,87,216,22,53,76,63,240,28,240,8,176,175,21,188,66,80,1,72,26,15,124,11,248,58,48,41,100,91,114,102,16,120,5,88,3,108,138,
89,8,65,4,32,105,28,176,10,248,46,173,225,230,155,225,16,240,19,156,16,226,191,139,144,52,35,27,139,139,248,238,30,73,171,36,189,167,206,99,143,164,107,228,214,44,162,161,220,88,123,19,240,136,164,92,
199,97,73,215,225,238,169,127,73,123,185,251,90,185,6,120,17,120,66,210,196,208,141,25,162,82,39,223,11,172,85,14,158,64,210,36,73,27,128,231,113,19,188,78,166,27,184,3,120,75,210,138,188,47,178,70,168,
214,128,123,128,95,53,42,2,73,72,250,50,240,87,224,214,17,108,117,26,227,129,117,192,102,73,147,67,54,100,164,78,185,7,55,28,212,37,2,185,219,186,199,113,247,198,19,26,108,91,187,211,5,124,17,56,40,105,
113,200,70,140,68,93,195,129,164,79,227,198,250,187,106,252,254,78,231,18,96,139,164,53,146,70,249,54,94,107,7,221,5,60,94,77,4,153,203,191,3,216,3,92,145,71,227,58,136,110,224,126,96,171,239,9,98,61,
87,232,10,42,136,32,155,204,172,1,214,3,163,243,105,90,71,114,29,176,71,210,84,95,6,235,117,209,43,24,38,2,185,157,186,167,112,10,78,46,191,121,166,1,187,179,161,180,112,26,233,176,21,184,123,217,81,114,
75,185,91,113,179,252,68,126,76,2,94,144,116,109,209,134,26,189,207,95,142,139,174,153,2,120,81,106,7,50,14,55,39,184,221,204,54,21,101,164,25,151,125,11,169,243,139,102,52,240,84,145,183,137,105,204,
142,159,30,224,105,73,243,138,248,242,36,128,214,96,12,110,213,48,119,143,155,4,208,58,140,199,205,9,114,189,69,76,2,104,45,38,225,60,65,110,49,20,73,0,173,199,12,96,125,94,59,137,73,0,173,201,18,220,
194,91,211,20,18,249,19,136,126,224,77,96,47,240,55,92,114,199,41,224,52,208,151,189,62,20,146,213,197,133,108,161,241,184,164,146,43,128,171,129,89,184,204,162,216,255,55,15,74,218,111,102,47,55,243,
37,177,255,200,145,56,9,236,0,182,0,47,155,217,251,117,124,182,31,39,142,94,92,220,222,54,248,48,205,108,26,46,23,97,41,46,146,167,39,191,38,231,198,40,220,80,48,187,206,223,93,29,73,15,20,16,15,151,39,
31,72,218,34,105,137,220,62,68,97,200,237,112,78,150,244,29,73,111,5,252,205,213,88,175,60,227,12,21,175,0,254,43,233,17,73,83,21,32,176,82,82,183,164,197,146,254,44,233,124,192,255,195,112,206,171,137,
149,194,86,152,4,158,5,30,5,62,105,102,247,153,217,81,51,255,209,236,102,54,96,102,219,113,243,132,27,113,137,163,49,208,133,139,218,106,40,87,50,118,1,236,4,102,103,29,127,34,116,99,0,204,12,51,219,6,
204,198,229,53,244,5,110,18,184,77,185,213,141,124,48,86,1,244,1,119,2,139,204,236,205,208,141,41,135,153,245,155,217,195,192,103,128,151,2,55,7,96,149,26,88,37,140,81,0,251,128,153,102,246,100,204,41,
85,67,152,217,81,96,33,240,3,92,214,112,40,198,0,15,169,206,249,81,76,2,24,4,30,3,22,154,217,177,208,141,169,135,108,126,240,99,224,6,224,95,1,155,178,4,183,142,81,51,177,8,96,0,248,54,240,13,51,59,27,
186,49,141,98,102,59,129,249,192,209,64,77,232,6,126,88,207,7,98,16,192,0,176,204,204,30,109,5,151,63,18,217,156,101,62,110,113,41,4,139,37,93,85,235,155,99,16,64,55,176,84,1,98,226,139,34,187,99,89,72,
152,91,197,46,224,123,245,188,57,6,110,3,214,169,160,172,228,16,152,217,41,224,243,184,83,199,124,115,147,164,41,181,188,49,22,1,128,19,193,250,54,243,4,199,113,251,9,167,61,155,238,193,29,186,49,34,49,
9,0,46,120,130,118,18,193,33,224,171,92,216,137,244,197,114,213,176,87,18,155,0,192,137,160,106,26,90,171,97,102,207,2,63,247,108,118,50,46,211,168,42,49,10,0,92,14,253,111,218,73,4,184,219,179,3,158,
109,174,28,233,13,177,10,0,224,107,180,145,8,204,172,31,55,46,247,123,52,187,64,46,123,171,34,49,11,0,156,8,218,102,56,48,179,215,129,135,61,154,236,1,190,80,237,13,177,11,0,92,46,98,219,120,2,224,103,
128,207,157,205,155,171,189,88,178,177,46,151,144,248,185,194,154,211,56,155,205,236,149,208,141,200,3,73,247,2,107,61,153,235,3,62,110,102,49,108,91,39,224,195,227,242,222,245,24,53,180,160,82,91,90,
97,8,104,59,178,9,225,47,60,154,172,232,209,147,0,194,241,36,254,86,8,175,173,20,39,144,4,16,136,44,148,251,57,79,230,174,160,194,145,188,73,0,97,121,2,23,8,83,52,99,169,112,112,87,18,64,88,246,226,146,
91,124,80,54,82,40,9,32,32,102,118,14,248,163,39,115,51,203,61,153,4,16,158,231,61,217,153,86,238,201,36,128,240,236,243,100,103,74,185,213,212,40,74,198,116,50,217,237,217,63,41,254,76,229,65,224,99,
102,246,145,91,207,228,1,2,147,165,185,189,238,193,84,23,101,234,52,36,1,196,193,97,79,118,74,206,33,78,2,136,131,119,61,217,73,2,136,20,95,85,72,75,130,67,146,0,226,224,148,39,59,37,39,157,36,1,196,129,
175,48,177,36,128,72,241,37,128,146,112,251,36,128,56,8,86,80,50,9,32,14,124,85,89,41,57,191,32,9,32,14,124,9,160,100,168,73,2,136,131,177,158,236,36,1,68,138,175,226,145,37,167,151,36,1,196,193,39,60,
217,41,89,111,72,2,136,131,203,61,217,73,2,136,148,154,143,116,105,130,65,202,132,159,37,1,4,70,174,82,232,101,30,76,157,0,206,12,127,50,9,32,60,115,240,211,15,199,204,172,100,193,41,9,32,60,11,61,217,
57,82,238,201,36,128,128,200,149,125,185,222,147,185,191,148,123,50,9,32,44,179,0,95,133,162,203,102,86,39,1,132,229,43,248,233,131,62,210,16,16,23,146,198,226,175,232,246,97,42,36,162,38,1,132,227,86,
202,196,232,21,196,174,74,69,54,146,0,2,144,157,131,88,243,113,174,57,240,66,165,23,146,0,194,112,27,254,38,127,125,84,57,158,46,9,192,51,114,181,125,126,228,209,228,46,51,43,89,1,28,34,9,192,63,223,199,
223,246,47,192,51,213,94,76,185,129,30,145,59,199,255,79,248,141,0,186,116,120,62,224,197,36,15,224,9,73,61,192,122,252,117,62,192,142,106,157,15,73,0,62,121,8,63,219,190,23,179,222,179,189,68,57,36,221,
34,233,127,30,207,5,148,220,57,132,35,214,60,78,30,160,96,36,205,5,214,225,191,80,247,111,179,243,8,171,146,38,129,5,34,105,58,240,34,254,86,252,134,56,11,92,105,102,239,140,244,198,228,1,10,66,210,100,
96,43,254,59,31,96,99,45,157,159,40,8,73,211,36,189,237,121,204,31,226,188,164,79,213,218,214,228,1,114,70,210,28,96,55,21,78,229,242,192,179,89,157,162,132,111,36,45,150,244,239,64,87,190,36,125,80,207,
213,15,201,3,228,130,164,110,73,15,0,155,169,112,38,175,39,126,71,184,138,165,157,137,164,169,146,118,7,188,234,135,248,143,106,44,22,121,49,201,3,52,136,92,209,135,251,129,87,129,121,161,219,3,172,105,
181,170,235,45,137,164,46,73,55,73,250,123,200,203,125,24,111,171,134,34,145,137,38,144,52,74,174,227,15,134,237,235,18,206,75,106,56,180,188,93,42,113,21,130,220,49,174,83,112,241,123,43,179,191,99,227,
49,96,71,163,31,78,75,193,195,144,219,64,153,1,124,22,87,248,121,22,101,14,87,138,132,35,192,213,35,109,249,86,163,227,60,128,92,54,78,23,238,183,79,196,69,231,76,5,174,4,230,226,182,108,199,16,255,4,
249,28,176,178,153,206,135,14,19,128,164,203,113,235,243,19,112,167,102,198,122,101,215,194,106,51,219,219,236,151,116,148,0,112,7,37,78,39,254,171,123,36,54,146,83,9,218,86,255,71,116,34,135,128,187,
205,44,151,98,83,73,0,173,69,47,112,99,179,227,254,197,36,1,180,14,125,192,210,188,247,249,147,0,90,131,179,192,178,34,138,103,39,1,196,207,80,231,55,188,216,83,141,36,128,184,233,7,110,55,179,109,69,
25,232,180,219,192,86,162,15,248,146,153,237,44,210,72,18,64,156,156,196,205,246,43,102,245,230,69,26,2,226,227,13,96,190,143,206,135,36,128,216,216,134,235,252,178,231,249,20,65,18,64,28,12,0,63,5,110,
54,179,247,125,26,78,115,128,240,244,2,119,154,153,175,42,226,31,33,121,128,112,12,226,54,117,102,135,234,124,72,30,32,20,39,128,251,112,73,28,185,108,234,52,74,242,0,126,233,7,126,141,75,220,220,20,186,
243,33,121,0,95,12,226,226,246,86,199,150,182,149,60,64,241,236,3,22,1,55,196,214,249,144,60,64,81,12,2,123,129,7,169,114,74,103,12,36,1,228,203,25,220,204,126,45,112,32,230,142,31,34,9,160,121,6,129,
215,128,167,128,223,155,217,137,192,237,169,139,36,128,198,56,135,139,205,219,14,108,0,142,196,48,163,111,132,36,128,218,56,7,28,7,246,227,14,94,222,217,106,87,122,37,146,0,74,57,131,91,158,61,130,219,
153,123,21,87,109,163,183,85,175,242,106,116,154,0,206,2,47,101,127,159,198,21,82,124,15,183,50,119,28,120,39,251,187,191,29,59,187,28,255,7,240,225,195,127,3,131,17,227,0,0,0,0,73,69,78,68,174,66,96,
130,0,0};

const char* PitchEditor::undo2128_png = (const char*) resource_PitchEditor_undo2128_png;
const int PitchEditor::undo2128_pngSize = 2596;

// JUCER_RESOURCE: redoButton_png, 4082, "../redoButton.png"
static const unsigned char resource_PitchEditor_redoButton_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,128,0,0,0,128,8,6,0,0,0,195,62,97,203,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,
5,0,0,0,32,99,72,82,77,0,0,122,38,0,0,128,132,0,0,250,0,0,0,128,232,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,112,156,186,81,60,0,0,0,132,101,88,73,102,77,77,0,42,0,0,0,8,0,5,1,18,0,3,0,0,0,1,0,1,0,0,1,
26,0,5,0,0,0,1,0,0,0,74,1,27,0,5,0,0,0,1,0,0,0,82,1,40,0,3,0,0,0,1,0,2,0,0,135,105,0,4,0,0,0,1,0,0,0,90,0,0,0,0,0,0,0,96,0,0,0,1,0,0,0,96,0,0,0,1,0,3,160,1,0,3,0,0,0,1,0,1,0,0,160,2,0,4,0,0,0,1,0,0,0,
128,160,3,0,4,0,0,0,1,0,0,0,128,0,0,0,0,84,233,133,179,0,0,0,9,112,72,89,115,0,0,14,196,0,0,14,196,1,149,43,14,27,0,0,2,202,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,
0,0,0,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,88,77,80,32,67,111,114,101,32,54,
46,48,46,48,34,62,10,32,32,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,
100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,10,32,32,32,32,32,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,10,32,32,32,32,32,32,
32,32,32,32,32,32,120,109,108,110,115,58,116,105,102,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,116,105,102,102,47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,
32,32,120,109,108,110,115,58,101,120,105,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,101,120,105,102,47,49,46,48,47,34,62,10,32,32,32,32,32,32,32,32,32,60,116,105,
102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,57,54,60,47,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,82,101,115,111,108,
117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,88,82,101,115,111,108,117,
116,105,111,110,62,57,54,60,47,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,
116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,49,50,56,60,47,101,120,105,
102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,49,60,47,101,120,105,102,58,67,111,108,111,
114,83,112,97,99,101,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,49,50,56,60,47,101,120,105,102,58,80,105,120,101,108,89,68,105,109,
101,110,115,105,111,110,62,10,32,32,32,32,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,32,32,60,47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,101,116,97,
62,10,34,130,60,204,0,0,12,2,73,68,65,84,120,1,237,157,125,140,29,85,25,198,93,67,54,132,52,134,52,216,212,186,105,154,181,89,27,193,6,161,45,85,26,80,40,95,213,90,91,170,20,69,220,130,138,198,128,31,
129,63,132,136,49,24,140,105,16,21,148,40,33,21,12,24,18,148,106,9,109,106,69,190,210,208,22,67,37,75,69,82,27,104,150,165,33,85,43,54,4,11,110,249,61,58,151,108,247,206,204,157,217,153,121,207,153,153,
243,38,79,231,222,217,51,231,253,122,230,124,205,153,219,190,183,181,68,142,28,57,114,12,174,78,3,131,96,0,204,140,240,46,142,58,127,108,4,149,59,12,14,129,215,192,65,240,18,216,15,70,193,94,240,114,95,
95,159,254,86,123,233,171,189,7,49,14,68,201,86,146,23,129,133,224,36,48,4,102,3,37,184,168,136,20,251,192,8,120,10,236,18,32,197,1,142,181,146,198,16,128,164,43,225,75,193,121,96,49,208,247,50,146,77,
53,153,68,45,198,110,240,40,216,4,158,128,16,175,114,244,90,106,75,0,18,254,118,34,59,15,92,4,150,129,249,160,31,248,34,106,37,182,130,123,193,102,200,32,130,120,39,181,35,0,137,87,51,190,26,92,12,78,
1,34,130,239,34,50,108,0,183,131,29,144,225,13,95,12,174,5,1,162,187,253,67,4,237,74,240,113,160,1,91,29,101,28,163,53,110,248,9,184,199,135,86,193,107,2,68,137,95,69,176,174,1,11,64,29,238,118,204,204,
36,99,148,250,25,184,21,34,252,35,211,21,21,20,242,146,0,36,94,131,55,37,254,58,160,190,189,201,162,238,225,102,240,99,136,160,207,237,22,146,191,4,60,6,218,38,47,226,240,85,160,146,238,141,122,143,1,
154,14,31,37,222,52,169,24,55,3,220,137,117,127,4,75,142,178,178,29,95,102,225,230,143,192,78,226,112,110,153,46,83,159,242,124,11,80,171,122,148,56,39,128,140,3,195,88,245,23,112,41,176,156,187,163,206,
59,209,93,186,137,152,252,10,136,20,133,132,58,20,207,219,192,151,226,42,114,74,0,140,27,192,168,251,193,29,96,122,156,129,45,61,167,188,172,1,127,38,70,159,154,106,12,162,228,107,198,241,197,164,58,156,
17,0,227,180,120,179,19,104,90,231,204,142,164,192,120,114,254,4,236,80,75,112,59,152,150,199,166,40,249,106,246,19,147,175,250,204,3,143,97,253,96,29,186,127,11,102,202,136,32,169,17,80,142,62,15,52,
54,56,37,181,100,244,199,40,249,137,205,254,196,58,76,9,128,97,51,80,190,17,92,13,218,222,215,79,204,67,150,207,90,246,214,236,72,227,164,68,137,146,175,21,71,145,166,167,152,17,0,195,230,98,205,99,160,
212,17,110,79,15,155,85,224,56,220,89,79,44,215,129,174,220,113,78,55,149,146,63,12,50,73,87,37,153,174,202,89,8,195,212,116,61,2,134,114,94,26,138,119,71,64,57,83,11,122,55,113,21,33,254,39,83,73,190,
46,172,156,0,24,118,22,122,254,0,10,79,105,100,112,144,183,34,160,89,194,70,226,59,29,244,243,89,107,40,195,32,151,84,218,15,99,152,22,30,126,9,222,98,106,46,235,66,225,94,17,208,205,245,123,176,23,172,
238,85,56,238,239,149,17,128,228,107,154,119,55,168,100,105,51,206,153,150,158,83,247,154,105,118,16,23,159,74,186,0,146,127,6,202,180,17,34,36,63,46,234,30,157,43,157,0,36,95,108,212,234,94,174,133,11,
143,98,210,42,83,74,37,0,201,215,84,79,243,252,233,173,138,98,141,157,45,141,0,36,255,120,226,160,59,63,140,246,107,68,136,82,8,64,242,85,207,122,208,245,188,185,70,177,104,165,169,165,16,128,200,105,
97,226,19,173,140,96,205,157,46,60,13,228,238,215,136,255,134,26,196,65,59,113,71,193,147,96,59,120,22,236,3,218,143,119,8,188,6,198,129,68,113,209,12,230,29,64,93,155,158,97,204,6,239,7,218,172,242,62,
208,136,25,78,33,2,144,124,13,246,212,244,107,37,202,71,81,82,31,7,26,155,108,101,207,221,115,25,141,60,76,57,189,212,33,114,116,73,228,183,136,191,2,156,15,102,118,21,170,201,137,66,4,192,199,155,192,
160,135,190,234,238,214,142,219,251,72,250,104,217,246,69,187,120,55,80,239,6,200,160,85,78,61,224,90,11,68,6,95,111,6,76,43,81,112,124,25,248,47,240,69,100,203,118,32,187,138,18,123,74,145,66,239,92,
112,11,248,55,240,81,174,159,236,216,148,6,129,120,166,69,30,237,54,153,210,245,147,141,40,225,251,8,117,172,224,206,60,13,60,8,212,223,155,11,122,247,0,189,188,242,94,112,43,80,55,226,181,76,53,129,223,
196,43,31,154,254,87,176,227,235,96,33,129,127,192,151,72,99,203,88,68,4,189,153,188,197,23,187,226,236,200,77,0,238,254,185,84,116,85,92,101,198,231,30,70,223,169,4,250,135,64,131,61,239,4,187,118,99,
212,5,224,115,64,100,245,78,114,19,0,15,190,7,92,174,243,107,132,254,45,112,14,1,222,195,209,107,193,198,113,112,23,70,126,0,108,243,205,216,92,4,224,238,95,128,3,46,23,124,14,160,127,57,1,253,46,112,
210,207,79,53,129,216,187,151,107,207,1,63,7,227,83,173,167,236,235,114,17,0,229,223,6,78,70,216,232,213,221,126,38,129,244,186,79,197,198,68,193,118,13,10,191,12,190,10,188,32,112,102,2,112,247,159,140,
209,218,228,225,66,158,70,169,146,175,62,181,214,130,15,234,18,52,67,208,15,91,56,39,65,158,187,89,175,104,103,38,76,137,89,26,161,46,245,247,47,151,88,167,211,170,184,153,180,88,180,18,228,137,127,37,
54,103,74,40,6,15,162,125,85,37,22,164,87,170,126,243,163,13,75,190,146,174,87,225,46,73,119,221,230,175,153,8,128,41,87,0,235,135,31,7,209,185,146,228,239,179,9,69,245,90,162,59,95,207,78,188,72,190,
60,238,73,0,140,214,90,247,167,85,216,80,212,55,174,37,249,234,251,27,33,81,242,189,185,243,59,65,237,73,0,10,234,65,199,64,231,2,163,227,15,72,190,30,182,52,66,72,190,154,125,189,177,227,205,157,223,
9,108,22,2,92,222,41,108,116,220,129,30,77,55,27,33,81,242,245,100,242,82,31,29,74,37,0,198,79,199,232,165,134,134,107,73,247,10,238,126,47,151,118,243,198,97,66,242,47,203,123,173,85,249,94,211,144,143,
97,136,229,224,79,235,250,187,172,156,175,82,207,132,102,127,184,74,61,69,235,78,109,1,168,252,194,162,10,114,92,63,70,217,239,231,40,239,109,209,9,119,254,176,183,70,70,134,37,182,0,56,161,253,112,31,
54,116,224,6,238,126,77,253,154,32,39,227,196,126,112,163,103,206,60,158,217,30,8,176,20,88,201,11,40,178,236,106,50,199,161,233,5,211,186,128,179,13,157,191,185,41,3,63,195,152,149,162,42,141,0,103,149,
162,161,119,37,106,246,239,234,93,44,148,168,34,2,177,4,160,57,62,30,101,243,170,80,24,83,231,239,184,251,99,183,95,199,148,13,167,74,142,64,44,1,208,161,228,107,16,88,181,104,99,132,126,217,34,136,163,
8,36,17,64,59,127,44,68,35,229,236,35,83,11,139,90,166,35,137,0,218,191,102,33,15,209,252,107,143,95,16,71,17,72,34,192,144,145,61,155,140,244,4,53,9,17,232,34,0,3,64,45,14,13,38,148,47,251,244,182,178,
43,12,245,229,139,64,223,228,226,209,12,224,239,156,239,34,199,228,178,5,191,31,160,249,127,103,193,58,194,229,5,35,16,151,228,89,212,25,119,190,160,170,174,203,119,117,157,9,39,204,35,16,151,232,25,70,
86,232,13,222,32,142,35,224,146,0,47,56,246,61,168,39,2,113,4,208,38,16,11,25,181,80,18,116,164,71,32,142,0,86,79,229,26,179,207,63,61,196,126,255,213,37,1,26,177,237,203,239,244,246,182,46,142,0,253,
189,47,43,165,68,32,64,41,97,44,86,73,28,1,138,213,152,253,106,237,253,15,226,56,2,113,4,176,90,155,215,11,39,65,28,71,32,142,0,86,77,115,32,128,227,228,75,189,75,2,88,236,55,240,32,196,126,155,16,71,
0,253,10,135,133,88,191,110,102,225,83,237,116,196,17,192,106,126,254,158,218,69,171,129,6,187,36,192,156,6,198,179,118,46,197,17,64,219,180,44,126,196,72,47,79,4,113,28,129,56,2,28,194,166,49,3,187,102,
179,247,192,234,201,163,129,59,245,84,209,69,0,54,105,104,129,70,63,205,82,181,72,247,162,170,149,132,250,211,35,208,69,128,168,248,115,233,151,149,246,87,253,110,94,16,135,17,72,34,192,83,70,54,157,79,
55,144,100,131,145,9,237,86,147,20,252,39,141,194,50,23,61,86,239,32,24,185,84,47,53,73,4,80,23,240,138,129,43,210,255,25,3,61,65,69,66,4,98,9,192,64,80,47,108,90,237,217,91,67,55,16,150,133,19,18,84,
245,233,88,2,68,74,183,86,173,60,170,95,83,193,53,70,186,130,154,73,17,72,35,128,254,203,119,43,185,134,86,192,106,35,138,149,79,181,208,147,70,128,29,120,96,49,14,80,160,52,24,188,68,31,130,216,70,32,
145,0,140,3,180,34,104,213,13,200,235,239,208,10,76,179,117,63,104,75,36,64,20,154,95,27,134,104,0,93,215,25,234,11,170,136,64,215,187,129,19,163,194,29,169,95,10,121,9,88,109,21,127,21,93,167,211,250,
132,215,198,38,38,162,194,207,169,45,64,52,29,220,92,161,254,201,85,107,155,216,122,136,103,69,184,201,250,91,247,61,149,0,81,52,244,243,230,150,162,199,196,250,143,169,130,248,16,1,221,141,64,191,227,
103,41,175,163,108,181,15,254,55,221,134,158,45,0,221,128,118,9,223,99,28,8,253,72,197,29,144,96,177,177,222,214,169,75,29,4,118,162,65,34,230,240,249,25,96,189,149,91,251,19,63,2,9,119,115,12,82,65,4,
122,182,0,210,73,2,158,231,112,159,62,27,139,150,137,55,66,64,77,17,131,184,140,0,73,152,15,92,253,111,225,127,69,247,144,75,255,155,170,59,83,11,32,231,105,5,158,230,176,193,81,32,148,252,71,32,193,34,
71,250,131,90,69,32,106,5,254,195,209,149,252,19,197,203,66,54,28,70,128,4,220,233,42,251,145,94,17,240,122,160,153,66,16,235,8,16,248,65,240,47,224,90,212,37,232,41,98,144,2,17,200,60,6,232,232,96,44,
160,45,227,235,58,223,29,30,207,64,247,159,32,193,213,32,44,29,91,38,130,128,31,7,52,50,247,69,158,193,144,85,32,55,161,45,227,214,40,93,4,91,91,186,93,77,11,81,29,43,59,57,43,34,244,55,42,216,190,58,
67,160,111,139,77,131,251,147,127,195,132,107,193,160,175,177,243,197,174,76,75,193,73,198,18,96,237,23,216,14,124,93,164,209,207,221,232,29,135,251,193,195,96,132,49,140,158,109,4,137,34,80,136,0,170,
3,18,44,225,160,13,164,190,55,187,227,216,168,109,110,218,108,242,4,208,179,141,61,96,20,232,153,195,27,96,28,130,168,92,107,164,48,1,20,41,72,240,13,14,55,213,56,106,106,41,244,255,22,29,0,203,33,193,
243,28,91,33,101,17,64,163,239,123,65,221,159,225,235,238,63,17,2,60,219,138,236,227,100,41,211,166,168,217,252,2,245,233,121,65,144,26,69,160,20,2,200,95,72,112,144,195,10,160,62,53,72,77,34,80,26,1,
228,111,212,119,174,228,163,213,11,37,53,9,179,191,102,150,74,0,185,9,9,52,237,186,8,104,139,119,16,207,35,80,58,1,228,47,36,216,204,33,144,192,243,228,203,188,74,8,160,138,33,193,3,28,62,11,194,194,139,
2,226,169,84,70,0,249,11,9,126,195,65,3,195,48,38,80,64,60,148,74,9,32,127,33,193,22,14,250,49,168,253,250,30,196,175,8,84,78,0,185,11,9,118,112,56,19,140,232,123,16,127,34,96,66,0,185,11,9,244,187,67,
34,129,198,6,65,60,137,128,25,1,228,47,36,208,122,251,133,224,70,160,135,47,65,28,71,192,148,0,242,21,18,28,6,250,29,128,243,64,88,53,84,80,28,138,57,1,58,190,66,130,135,248,188,16,232,141,163,86,61,130,
237,196,192,135,163,51,2,200,121,72,160,153,129,22,140,62,9,198,64,16,227,8,56,37,128,124,133,4,218,132,161,245,130,19,193,79,65,88,56,34,8,86,226,156,0,29,71,33,193,65,240,21,190,159,6,30,4,161,91,232,
4,167,194,163,55,4,232,248,8,9,180,167,96,57,184,0,108,235,156,15,199,106,34,224,29,1,228,38,36,80,183,176,5,156,206,87,173,34,62,10,66,139,64,16,202,22,47,9,48,209,73,72,176,21,104,1,233,131,224,23,224,
16,8,210,214,8,176,1,117,22,248,26,208,75,32,101,191,152,162,250,230,181,41,182,165,108,10,117,17,48,18,165,214,107,8,92,12,244,202,248,124,208,15,138,136,186,153,86,109,10,173,45,1,38,103,25,66,204,226,
220,185,224,108,176,24,204,6,121,9,17,8,64,208,106,47,81,235,48,128,35,11,192,169,224,36,160,214,66,231,166,129,36,9,4,72,138,76,221,207,71,164,56,22,63,212,82,204,1,106,33,244,249,221,96,6,208,107,110,
146,181,12,58,247,253,255,99,243,255,125,19,122,34,243,16,43,159,71,31,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PitchEditor::redoButton_png = (const char*) resource_PitchEditor_redoButton_png;
const int PitchEditor::redoButton_pngSize = 4082;

// JUCER_RESOURCE: pngItem_1171946_png, 9199, "../PngItem_1171946.png"
static const unsigned char resource_PitchEditor_pngItem_1171946_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,60,0,0,2,59,8,6,0,0,0,232,10,65,34,0,0,35,182,73,68,65,84,120,218,237,221,
9,212,93,101,121,232,241,102,132,48,36,16,198,36,42,131,1,49,204,104,1,5,65,80,145,161,12,50,88,166,22,168,85,107,11,56,92,122,157,152,154,8,85,91,65,107,65,184,212,161,14,148,170,183,173,160,50,201,40,
34,37,140,202,80,102,65,140,33,140,97,8,100,220,125,118,114,140,145,76,223,176,207,217,123,191,239,239,183,214,179,110,87,215,186,75,251,14,103,255,115,190,243,157,239,143,254,8,0,0,128,229,43,138,98,
72,204,196,152,99,98,46,140,249,117,204,83,49,63,136,249,72,204,95,246,113,254,34,230,200,152,119,199,76,138,25,105,117,1,128,186,67,103,187,152,179,98,30,41,186,99,110,204,173,157,255,140,119,196,12,
183,234,0,64,47,34,167,124,55,103,255,152,159,21,189,55,61,230,239,99,94,99,39,0,128,110,197,206,246,53,133,206,171,205,137,249,74,204,6,118,5,0,168,42,116,70,118,222,89,153,95,52,203,204,152,15,197,12,
181,75,0,192,96,98,103,92,204,141,69,179,93,22,179,174,221,2,0,6,18,59,111,140,121,172,104,135,95,197,108,105,215,0,128,254,196,78,249,107,225,51,138,118,121,38,230,143,237,30,0,208,151,216,153,16,243,
120,209,78,207,198,108,99,23,1,128,21,197,206,170,49,83,139,118,251,77,249,217,35,187,9,0,44,47,120,190,92,164,225,167,190,168,16,0,88,86,236,236,81,164,229,211,118,21,0,88,50,118,134,199,220,157,88,240,
204,142,217,204,238,2,0,191,11,158,247,21,105,250,79,187,11,0,148,177,51,44,230,193,34,93,59,216,101,0,16,60,251,21,105,187,208,46,3,128,224,249,94,226,193,83,254,177,209,117,236,52,0,228,27,59,163,98,
102,21,233,123,191,221,6,128,124,131,103,175,34,15,23,219,109,0,200,55,120,166,100,18,60,51,203,15,103,219,113,0,200,51,120,46,41,242,49,201,142,3,64,158,193,115,127,70,193,115,168,29,7,128,60,131,231,
165,140,130,231,111,237,56,0,228,23,59,35,138,188,124,222,174,3,64,126,193,179,70,102,193,115,174,93,7,0,193,147,186,243,236,58,0,8,30,193,3,0,8,30,193,3,0,8,30,193,3,0,8,30,193,3,0,8,30,193,3,0,8,30,
193,3,0,8,30,193,3,0,8,30,0,64,240,8,30,0,64,240,8,30,0,64,240,8,30,0,64,240,8,30,0,64,240,8,30,0,64,240,8,30,0,64,240,8,30,0,64,240,0,0,130,71,240,0,0,130,71,240,0,0,130,71,240,0,0,130,71,240,0,0,130,
71,240,0,0,130,71,240,0,0,130,71,240,0,128,224,17,60,0,128,224,17,60,0,128,224,17,60,0,128,224,17,60,0,128,224,17,60,0,128,224,17,60,0,128,224,17,60,0,128,224,17,60,0,32,120,4,15,0,32,120,4,15,0,32,120,
4,15,0,32,120,4,15,0,32,120,4,15,0,32,120,4,15,0,32,120,4,15,0,32,120,4,15,0,8,30,193,3,0,8,30,193,3,0,8,30,193,3,0,8,30,193,3,0,8,30,193,3,0,8,30,193,3,0,8,30,193,3,0,8,30,0,26,240,0,26,17,179,75,204,
73,49,255,26,115,67,204,3,49,211,99,158,136,121,52,230,182,152,255,138,249,108,204,161,49,27,88,57,4,143,224,161,182,123,52,52,102,92,204,54,49,59,197,236,220,249,159,199,199,12,179,66,240,251,203,50,
44,102,159,152,127,139,153,57,192,23,242,169,157,72,18,63,8,30,193,67,119,239,205,216,152,35,98,206,143,185,61,230,149,21,156,185,217,49,119,198,252,75,204,81,49,235,88,65,114,188,52,35,99,62,24,243,80,
133,47,232,115,98,190,17,179,185,21,70,240,8,30,42,253,135,233,1,49,63,138,153,59,136,51,56,47,230,199,49,7,121,247,135,92,46,207,254,49,15,118,241,133,189,188,84,231,196,172,101,181,17,60,130,135,1,223,
145,242,199,85,71,199,220,223,133,243,88,126,92,225,207,202,255,12,43,77,138,151,103,173,152,11,123,248,2,63,45,102,111,43,143,224,17,60,244,251,126,108,31,115,115,15,206,101,249,159,177,189,21,39,165,
203,83,126,136,237,225,154,94,232,167,248,87,4,130,71,240,208,231,119,117,62,53,200,31,93,245,215,220,206,127,166,215,105,90,127,129,246,140,121,161,230,23,251,242,67,209,35,237,6,130,7,86,120,39,126,
80,227,25,189,184,252,239,96,39,104,235,5,218,43,230,229,134,188,224,151,23,121,21,187,130,224,129,165,238,195,216,30,253,8,171,47,63,226,26,107,71,16,59,131,119,137,232,65,240,192,31,220,133,181,99,110,
105,208,89,189,77,244,32,118,170,241,67,209,131,224,129,70,198,142,232,65,236,84,172,252,62,137,85,237,150,224,17,60,136,157,198,18,61,136,157,138,92,42,122,4,143,224,65,236,52,154,232,65,236,136,30,4,
143,224,33,233,216,17,61,136,157,138,93,30,51,202,46,10,30,193,131,216,17,61,176,162,11,244,174,22,199,206,239,92,33,122,4,143,224,65,236,136,30,88,222,5,122,75,204,172,68,30,8,87,198,172,102,87,5,143,
224,65,236,52,58,122,252,157,68,122,126,129,222,16,243,116,98,15,133,159,136,30,193,35,120,16,59,141,118,109,225,155,243,233,225,5,26,21,243,139,68,31,12,87,137,30,193,35,120,16,59,141,118,174,221,165,
87,151,232,159,19,127,56,92,29,179,186,157,22,60,130,7,177,211,88,239,177,203,116,251,18,237,152,201,3,226,26,209,35,120,4,15,98,167,177,158,40,255,239,180,219,116,235,18,13,137,249,239,140,30,18,215,
138,30,193,35,120,16,59,141,245,37,59,78,183,46,210,190,69,126,174,43,31,142,118,95,240,8,30,196,78,227,204,137,217,200,206,211,141,203,116,77,145,167,235,69,143,224,17,60,136,29,239,242,144,199,101,218,
188,200,219,79,99,214,116,18,4,143,224,65,236,52,202,243,62,122,64,213,23,234,180,130,27,68,143,224,17,60,136,157,198,57,210,73,160,202,75,117,135,222,89,232,103,49,163,157,8,193,35,120,16,59,141,241,
61,167,129,170,46,213,216,152,5,238,212,98,55,138,30,193,35,120,16,59,141,241,76,204,80,167,130,42,46,214,190,238,211,82,126,30,51,198,233,16,60,130,7,177,211,8,147,156,12,170,184,92,31,115,151,150,233,
38,209,35,120,4,15,98,167,17,142,112,58,168,226,130,157,235,46,45,87,249,69,140,254,122,175,224,17,60,136,157,122,157,234,132,80,197,37,251,174,187,180,66,55,139,30,193,35,120,16,59,181,250,138,83,66,
21,23,237,71,238,210,74,77,45,252,93,23,193,35,120,16,59,117,185,208,73,161,138,203,118,185,187,212,39,183,136,30,193,35,120,16,59,181,240,171,233,84,114,225,254,191,187,212,103,183,198,140,117,106,4,
143,224,65,236,244,212,119,156,24,170,184,116,95,115,151,250,229,54,209,35,120,4,15,98,167,167,254,217,169,161,138,139,119,178,187,212,111,183,199,172,227,244,8,30,193,195,0,99,103,170,151,209,126,249,
164,147,67,21,151,239,189,238,210,128,148,127,142,99,93,39,72,240,8,30,196,78,215,29,234,244,80,197,5,220,216,93,26,176,59,69,143,224,17,60,136,157,174,155,232,4,81,197,37,28,18,243,152,251,52,96,191,
136,89,207,73,18,60,130,7,177,211,21,211,203,231,148,83,68,85,151,241,60,119,74,244,8,30,193,131,216,105,160,127,117,138,168,242,66,238,230,78,13,218,47,99,214,119,154,4,143,224,65,236,84,234,0,39,137,
42,47,229,208,152,7,221,171,65,187,75,244,8,30,193,131,216,169,204,140,152,145,78,19,85,95,206,15,185,91,149,184,59,102,3,39,74,240,8,30,177,227,229,112,208,166,56,77,116,227,130,142,138,153,230,126,85,
226,158,152,13,157,42,193,35,120,196,14,3,246,162,207,70,210,205,139,122,180,59,86,153,123,69,143,224,17,60,98,135,1,59,213,137,162,155,151,181,252,21,245,235,221,179,74,163,103,156,147,37,120,4,143,216,
161,95,202,207,148,174,230,84,209,237,75,187,81,204,179,238,91,101,254,71,244,8,30,193,35,118,232,179,5,49,187,57,85,244,234,242,30,212,57,116,84,227,190,152,241,78,150,224,17,60,98,135,149,58,197,169,
162,215,151,248,68,247,174,82,247,199,76,112,178,4,143,224,17,59,44,215,191,199,12,117,178,168,227,50,79,113,255,42,245,64,204,107,156,44,193,35,120,196,14,75,185,60,102,85,39,139,186,46,116,249,33,230,
51,220,195,202,63,140,39,122,4,143,224,17,59,252,222,149,133,15,41,35,122,146,141,158,215,58,93,130,71,240,136,29,196,14,162,39,117,15,197,188,206,233,18,60,130,71,236,136,29,16,61,169,123,88,244,8,30,
193,35,118,196,14,136,158,92,162,103,35,167,75,240,8,30,177,35,118,64,244,164,238,145,152,141,157,46,193,35,120,196,142,216,1,209,147,186,95,137,30,193,35,120,196,142,216,1,209,147,131,71,99,54,113,186,
4,143,224,17,59,98,7,68,79,14,209,179,169,211,37,120,4,143,216,17,59,32,122,82,247,88,204,235,157,46,193,35,120,196,142,216,1,209,147,186,95,139,30,193,35,120,122,126,118,214,18,59,98,7,68,79,239,61,30,
51,209,233,18,60,130,71,236,136,29,16,61,57,68,207,102,78,151,224,17,60,98,71,236,128,232,73,221,111,98,54,119,186,4,143,224,17,59,98,7,68,79,234,166,197,188,193,233,18,60,130,71,236,136,29,16,61,162,
7,193,131,216,17,59,32,122,18,240,219,152,45,156,46,193,35,120,196,142,216,1,209,147,67,244,188,209,233,18,60,130,71,236,136,29,16,61,169,155,30,51,201,233,18,60,130,71,236,136,29,16,61,169,123,66,244,
8,30,193,35,118,196,14,136,158,28,204,136,217,210,233,18,60,136,29,177,3,162,39,135,232,217,202,233,18,60,136,29,177,3,162,39,117,79,198,108,237,116,9,30,196,142,216,1,209,147,67,244,108,227,108,9,30,
196,142,216,1,209,147,186,167,98,182,21,60,130,71,236,136,29,177,3,205,139,158,51,189,158,84,30,61,219,9,30,193,35,118,16,59,32,122,82,247,116,204,246,130,71,240,136,29,196,14,136,158,212,61,19,179,131,
224,17,60,98,7,177,3,162,71,244,8,30,193,35,118,16,59,32,122,18,240,108,204,155,4,143,224,17,59,136,29,16,61,57,68,207,155,5,143,224,17,59,136,29,16,61,169,123,46,230,143,5,143,224,17,59,136,29,16,61,
57,68,207,142,130,71,240,136,29,196,14,136,158,212,205,140,217,73,240,8,30,177,131,216,1,209,147,67,244,236,44,120,4,143,216,17,59,158,50,32,122,82,247,124,204,91,4,143,224,17,59,98,7,16,61,57,68,207,
91,5,143,224,17,59,98,7,16,61,169,123,33,102,23,193,35,120,26,28,59,55,187,166,98,7,68,15,85,69,207,174,130,71,240,136,29,177,3,136,158,212,189,24,243,54,193,35,120,196,142,216,1,68,79,14,209,179,155,
224,17,60,98,71,236,0,162,39,117,47,197,236,46,120,4,143,216,17,59,128,232,201,33,122,222,46,120,4,143,216,17,59,128,232,201,33,122,246,16,60,130,71,236,136,29,64,244,164,110,86,204,158,130,71,240,136,
29,177,3,136,158,28,162,231,29,130,71,240,136,29,177,3,136,158,212,189,28,243,78,193,35,120,196,142,216,1,68,79,14,209,243,46,193,35,120,196,142,216,1,68,79,234,94,137,217,75,240,8,30,177,35,118,0,209,
147,67,244,188,91,240,52,198,87,196,142,216,241,106,15,136,158,238,69,207,222,13,221,239,145,153,237,197,217,98,71,236,0,44,25,61,127,239,245,177,82,179,99,246,109,232,126,191,144,209,62,156,44,118,196,
14,128,232,233,126,244,236,215,192,189,190,39,163,61,56,86,236,136,29,0,209,211,155,232,249,147,134,237,243,127,100,180,254,59,139,29,177,3,32,122,122,99,78,204,254,13,218,227,147,51,89,247,185,77,126,
248,137,29,177,3,136,158,84,163,231,128,134,236,239,110,153,172,249,207,197,142,216,1,16,61,245,68,207,129,13,216,219,17,49,207,101,176,222,167,137,29,177,3,32,122,234,251,49,203,65,13,216,219,175,103,
176,214,147,196,142,216,1,16,61,245,70,207,123,106,222,215,183,37,190,198,255,45,118,196,14,128,232,105,70,244,28,82,243,158,222,150,240,250,30,33,118,196,14,128,232,105,134,121,49,135,214,184,167,7,39,
186,174,247,197,12,23,59,98,7,64,244,52,43,122,14,174,113,63,127,150,224,154,30,216,160,59,35,118,196,14,32,122,232,40,191,156,112,215,154,246,115,219,206,143,215,82,241,163,242,140,54,228,174,140,17,
59,98,7,16,61,252,161,25,49,19,106,218,207,83,18,89,195,167,235,90,195,101,172,233,42,49,215,57,214,98,7,16,61,44,237,170,152,161,53,236,229,176,152,43,90,190,118,11,98,246,105,208,253,184,192,113,22,
59,128,232,97,249,222,95,211,94,174,29,115,119,139,215,237,195,13,186,23,71,58,198,98,7,16,61,172,216,83,49,107,213,180,151,19,98,30,108,225,154,253,93,131,238,195,6,49,207,58,198,98,7,16,61,172,220,228,
26,247,114,92,204,29,45,90,171,147,26,118,23,190,238,248,138,29,64,244,208,55,229,59,4,171,215,184,151,107,198,124,175,225,107,52,179,168,249,219,170,151,177,110,91,118,62,75,132,216,1,68,15,125,244,151,
13,216,203,15,196,188,208,192,181,185,62,102,211,6,158,255,111,59,182,98,7,16,61,244,207,117,13,217,207,9,13,122,144,79,139,57,182,168,225,55,217,250,176,78,229,103,119,230,56,182,98,7,16,61,244,207,252,
152,117,27,180,167,91,119,194,167,142,135,250,35,49,39,54,249,97,24,255,221,62,230,200,138,29,64,244,48,48,135,53,112,95,215,143,57,33,230,234,46,199,207,227,49,255,47,230,157,77,124,71,103,25,235,114,
163,227,42,118,0,209,195,192,156,221,240,253,93,45,102,183,78,0,125,169,243,65,231,242,11,12,175,237,199,148,225,244,195,152,111,196,76,142,57,34,102,98,209,144,63,15,209,199,117,88,219,135,149,197,14,
32,122,68,207,192,93,237,4,181,226,140,239,227,168,138,29,0,209,51,112,143,57,61,173,56,223,159,114,84,197,14,128,232,25,184,57,109,250,209,78,198,103,251,235,142,170,216,1,120,117,244,124,214,235,125,
191,140,114,114,26,127,174,175,112,76,197,14,128,232,25,156,53,157,154,198,159,233,169,142,169,216,1,16,61,131,51,210,137,105,252,121,190,195,49,21,59,0,162,103,224,94,114,82,90,113,150,111,117,84,197,
14,128,232,25,184,251,156,146,86,156,227,171,29,85,177,3,32,122,6,238,18,39,164,21,103,248,59,142,170,216,1,16,61,3,55,217,233,104,197,249,157,236,168,138,29,0,209,51,112,123,57,25,173,56,187,135,56,170,
98,7,64,244,12,204,172,152,85,157,138,86,156,219,241,142,171,216,1,16,61,3,243,93,167,161,85,231,246,46,71,86,236,0,136,158,254,219,215,73,104,213,153,157,44,118,196,14,128,232,233,159,251,99,134,57,5,
173,58,175,155,139,29,0,68,79,255,28,107,247,91,121,94,175,16,59,0,136,158,190,249,69,204,112,59,223,202,179,186,135,216,1,64,244,244,205,174,118,220,187,60,98,7,64,244,164,236,44,59,221,250,115,58,41,
102,142,216,1,64,244,44,219,207,99,86,177,203,73,156,211,147,197,14,0,162,103,105,143,198,140,179,187,201,156,209,97,69,154,127,80,84,236,0,136,158,1,251,109,249,43,205,118,53,185,51,186,110,204,67,98,
7,0,209,83,20,211,99,222,104,55,147,61,163,19,99,166,137,29,0,114,142,30,177,147,199,25,125,67,203,163,71,236,0,136,158,65,197,206,36,187,39,122,196,14,0,169,70,207,19,98,71,244,136,29,0,82,142,30,177,
35,122,166,137,29,0,82,142,30,177,67,27,162,71,236,0,136,158,65,197,206,150,118,135,134,71,143,216,1,16,61,3,54,51,102,107,187,66,195,163,71,236,0,180,56,122,78,171,249,33,50,59,102,79,187,193,10,162,
231,190,6,196,206,197,49,171,218,17,128,118,63,84,142,137,121,165,134,135,200,203,49,251,218,1,86,114,62,87,139,249,66,204,130,154,98,231,139,49,195,237,4,64,26,15,149,237,98,238,233,225,67,228,169,152,
93,173,60,253,56,163,123,117,254,204,72,175,60,23,243,167,86,30,32,189,7,202,170,49,167,119,222,121,233,166,11,253,33,80,6,120,70,199,198,156,223,131,119,123,46,138,25,111,197,1,210,126,168,76,136,249,
114,204,172,46,124,14,226,205,86,152,10,206,232,214,49,223,239,66,248,92,22,179,179,21,6,200,239,95,211,39,198,220,52,136,7,72,249,215,176,207,140,217,204,138,210,133,51,250,250,152,51,98,30,25,196,25,
253,77,204,217,190,22,1,128,242,193,178,97,204,225,157,7,195,21,49,15,198,60,31,51,191,243,175,236,151,98,30,141,249,105,204,5,49,31,140,217,162,252,77,48,171,71,15,206,103,249,27,135,91,197,28,31,243,
205,152,91,98,158,94,206,231,114,238,232,252,88,245,99,49,59,196,12,181,130,0,64,155,67,104,88,204,232,206,140,176,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,109,85,20,197,144,152,209,49,227,98,198,199,140,141,25,102,101,0,128,182,71,206,70,49,31,137,185,52,230,185,98,217,230,25,83,209,188,18,243,100,204,93,49,63,136,153,18,179,95,204,154,110,35,
84,254,15,216,205,99,142,142,57,41,230,212,206,148,255,243,251,98,142,53,166,162,57,170,243,58,190,93,204,26,77,187,8,195,98,14,141,185,166,128,102,152,19,243,227,152,35,98,86,241,184,130,1,71,206,155,
99,190,20,243,168,151,21,106,242,64,204,55,98,142,140,25,83,231,101,56,56,230,94,251,65,131,61,17,243,137,198,253,75,1,154,27,58,67,99,14,137,185,217,203,7,13,83,190,171,127,81,204,174,101,131,244,242,
71,87,151,91,123,90,228,183,49,127,214,179,75,2,237,140,157,183,196,220,226,229,130,22,184,62,102,151,110,95,136,195,98,102,90,107,90,170,252,81,215,6,30,109,240,7,175,235,163,58,63,186,90,224,37,130,
150,249,86,204,186,221,248,17,214,100,107,75,2,166,197,236,236,49,7,11,95,219,55,137,185,211,203,2,45,127,7,127,207,42,127,166,251,21,107,74,66,202,159,5,31,224,113,71,230,177,83,126,40,121,134,151,3,
18,48,63,230,196,42,222,217,249,162,181,36,65,115,99,14,242,216,35,211,216,217,41,230,121,47,3,36,230,140,98,160,159,213,140,255,143,39,88,63,18,127,167,231,109,30,127,100,22,59,111,136,121,198,245,39,
81,167,13,228,82,188,181,88,244,5,111,144,178,242,203,11,95,235,49,72,38,177,51,38,230,126,215,158,196,29,211,159,75,177,70,204,195,214,140,76,148,191,226,232,79,159,144,122,236,148,31,81,184,200,117,
39,147,119,239,183,237,235,197,248,7,235,69,102,78,244,72,36,241,224,57,212,53,39,35,229,159,29,90,101,101,151,98,211,98,209,215,243,67,78,202,239,151,90,207,99,145,68,99,103,245,152,199,93,115,50,115,
242,202,46,198,87,173,17,153,58,203,163,145,68,131,231,83,174,55,25,122,41,102,220,242,46,197,250,49,179,173,17,153,154,21,179,142,199,35,137,197,206,106,49,79,185,222,100,234,236,229,93,140,147,172,13,
153,59,201,35,146,196,130,231,125,174,53,25,123,49,102,173,101,93,140,91,173,13,153,251,133,71,36,137,5,207,13,174,53,153,251,155,87,95,138,9,214,4,22,154,232,49,73,34,177,51,222,117,134,226,134,87,95,
140,163,172,9,44,244,215,30,149,36,18,60,199,185,206,80,44,40,150,252,171,234,133,191,153,5,191,243,29,143,74,18,9,30,191,117,11,139,28,178,228,197,184,210,122,192,66,119,123,84,146,72,240,220,230,58,
195,66,159,95,242,98,60,96,61,96,161,242,107,201,135,120,92,210,242,216,41,255,148,196,11,174,51,44,244,227,37,47,199,115,214,3,22,243,125,60,180,61,120,198,184,198,176,216,189,75,94,14,127,78,2,126,111,
83,143,76,90,30,60,27,187,198,176,216,211,75,94,142,121,214,3,22,219,194,35,147,150,7,207,230,174,49,44,54,91,240,128,224,33,205,224,217,204,53,134,197,230,9,30,16,60,164,25,60,19,93,99,16,60,32,120,16,
60,32,120,64,240,120,100,34,120,64,240,128,224,1,193,3,130,7,4,15,8,30,16,60,32,120,64,240,128,224,1,193,3,130,7,4,15,8,30,16,60,208,247,224,41,22,253,145,185,5,214,3,4,15,130,7,82,14,158,161,214,2,254,
128,191,165,69,219,131,199,55,45,195,114,222,225,1,126,207,95,75,167,237,193,179,181,107,12,139,189,178,228,229,120,210,122,192,162,139,81,254,35,192,35,147,150,7,207,86,174,50,44,246,228,146,151,227,
38,235,1,11,221,237,113,73,2,193,51,222,85,134,197,238,90,242,114,156,111,61,96,161,11,61,46,73,32,120,202,207,102,190,236,58,195,66,23,47,121,57,142,177,30,176,208,95,123,92,146,72,244,220,234,58,195,
66,103,122,251,19,150,182,185,71,37,137,4,207,57,174,51,44,180,255,171,47,199,207,173,9,153,187,203,99,146,132,130,231,96,87,26,22,126,177,242,152,87,95,142,15,89,23,50,247,113,143,73,18,10,158,53,10,
159,227,129,159,44,235,114,172,25,51,211,218,144,169,242,193,176,158,199,36,137,69,207,69,174,54,153,59,110,121,151,227,51,214,134,76,253,147,199,35,9,6,207,219,93,109,50,246,108,204,234,203,187,28,107,
199,60,109,141,200,204,11,49,27,122,60,146,96,240,148,223,164,127,179,43,78,166,166,172,236,130,124,192,26,145,153,255,227,209,72,194,209,243,110,87,156,12,61,19,51,118,101,151,163,252,194,170,171,172,
21,153,40,191,101,124,184,199,34,137,191,203,243,67,87,157,204,28,223,215,11,82,126,47,207,19,214,139,196,149,63,223,221,196,35,145,12,162,231,117,49,207,187,242,100,226,198,152,97,253,185,32,187,20,139,
254,144,34,164,104,110,204,187,60,10,201,40,122,142,112,237,201,192,115,49,155,14,228,130,28,216,121,48,64,74,22,196,28,233,17,72,134,209,243,5,215,159,132,205,143,217,111,48,23,100,255,194,151,87,145,
142,57,49,135,123,244,145,105,240,12,43,124,55,15,233,250,96,21,151,100,231,152,105,214,146,150,123,42,102,15,143,61,50,143,158,17,162,135,4,29,95,229,37,217,48,230,82,107,74,75,93,23,243,90,143,59,88,
252,78,143,31,111,145,130,89,49,135,117,227,146,148,191,222,120,76,225,55,184,104,143,242,139,52,255,42,102,168,199,28,44,245,154,94,126,144,217,159,20,162,173,238,141,217,166,219,151,164,252,187,91,39,
119,126,68,0,77,84,126,82,191,252,83,41,107,123,172,193,10,95,207,203,95,89,247,61,61,180,73,249,89,204,207,198,140,234,229,69,25,21,115,108,177,232,139,10,231,217,3,106,86,254,246,213,245,197,162,111,
11,95,211,163,12,250,245,122,190,119,204,45,94,70,104,248,107,124,249,249,179,205,235,190,44,99,99,14,41,22,253,92,248,202,152,135,11,223,227,67,247,204,142,249,85,39,182,207,142,57,44,102,93,143,45,24,
244,199,22,222,17,243,253,206,29,131,38,152,209,121,157,223,172,233,23,104,149,152,53,140,169,112,202,51,53,196,227,9,186,250,218,61,186,243,15,137,243,98,238,232,252,24,1,122,225,249,206,187,245,103,
198,236,94,248,243,63,0,244,48,128,134,119,62,239,179,99,231,93,160,189,141,169,112,246,140,217,33,102,3,255,160,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,
188,21,69,49,58,102,183,152,247,199,156,30,243,197,152,115,58,255,239,233,157,255,253,219,99,214,182,90,244,248,108,142,140,217,44,102,215,152,125,98,246,141,217,35,102,91,231,17,128,190,60,72,182,137,
153,18,115,107,204,130,162,239,238,142,57,43,102,151,152,33,86,146,138,207,229,26,49,135,197,92,208,57,107,243,86,114,30,167,199,252,48,230,164,152,55,58,147,0,148,15,147,225,49,71,199,76,45,170,241,64,
204,71,203,135,148,213,101,144,103,115,199,152,111,198,204,26,228,153,188,43,230,35,229,187,150,86,21,32,191,135,201,144,152,131,99,238,47,186,227,201,152,19,98,70,88,109,250,121,54,223,20,115,101,23,
206,228,204,206,143,99,215,180,202,0,121,60,80,38,196,252,168,232,141,59,99,182,183,234,244,225,92,142,137,57,191,7,103,114,90,204,161,86,28,32,237,135,74,249,33,207,167,138,222,154,19,243,97,159,165,
96,5,231,114,167,152,95,245,248,92,126,219,187,61,0,105,62,84,78,232,231,135,145,171,86,126,232,116,184,157,224,85,231,242,207,59,81,92,135,242,243,61,27,219,5,128,116,30,42,159,46,154,225,251,62,215,
195,18,231,242,163,13,56,147,229,143,184,182,180,27,0,237,127,168,124,178,104,22,209,67,83,98,231,119,102,136,30,0,177,35,122,72,57,118,68,15,128,216,17,61,100,17,59,162,7,64,236,136,30,178,136,29,209,
3,32,118,68,15,89,196,142,232,1,16,59,162,135,44,98,71,244,0,136,29,209,67,22,177,35,122,0,196,78,87,93,20,51,212,142,38,115,46,79,76,224,76,138,30,0,177,211,21,103,216,213,36,206,229,81,9,157,73,209,
3,32,118,186,226,79,236,110,171,207,229,142,49,179,19,59,147,162,7,64,236,116,229,225,178,142,93,110,229,185,28,29,243,72,194,231,82,244,0,136,157,74,93,96,167,91,121,54,207,77,252,92,138,30,0,177,83,
169,242,47,187,111,109,199,91,117,54,119,232,236,91,33,122,0,16,59,125,247,93,187,222,170,243,121,89,70,103,83,244,0,136,157,202,204,143,217,200,238,183,230,221,157,220,136,30,0,177,83,153,211,157,128,
86,156,209,175,101,122,62,69,15,128,216,169,196,189,78,65,227,207,232,106,49,47,102,124,70,69,15,128,216,169,196,166,78,67,163,207,233,65,142,168,232,1,16,59,131,119,156,19,209,232,179,122,158,35,42,122,
0,196,206,224,157,235,84,52,250,188,254,210,17,21,61,0,98,103,240,174,113,50,26,123,94,87,137,153,231,136,138,30,0,177,51,120,15,57,29,141,61,179,91,56,158,162,7,64,236,84,99,166,19,210,216,115,251,14,
199,83,244,0,136,157,106,204,117,74,26,123,118,15,113,60,69,15,128,216,17,60,169,159,223,63,117,60,69,15,192,202,30,22,159,240,44,232,147,103,157,22,239,240,36,16,61,91,57,49,128,216,97,69,254,199,137,
105,236,57,126,167,227,41,122,0,196,78,53,46,115,106,26,123,150,183,116,60,69,15,128,216,169,198,63,182,104,127,203,239,165,153,16,51,36,147,243,60,42,102,129,35,42,122,0,196,206,224,29,214,224,61,29,
17,179,107,231,195,231,87,197,188,210,249,239,252,219,152,111,151,177,214,199,249,92,204,41,49,31,232,252,152,104,253,22,157,235,123,29,81,209,3,32,118,6,167,124,247,96,189,134,237,229,144,152,221,99,
190,17,243,92,23,255,111,127,56,230,130,152,253,202,176,106,240,217,254,170,99,42,122,0,196,206,224,220,216,160,125,28,90,190,219,20,115,103,77,15,199,51,99,198,53,240,124,191,215,49,21,61,128,216,17,
59,131,115,66,67,246,113,135,152,155,26,176,30,47,199,124,62,102,76,131,206,248,154,157,255,94,136,30,64,236,48,0,179,98,198,214,188,135,195,99,38,199,204,111,216,218,76,143,121,79,131,206,250,133,142,
171,232,1,196,14,3,243,229,154,247,112,157,152,171,27,190,70,231,197,172,210,128,243,190,139,227,42,122,0,177,195,192,222,221,153,80,227,30,190,46,230,190,150,172,213,13,101,156,213,124,230,203,15,114,
95,239,216,138,30,64,236,208,63,167,213,184,135,175,137,121,164,101,235,117,87,204,6,222,229,17,61,0,98,167,61,202,239,117,89,181,166,61,28,211,137,135,54,186,179,238,15,51,23,139,190,123,8,209,3,136,
29,86,162,252,226,190,237,107,218,195,242,215,206,47,105,249,250,93,30,51,172,198,123,176,110,177,232,75,23,17,61,128,216,97,5,142,173,113,31,63,154,200,26,78,174,249,62,236,89,52,239,183,218,68,15,128,
216,105,140,191,171,113,31,39,22,233,124,151,76,25,27,59,214,124,47,78,112,156,69,15,32,118,88,90,249,247,164,134,212,184,151,23,39,182,158,183,215,249,163,173,206,154,126,198,177,22,61,128,216,161,57,
177,243,214,68,215,245,184,154,239,72,249,171,234,159,115,188,69,15,32,118,168,57,118,58,251,121,73,162,107,91,254,241,209,225,162,71,244,0,136,29,177,179,81,177,232,47,178,167,234,144,6,220,25,209,35,
122,0,177,35,118,106,222,211,147,19,95,231,75,27,114,119,68,143,232,1,196,142,216,169,113,95,111,75,124,173,231,197,172,43,122,68,15,128,216,201,55,118,214,207,100,205,143,106,208,93,18,61,162,7,16,59,
98,167,199,123,123,96,38,235,126,65,195,238,148,232,17,61,128,216,17,59,61,220,223,83,51,89,251,219,27,120,183,68,143,232,1,196,142,216,233,209,30,127,43,147,245,47,191,65,122,168,232,17,61,0,175,126,
33,254,184,215,206,180,99,167,179,207,63,201,104,31,54,104,232,30,136,30,209,3,136,29,177,211,229,189,158,154,209,94,108,213,224,125,16,61,213,122,82,244,0,98,71,236,44,185,223,119,100,180,31,59,53,124,
47,68,143,232,1,196,142,216,17,60,131,182,115,11,246,67,244,136,30,64,236,136,29,193,147,118,240,136,30,209,3,136,29,177,35,120,178,8,30,209,35,122,0,177,35,118,4,79,22,193,35,122,68,15,32,118,196,142,
224,201,34,120,68,143,232,1,196,142,216,17,60,89,4,143,232,17,61,128,216,17,59,130,39,139,224,17,61,162,7,16,59,98,71,240,100,17,60,162,71,244,0,98,71,236,8,158,44,130,71,244,136,30,64,236,136,29,193,
147,69,240,136,30,209,3,136,29,177,35,120,178,8,30,209,35,122,0,177,35,118,4,79,22,193,35,122,68,15,32,118,196,142,224,201,34,120,68,143,232,1,196,78,213,190,144,98,236,8,158,164,162,231,243,174,169,232,
1,177,131,216,17,60,201,6,143,232,17,61,32,118,16,59,130,39,139,224,17,61,162,7,196,14,98,71,240,100,17,60,162,71,244,128,216,65,236,8,158,44,130,71,244,136,30,16,59,136,29,193,179,115,70,251,42,122,68,
15,136,29,196,142,224,17,61,136,30,16,59,98,71,240,8,30,209,131,232,1,177,35,118,4,143,224,17,61,162,7,16,59,98,71,240,8,30,209,35,122,128,65,189,112,253,95,175,53,98,71,240,8,30,209,211,136,232,217,218,
83,9,196,142,216,17,60,130,71,244,136,30,64,236,136,29,193,35,120,68,143,232,1,196,142,216,17,60,130,71,244,136,30,16,59,136,29,193,35,120,68,143,232,1,177,131,216,17,60,130,71,244,136,30,16,59,98,199,
57,19,60,206,128,232,17,61,32,118,196,142,224,17,60,162,7,209,3,98,71,236,8,30,193,35,122,16,61,32,118,196,142,224,17,60,162,71,244,0,98,71,236,8,30,193,35,122,68,15,136,29,196,142,224,17,60,162,71,244,
128,216,65,236,8,30,193,35,122,68,15,136,29,177,131,224,17,60,162,71,244,128,216,17,59,130,71,240,32,122,68,15,136,29,177,35,120,4,143,232,17,61,162,7,196,78,109,206,18,59,130,71,240,244,52,122,254,193,
203,142,232,1,177,35,118,4,143,224,17,61,136,30,196,142,187,45,118,4,143,224,17,61,136,30,196,14,98,71,240,8,30,209,35,122,64,236,136,29,177,35,120,4,143,232,17,61,32,118,196,14,130,71,240,136,30,209,
3,98,71,236,32,120,16,61,162,7,196,142,216,17,60,130,7,209,35,122,64,236,136,29,193,35,120,16,61,162,7,177,131,216,17,60,130,71,244,32,122,72,248,162,255,173,187,41,118,4,143,224,113,166,68,79,23,162,
103,27,39,139,166,92,240,227,221,73,177,35,120,4,15,162,167,139,209,51,201,201,162,238,139,125,96,204,2,247,81,236,8,30,193,131,232,233,162,95,199,140,115,178,168,235,66,111,22,243,188,123,40,118,4,143,
224,65,244,244,192,207,98,70,56,89,244,250,34,15,139,185,201,253,19,59,130,71,240,32,122,122,104,138,83,69,175,47,241,9,238,157,216,17,60,130,7,209,211,99,243,98,182,117,170,232,213,229,93,59,230,25,247,
78,236,8,30,193,131,232,169,193,181,94,59,233,213,197,61,221,125,19,59,130,71,240,32,122,106,180,151,19,69,183,47,236,170,197,162,95,17,68,236,8,30,193,131,232,169,203,53,78,19,221,190,172,71,184,103,
98,71,240,8,30,68,79,3,108,225,52,209,205,139,122,177,59,38,118,4,143,224,65,244,52,192,25,78,18,221,186,160,163,98,94,118,199,196,142,224,17,60,136,158,6,184,199,41,162,91,151,115,79,247,75,236,8,30,
193,131,232,105,144,9,78,17,221,184,152,31,119,183,196,142,224,17,60,136,158,6,57,212,9,162,27,151,242,155,238,150,216,17,60,130,7,209,211,32,147,157,30,186,113,33,175,119,183,196,142,224,17,60,136,158,
6,185,208,201,161,27,151,241,94,119,171,79,206,22,59,130,71,240,48,136,232,249,71,47,163,125,118,173,83,67,55,46,226,99,238,150,216,17,60,130,7,209,211,32,183,59,49,116,227,18,254,218,221,18,59,130,71,
240,32,122,26,228,151,78,11,221,184,128,247,187,91,98,71,240,8,30,68,79,131,220,226,164,208,141,203,119,163,187,37,118,4,143,224,65,244,52,200,149,78,9,221,184,120,255,230,110,137,29,193,35,120,16,61,
13,242,53,39,132,110,92,186,83,220,45,177,35,120,4,15,162,167,65,62,233,116,208,141,11,183,143,187,37,118,4,143,224,65,244,52,200,222,78,6,221,184,108,163,99,230,186,95,98,71,240,8,30,68,79,3,204,139,
25,227,84,208,173,203,118,149,216,17,59,130,71,240,32,122,26,224,6,167,129,110,94,180,247,139,29,4,143,224,65,244,52,192,71,156,4,186,121,201,202,31,107,189,40,118,16,60,130,7,209,83,163,242,227,21,235,
59,5,116,251,146,125,81,236,32,120,4,15,162,167,70,223,178,251,244,226,130,77,136,153,37,118,16,60,130,7,209,83,131,5,49,147,236,60,189,186,96,147,197,14,130,71,240,32,122,106,240,85,59,78,47,47,215,168,
34,237,191,173,37,118,4,143,224,65,244,52,207,211,62,187,67,29,151,107,167,34,205,239,229,17,59,130,71,240,32,122,154,233,112,187,76,93,151,235,111,196,14,130,71,240,32,122,122,224,60,187,75,221,151,235,
108,177,131,224,17,60,136,158,46,186,58,102,164,157,165,238,139,53,52,230,2,177,131,224,17,60,136,158,46,152,90,248,19,18,136,30,177,131,224,17,60,36,28,61,183,196,172,109,39,17,61,98,7,193,35,120,72,
53,122,196,14,162,71,236,32,120,4,15,73,71,143,216,65,244,136,29,4,143,224,33,233,232,17,59,136,30,177,131,224,17,60,36,29,61,98,7,209,35,118,16,60,130,135,164,163,71,236,208,250,232,249,151,134,92,166,
179,196,14,130,7,26,25,61,98,135,36,46,214,176,152,111,215,124,153,78,22,59,8,30,88,42,122,62,215,128,179,121,187,216,33,181,232,249,167,26,46,210,204,152,131,237,0,130,71,240,176,220,123,112,98,204,252,
154,206,101,121,7,215,179,11,164,120,177,246,143,153,214,163,139,116,85,204,38,86,29,193,35,120,88,233,93,216,61,230,241,30,159,201,127,47,124,131,50,137,95,172,209,157,183,81,95,238,210,37,122,36,230,
112,63,194,66,240,8,30,250,117,31,214,138,57,63,102,65,151,207,226,111,98,222,235,53,154,156,46,215,134,49,103,198,60,89,209,37,186,45,230,184,194,31,152,67,240,8,30,6,115,47,182,143,185,164,11,103,240,
217,152,83,99,214,176,202,228,122,185,70,118,126,212,245,213,152,71,251,113,121,230,119,62,217,63,37,102,27,43,137,224,17,60,84,122,63,38,197,124,41,102,198,32,207,222,205,49,31,18,58,176,244,37,27,31,
179,119,204,241,49,159,233,124,216,249,156,206,119,232,156,218,121,23,231,173,46,15,130,71,240,208,147,123,50,60,230,109,49,147,99,174,136,153,190,130,115,54,55,230,158,152,239,196,252,85,204,198,86,16,
64,240,8,30,218,122,119,86,143,121,125,204,118,49,111,138,217,178,243,143,213,97,86,7,64,240,8,30,0,64,240,8,30,0,64,240,8,30,0,64,240,8,30,0,64,240,0,0,130,71,240,0,0,130,71,240,0,0,130,71,240,0,0,130,
71,240,0,0,130,71,240,0,0,130,71,240,0,0,130,71,240,0,0,130,7,0,16,60,130,7,0,16,60,130,7,0,16,60,130,7,0,16,60,130,7,0,16,60,130,7,0,16,60,130,7,0,16,60,130,7,0,4,143,224,1,0,4,143,224,1,0,4,143,224,
1,0,4,143,224,1,0,4,143,224,1,0,4,143,224,1,0,4,143,224,1,0,4,143,224,1,0,193,35,120,0,0,193,35,120,0,0,193,35,120,0,0,193,35,120,0,0,193,35,120,0,0,193,35,120,0,0,193,35,120,0,0,193,35,120,0,64,240,8,
30,0,64,240,8,30,0,64,240,8,30,0,64,240,8,30,0,64,240,8,30,0,64,240,8,30,0,64,240,8,30,0,64,240,0,0,130,71,240,0,0,130,71,240,0,0,130,71,240,0,0,13,11,158,169,25,5,207,14,118,28,0,242,12,158,159,100,20,
60,155,218,113,0,200,51,120,190,149,81,240,140,178,227,0,144,103,240,156,154,73,236,60,102,183,1,32,223,224,57,32,147,224,185,196,110,3,64,190,193,179,94,38,193,243,9,187,13,0,121,71,207,173,25,4,207,
118,118,26,0,242,14,158,79,39,30,59,15,197,12,177,211,0,144,119,240,108,20,179,32,225,224,57,221,46,3,0,101,244,252,87,162,177,51,39,102,130,29,6,0,202,224,217,41,209,224,57,223,238,2,0,75,70,207,127,
36,22,59,47,197,188,198,206,2,0,75,6,207,38,49,179,18,10,158,79,218,85,0,96,89,209,115,124,34,177,115,75,204,8,59,10,0,44,43,120,134,196,252,103,203,99,231,217,152,137,118,19,0,88,81,244,140,142,185,179,
165,177,51,47,102,47,187,8,0,244,37,122,198,199,60,208,178,216,41,191,75,232,40,187,7,0,244,55,122,238,106,209,247,237,28,110,215,0,128,129,68,207,90,49,151,54,60,118,102,196,236,110,183,0,128,193,68,
207,176,242,87,188,59,239,162,52,205,85,190,107,7,0,168,50,124,182,140,185,174,65,239,234,188,47,102,168,157,1,0,170,142,158,242,215,214,247,139,185,169,166,208,121,42,230,148,242,55,201,236,6,0,208,139,
248,217,49,230,156,152,233,61,248,64,242,101,49,71,199,140,178,242,0,64,29,225,51,52,102,135,152,15,199,124,61,230,198,152,199,98,94,136,153,219,249,110,156,190,204,236,152,39,99,126,217,249,235,237,83,
58,239,38,121,55,7,24,148,255,5,252,157,148,202,131,88,195,228,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PitchEditor::pngItem_1171946_png = (const char*) resource_PitchEditor_pngItem_1171946_png;
const int PitchEditor::pngItem_1171946_pngSize = 9199;

// JUCER_RESOURCE: saveas128_png, 2805, "../save-as-128.png"
static const unsigned char resource_PitchEditor_saveas128_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,128,0,0,0,128,8,6,0,0,0,195,62,97,203,0,0,0,9,112,72,89,115,0,0,14,196,0,0,14,196,
1,149,43,14,27,0,0,10,167,73,68,65,84,120,156,237,157,105,168,93,213,25,134,159,111,247,18,130,132,96,229,82,68,130,180,165,216,252,8,86,210,32,33,63,108,72,213,14,182,78,213,18,59,68,26,83,177,65,75,
170,146,136,67,69,36,216,26,130,8,90,41,26,108,41,209,130,77,69,49,38,49,54,116,144,14,90,83,211,170,181,96,173,45,169,136,168,88,13,241,154,152,188,253,177,214,49,39,251,158,115,238,217,107,15,103,88,
235,129,3,185,59,103,13,103,125,239,94,195,183,38,163,79,36,205,1,150,1,167,0,31,6,102,251,207,132,255,0,204,2,178,182,96,179,251,140,62,31,174,106,222,247,159,81,137,119,10,216,12,60,106,102,135,107,
136,255,3,108,166,47,72,58,5,88,7,156,75,255,6,77,84,195,110,92,217,63,110,54,163,169,130,232,26,171,164,73,224,54,224,107,212,251,118,38,122,115,24,248,57,112,133,153,189,89,117,228,29,5,32,105,9,176,
5,56,190,234,4,19,193,236,5,46,50,179,39,170,140,116,154,0,36,157,13,220,15,28,83,101,66,57,106,109,215,134,136,170,107,206,41,224,10,224,158,170,154,132,163,98,241,111,254,78,234,51,254,46,96,61,240,
90,77,241,55,73,63,29,215,217,185,127,79,248,112,179,129,99,129,79,3,43,40,222,183,250,1,112,93,165,29,68,73,199,73,250,175,234,225,144,164,155,36,165,190,68,14,73,11,36,253,43,160,76,127,38,105,86,149,
25,217,84,157,189,167,113,191,164,202,242,58,110,72,58,85,210,123,1,229,186,85,82,249,218,90,210,124,185,183,180,14,222,144,244,145,10,202,105,172,145,180,35,176,124,127,37,105,110,104,186,45,7,206,85,
212,55,212,123,197,204,70,190,205,151,52,209,246,103,123,251,63,83,251,61,101,102,251,250,72,226,69,224,204,128,172,45,3,182,73,58,203,204,222,42,26,120,194,255,176,11,2,18,142,6,185,106,246,57,96,30,
71,94,154,126,185,7,248,118,31,223,219,95,52,95,109,44,225,136,8,10,249,10,50,31,248,216,18,137,199,192,44,92,25,21,53,126,17,202,186,148,23,3,59,36,29,87,36,80,6,44,40,153,112,12,100,212,239,13,125,183,
130,56,22,81,80,4,25,245,58,124,198,133,246,9,175,186,56,80,81,60,139,128,173,146,250,170,213,147,0,198,147,197,184,62,193,140,163,131,12,248,80,205,153,25,7,183,239,4,245,55,1,85,213,0,45,22,3,15,105,
6,63,65,134,235,224,212,73,213,63,108,92,169,227,69,89,10,108,81,15,143,97,70,253,109,91,98,176,124,30,248,169,186,184,225,147,0,226,96,57,176,81,29,220,241,77,52,1,137,225,96,13,240,221,252,195,38,198,
183,227,192,184,148,211,70,73,71,185,155,199,225,71,53,65,19,163,128,58,22,151,230,153,0,54,75,154,215,122,208,68,19,48,14,195,192,38,104,66,0,0,147,192,166,86,167,176,137,170,45,13,3,135,143,51,113,139,
125,83,19,16,49,235,37,205,78,195,192,120,57,17,88,149,4,16,55,231,165,38,32,110,178,36,128,200,201,72,251,253,162,166,137,26,32,249,1,134,152,38,4,144,252,0,67,76,234,3,68,78,18,64,228,140,203,44,87,
34,144,180,30,32,114,154,120,251,211,48,115,136,73,213,127,228,36,1,68,78,18,64,228,164,62,64,228,164,185,128,200,73,53,64,228,36,1,68,78,19,171,129,198,65,0,175,1,223,12,12,251,82,149,25,169,154,38,4,
48,41,105,210,204,94,111,32,173,90,48,179,253,184,227,90,235,228,99,53,199,223,145,166,154,128,229,13,164,51,178,72,58,1,184,116,16,105,55,229,7,184,81,210,73,13,165,53,82,248,67,186,54,48,160,115,154,
154,18,192,36,176,83,210,185,146,198,161,79,80,9,146,22,0,15,225,55,105,12,130,38,151,132,159,136,59,129,252,85,73,175,3,251,112,171,133,166,152,126,241,66,93,23,49,12,19,115,113,103,252,13,244,133,104,
122,79,64,6,156,224,63,137,33,32,205,5,68,78,18,64,228,36,1,68,78,18,64,228,36,1,68,78,18,64,228,36,1,68,78,18,64,228,36,1,68,78,18,64,228,36,1,68,78,18,64,228,36,1,68,78,85,179,129,187,128,27,112,83,
188,137,250,201,128,139,129,213,148,220,220,91,133,0,238,0,174,50,179,116,18,72,179,60,35,233,119,192,102,74,172,41,40,219,4,108,7,190,151,140,63,24,204,236,151,192,186,50,113,148,17,192,97,96,157,153,
141,251,202,157,97,231,71,148,88,122,94,86,0,133,110,169,76,84,143,127,1,223,14,13,31,221,49,177,146,22,2,151,224,58,172,191,1,158,28,229,61,11,101,137,74,0,254,22,243,109,64,235,54,243,181,192,62,73,
187,129,29,184,62,205,179,35,216,167,9,206,111,108,126,128,69,28,49,126,139,57,192,105,192,122,224,41,224,31,146,54,73,58,95,210,100,211,25,12,36,248,48,206,216,4,240,10,189,11,43,3,62,10,172,196,45,97,
255,167,164,29,146,46,151,116,82,183,171,215,70,153,168,154,0,224,5,224,85,250,95,150,62,23,119,187,198,153,184,106,246,5,73,143,224,54,115,236,30,135,17,208,216,41,186,23,102,54,5,252,62,48,248,44,224,
100,224,90,224,15,184,166,226,118,73,203,70,121,183,83,84,2,240,236,172,32,142,12,248,56,238,30,190,157,56,49,92,239,247,249,13,130,212,9,44,192,46,186,111,59,155,2,190,229,63,191,0,250,25,30,102,184,
109,111,55,3,119,13,72,4,193,157,192,178,153,29,197,163,224,95,194,245,5,22,228,158,31,0,46,49,179,251,252,223,63,145,52,7,56,21,56,11,119,7,239,124,122,191,52,171,128,76,210,119,70,101,40,89,214,19,56,
18,63,178,29,51,59,12,60,222,225,191,238,0,238,203,125,119,159,153,237,50,179,171,128,79,249,207,58,224,9,186,255,246,149,192,221,189,110,236,30,38,98,108,2,0,182,118,120,54,223,204,186,6,48,179,247,205,
236,89,51,187,21,248,12,240,73,186,251,224,87,48,34,34,136,85,0,79,50,125,30,99,137,164,190,14,105,240,181,200,9,184,182,191,27,45,17,52,209,39,72,157,192,34,152,217,219,76,31,14,30,11,44,233,39,188,119,
8,221,192,204,125,168,21,52,211,49,76,158,192,0,58,53,3,103,245,25,246,116,156,115,168,31,86,49,184,209,193,140,196,44,128,199,152,94,117,158,62,147,161,124,187,126,11,197,202,110,21,112,231,48,138,32,
102,1,188,12,60,159,123,246,9,220,80,175,23,43,128,133,1,233,93,10,220,62,108,34,136,86,0,190,35,183,61,247,56,3,190,212,45,140,164,249,192,141,37,146,93,141,19,65,213,229,158,58,129,129,116,234,7,156,
147,55,144,164,73,73,27,128,167,129,121,37,211,188,12,216,88,177,8,74,117,2,71,206,153,83,33,187,113,83,196,237,44,196,249,249,145,52,75,210,101,192,30,224,106,224,152,10,210,204,112,115,8,27,134,97,122,
57,163,156,59,119,164,197,227,143,128,205,123,5,103,1,23,75,58,31,183,64,228,46,170,63,213,44,3,214,0,235,7,45,130,161,234,144,12,136,7,113,29,187,118,174,161,254,43,245,50,220,146,52,36,93,231,251,36,
141,51,240,42,104,8,248,53,211,189,130,19,52,83,54,45,17,220,88,178,38,72,157,192,80,204,236,45,58,79,14,53,69,6,92,15,92,47,41,52,142,228,9,44,201,58,156,95,96,80,100,184,225,229,53,129,34,8,222,23,144,
49,254,103,242,206,136,153,189,140,115,3,231,71,4,77,146,225,86,38,135,136,96,29,129,75,221,146,0,60,102,246,60,112,14,238,118,144,65,209,18,193,154,34,34,240,205,216,151,113,179,156,133,19,76,120,204,
236,207,56,17,12,114,203,91,6,108,164,184,8,222,4,190,128,243,109,20,74,44,209,134,153,253,17,56,15,120,107,128,217,200,112,151,72,172,14,20,193,51,69,18,74,228,48,179,223,2,95,161,68,231,170,2,38,128,
219,41,120,149,140,153,189,134,19,193,179,253,124,63,9,160,11,102,182,11,184,144,193,158,122,178,31,120,177,104,32,51,123,21,56,3,183,248,181,39,101,231,2,70,218,21,60,19,102,246,24,112,17,206,16,77,243,
54,112,158,23,98,97,218,68,208,83,64,101,230,2,14,151,8,59,50,152,217,35,52,47,130,142,198,151,180,180,200,66,83,51,219,139,19,193,127,186,124,229,64,106,2,250,192,204,30,198,93,28,57,213,64,114,211,140,
47,9,73,87,226,118,33,253,184,136,219,216,251,56,206,192,237,137,204,179,23,73,155,21,198,187,163,176,236,185,74,36,93,224,127,119,93,252,79,210,178,92,154,200,109,59,59,212,246,189,141,42,232,44,146,
180,200,199,223,206,106,36,221,27,152,217,232,4,0,32,233,171,146,222,11,44,179,94,244,107,124,249,191,215,170,184,8,206,150,116,208,199,113,80,210,188,36,128,0,36,125,67,213,138,160,155,241,111,214,116,
227,183,216,163,128,93,201,146,110,241,225,31,104,61,184,55,48,211,209,10,0,42,21,65,136,241,159,147,187,110,54,36,223,179,125,248,133,173,7,119,5,102,60,118,1,32,105,165,202,137,160,81,227,183,165,113,
92,251,31,73,0,129,232,136,8,14,246,46,170,142,116,50,126,38,233,135,42,96,124,185,163,107,182,74,58,62,244,71,220,25,144,121,41,9,0,248,64,4,151,169,152,8,186,189,249,27,2,140,255,111,255,255,123,228,
78,65,43,252,3,110,43,110,123,73,174,234,155,91,178,252,198,2,21,19,65,37,213,126,206,248,45,254,162,246,234,189,207,204,111,44,110,123,73,73,0,71,225,141,120,121,15,35,214,109,252,22,15,168,200,240,80,
71,134,5,69,73,2,200,225,141,185,166,139,49,155,48,190,124,92,39,23,201,244,77,97,246,79,2,232,132,55,234,149,57,163,54,101,252,22,87,23,201,240,247,147,0,170,197,27,119,173,55,110,211,198,151,220,54,
182,190,152,160,220,44,87,244,163,128,78,152,25,146,110,197,77,151,255,53,63,177,131,59,81,236,90,58,175,199,120,30,56,195,204,94,105,11,115,18,110,34,168,215,137,36,237,188,209,119,102,229,58,46,161,
53,192,168,156,165,59,20,244,241,230,255,173,228,155,47,31,119,254,4,180,158,153,250,98,160,0,14,230,51,155,232,142,55,254,250,154,141,47,185,211,75,11,101,108,142,194,166,56,15,74,234,183,74,138,30,111,
204,119,186,148,101,217,54,191,197,78,133,56,231,36,109,9,16,192,33,185,3,19,18,125,34,233,92,77,127,217,170,50,254,83,234,243,148,179,78,25,91,26,32,0,41,215,187,77,204,140,220,44,98,203,99,88,149,241,
247,168,76,127,76,174,125,218,22,32,128,7,21,190,161,49,90,36,173,86,117,109,126,216,28,64,135,76,245,106,163,186,113,72,210,181,165,19,143,16,229,22,115,4,26,255,185,178,198,63,234,108,84,73,203,113,
23,17,22,93,44,250,40,112,55,176,23,183,142,126,10,55,6,110,223,119,120,128,222,171,136,71,242,236,225,54,222,15,61,228,65,197,199,249,224,252,5,159,245,203,191,131,153,118,56,174,164,53,184,189,105,161,
43,134,199,126,169,120,23,182,3,23,250,99,103,10,33,105,45,197,206,30,124,6,248,156,223,5,84,61,114,139,28,234,92,253,58,174,108,149,84,248,32,41,185,62,216,53,234,61,147,216,226,79,42,58,229,27,130,164,
133,146,158,174,175,172,198,150,109,10,16,129,47,243,75,213,123,137,217,54,53,57,255,34,183,68,105,165,92,103,35,209,63,65,53,129,47,243,211,36,253,61,23,223,59,114,75,197,42,63,212,171,251,1,249,71,103,
42,3,150,2,95,199,159,161,151,152,145,109,192,173,189,238,32,232,134,220,208,250,68,220,9,230,251,128,189,117,221,64,242,127,71,152,211,191,30,169,17,6,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PitchEditor::saveas128_png = (const char*) resource_PitchEditor_saveas128_png;
const int PitchEditor::saveas128_pngSize = 2805;

// JUCER_RESOURCE: load_jpg, 11415, "../load.jpg"
static const unsigned char resource_PitchEditor_load_jpg[] = { 255,216,255,224,0,16,74,70,73,70,0,1,1,0,0,1,0,1,0,0,255,219,0,67,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,255,219,0,67,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
255,192,0,17,8,1,44,1,44,3,1,34,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,16,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,125,1,2,3,0,4,17,5,18,33,49,65,6,
19,81,97,7,34,113,20,50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,40,41,42,52,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,
102,103,104,105,106,115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,
196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,243,244,245,246,247,248,249,250,255,196,0,31,1,0,3,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,2,3,4,
5,6,7,8,9,10,11,255,196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,34,50,129,8,20,66,145,161,177,193,9,35,51,82,240,21,98,114,209,10,22,36,52,225,37,241,23,
24,25,26,38,39,40,41,42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,130,131,132,133,134,135,136,137,138,146,147,148,
149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,226,227,228,229,230,231,232,233,
234,242,243,244,245,246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,254,252,137,57,60,158,167,185,245,164,201,245,63,153,161,186,159,169,254,116,148,1,231,190,61,39,26,87,39,173,239,115,255,0,
78,149,231,89,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,56,19,145,201,234,59,159,90,250,31,39,212,254,102,190,119,94,163,234,63,157,125,15,64,11,147,234,127,51,94,121,227,210,113,
165,114,122,222,247,63,244,233,94,133,94,121,227,222,154,87,214,247,249,90,80,7,157,228,250,159,204,210,130,114,57,61,71,115,235,77,165,94,163,234,63,157,0,125,17,147,234,127,51,70,79,169,252,205,37,20,
1,231,190,61,39,26,87,39,173,239,115,255,0,78,149,231,89,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,56,19,145,201,234,59,159,90,250,31,39,212,254,102,190,119,94,163,234,63,157,125,
15,64,11,147,234,127,51,94,121,227,210,113,165,114,122,222,247,63,244,233,94,133,94,125,227,181,103,254,201,85,5,152,181,232,0,12,147,255,0,30,148,1,231,57,62,167,243,52,160,156,142,79,81,220,250,214,
204,62,31,212,230,77,235,1,80,70,70,242,20,159,76,3,235,239,142,120,170,23,22,55,54,114,4,158,38,67,144,65,35,130,51,212,30,132,125,15,215,20,1,239,185,62,167,243,52,100,250,159,204,210,81,64,30,123,227,
210,113,165,114,122,222,247,63,244,233,94,117,147,234,127,51,94,137,227,222,154,87,214,247,249,90,87,157,80,3,129,57,28,158,163,185,245,175,161,242,125,79,230,107,231,117,234,62,163,249,215,208,244,0,
185,62,167,243,53,231,158,61,39,26,87,39,173,239,115,255,0,78,149,232,85,231,158,61,233,165,125,111,127,149,165,0,121,222,79,169,252,205,40,39,35,147,212,119,62,180,218,85,234,62,163,249,208,7,209,25,
62,167,243,52,100,250,159,204,210,81,64,30,123,227,210,113,165,114,122,222,247,63,244,233,94,117,147,234,127,51,94,137,227,222,154,87,214,247,249,90,87,157,80,3,129,57,28,158,163,185,245,175,161,242,125,
79,230,107,231,117,234,62,163,249,215,208,244,0,185,62,167,243,53,34,18,65,201,207,63,225,81,84,169,208,253,127,160,160,15,56,62,61,25,63,241,42,61,79,252,190,143,95,250,244,164,255,0,132,244,127,208,
40,255,0,224,104,255,0,228,74,243,182,234,126,167,249,210,80,7,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,
75,163,192,93,53,95,173,151,242,187,175,67,160,15,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,175,67,175,158,27,169,250,159,231,64,30,137,255,0,
9,232,255,0,160,81,255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,124,230,189,23,192,93,53,95,173,151,242,187,160,3,254,
16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,215,161,209,64,30,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,
255,0,145,43,206,219,169,250,159,231,73,64,30,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,143,1,116,
213,126,182,95,202,238,189,14,128,60,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,189,14,190,126,130,222,75,153,214,24,148,187,187,96,5,28,245,235,
232,0,234,73,232,57,160,15,68,131,198,210,92,202,176,195,163,187,187,28,0,183,153,252,79,250,39,2,186,25,66,222,27,121,174,109,209,101,133,92,162,111,243,68,109,38,194,216,98,137,184,252,138,51,183,3,
7,30,181,145,163,232,241,105,177,6,96,26,229,192,46,253,118,241,247,87,216,100,243,138,219,160,2,160,184,181,130,234,51,28,241,171,169,28,100,2,84,250,169,234,15,210,167,162,128,51,245,79,16,220,105,155,
89,180,207,180,66,127,229,178,93,20,0,250,50,253,153,246,159,79,152,231,183,92,86,39,252,39,163,254,129,71,255,0,3,71,255,0,34,87,79,44,81,207,27,69,34,134,71,4,21,35,32,255,0,159,211,183,53,230,154,222,
137,38,159,35,77,18,150,181,115,242,183,93,132,147,242,183,24,7,211,158,71,60,30,40,3,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,
15,250,10,159,252,2,31,252,151,71,128,186,106,191,91,47,229,119,94,135,64,30,120,60,4,1,7,251,84,241,207,252,121,15,254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,94,135,95,60,55,83,245,63,
206,128,61,19,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,249,205,122,47,128,186,106,191,91,
47,229,119,64,7,252,32,67,254,130,167,255,0,0,135,255,0,37,208,60,4,1,7,251,84,241,207,252,121,15,254,75,175,67,162,128,60,240,248,244,2,71,246,81,227,143,248,253,31,252,137,71,252,39,163,254,129,71,255,
0,3,71,255,0,34,87,157,183,83,245,63,206,146,128,61,27,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,
30,2,233,170,253,108,191,149,221,122,29,0,121,224,240,16,4,31,237,83,199,63,241,228,63,249,46,131,227,208,9,31,217,71,142,63,227,244,127,242,37,122,29,124,240,221,79,212,255,0,58,0,244,79,248,79,71,253,
2,143,254,6,143,254,68,169,19,199,195,7,26,87,127,249,254,199,167,253,57,154,243,106,149,58,31,175,244,20,0,194,14,79,7,169,236,125,105,48,125,15,228,107,232,134,234,126,167,249,210,80,7,158,120,8,16,
53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,35,147,212,119,62,181,244,53,0,124,241,
131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,28,158,163,185,245,160,1,129,201,224,
245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,92,29,180,19,93,74,176,196,25,157,142,0,25,252,79,
208,119,61,5,0,123,243,48,80,73,56,2,184,253,39,72,139,78,143,113,1,238,28,124,242,16,50,7,93,171,199,3,36,231,212,242,123,0,154,70,145,22,157,16,102,249,238,29,71,152,231,248,123,237,83,215,3,142,79,
38,182,168,0,162,138,40,0,162,138,40,0,168,229,138,57,227,104,165,64,241,184,33,149,134,65,7,252,245,235,82,81,64,20,60,63,166,46,151,62,162,17,179,21,201,182,104,129,234,60,191,180,110,83,235,143,49,
112,123,253,122,244,245,135,44,81,205,27,69,34,134,71,4,16,125,255,0,168,237,94,107,173,232,178,233,242,25,97,220,246,174,73,83,201,49,255,0,176,248,244,236,122,17,232,120,32,30,205,95,60,176,57,60,30,
167,177,245,161,73,200,228,245,29,207,173,125,13,64,31,60,96,250,31,200,215,162,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,148,1,232,116,87,207,25,62,
167,243,52,170,78,71,39,168,238,125,104,0,96,114,120,61,79,99,235,73,131,232,127,35,95,67,209,64,30,121,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,87,
157,228,250,159,204,208,7,208,245,243,203,3,147,193,234,123,31,90,20,156,142,79,81,220,250,215,208,212,1,243,198,15,161,252,141,72,128,128,114,49,207,248,87,208,117,42,116,63,95,232,40,2,54,234,126,167,
249,210,87,158,159,30,140,159,248,149,30,167,254,95,71,175,253,122,82,127,194,122,63,232,20,127,240,52,127,242,37,0,30,61,233,165,125,111,127,149,165,121,213,122,55,30,55,29,244,207,236,195,255,0,95,158,
119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,0,243,181,234,62,163,249,215,208,245,231,131,192,64,16,127,181,79,28,255,0,199,144,255,
0,228,186,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,148,1,232,117,231,158,61,233,165,125,111,127,149,165,31,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,
246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,228,3,206,105,87,168,250,143,231,94,137,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,3,
208,232,175,60,62,61,0,145,253,148,120,227,254,63,71,255,0,34,84,246,254,53,146,234,84,134,29,29,157,220,224,1,123,156,122,147,254,137,192,3,147,64,7,141,109,229,185,147,71,134,21,44,238,215,160,1,239,
246,78,254,195,159,160,53,103,71,209,226,211,98,5,128,107,134,251,238,121,219,159,225,95,65,250,251,243,91,110,230,224,197,44,177,42,72,138,216,93,194,79,44,190,210,224,62,213,206,74,46,78,209,156,14,
56,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,81,203,20,115,198,241,74,161,209,193,86,86,25,4,26,146,138,0,243,45,107,68,147,79,147,207,136,22,181,119,224,142,124,178,121,218,223,174,9,198,126,
181,236,181,135,44,81,205,27,69,42,7,71,24,101,97,193,31,208,250,17,200,170,154,158,191,113,165,133,99,167,27,152,72,230,101,185,242,240,125,25,62,207,38,15,190,236,26,0,233,235,207,60,123,211,74,250,
222,255,0,43,74,63,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,200,7,156,210,175,81,245,31,206,189,19,
254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,7,161,209,94,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,
163,255,0,145,40,0,241,239,77,43,235,123,252,173,43,206,171,209,184,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,167,252,32,67,254,130,167,255,0,0,
135,255,0,37,208,7,157,175,81,245,31,206,190,135,175,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,160,15,67,169,83,161,250,255,0,65,94,111,255,0,
9,232,255,0,160,81,255,0,192,209,255,0,200,149,34,120,248,96,227,74,239,255,0,63,216,244,255,0,167,51,64,30,110,221,79,212,255,0,58,74,113,7,39,131,212,246,62,180,152,62,135,242,52,1,232,158,2,233,170,
253,108,191,149,221,122,29,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,128,10,249,225,186,159,169,254,117,244,61,124,242,192,228,240,122,158,199,214,128,27,94,139,224,46,154,175,214,203,249,
93,215,157,224,250,31,200,215,162,120,8,16,53,92,140,115,101,215,254,222,232,3,208,232,162,145,136,80,73,56,2,128,60,2,11,121,46,167,16,196,165,157,219,0,0,79,126,190,223,83,94,157,164,105,17,105,209,
43,17,155,134,31,188,108,228,12,255,0,8,227,177,234,123,159,165,26,70,143,22,155,30,227,135,184,126,94,76,116,207,240,174,121,0,103,30,254,149,181,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,
64,5,20,81,64,5,71,44,81,205,27,197,42,135,141,212,171,41,25,4,30,63,253,71,177,169,40,160,15,49,215,52,71,211,228,50,194,25,237,92,252,173,212,161,63,194,223,208,247,250,240,122,63,1,116,213,126,182,
95,202,238,186,121,98,142,120,218,41,84,58,56,195,41,255,0,60,31,122,169,160,105,99,75,184,212,66,176,48,220,155,102,135,212,121,127,104,222,167,220,121,139,143,81,239,154,0,233,232,162,138,0,249,225,
186,159,169,254,116,148,230,7,39,131,212,246,62,180,152,62,135,242,52,1,232,158,2,233,170,253,108,191,149,221,122,29,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,128,10,249,225,186,159,169,254,
117,244,61,124,242,192,228,240,122,158,199,214,128,27,82,167,67,245,254,130,163,193,244,63,145,169,16,16,14,70,57,255,0,10,0,250,17,186,159,169,254,116,148,173,212,253,79,243,164,160,15,60,241,233,32,
105,88,56,230,247,167,253,186,87,157,228,250,159,204,215,162,120,247,166,149,245,189,254,86,149,231,84,0,229,39,35,147,212,119,62,181,244,53,124,240,189,71,212,127,58,250,30,128,10,243,207,30,146,6,149,
131,142,111,122,127,219,165,122,29,112,126,53,183,150,234,77,30,24,80,187,187,94,128,7,108,253,147,146,123,1,235,64,30,119,111,4,247,82,172,80,171,59,177,0,0,79,126,231,216,117,62,213,233,218,62,145,30,
155,16,36,239,184,145,71,152,231,177,235,181,125,135,31,136,239,193,163,72,210,34,211,162,5,148,53,195,125,233,63,186,8,251,171,232,61,73,228,227,60,116,173,170,0,40,162,138,0,40,162,138,0,40,162,138,
0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,41,146,198,147,70,209,200,161,145,193,86,83,220,31,228,125,15,80,121,167,209,64,30,99,173,232,210,233,242,25,98,222,246,206,126,86,228,
236,207,69,108,126,67,215,30,164,103,159,82,114,57,61,71,115,235,94,213,44,81,207,27,69,42,7,141,193,12,172,50,8,63,231,175,90,243,109,107,68,147,79,151,206,136,110,181,119,249,79,120,242,126,235,255,
0,67,208,251,30,160,30,203,69,20,80,7,158,120,244,144,52,172,28,115,123,211,254,221,43,206,242,125,79,230,107,209,60,123,211,74,250,222,255,0,43,74,243,170,0,114,147,145,201,234,59,159,90,250,26,190,120,
94,163,234,63,157,125,15,64,5,74,157,15,215,250,10,138,165,78,135,235,253,5,0,121,193,241,232,201,255,0,137,81,234,127,229,244,122,255,0,215,165,39,252,39,163,254,129,71,255,0,3,71,255,0,34,87,157,183,
83,245,63,206,146,128,61,27,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,30,2,233,170,253,108,191,
149,221,122,29,0,121,224,240,16,4,31,237,83,199,63,241,228,63,249,46,131,227,208,9,31,217,71,142,63,227,244,127,242,37,122,29,124,243,130,205,129,212,177,3,243,160,15,73,183,241,180,151,50,164,48,233,
12,206,228,0,5,239,175,175,250,39,3,220,224,123,215,74,238,110,12,82,203,18,164,168,173,181,119,121,158,95,153,183,122,171,237,92,231,106,228,237,25,192,224,87,61,160,105,43,99,110,179,72,160,220,204,
160,177,231,229,67,202,128,15,124,16,79,225,138,232,104,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,168,229,138,
57,145,163,145,67,163,12,21,35,35,255,0,214,59,26,146,138,0,207,213,60,65,62,150,21,155,78,251,68,71,3,206,91,175,47,230,244,100,54,239,131,255,0,2,57,234,61,6,39,252,39,163,254,129,71,255,0,3,71,255,
0,34,87,75,60,17,220,196,240,202,161,145,198,8,63,161,252,15,63,203,7,154,242,189,95,77,125,54,229,163,57,49,55,205,27,114,65,83,239,129,200,232,104,3,176,227,198,227,190,153,253,152,127,235,243,206,251,
103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,10,159,252,2,31,252,151,71,128,186,106,191,91,47,229,119,94,135,64,30,120,60,4,1,7,251,84,241,207,252,121,15,254,75,160,248,244,
2,71,246,81,227,143,248,253,31,252,137,94,135,95,60,55,83,245,63,206,128,61,19,254,19,209,255,0,64,163,255,0,129,163,255,0,145,42,68,241,240,193,198,149,223,254,127,177,233,255,0,78,102,188,218,165,78,
135,235,253,5,0,48,131,147,193,234,123,31,90,76,31,67,249,26,250,33,186,159,169,254,116,148,1,231,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,121,
222,79,169,252,205,0,125,15,95,61,169,100,144,54,210,118,182,122,30,198,154,164,228,114,122,142,231,214,190,134,160,15,58,182,241,85,175,150,139,60,51,35,170,170,146,129,89,73,0,2,64,37,72,252,189,125,
49,93,6,153,127,6,170,37,54,187,255,0,115,229,249,129,212,2,60,205,251,122,49,231,247,109,159,78,43,165,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,101,246,119,244,63,151,255,0,94,143,33,253,
15,229,255,0,215,175,9,201,245,63,153,165,82,114,57,61,71,115,235,64,30,159,255,0,9,46,151,255,0,61,37,255,0,191,71,252,104,30,36,210,201,192,121,114,120,31,186,63,227,93,189,35,116,63,67,252,168,3,25,
88,58,171,142,140,161,134,122,225,128,35,63,129,167,82,158,167,234,127,157,37,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,21,157,125,170,90,105,236,139,114,206,166,64,74,237,77,195,0,224,
231,145,131,90,53,114,215,248,168,3,148,255,0,132,151,75,255,0,158,146,255,0,223,163,254,53,167,167,95,219,106,158,119,217,11,183,145,229,249,155,147,110,60,205,251,113,147,207,250,182,207,167,30,181,
210,87,158,120,244,144,52,172,28,115,123,211,254,221,40,3,178,251,59,250,31,203,255,0,175,71,144,254,135,242,255,0,235,215,132,228,250,159,204,210,169,57,28,158,163,185,245,160,15,75,111,19,233,171,208,
78,223,238,198,185,252,65,113,92,166,187,171,46,166,241,172,81,20,142,32,118,147,203,177,39,156,240,48,61,6,79,173,123,53,20,1,231,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,
131,142,111,122,127,219,165,121,222,79,169,252,205,0,125,15,95,60,176,57,60,30,167,177,245,161,73,200,228,245,29,207,173,125,13,64,31,60,96,250,31,200,212,136,8,7,35,28,255,0,133,125,7,82,167,67,245,254,
130,128,35,110,167,234,127,157,37,121,233,241,232,201,255,0,137,81,234,127,229,244,122,255,0,215,165,39,252,39,163,254,129,71,255,0,3,71,255,0,34,80,1,227,222,154,87,214,247,249,90,87,157,87,163,113,227,
113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,160,15,59,94,163,234,63,157,125,15,94,120,60,4,1,7,251,84,241,207,252,
121,15,254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,64,30,135,94,121,227,222,154,87,214,247,249,90,81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,
126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,64,60,230,149,122,143,168,254,117,232,159,240,129,15,250,10,159,252,2,31,252,151,64,240,16,4,31,237,83,199,63,241,228,63,249,46,128,
61,14,145,186,31,161,254,85,231,167,199,160,18,63,178,143,28,127,199,232,255,0,228,74,81,227,192,231,111,246,89,27,184,207,219,71,25,255,0,183,74,0,234,219,169,250,159,231,73,77,71,243,17,36,198,60,196,
87,198,115,141,224,54,51,223,25,198,105,212,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,85,203,95,226,255,0,62,149,78,178,53,47,16,13,21,227,83,105,246,159,57,75,103,207,242,118,225,182,227,
253,76,187,179,248,99,222,128,58,250,243,207,30,244,210,190,183,191,202,210,143,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,
221,191,248,118,242,1,231,52,171,212,125,71,243,175,68,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,1,232,116,87,158,31,30,128,72,254,202,
60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,0,60,123,211,74,250,222,255,0,43,74,243,170,244,110,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,
253,151,253,189,219,255,0,135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,1,231,107,212,125,71,243,175,161,235,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,
254,202,60,113,255,0,31,163,255,0,145,40,3,208,234,84,232,126,191,208,87,155,255,0,194,122,63,232,20,127,240,52,127,242,37,72,158,62,24,56,210,187,255,0,207,246,61,63,233,204,208,7,155,183,83,245,63,206,
146,156,65,201,224,245,61,143,173,38,15,161,252,141,0,122,39,128,186,106,191,91,47,229,119,94,135,94,121,224,32,64,213,114,49,205,151,95,251,123,175,67,160,2,190,120,110,167,234,127,157,125,15,95,60,176,
57,60,30,167,177,245,160,6,215,162,248,11,166,171,245,178,254,87,117,231,120,62,135,242,53,232,158,2,4,13,87,35,28,217,117,255,0,183,186,0,244,58,40,162,128,62,120,110,167,234,127,157,58,63,190,191,90,
70,7,39,131,212,246,62,180,232,193,222,188,30,190,134,128,61,154,223,254,61,224,255,0,174,49,127,232,11,83,84,54,255,0,241,239,7,253,113,139,255,0,64,90,154,128,10,40,162,128,10,40,162,128,10,40,162,128,
10,40,162,128,10,40,162,128,10,225,60,97,254,182,215,254,185,55,254,140,174,238,184,95,24,3,230,218,240,127,213,55,254,135,64,28,77,122,47,128,186,106,191,91,47,229,119,94,119,131,232,127,35,94,137,224,
32,64,213,114,49,205,151,95,251,123,160,15,67,162,138,40,3,231,134,234,126,167,249,210,83,152,28,158,15,83,216,250,210,96,250,31,200,208,7,162,120,11,166,171,245,178,254,87,117,232,117,231,158,2,4,13,
87,35,28,217,117,255,0,183,186,244,58,0,43,231,134,234,126,167,249,215,208,245,243,203,3,147,193,234,123,31,90,0,109,74,157,15,215,250,10,143,7,208,254,70,164,64,64,57,24,231,252,40,3,232,70,234,126,167,
249,210,82,183,83,245,63,206,146,128,60,243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,94,137,227,222,154,87,214,247,249,90,87,157,80,3,148,156,142,79,81,220,250,215,208,213,243,
194,245,31,81,252,235,232,122,0,43,207,60,122,72,26,86,14,57,189,233,255,0,110,149,232,117,231,158,61,233,165,125,111,127,149,165,0,121,222,79,169,252,205,42,147,145,201,234,59,159,90,109,42,245,31,81,
252,232,3,232,122,70,232,126,135,249,82,210,55,67,244,63,202,128,50,79,83,245,63,206,146,149,186,159,169,254,116,148,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,85,203,95,226,170,117,114,
215,248,191,207,165,0,92,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,
15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,
161,232,0,169,83,161,250,255,0,65,81,84,169,208,253,127,160,160,15,56,62,61,25,63,241,42,61,79,252,190,143,95,250,244,164,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,243,182,234,126,167,249,210,
80,7,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,163,192,93,53,95,173,151,242,187,175,67,160,15,60,30,
2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,175,67,175,158,27,169,250,159,231,64,30,137,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,188,120,
220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,124,230,189,23,192,93,53,95,173,151,242,187,160,3,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,
131,253,170,120,231,254,60,135,255,0,37,215,161,209,64,30,120,124,122,1,35,251,40,241,199,252,126,143,254,68,165,30,60,14,118,255,0,101,145,187,140,253,180,113,159,251,116,175,58,110,167,234,127,157,58,
63,190,191,90,0,246,180,127,49,18,76,99,204,69,124,103,56,222,3,99,61,241,156,102,157,80,219,255,0,199,188,31,245,198,47,253,1,106,106,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,
0,43,35,82,241,0,209,94,53,54,159,105,243,148,182,124,255,0,39,110,27,110,63,212,203,187,63,134,61,235,94,184,79,24,127,173,181,255,0,174,77,255,0,163,40,3,67,254,19,209,255,0,64,163,255,0,129,163,255,
0,145,41,120,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,249,205,122,47,128,186,106,191,91,47,229,119,64,7,252,32,67,254,130,167,255,0,0,135,255,0,
37,208,60,4,1,7,251,84,241,207,252,121,15,254,75,175,67,162,128,60,240,248,244,2,71,246,81,227,143,248,253,31,252,137,71,252,39,163,254,129,71,255,0,3,71,255,0,34,87,157,183,83,245,63,206,146,128,61,27,
143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,30,2,233,170,253,108,191,149,221,122,29,0,121,224,240,
16,4,31,237,83,199,63,241,228,63,249,46,131,227,208,9,31,217,71,142,63,227,244,127,242,37,122,29,124,240,221,79,212,255,0,58,0,244,79,248,79,71,253,2,143,254,6,143,254,68,169,19,199,195,7,26,87,127,249,
254,199,167,253,57,154,243,106,149,58,31,175,244,20,0,194,14,79,7,169,236,125,105,48,125,15,228,107,232,134,234,126,167,249,210,80,7,158,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,
26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,35,147,212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,
251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,28,158,163,185,245,160,1,129,201,224,245,61,143,173,58,48,119,175,7,175,161,175,161,40,35,32,
143,81,138,0,193,183,255,0,143,120,63,235,140,95,250,2,212,212,172,48,72,198,57,60,82,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,92,47,140,1,243,109,120,63,234,155,255,0,67,174,234,174,
218,142,28,253,7,215,241,246,160,15,3,193,244,63,145,175,68,240,16,32,106,185,24,230,203,175,253,189,215,161,215,158,120,244,144,52,172,28,115,123,211,254,221,40,3,208,232,175,158,50,125,79,230,105,84,
156,142,79,81,220,250,208,0,192,228,240,122,158,199,214,147,7,208,254,70,190,135,162,128,60,243,192,64,129,170,228,99,155,46,191,246,247,94,135,94,121,227,210,64,210,176,113,205,239,79,251,116,175,59,
201,245,63,153,160,15,161,235,231,150,7,39,131,212,246,62,180,41,57,28,158,163,185,245,175,161,168,3,231,140,31,67,249,26,145,1,0,228,99,159,240,175,160,234,84,232,126,191,208,80,4,109,212,253,79,243,
168,154,88,212,149,102,0,142,163,158,227,62,158,149,192,159,30,140,159,248,149,30,167,254,95,71,175,253,122,87,65,101,127,253,169,107,13,247,149,228,121,193,255,0,117,191,204,219,229,200,241,125,253,137,
156,236,221,247,70,51,142,113,154,0,197,241,149,180,247,195,78,22,145,180,222,81,187,243,54,15,187,191,236,219,115,156,117,216,223,149,112,167,72,212,84,22,107,89,64,0,146,72,224,1,212,215,175,83,37,143,
206,141,226,206,223,48,21,221,140,227,60,103,25,25,252,197,0,120,160,4,48,7,130,8,207,231,95,67,87,158,15,1,130,67,127,106,30,121,199,216,135,215,25,251,87,235,143,194,131,227,208,9,31,217,71,142,63,227,
244,127,242,37,0,122,29,121,231,143,122,105,95,91,223,229,105,71,252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,
59,121,0,243,154,85,234,62,163,249,215,162,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,0,244,58,43,207,15,143,64,36,127,101,30,56,255,0,143,209,255,0,
200,148,127,194,122,63,232,20,127,240,52,127,242,37,0,118,19,41,87,57,238,73,21,21,102,105,58,209,215,190,211,34,218,139,81,104,34,12,166,111,56,200,103,50,109,32,249,81,4,8,34,96,65,13,187,120,57,80,
167,58,116,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,86,141,186,149,78,123,156,213,21,141,164,37,80,128,72,56,98,50,1,199,4,128,70,64,238,50,51,211,35,34,185,17,227,197,95,148,105,71,142,
63,227,244,118,255,0,183,74,0,244,58,243,207,30,244,210,190,183,191,202,210,143,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,
221,191,248,118,242,1,231,52,171,212,125,71,243,175,68,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,1,232,116,87,158,31,30,128,72,254,202,
60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,0,60,123,211,74,250,222,255,0,43,74,224,237,236,238,110,139,11,120,154,82,160,18,20,116,6,187,222,60,110,59,233,159,
217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,58,58,111,135,70,139,36,142,47,13,207,154,20,99,200,242,118,237,221,223,206,151,57,207,160,160,15,60,26,62,165,145,254,137,
47,81,219,222,189,191,207,139,251,227,242,63,225,89,148,80,6,186,176,96,25,78,65,232,126,135,31,206,166,78,135,235,253,5,112,119,254,46,26,93,212,150,39,79,51,249,34,63,222,253,171,203,221,230,70,146,
253,207,179,201,140,111,219,247,142,113,158,51,138,174,158,62,24,56,210,187,255,0,207,246,61,63,233,204,208,7,155,183,83,245,63,206,189,83,195,159,242,6,178,250,79,255,0,165,83,87,150,16,114,120,61,79,
99,235,94,167,225,223,249,3,89,125,39,255,0,210,153,168,3,110,149,122,143,168,254,116,148,171,212,125,71,243,160,13,101,232,62,131,249,87,207,45,212,253,79,243,175,161,135,65,244,31,202,190,122,96,114,
120,61,79,99,235,64,13,175,69,240,23,77,87,235,101,252,174,235,206,240,125,15,228,107,209,60,4,8,26,174,70,57,178,235,255,0,111,116,1,232,116,81,69,0,124,240,221,79,212,255,0,58,74,115,3,147,193,234,123,
31,90,76,31,67,249,26,0,244,79,1,116,213,126,182,95,202,238,187,105,160,198,93,49,142,73,29,59,246,174,39,192,64,129,170,228,99,155,46,191,246,247,94,135,64,24,244,86,155,196,142,57,24,247,28,127,159,
255,0,93,121,156,126,46,148,100,75,104,167,28,101,11,2,127,3,145,199,79,195,241,160,14,230,138,227,127,225,46,143,189,164,159,247,215,255,0,90,183,244,61,73,117,175,180,237,141,161,251,55,147,157,199,
37,188,223,55,167,251,190,95,63,239,10,0,211,162,174,125,151,253,175,243,249,81,246,95,246,232,2,157,21,198,159,23,70,9,31,100,147,143,246,191,250,212,214,241,114,255,0,5,163,103,253,166,61,127,1,64,29,
165,61,35,105,14,7,230,107,27,195,154,155,235,13,120,211,68,177,11,127,179,236,85,221,207,155,231,238,36,183,39,30,90,145,199,4,215,90,20,14,128,10,0,100,113,136,198,7,94,231,185,175,159,27,169,250,159,
231,95,67,215,207,44,14,79,7,169,236,125,104,1,181,232,190,2,233,170,253,108,191,149,221,121,222,15,161,252,141,122,39,128,129,3,85,200,199,54,93,127,237,238,128,61,14,138,40,160,15,158,27,169,250,159,
231,73,78,96,114,120,61,79,99,235,73,131,232,127,35,64,30,137,224,46,154,175,214,203,249,93,215,111,117,252,63,231,214,184,143,1,2,6,171,145,142,108,186,255,0,219,221,118,247,95,195,254,125,104,2,157,
20,81,64,30,89,226,95,249,12,221,253,45,255,0,244,150,26,199,78,135,235,253,5,108,248,144,19,172,221,224,30,150,253,191,233,218,26,198,64,64,57,24,231,252,40,3,232,70,234,126,167,249,214,109,199,250,211,
244,31,202,180,155,169,250,159,231,89,183,63,235,79,209,127,149,0,65,85,238,255,0,227,218,111,250,230,223,202,172,85,123,191,248,246,159,254,185,183,242,160,15,26,201,223,212,253,239,83,235,95,66,215,
207,63,199,255,0,2,254,181,244,53,0,21,231,158,61,36,13,43,7,28,222,244,255,0,183,74,244,58,243,207,30,244,210,190,183,191,202,210,128,60,239,39,212,254,102,149,73,200,228,245,29,207,173,54,149,122,143,
168,254,116,1,244,61,20,81,64,30,121,227,210,64,210,176,113,205,239,79,251,116,175,59,201,245,63,153,175,68,241,239,77,43,235,123,252,173,43,206,168,1,202,78,71,39,168,238,125,107,232,106,249,225,122,
143,168,254,117,244,61,0,21,231,158,61,36,13,43,7,28,222,244,255,0,183,74,244,58,243,207,30,244,210,190,183,191,202,210,128,60,239,39,212,254,102,149,73,200,228,245,29,207,173,54,149,122,143,168,254,116,
1,244,61,20,81,64,30,121,227,210,64,210,176,113,205,239,79,251,116,175,59,201,245,63,153,175,68,241,239,77,43,235,123,252,173,43,206,168,1,202,78,71,39,168,238,125,107,232,106,249,225,122,143,168,254,
117,244,61,0,21,231,158,61,36,13,43,7,28,222,244,255,0,183,74,244,58,243,207,30,244,210,190,183,191,202,210,128,60,239,39,212,254,102,149,73,200,228,245,29,207,173,54,149,122,143,168,254,116,1,244,61,
20,81,64,30,121,227,210,64,210,176,113,205,239,79,251,116,172,207,8,18,103,186,201,39,228,78,255,0,239,214,159,143,122,105,95,91,223,229,105,89,126,16,255,0,143,139,175,247,19,255,0,103,160,14,254,138,
40,160,13,56,63,213,39,208,255,0,51,86,147,161,250,255,0,65,85,96,255,0,84,159,67,252,205,90,78,135,235,253,5,0,121,193,241,232,201,255,0,137,81,234,127,229,244,122,255,0,215,165,110,216,106,99,86,183,
23,130,31,35,115,50,249,126,103,153,141,135,3,231,218,153,207,95,184,49,158,253,107,199,91,169,250,159,231,93,215,132,110,193,73,237,25,185,4,75,26,158,135,32,43,99,61,198,213,56,28,114,79,173,0,118,180,
201,16,72,143,27,116,117,42,126,132,98,159,69,0,114,191,240,130,43,29,227,84,224,252,192,125,136,99,212,12,253,171,243,56,252,59,82,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,43,178,142,118,140,
17,247,135,96,123,127,159,199,233,233,231,143,225,9,183,29,151,72,87,60,18,152,39,158,227,127,7,233,199,242,160,13,31,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,
251,103,254,2,249,126,95,217,127,219,221,191,248,118,243,149,255,0,8,133,199,252,253,39,253,241,255,0,217,215,77,225,221,54,77,20,93,135,144,75,246,147,6,48,187,118,249,62,118,127,136,231,62,104,252,168,
3,55,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,215,111,246,175,246,127,207,231,71,218,191,217,255,0,63,157,0,113,7,199,160,18,63,178,143,28,127,199,
232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,179,15,132,46,9,39,237,73,201,63,193,255,0,217,210,127,194,33,113,255,0,63,73,255,0,124,127,246,116,1,171,199,141,199,125,51,251,48,255,0,215,231,
157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,180,188,59,166,201,162,139,176,242,9,126,210,96,198,23,110,223,39,206,207,241,28,231,205,31,149,116,
191,106,255,0,103,252,254,116,1,196,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,62,61,0,145,253,148,120,227,254,63,71,255,0,34,87,111,246,175,246,127,207,231,94,106,124,33,112,73,63,106,78,73,254,
15,254,206,128,52,255,0,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,206,87,252,34,23,31,243,244,159,247,
199,255,0,103,93,55,135,116,217,52,81,118,30,65,47,218,76,24,194,237,219,228,249,217,254,35,156,249,163,242,160,12,223,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,
151,93,191,218,191,217,255,0,63,157,31,106,255,0,103,252,254,116,1,196,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,204,62,16,184,36,159,181,
39,36,255,0,7,255,0,103,73,255,0,8,133,199,252,253,39,253,241,255,0,217,208,6,175,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,
208,84,255,0,224,16,255,0,228,186,210,240,238,155,38,138,46,195,200,37,251,73,131,24,93,187,124,159,59,63,196,115,159,52,126,85,210,253,171,253,159,243,249,208,7,16,60,4,1,7,251,84,241,207,252,121,15,
254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,93,191,218,191,217,255,0,63,157,121,169,240,133,193,36,253,169,57,39,248,63,251,58,0,211,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,
60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,57,95,240,136,92,127,207,210,127,223,31,253,157,116,222,29,211,100,209,69,216,121,4,191,105,48,99,11,183,
111,147,231,103,248,142,115,230,143,202,128,51,127,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,118,255,0,106,255,0,103,252,254,116,125,171,253,159,243,249,208,
7,16,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,43,48,248,66,224,146,126,212,156,147,252,31,253,157,39,252,34,23,31,243,244,159,247,199,255,0,103,
64,26,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,116,180,223,15,166,138,242,31,181,125,165,165,85,31,234,68,59,2,147,212,121,178,238,45,158,14,
87,0,119,205,30,31,211,95,69,91,173,210,9,90,231,201,232,164,4,242,124,220,127,17,206,239,52,231,176,219,208,230,182,89,139,18,73,201,52,0,148,81,81,79,42,195,12,146,187,109,84,70,98,125,48,63,157,0,96,
221,248,196,105,247,18,217,255,0,103,153,188,134,219,230,125,171,203,221,198,126,231,217,228,198,51,143,190,122,118,233,81,167,143,134,14,52,174,255,0,243,253,143,79,250,115,53,231,215,83,53,197,196,211,
49,201,146,71,114,127,222,98,127,76,227,142,7,110,41,137,208,253,127,160,160,6,16,114,120,61,79,99,235,86,172,110,165,178,185,142,120,247,2,167,144,50,50,167,168,61,59,123,227,215,210,189,245,186,159,
169,254,116,148,1,207,89,221,69,121,111,28,241,48,96,234,9,0,130,85,187,171,122,16,123,16,42,205,99,248,167,83,155,75,155,76,150,32,10,201,246,197,149,8,225,213,126,202,87,62,235,150,218,122,140,145,208,
154,117,134,179,103,126,163,100,138,146,158,177,57,195,103,167,25,224,243,233,154,0,214,162,128,65,228,28,143,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,
69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,81,75,52,80,169,121,100,72,213,70,73,102,3,223,189,0,75,92,79,137,245,65,131,97,3,110,206,60,242,135,32,119,8,113,223,166,65,207,167,6,
141,83,196,195,230,183,177,57,221,148,51,227,177,227,41,156,96,251,251,228,28,138,244,224,0,224,12,15,65,64,31,60,96,250,31,200,212,136,8,7,35,28,255,0,133,125,7,82,167,67,245,254,130,128,35,110,167,234,
127,157,37,74,80,18,79,60,253,63,194,141,131,212,254,159,225,64,30,111,227,222,154,87,214,247,249,90,87,157,134,101,57,82,65,29,193,197,122,71,143,80,99,74,28,255,0,203,247,167,111,177,251,123,215,157,
236,30,167,244,255,0,10,0,189,6,175,168,192,21,35,187,148,40,35,0,157,224,115,216,62,224,63,12,87,184,121,17,127,112,126,103,252,107,192,66,0,65,231,143,167,248,87,209,27,7,169,253,63,194,128,42,249,17,
127,112,126,191,227,92,111,139,175,238,180,177,167,155,25,4,62,121,186,243,127,119,28,155,188,191,179,236,255,0,90,143,140,121,141,247,113,156,243,156,10,239,54,15,83,250,127,133,121,223,143,80,99,74,
28,255,0,203,247,167,111,177,251,123,208,7,39,255,0,9,46,179,255,0,63,99,255,0,1,237,191,248,205,40,241,38,178,72,255,0,75,29,71,252,187,219,127,241,154,198,216,61,79,233,254,20,4,0,131,207,31,79,240,
160,15,126,242,34,254,224,253,127,198,143,34,47,238,15,215,252,106,214,193,234,127,79,240,163,96,245,63,167,248,80,7,7,226,235,251,173,44,105,230,198,65,15,158,110,188,223,221,199,38,239,47,236,251,63,
214,163,227,30,99,125,220,103,60,231,2,184,191,248,73,117,159,249,251,31,248,15,109,255,0,198,107,172,241,234,12,105,67,159,249,126,244,237,246,63,111,122,243,189,131,212,254,159,225,64,27,35,196,154,
201,35,253,44,117,31,242,239,109,255,0,198,107,217,124,136,191,184,63,95,241,175,1,8,1,7,158,62,159,225,95,68,108,30,167,244,255,0,10,0,171,228,69,253,193,250,255,0,141,113,190,46,191,186,210,198,158,
108,100,16,249,230,235,205,253,220,114,110,242,254,207,179,253,106,62,49,230,55,221,198,115,206,112,43,188,216,61,79,233,254,21,231,126,61,65,141,40,115,255,0,47,222,157,190,199,237,239,64,28,159,252,
36,186,207,252,253,143,252,7,182,255,0,227,52,163,196,154,201,35,253,44,117,31,242,239,109,255,0,198,107,27,96,245,63,167,248,80,16,2,15,60,125,63,194,128,61,251,200,139,251,131,245,255,0,26,60,136,191,
184,63,95,241,171,91,7,169,253,63,194,141,131,212,254,159,225,64,28,31,139,175,238,180,177,167,155,25,4,62,121,186,243,127,119,28,155,188,191,179,236,255,0,90,143,140,121,141,247,113,156,243,156,10,226,
255,0,225,37,214,127,231,236,127,224,61,183,255,0,25,174,179,199,168,49,165,14,127,229,251,211,183,216,253,189,235,206,246,15,83,250,127,133,0,108,143,18,107,36,143,244,177,212,127,203,189,183,255,0,25,
175,101,242,34,254,224,253,127,198,188,4,32,4,30,120,250,127,133,125,17,176,122,159,211,252,40,2,175,145,23,247,7,235,254,53,198,248,186,254,235,75,26,121,177,144,67,231,155,175,55,247,113,201,187,203,
251,62,207,245,168,248,199,152,223,119,25,207,57,192,174,243,96,245,63,167,248,87,157,248,245,6,52,161,207,252,191,122,118,251,31,183,189,0,114,127,240,146,235,63,243,246,63,240,30,219,255,0,140,210,143,
18,107,36,143,244,177,212,127,203,189,183,255,0,25,172,109,131,212,254,159,225,64,64,8,60,241,244,255,0,10,0,247,239,34,47,238,15,215,252,104,242,34,254,224,253,127,198,173,108,30,167,244,255,0,10,54,
15,83,250,127,133,0,112,30,49,187,184,211,198,159,246,57,90,15,56,221,9,54,224,238,242,197,190,207,188,14,8,243,27,145,142,190,194,188,230,107,171,139,134,45,52,210,72,79,82,238,205,252,201,199,225,218,
189,7,199,168,49,165,14,127,229,251,211,183,216,253,189,235,206,246,15,83,250,127,133,0,70,189,71,212,127,58,250,30,190,124,8,1,7,158,62,159,225,95,68,108,30,167,244,255,0,10,0,138,165,78,135,235,253,
5,27,7,169,253,63,194,156,0,3,2,128,63,255,217,0,0};

const char* PitchEditor::load_jpg = (const char*) resource_PitchEditor_load_jpg;
const int PitchEditor::load_jpgSize = 11415;

// JUCER_RESOURCE: _1241246578_obsoletewhitesaveiconpng_jpg, 79807, "../124-1246578_obsolete-white-save-icon-png.jpg"
static const unsigned char resource_PitchEditor__1241246578_obsoletewhitesaveiconpng_jpg[] = { 255,216,255,224,0,16,74,70,73,70,0,1,1,0,0,1,0,1,0,0,255,219,0,67,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,255,219,0,67,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,255,192,0,17,8,3,111,3,72,3,1,34,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,16,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,
125,1,2,3,0,4,17,5,18,33,49,65,6,19,81,97,7,34,113,20,50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,40,41,42,52,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,
84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,
181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,243,244,245,246,247,248,249,250,255,196,0,31,1,0,3,1,1,1,
1,1,1,1,1,1,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,34,50,129,8,20,66,145,161,177,193,9,35,51,82,240,21,98,114,
209,10,22,36,52,225,37,241,23,24,25,26,38,39,40,41,42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,130,131,132,133,134,
135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,226,
227,228,229,230,231,232,233,234,242,243,244,245,246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,254,252,137,57,60,158,167,185,245,164,201,245,63,153,161,186,159,169,254,116,148,1,231,190,61,39,
26,87,39,173,239,115,255,0,78,149,231,89,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,56,19,145,201,234,59,159,90,250,31,39,212,254,102,190,119,94,163,234,63,157,125,15,64,11,147,234,
127,51,94,121,227,210,113,165,114,122,222,247,63,244,233,94,133,94,121,227,222,154,87,214,247,249,90,80,7,157,228,250,159,204,210,130,114,57,61,71,115,235,77,165,94,163,234,63,157,0,125,17,147,234,127,
51,70,79,169,252,205,37,20,1,231,190,61,39,26,87,39,173,239,115,255,0,78,149,231,89,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,56,19,145,201,234,59,159,90,250,31,39,212,254,102,190,
119,94,163,234,63,157,125,15,64,11,147,234,127,51,94,121,227,210,113,165,114,122,222,247,63,244,233,94,133,94,121,227,222,154,87,214,247,249,90,80,7,157,228,250,159,204,210,130,114,57,61,71,115,235,77,
165,94,163,234,63,157,0,125,17,147,234,127,51,70,79,169,252,205,37,20,1,231,190,61,39,26,87,39,173,239,115,255,0,78,149,231,89,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,56,19,145,
201,234,59,159,90,250,31,39,212,254,102,190,119,94,163,234,63,157,125,15,64,11,147,234,127,51,94,121,227,210,113,165,114,122,222,247,63,244,233,94,133,94,121,227,222,154,87,214,247,249,90,80,7,157,228,
250,159,204,210,130,114,57,61,71,115,235,77,165,94,163,234,63,157,0,125,17,147,234,127,51,70,79,169,252,205,37,20,1,231,190,61,39,26,87,39,173,239,115,255,0,78,149,231,89,62,167,243,53,232,158,61,233,
165,125,111,127,149,165,121,213,0,56,19,145,201,234,59,159,90,250,31,39,212,254,102,190,119,94,163,234,63,157,125,15,64,11,147,234,127,51,94,121,227,210,113,165,114,122,222,247,63,244,233,94,133,94,121,
227,222,154,87,214,247,249,90,80,7,157,228,250,159,204,210,130,114,57,61,71,115,235,77,165,94,163,234,63,157,0,125,17,147,234,127,51,70,79,169,252,205,37,20,1,231,190,61,39,26,87,39,173,239,115,255,0,
78,149,231,89,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,56,19,145,201,234,59,159,90,250,31,39,212,254,102,190,119,94,163,234,63,157,125,15,64,11,147,234,127,51,94,121,227,210,113,
165,114,122,222,247,63,244,233,94,133,94,121,227,222,154,87,214,247,249,90,80,7,157,228,250,159,204,210,130,114,57,61,71,115,235,77,165,94,163,234,63,157,0,125,17,147,234,127,51,70,79,169,252,205,37,20,
1,231,190,61,39,26,87,39,173,239,115,255,0,78,149,231,89,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,56,19,145,201,234,59,159,90,250,31,39,212,254,102,190,119,94,163,234,63,157,125,
15,64,11,147,234,127,51,94,121,227,210,113,165,114,122,222,247,63,244,233,94,133,94,121,227,222,154,87,214,247,249,90,80,7,157,228,250,159,204,210,130,114,57,61,71,115,235,77,165,94,163,234,63,157,0,125,
17,147,234,127,51,70,79,169,252,205,37,20,1,231,190,61,39,26,87,39,173,239,115,255,0,78,149,231,89,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,56,19,145,201,234,59,159,90,250,31,39,
212,254,102,190,119,94,163,234,63,157,125,15,64,11,147,234,127,51,94,121,227,210,113,165,114,122,222,247,63,244,233,94,133,94,121,227,222,154,87,214,247,249,90,80,7,157,228,250,159,204,210,130,114,57,
61,71,115,235,77,165,94,163,234,63,157,0,125,17,147,234,127,51,70,79,169,252,205,37,20,1,231,190,61,39,26,87,39,173,239,115,255,0,78,149,231,89,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,
213,0,56,19,145,201,234,59,159,90,250,31,39,212,254,102,190,119,94,163,234,63,157,125,15,64,11,147,234,127,51,94,121,227,210,113,165,114,122,222,247,63,244,233,94,133,94,121,227,222,154,87,214,247,249,
90,80,7,157,228,250,159,204,210,130,114,57,61,71,115,235,77,165,94,163,234,63,157,0,125,17,147,234,127,51,70,79,169,252,205,37,20,1,231,190,61,39,26,87,39,173,239,115,255,0,78,149,231,89,62,167,243,53,
232,158,61,233,165,125,111,127,149,165,121,213,0,56,19,145,201,234,59,159,90,250,31,39,212,254,102,190,119,94,163,234,63,157,125,15,64,11,147,234,127,51,94,121,227,210,113,165,114,122,222,247,63,244,233,
94,133,94,121,227,222,154,87,214,247,249,90,80,7,157,228,250,159,204,210,130,114,57,61,71,115,235,77,165,94,163,234,63,157,0,125,17,147,234,127,51,70,79,169,252,205,37,20,1,231,190,61,39,26,87,39,173,
239,115,255,0,78,149,231,89,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,56,19,145,201,234,59,159,90,250,31,39,212,254,102,190,119,94,163,234,63,157,125,15,64,11,147,234,127,51,94,121,
227,210,113,165,114,122,222,247,63,244,233,94,133,94,121,227,222,154,87,214,247,249,90,80,7,157,228,250,159,204,210,130,114,57,61,71,115,235,77,165,94,163,234,63,157,0,125,17,147,234,127,51,70,79,169,
252,205,37,20,1,231,190,61,39,26,87,39,173,239,115,255,0,78,149,231,89,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,56,19,145,201,234,59,159,90,41,23,168,250,143,231,69,0,122,41,241,
232,201,255,0,137,81,234,127,229,244,122,255,0,215,165,39,252,39,163,254,129,71,255,0,3,71,255,0,34,87,157,183,83,245,63,206,146,128,61,27,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,
249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,30,2,233,170,253,108,191,149,221,122,29,0,121,224,240,16,4,31,237,83,199,63,241,228,63,249,46,131,227,208,9,31,217,
71,142,63,227,244,127,242,37,122,29,124,240,221,79,212,255,0,58,0,244,79,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,
248,118,243,231,53,232,190,2,233,170,253,108,191,149,221,0,31,240,129,15,250,10,159,252,2,31,252,151,64,240,16,4,31,237,83,199,63,241,228,63,249,46,189,14,138,0,243,195,227,208,9,31,217,71,142,63,227,
244,127,242,37,31,240,158,143,250,5,31,252,13,31,252,137,94,118,221,79,212,255,0,58,74,0,244,110,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,41,255,
0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,120,11,166,171,245,178,254,87,117,232,116,1,231,131,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,
149,232,117,243,195,117,63,83,252,232,3,209,63,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,207,156,215,
162,248,11,166,171,245,178,254,87,116,0,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,244,58,40,3,207,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,
148,127,194,122,63,232,20,127,240,52,127,242,37,121,219,117,63,83,252,233,40,3,209,184,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,167,252,32,67,254,
130,167,255,0,0,135,255,0,37,209,224,46,154,175,214,203,249,93,215,161,208,7,158,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,62,61,0,145,253,148,120,227,254,63,71,255,0,34,87,161,215,207,13,212,
253,79,243,160,15,68,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,62,115,94,139,224,46,154,175,
214,203,249,93,208,1,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,235,208,232,160,15,60,62,61,0,145,253,148,120,227,254,63,71,255,0,34,81,255,0,9,
232,255,0,160,81,255,0,192,209,255,0,200,149,231,109,212,253,79,243,164,160,15,70,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,
10,159,252,2,31,252,151,71,128,186,106,191,91,47,229,119,94,135,64,30,120,60,4,1,7,251,84,241,207,252,121,15,254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,94,135,95,60,55,83,245,63,206,128,
61,19,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,249,205,122,47,128,186,106,191,91,47,229,
119,64,7,252,32,67,254,130,167,255,0,0,135,255,0,37,208,60,4,1,7,251,84,241,207,252,121,15,254,75,175,67,162,128,60,240,248,244,2,71,246,81,227,143,248,253,31,252,137,71,252,39,163,254,129,71,255,0,3,
71,255,0,34,87,157,183,83,245,63,206,146,128,61,27,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,30,
2,233,170,253,108,191,149,221,122,29,0,121,224,240,16,4,31,237,83,199,63,241,228,63,249,46,131,227,208,9,31,217,71,142,63,227,244,127,242,37,122,29,124,240,221,79,212,255,0,58,0,244,79,248,79,71,253,2,
143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,243,231,53,232,190,2,233,170,253,108,191,149,221,0,31,240,129,15,250,10,159,252,
2,31,252,151,64,240,16,4,31,237,83,199,63,241,228,63,249,46,189,14,138,0,243,195,227,208,9,31,217,71,142,63,227,244,127,242,37,31,240,158,143,250,5,31,252,13,31,252,137,94,118,221,79,212,255,0,58,74,0,
244,110,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,120,11,166,171,245,178,254,87,117,232,116,
1,231,131,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,149,232,117,243,195,117,63,83,252,232,3,209,63,225,61,31,244,10,63,248,26,63,249,18,151,
143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,207,156,215,162,248,11,166,171,245,178,254,87,116,0,127,194,4,63,232,42,127,240,8,127,242,93,3,192,
64,16,127,181,79,28,255,0,199,144,255,0,228,186,244,58,40,3,207,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,148,127,194,122,63,232,20,127,240,52,127,242,37,121,219,117,63,83,252,233,40,3,209,184,
241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,209,224,46,154,175,214,203,249,93,215,161,208,7,158,15,
1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,62,61,0,145,253,148,120,227,254,63,71,255,0,34,87,161,215,207,13,212,253,79,243,160,15,68,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,
59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,62,115,94,139,224,46,154,175,214,203,249,93,208,1,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,15,1,0,
65,254,213,60,115,255,0,30,67,255,0,146,235,208,232,160,15,60,62,61,0,145,253,148,120,227,254,63,71,255,0,34,81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,149,231,109,212,253,79,243,164,160,15,70,
227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,10,159,252,2,31,252,151,71,128,186,106,191,91,47,229,119,94,135,64,30,120,60,4,1,
7,251,84,241,207,252,121,15,254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,94,135,95,60,55,83,245,63,206,128,61,19,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,
102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,249,205,122,47,128,186,106,191,91,47,229,119,64,7,252,32,67,254,130,167,255,0,0,135,255,0,37,208,60,4,1,7,251,84,241,207,252,
121,15,254,75,175,67,162,128,60,240,248,244,2,71,246,81,227,143,248,253,31,252,137,71,252,39,163,254,129,71,255,0,3,71,255,0,34,87,157,183,83,245,63,206,146,128,61,27,143,27,142,250,103,246,97,255,0,175,
207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,30,2,233,170,253,108,191,149,221,122,29,0,121,224,240,16,4,31,237,83,199,63,241,228,63,249,
46,131,227,208,9,31,217,71,142,63,227,244,127,242,37,122,29,124,240,221,79,212,255,0,58,0,244,79,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,
126,95,217,127,219,221,191,248,118,243,231,53,232,190,2,233,170,253,108,191,149,221,0,31,240,129,15,250,10,159,252,2,31,252,151,64,240,16,4,31,237,83,199,63,241,228,63,249,46,189,14,138,0,243,195,227,
208,9,31,217,71,142,63,227,244,127,242,37,31,240,158,143,250,5,31,252,13,31,252,137,94,118,221,79,212,255,0,58,74,0,244,110,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,
189,219,255,0,135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,120,11,166,171,245,178,254,87,117,232,116,1,231,131,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,15,143,64,36,127,101,
30,56,255,0,143,209,255,0,200,149,232,117,243,195,117,63,83,252,232,3,209,63,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,
118,255,0,225,219,207,156,215,162,248,11,166,171,245,178,254,87,116,0,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,244,58,40,3,207,15,143,64,36,127,101,
30,56,255,0,143,209,255,0,200,148,127,194,122,63,232,20,127,240,52,127,242,37,121,219,117,63,83,252,233,40,3,209,184,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,
111,254,29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,209,224,46,154,175,214,203,249,93,215,161,208,7,158,143,1,12,143,248,154,158,163,254,92,135,175,253,125,209,94,134,189,71,212,127,58,40,3,
231,130,14,79,7,169,236,125,105,48,125,15,228,107,232,134,234,126,167,249,210,80,7,158,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,
243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,35,147,212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,
167,253,186,80,7,161,209,95,60,100,250,159,204,213,27,237,91,79,210,163,19,106,23,176,90,39,81,230,202,21,223,0,146,35,143,59,228,108,3,133,69,98,125,40,2,251,3,147,193,234,123,31,90,76,31,67,249,26,143,
95,253,162,252,59,100,90,45,7,75,188,214,36,24,30,125,195,13,58,211,239,99,40,25,38,186,112,20,19,134,130,30,74,140,245,175,31,213,254,62,248,243,81,222,182,147,88,105,17,49,225,108,172,227,146,69,93,
202,64,243,175,13,211,110,194,149,44,161,50,24,224,14,48,1,245,71,128,248,26,174,120,230,203,175,29,174,253,107,208,178,61,71,230,43,243,67,83,241,175,139,117,121,22,77,67,196,90,189,193,67,33,68,55,215,
9,18,25,10,151,219,12,110,145,46,118,168,24,65,128,48,48,9,21,138,186,158,162,131,106,223,222,40,201,56,91,153,128,201,57,60,7,199,36,146,104,3,245,39,114,250,143,204,87,207,45,212,253,79,243,175,143,
127,181,117,63,250,8,94,255,0,224,84,223,252,93,89,255,0,132,135,94,255,0,160,206,169,255,0,129,215,63,252,118,128,62,184,175,68,240,17,0,106,185,32,115,101,212,255,0,215,221,124,7,255,0,9,14,189,255,
0,65,157,83,255,0,3,238,127,248,237,71,38,183,172,77,143,55,85,212,100,219,157,187,239,46,27,25,198,113,153,14,51,129,154,0,253,67,200,245,31,152,163,114,250,143,204,87,229,191,246,174,167,255,0,65,11,
223,252,10,155,255,0,139,163,251,87,83,255,0,160,133,239,254,5,77,255,0,197,208,7,216,77,212,253,79,243,164,175,145,255,0,225,33,215,191,232,51,170,127,224,117,207,255,0,29,163,254,18,29,123,254,131,58,
167,254,7,220,255,0,241,218,0,251,243,192,68,1,170,228,129,205,151,83,255,0,95,117,232,121,30,163,243,21,249,121,38,183,172,77,143,55,85,212,100,219,157,187,239,46,27,25,198,113,153,14,51,129,154,139,
251,87,83,255,0,160,133,239,254,5,77,255,0,197,208,7,234,70,229,245,31,152,175,158,91,169,250,159,231,95,30,255,0,106,234,127,244,16,189,255,0,192,169,191,248,186,179,255,0,9,14,189,255,0,65,157,83,255,
0,3,174,127,248,237,0,125,113,94,137,224,34,0,213,114,64,230,203,169,255,0,175,186,248,15,254,18,29,123,254,131,58,167,254,7,220,255,0,241,218,142,77,111,88,155,30,110,171,168,201,183,59,119,222,92,54,
51,140,227,50,28,103,3,52,1,250,135,145,234,63,49,70,229,245,31,152,175,203,127,237,93,79,254,130,23,191,248,21,55,255,0,23,71,246,174,167,255,0,65,11,223,252,10,155,255,0,139,160,15,176,155,169,250,159,
231,73,95,35,255,0,194,67,175,127,208,103,84,255,0,192,235,159,254,59,71,252,36,58,247,253,6,117,79,252,15,185,255,0,227,180,1,247,231,128,136,3,85,201,3,155,46,167,254,190,235,208,242,61,71,230,43,242,
242,77,111,88,155,30,110,171,168,201,183,59,119,222,92,54,51,140,227,50,28,103,3,53,23,246,174,167,255,0,65,11,223,252,10,155,255,0,139,160,15,212,141,203,234,63,49,95,60,183,83,245,63,206,190,61,254,
213,212,255,0,232,33,123,255,0,129,83,127,241,117,103,254,18,29,123,254,131,58,167,254,7,92,255,0,241,218,0,250,226,189,19,192,68,1,170,228,129,205,151,83,255,0,95,117,240,31,252,36,58,247,253,6,117,79,
252,15,185,255,0,227,181,28,154,222,177,54,60,221,87,81,147,110,118,239,188,184,108,103,25,198,100,56,206,6,104,3,245,15,35,212,126,98,141,203,234,63,49,95,150,255,0,218,186,159,253,4,47,127,240,42,111,
254,46,143,237,93,79,254,130,23,191,248,21,55,255,0,23,64,31,97,55,83,245,63,206,146,190,71,255,0,132,135,94,255,0,160,206,169,255,0,129,215,63,252,118,143,248,72,117,239,250,12,234,159,248,31,115,255,
0,199,104,3,239,207,1,16,6,171,146,7,54,93,79,253,125,215,161,228,122,143,204,87,229,228,154,222,177,54,60,221,87,81,147,110,118,239,188,184,108,103,25,198,100,56,206,6,106,47,237,93,79,254,130,23,191,
248,21,55,255,0,23,64,31,169,27,151,212,126,98,190,121,110,167,234,127,157,124,123,253,171,169,255,0,208,66,247,255,0,2,166,255,0,226,234,207,252,36,58,247,253,6,117,79,252,14,185,255,0,227,180,1,245,
197,122,39,128,136,3,85,201,3,155,46,167,254,190,235,224,63,248,72,117,239,250,12,234,159,248,31,115,255,0,199,106,57,53,189,98,108,121,186,174,163,38,220,237,223,121,112,216,206,51,140,200,113,156,12,
208,7,234,30,71,168,252,197,27,151,212,126,98,191,45,255,0,181,117,63,250,8,94,255,0,224,84,223,252,93,31,218,186,159,253,4,47,127,240,42,111,254,46,128,62,194,110,167,234,127,157,37,124,143,255,0,9,14,
189,255,0,65,157,83,255,0,3,174,127,248,237,31,240,144,235,223,244,25,213,63,240,62,231,255,0,142,208,7,223,158,2,32,13,87,36,14,108,186,159,250,251,175,67,200,245,31,152,175,203,201,53,189,98,108,121,
186,174,163,38,220,237,223,121,112,216,206,51,140,200,113,156,12,212,95,218,186,159,253,4,47,127,240,42,111,254,46,128,63,82,55,47,168,252,197,124,242,221,79,212,255,0,58,248,247,251,87,83,255,0,160,133,
239,254,5,77,255,0,197,213,159,248,72,117,239,250,12,234,159,248,29,115,255,0,199,104,3,235,138,244,79,1,16,6,171,146,7,54,93,79,253,125,215,192,127,240,144,235,223,244,25,213,63,240,62,231,255,0,142,
212,114,107,122,196,216,243,117,93,70,77,185,219,190,242,225,177,156,103,25,144,227,56,25,160,15,212,60,143,81,249,138,55,47,168,252,197,126,91,255,0,106,234,127,244,16,189,255,0,192,169,191,248,186,63,
181,117,63,250,8,94,255,0,224,84,223,252,93,0,125,132,221,79,212,255,0,58,74,249,31,254,18,29,123,254,131,58,167,254,7,92,255,0,241,218,63,225,33,215,191,232,51,170,127,224,125,207,255,0,29,160,15,191,
60,4,64,26,174,72,28,217,117,63,245,247,94,135,145,234,63,49,95,151,146,107,122,196,216,243,117,93,70,77,185,219,190,242,225,177,156,103,25,144,227,56,25,168,191,181,117,63,250,8,94,255,0,224,84,223,252,
93,0,126,164,110,95,81,249,138,249,229,186,159,169,254,117,241,239,246,174,167,255,0,65,11,223,252,10,155,255,0,139,171,63,240,144,235,223,244,25,213,63,240,58,231,255,0,142,208,7,215,21,232,158,2,32,
13,87,36,14,108,186,159,250,251,175,128,255,0,225,33,215,191,232,51,170,127,224,125,207,255,0,29,168,228,214,245,137,177,230,234,186,140,155,115,183,125,229,195,99,56,206,51,33,198,112,51,64,31,168,121,
30,163,243,20,110,95,81,249,138,252,183,254,213,212,255,0,232,33,123,255,0,129,83,127,241,116,127,106,234,127,244,16,189,255,0,192,169,191,248,186,0,251,9,186,159,169,254,116,149,242,63,252,36,58,247,
253,6,117,79,252,14,185,255,0,227,180,127,194,67,175,127,208,103,84,255,0,192,251,159,254,59,64,31,126,120,8,128,53,92,144,57,178,234,127,235,238,189,15,35,212,126,98,191,47,36,214,245,137,177,230,234,
186,140,155,115,183,125,229,195,99,56,206,51,33,198,112,51,81,127,106,234,127,244,16,189,255,0,192,169,191,248,186,0,253,72,220,190,163,243,21,243,203,117,63,83,252,235,227,223,237,93,79,254,130,23,191,
248,21,55,255,0,23,86,127,225,33,215,191,232,51,170,127,224,117,207,255,0,29,160,15,174,43,209,60,4,64,26,174,72,28,217,117,63,245,247,95,1,255,0,194,67,175,127,208,103,84,255,0,192,251,159,254,59,81,
201,173,235,19,99,205,213,117,25,54,231,110,251,203,134,198,113,156,102,67,140,224,102,128,63,80,242,61,71,230,40,220,190,163,243,21,249,111,253,171,169,255,0,208,66,247,255,0,2,166,255,0,226,232,254,
213,212,255,0,232,33,123,255,0,129,83,127,241,116,1,246,17,234,126,167,249,209,131,232,127,35,95,35,15,16,235,202,202,203,173,106,170,200,119,35,11,251,160,202,195,128,84,137,114,8,7,130,57,174,131,77,
248,149,227,173,41,148,218,248,159,86,101,82,72,142,234,233,239,162,231,25,30,85,239,218,35,198,64,56,219,140,146,71,44,114,1,246,239,128,129,3,85,200,199,54,93,127,237,238,189,14,190,27,31,28,117,157,
73,109,34,241,13,149,181,210,219,25,7,218,172,148,218,220,48,149,99,14,207,22,90,9,8,49,2,2,136,6,92,244,0,10,239,116,111,20,104,250,234,143,176,94,3,54,221,205,107,49,242,174,87,140,159,221,177,195,129,
221,162,103,94,249,160,15,169,235,231,150,7,39,131,212,246,62,180,41,57,28,158,163,185,245,175,161,168,3,231,140,31,67,249,26,244,79,1,2,6,171,145,142,108,186,255,0,219,221,122,29,121,231,143,73,3,74,
193,199,55,189,63,237,210,128,61,14,138,249,227,39,212,254,102,149,73,200,228,245,29,207,173,0,12,14,79,7,169,236,125,105,48,125,15,228,107,232,122,40,3,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,
117,231,158,61,36,13,43,7,28,222,244,255,0,183,74,243,188,159,83,249,154,0,250,30,190,121,96,114,120,61,79,99,235,66,147,145,201,234,59,159,90,250,26,128,62,120,193,244,63,145,175,68,240,16,32,106,185,
24,230,203,175,253,189,215,161,215,158,120,244,144,52,172,28,115,123,211,254,221,40,3,208,232,175,158,50,125,79,230,105,84,156,142,79,81,220,250,208,0,192,228,240,122,158,199,214,147,7,208,254,70,190,
135,162,128,60,243,192,64,129,170,228,99,155,46,191,246,247,94,135,94,121,227,210,64,210,176,113,205,239,79,251,116,175,59,201,245,63,153,160,15,162,23,168,250,143,231,69,124,240,9,200,228,245,29,207,
173,20,1,244,59,117,63,83,252,233,43,207,79,143,70,79,252,74,143,83,255,0,47,163,215,254,189,41,63,225,61,31,244,10,63,248,26,63,249,18,128,15,30,244,210,190,183,191,202,210,188,234,189,27,143,27,142,
250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,0,121,218,245,31,81,252,235,232,122,243,193,224,32,8,63,218,167,
142,127,227,200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,0,244,58,243,31,137,87,214,154,117,182,157,117,123,113,21,180,17,125,180,188,146,176,81,255,0,46,152,85,29,93,216,240,168,
160,179,30,20,19,88,62,38,248,209,167,120,110,220,180,218,96,154,250,69,38,218,201,117,1,230,57,28,7,147,22,132,199,16,36,101,216,101,185,8,25,134,43,228,31,23,248,219,94,241,166,160,111,117,139,166,116,
70,113,105,101,25,43,105,103,27,176,62,92,17,103,0,144,20,60,173,153,101,218,11,177,0,0,1,217,120,135,226,132,242,151,182,208,35,48,71,202,155,233,209,90,103,228,124,208,196,75,36,106,121,195,72,29,200,
60,170,26,242,139,171,219,187,217,90,107,187,137,174,37,115,150,146,105,26,70,62,217,98,78,7,64,58,1,192,21,90,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,
138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,
40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,42,72,165,150,23,89,
33,145,226,145,8,101,116,98,172,172,58,21,96,65,4,122,131,154,142,138,0,245,175,12,124,76,185,181,104,173,53,237,215,86,249,10,47,149,71,218,97,81,211,205,81,129,58,129,193,108,121,189,201,115,95,119,
105,122,174,157,173,89,67,168,105,119,144,95,89,206,161,163,158,222,69,145,14,70,118,182,9,40,235,209,145,128,101,57,4,3,95,150,245,219,248,47,199,218,255,0,129,239,133,206,151,112,94,214,70,6,239,77,
153,157,172,238,148,99,59,227,4,4,148,40,34,57,212,111,76,255,0,18,229,72,7,233,13,121,231,143,122,105,95,91,223,229,105,92,215,135,62,51,105,190,35,182,15,109,166,249,119,113,168,251,77,155,223,126,242,
38,35,170,147,102,60,216,207,103,95,163,5,96,69,116,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,64,60,230,149,122,143,168,254,117,232,159,240,
129,15,250,10,159,252,2,31,252,151,64,240,16,4,31,237,83,199,63,241,228,63,249,46,128,61,14,138,243,195,227,208,9,31,217,71,142,63,227,244,127,242,37,31,240,158,143,250,5,31,252,13,31,252,137,64,7,143,
122,105,95,91,223,229,105,94,117,94,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,128,60,237,122,143,
168,254,117,244,61,121,224,240,16,4,31,237,83,199,63,241,228,63,249,46,131,227,208,9,31,217,71,142,63,227,244,127,242,37,0,122,29,121,231,143,122,105,95,91,223,229,105,71,252,39,163,254,129,71,255,0,3,
71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,0,243,154,85,234,62,163,249,215,162,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,
16,127,181,79,28,255,0,199,144,255,0,228,186,0,244,58,43,207,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,148,127,194,122,63,232,20,127,240,52,127,242,37,0,30,61,233,165,125,111,127,149,165,121,
213,122,55,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,0,243,181,234,62,163,249,209,94,138,60,
4,50,63,226,106,122,143,249,114,30,191,245,247,69,0,121,211,117,63,83,252,233,41,196,28,158,15,83,216,250,210,96,250,31,200,208,7,162,120,11,166,171,245,178,254,87,117,232,117,231,158,2,4,13,87,35,28,
217,117,255,0,183,186,244,58,0,43,228,159,23,120,178,215,195,86,196,13,179,106,51,171,125,150,219,60,1,146,60,249,177,200,137,72,56,28,25,24,109,24,1,136,250,47,198,126,45,211,252,25,160,221,235,87,228,
57,140,121,118,118,161,130,201,121,118,224,249,48,38,122,2,65,121,31,162,68,142,199,160,7,243,139,85,212,238,181,139,233,245,11,201,12,147,206,229,137,236,138,62,228,104,58,42,34,252,170,163,128,7,115,
146,64,35,191,191,186,212,174,166,189,189,153,166,184,157,139,59,177,207,94,138,163,162,170,142,21,70,2,128,0,24,170,116,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,
64,5,20,160,18,64,0,146,78,0,29,73,175,162,62,30,252,8,191,215,99,131,86,241,76,146,233,122,100,161,100,130,194,48,6,163,119,25,229,94,77,192,139,56,152,114,187,213,167,96,114,35,140,109,114,1,243,194,
171,49,1,84,146,122,0,9,206,58,213,129,99,122,64,34,210,224,130,1,4,67,33,4,30,65,4,46,8,35,144,71,90,253,35,208,252,15,225,79,14,66,145,105,58,29,133,187,32,255,0,143,151,133,110,47,28,225,129,103,187,
156,73,59,18,29,135,250,192,160,49,0,0,113,94,72,84,228,240,122,158,199,214,128,62,56,251,5,247,252,249,220,255,0,223,137,63,248,154,122,105,154,148,153,242,236,47,31,24,206,203,105,155,25,206,51,181,
14,51,131,140,245,193,175,176,240,125,15,228,107,209,60,6,163,26,166,71,57,178,198,71,56,255,0,75,207,90,0,252,251,254,200,213,191,232,25,127,255,0,128,147,255,0,241,186,63,178,53,111,250,6,95,255,0,224,
36,255,0,252,110,191,81,176,61,7,228,40,194,247,3,242,20,1,249,103,246,11,239,249,243,185,255,0,191,18,127,241,52,125,130,251,254,124,238,127,239,196,159,252,77,125,142,84,228,240,122,158,199,214,147,
7,208,254,70,128,62,60,77,51,82,147,62,93,133,227,227,25,217,109,51,99,57,198,118,161,198,112,113,158,184,52,255,0,236,141,91,254,129,151,255,0,248,9,63,255,0,27,175,208,79,1,168,198,169,145,206,108,177,
145,206,63,210,243,214,189,11,3,208,126,66,128,63,46,127,178,53,111,250,6,95,255,0,224,36,255,0,252,110,161,251,5,247,252,249,220,255,0,223,137,63,248,154,253,76,194,247,3,242,21,243,209,83,147,193,234,
123,31,90,0,248,227,236,23,223,243,231,115,255,0,126,36,255,0,226,105,233,166,106,82,103,203,176,188,124,99,59,45,166,108,103,56,206,212,56,206,14,51,215,6,190,195,193,244,63,145,175,68,240,26,140,106,
153,28,230,203,25,28,227,253,47,61,104,3,243,239,251,35,86,255,0,160,101,255,0,254,2,79,255,0,198,232,254,200,213,191,232,25,127,255,0,128,147,255,0,241,186,253,70,192,244,31,144,163,11,220,15,200,80,
7,229,159,216,47,191,231,206,231,254,252,73,255,0,196,209,246,11,239,249,243,185,255,0,191,18,127,241,53,246,57,83,147,193,234,123,31,90,76,31,67,249,26,0,248,241,52,205,74,76,249,118,23,143,140,103,101,
180,205,140,231,25,218,135,25,193,198,122,224,211,255,0,178,53,111,250,6,95,255,0,224,36,255,0,252,110,191,65,60,6,163,26,166,71,57,178,198,71,56,255,0,75,207,90,244,44,15,65,249,10,0,252,185,254,200,
213,191,232,25,127,255,0,128,147,255,0,241,186,135,236,23,223,243,231,115,255,0,126,36,255,0,226,107,245,51,11,220,15,200,87,207,69,78,79,7,169,236,125,104,3,227,143,176,95,127,207,157,207,253,248,147,
255,0,137,167,166,153,169,73,159,46,194,241,241,140,236,182,153,177,156,227,59,80,227,56,56,207,92,26,251,15,7,208,254,70,189,19,192,106,49,170,100,115,155,44,100,115,143,244,188,245,160,15,207,191,236,
141,91,254,129,151,255,0,248,9,63,255,0,27,163,251,35,86,255,0,160,101,255,0,254,2,79,255,0,198,235,245,27,3,208,126,66,140,47,112,63,33,64,31,150,127,96,190,255,0,159,59,159,251,241,39,255,0,19,71,216,
47,191,231,206,231,254,252,73,255,0,196,215,216,229,78,79,7,169,236,125,105,48,125,15,228,104,3,227,196,211,53,41,51,229,216,94,62,49,157,150,211,54,51,156,103,106,28,103,7,25,235,131,79,254,200,213,191,
232,25,127,255,0,128,147,255,0,241,186,253,4,240,26,140,106,153,28,230,203,25,28,227,253,47,61,107,208,176,61,7,228,40,3,242,231,251,35,86,255,0,160,101,255,0,254,2,79,255,0,198,234,31,176,95,127,207,
157,207,253,248,147,255,0,137,175,212,204,47,112,63,33,95,61,21,57,60,30,167,177,245,160,15,142,62,193,125,255,0,62,119,63,247,226,79,254,38,158,154,102,165,38,124,187,11,199,198,51,178,218,102,198,115,
140,237,67,140,224,227,61,112,107,236,60,31,67,249,26,244,79,1,168,198,169,145,206,108,177,145,206,63,210,243,214,128,63,62,255,0,178,53,111,250,6,95,255,0,224,36,255,0,252,110,143,236,141,91,254,129,
151,255,0,248,9,63,255,0,27,175,212,108,15,65,249,10,48,189,192,252,133,0,126,89,253,130,251,254,124,238,127,239,196,159,252,77,31,96,190,255,0,159,59,159,251,241,39,255,0,19,95,99,149,57,60,30,167,177,
245,164,193,244,63,145,160,15,143,19,76,212,164,207,151,97,120,248,198,118,91,76,216,206,113,157,168,113,156,28,103,174,13,63,251,35,86,255,0,160,101,255,0,254,2,79,255,0,198,235,244,19,192,106,49,170,
100,115,155,44,100,115,143,244,188,245,175,66,192,244,31,144,160,15,203,159,236,141,91,254,129,151,255,0,248,9,63,255,0,27,168,126,193,125,255,0,62,119,63,247,226,79,254,38,191,83,48,189,192,252,133,124,
244,84,228,240,122,158,199,214,128,62,56,251,5,247,252,249,220,255,0,223,137,63,248,154,122,105,154,148,153,242,236,47,31,24,206,203,105,155,25,206,51,181,14,51,131,140,245,193,175,176,240,125,15,228,
107,209,60,6,163,26,166,71,57,178,198,71,56,255,0,75,207,90,0,252,251,254,200,213,191,232,25,127,255,0,128,147,255,0,241,186,63,178,53,111,250,6,95,255,0,224,36,255,0,252,110,191,81,176,61,7,228,40,194,
247,3,242,20,1,249,103,246,11,239,249,243,185,255,0,191,18,127,241,52,125,130,251,254,124,238,127,239,196,159,252,77,125,142,84,228,240,122,158,199,214,147,7,208,254,70,128,62,60,77,51,82,147,62,93,133,
227,227,25,217,109,51,99,57,198,118,161,198,112,113,158,184,52,255,0,236,141,91,254,129,151,255,0,248,9,63,255,0,27,175,208,79,1,168,198,169,145,206,108,177,145,206,63,210,243,214,189,11,3,208,126,66,
128,63,46,127,178,53,111,250,6,95,255,0,224,36,255,0,252,110,161,251,5,247,252,249,220,255,0,223,137,63,248,154,253,76,194,247,3,242,21,243,209,83,147,193,234,123,31,90,0,248,188,171,41,33,148,130,50,
14,70,48,65,193,7,211,145,138,109,125,127,125,162,233,154,146,20,190,211,173,174,65,24,221,36,10,100,29,121,89,66,137,20,141,196,130,172,8,36,145,214,188,247,83,248,49,117,168,218,234,58,143,133,156,201,
37,144,137,219,72,156,143,54,101,151,205,45,246,91,135,101,5,144,71,196,82,252,205,156,9,75,0,172,1,224,84,84,179,193,53,180,210,219,220,70,240,205,11,180,114,197,34,148,120,228,66,85,145,213,128,42,202,
192,130,8,4,16,65,168,168,0,162,138,40,0,162,138,40,0,162,138,40,2,221,149,245,214,157,115,21,229,156,207,5,196,46,30,55,67,130,8,234,8,232,84,142,25,72,32,142,8,34,190,193,248,45,241,19,79,214,100,188,
210,181,41,34,179,214,167,91,83,2,49,84,134,255,0,201,19,249,134,223,39,137,191,120,9,131,57,35,45,30,224,24,47,198,117,36,82,203,4,177,205,12,143,20,177,58,201,28,145,177,71,71,66,25,89,89,72,101,101,
96,10,176,32,130,1,4,17,64,31,170,148,87,205,127,10,62,52,71,170,253,159,195,158,44,154,56,117,16,22,29,63,86,145,130,69,123,181,66,172,23,140,196,44,119,103,31,36,249,9,57,33,25,82,92,25,126,148,200,
198,115,199,92,246,199,173,0,124,240,221,79,212,255,0,58,74,115,3,147,193,234,123,31,90,76,31,67,249,26,0,244,79,1,116,213,126,182,95,202,238,189,14,188,243,192,64,129,170,228,99,155,46,191,246,247,94,
135,64,5,124,240,221,79,212,255,0,58,250,30,190,121,96,114,120,61,79,99,235,64,13,175,69,240,23,77,87,235,101,252,174,235,206,240,125,15,228,107,209,60,4,8,26,174,70,57,178,235,255,0,111,116,1,232,116,
81,69,0,124,240,221,79,212,255,0,58,74,115,3,147,193,234,123,31,90,76,31,67,249,26,0,244,79,1,116,213,126,182,95,202,238,189,14,188,243,192,64,129,170,228,99,155,46,191,246,247,94,135,64,10,189,71,212,
127,58,40,94,163,234,63,157,20,0,55,83,245,63,206,146,149,186,159,169,254,116,148,1,231,158,61,36,13,43,7,28,222,244,255,0,183,74,243,162,251,65,102,108,0,9,36,156,0,0,201,36,246,0,114,107,209,124,123,
211,74,250,222,255,0,43,74,249,239,226,38,184,116,173,17,173,161,112,183,90,153,107,116,193,249,146,220,12,220,56,24,61,84,172,57,200,199,154,72,57,20,1,228,190,57,241,43,235,250,171,199,20,132,233,246,
44,240,90,47,240,200,65,196,151,39,158,76,204,6,195,218,37,65,128,75,231,136,163,173,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,92,211,236,229,212,111,236,
236,32,25,154,246,234,11,88,134,51,153,46,37,72,144,99,221,156,10,0,245,143,135,158,9,121,225,183,241,62,167,8,54,82,77,60,90,108,50,46,68,243,90,152,188,219,134,83,193,138,39,144,34,100,16,210,171,255,
0,207,62,125,183,36,116,39,243,174,191,196,58,77,174,131,163,120,103,71,179,69,75,125,62,214,123,100,10,0,220,99,75,49,36,141,142,175,44,155,164,115,201,103,98,73,36,215,31,64,14,82,114,57,61,71,115,235,
95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,
171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,
11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,
243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,
243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,
232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,
0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,
243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,
233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,
6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,
56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,243,23,196,95,9,165,213,179,235,150,16,133,186,183,27,175,163,141,78,103,132,112,102,194,255,0,203,72,177,151,56,203,71,146,78,
80,103,193,235,236,231,69,145,30,55,1,145,213,145,148,242,25,88,16,65,246,32,145,95,37,120,131,77,254,200,214,117,29,59,157,182,247,46,35,207,39,201,124,75,1,39,39,36,194,232,79,61,77,0,99,81,69,20,0,
81,69,20,0,81,69,20,0,81,69,20,0,87,179,120,31,199,230,47,39,73,215,110,27,203,12,145,90,95,200,196,152,198,66,172,87,78,78,124,177,192,89,152,157,131,137,8,65,184,120,205,20,1,250,172,172,174,170,232,
202,200,202,25,89,72,42,202,70,65,82,56,32,142,65,28,17,78,175,142,62,16,252,96,109,29,160,240,215,137,238,89,244,166,34,61,63,81,153,139,54,158,73,226,9,220,228,155,66,126,227,31,245,7,143,245,71,228,
251,18,57,35,150,52,150,39,89,35,145,85,227,145,24,50,58,48,12,172,172,164,134,86,4,16,65,32,131,145,64,30,127,227,210,64,210,176,113,205,239,79,251,116,175,59,201,245,63,153,175,68,241,239,77,43,235,
123,252,173,43,206,168,1,202,78,71,39,168,238,125,107,232,106,249,225,122,143,168,254,117,244,61,0,21,231,158,61,36,13,43,7,28,222,244,255,0,183,74,244,58,243,207,30,244,210,190,183,191,202,210,128,60,
239,39,212,254,102,149,73,200,228,245,29,207,173,54,149,122,143,168,254,116,1,244,61,20,81,64,30,121,227,210,64,210,176,113,205,239,79,251,116,175,59,201,245,63,153,175,68,241,239,77,43,235,123,252,173,
43,206,168,1,192,156,142,79,81,220,250,209,72,189,71,212,127,58,40,3,209,79,143,70,79,252,74,143,83,255,0,47,163,215,254,189,41,63,225,61,31,244,10,63,248,26,63,249,18,188,237,186,159,169,254,116,148,
1,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,126,45,248,161,122,179,248,187,81,177,134,224,92,219,105,18,29,54,25,66,236,87,123,114,69,203,
108,18,72,160,253,164,202,153,12,119,42,33,60,240,62,184,209,53,84,208,244,15,22,234,242,114,186,118,158,151,65,65,0,188,145,67,122,209,32,36,17,186,73,118,34,228,17,150,25,6,190,9,184,154,75,137,230,
184,153,217,229,154,89,37,145,216,229,153,228,114,238,196,224,100,179,18,79,3,147,64,16,209,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,87,97,224,9,22,47,25,120,
118,118,66,235,111,169,65,115,176,54,210,230,220,153,194,110,218,219,119,24,192,39,105,192,57,3,53,199,215,87,224,127,249,26,180,111,250,249,111,253,19,37,0,125,215,199,141,199,125,51,251,48,255,0,215,
231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,143,1,116,213,126,182,95,202,238,189,14,128,60,240,120,8,2,15,246,169,227,159,248,242,31,252,151,
65,241,232,4,143,236,163,199,31,241,250,63,249,18,189,14,190,120,110,167,234,127,157,0,122,39,252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,
191,47,236,191,237,238,223,252,59,121,243,154,244,95,1,116,213,126,182,95,202,238,128,15,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,94,135,69,0,121,225,241,232,
4,143,236,163,199,31,241,250,63,249,18,143,248,79,71,253,2,143,254,6,143,254,68,175,59,110,167,234,127,157,37,0,122,55,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,
255,0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,60,5,211,85,250,217,127,43,186,244,58,0,243,193,224,32,8,63,218,167,142,127,227,200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,
255,0,228,74,244,58,249,225,186,159,169,254,116,1,232,159,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,
231,206,107,209,124,5,211,85,250,217,127,43,186,0,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,122,29,20,1,231,135,199,160,18,63,178,143,28,127,199,232,255,
0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,188,237,186,159,169,254,116,148,1,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,
255,0,65,83,255,0,128,67,255,0,146,232,240,23,77,87,235,101,252,174,235,208,232,3,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,43,208,
235,231,134,234,126,167,249,208,7,162,127,194,122,63,232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,159,57,175,69,240,
23,77,87,235,101,252,174,232,0,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,117,232,116,80,7,158,31,30,128,72,254,202,60,113,255,0,31,163,255,
0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,243,182,234,126,167,249,210,80,7,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,
248,64,135,253,5,79,254,1,15,254,75,163,192,93,53,95,173,151,242,187,175,67,160,15,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,175,67,175,158,27,
169,250,159,231,64,30,137,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,124,230,189,23,192,
93,53,95,173,151,242,187,160,3,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,255,0,132,8,14,127,181,79,28,255,0,199,151,167,253,189,154,244,58,70,232,126,135,249,80,7,131,222,252,126,240,221,133,221,
197,149,197,133,223,157,107,52,144,75,178,70,43,230,68,197,27,105,251,48,200,200,56,53,87,254,26,39,194,191,243,225,123,255,0,125,159,254,71,175,146,60,81,255,0,35,22,181,255,0,97,43,207,253,40,146,176,
104,3,236,29,79,227,47,130,124,66,33,251,93,198,161,165,253,144,201,229,236,177,107,239,63,207,217,187,56,123,95,43,203,242,87,31,127,126,243,247,118,243,147,255,0,9,255,0,195,207,250,15,106,127,248,34,
127,254,78,175,149,40,160,15,170,199,196,15,135,128,131,253,189,169,241,207,252,128,159,255,0,147,171,170,255,0,134,137,240,175,252,248,94,159,125,196,103,255,0,37,235,226,170,40,3,237,95,248,104,159,
10,255,0,207,133,239,253,246,127,249,30,178,245,63,140,190,9,241,8,135,237,119,26,134,151,246,67,39,151,178,197,175,188,255,0,63,102,236,225,237,124,175,47,201,92,125,253,251,207,221,219,207,199,212,80,
7,213,127,240,159,252,60,255,0,160,246,167,255,0,130,39,255,0,228,234,7,196,15,135,128,131,253,189,169,241,207,252,128,159,255,0,147,171,229,74,40,3,237,95,248,104,159,10,255,0,207,133,233,247,220,70,
127,242,94,180,180,175,142,154,6,179,123,30,159,101,167,93,53,196,161,202,9,37,49,169,17,163,59,101,190,204,64,249,84,145,158,181,240,197,119,63,14,191,228,107,176,255,0,114,235,255,0,73,102,160,15,183,
120,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,209,224,46,154,175,214,203,249,93,215,161,208,7,158,
15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,62,61,0,145,253,148,120,227,254,63,71,255,0,34,87,161,215,207,13,212,253,79,243,160,15,68,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,
59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,62,115,94,139,224,46,154,175,214,203,249,93,208,1,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,117,242,39,
198,141,21,116,63,25,181,186,206,110,12,250,109,149,211,57,143,202,195,48,146,29,161,55,201,128,22,5,63,120,242,79,65,129,95,127,87,195,191,180,55,252,143,177,127,216,14,195,255,0,70,221,208,7,132,209,
69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,87,189,252,48,248,201,125,225,120,226,208,181,149,58,134,143,157,182,146,73,43,36,250,113,99,247,68,165,101,45,105,158,124,162,153,135,37,144,236,202,
15,4,162,128,63,68,227,146,63,30,70,146,70,226,194,59,0,29,29,8,190,91,149,190,25,12,164,125,152,32,65,109,144,70,253,251,255,0,135,111,46,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,249,135,224,
255,0,197,36,240,157,227,105,26,227,51,232,215,237,12,107,116,73,103,211,164,70,113,27,227,157,214,164,202,222,106,142,99,7,122,112,25,79,219,176,205,21,196,81,207,4,137,52,19,34,201,20,177,176,120,228,
141,192,100,116,117,36,50,176,32,130,14,8,160,14,0,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,189,14,190,120,110,167,234,127,157,0,122,39,252,39,163,
254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,243,154,244,95,1,116,213,126,182,95,202,238,128,15,248,64,135,253,
5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,94,135,69,0,121,225,241,232,4,143,236,163,199,31,241,250,63,249,18,143,248,79,71,253,2,143,254,6,143,254,68,175,59,110,167,234,127,
157,37,0,122,55,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,60,5,211,85,250,217,127,43,186,244,
58,0,243,209,224,33,145,255,0,19,83,212,127,203,144,245,255,0,175,186,43,208,215,168,250,143,231,69,0,124,240,65,201,224,245,61,143,173,38,15,161,252,141,125,16,221,79,212,255,0,58,74,0,249,107,199,58,
147,105,223,15,60,73,16,37,27,84,188,209,116,240,64,92,149,50,93,221,200,62,111,239,71,106,234,118,242,3,19,211,53,242,101,125,119,251,75,200,195,75,240,180,59,50,143,127,168,202,95,35,8,241,91,219,162,
141,189,203,44,242,97,135,221,10,203,209,235,228,74,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,43,171,240,63,252,141,90,55,253,124,183,254,
137,146,185,74,244,143,132,95,242,81,188,47,255,0,95,207,255,0,164,211,208,7,217,190,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,
0,125,15,95,60,176,57,60,30,167,177,245,161,73,200,228,245,29,207,173,125,13,64,31,60,96,250,31,200,215,162,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,
148,1,232,116,87,207,25,62,167,243,52,170,78,71,39,168,238,125,104,0,96,114,120,61,79,99,235,73,131,232,127,35,95,67,209,64,30,121,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,
88,56,230,247,167,253,186,87,157,228,250,159,204,208,7,208,245,243,203,3,147,193,234,123,31,90,20,156,142,79,81,220,250,215,208,212,1,243,198,15,161,252,141,122,39,128,129,3,85,200,199,54,93,127,237,238,
189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,64,30,135,69,124,241,147,234,127,51,74,164,228,114,122,142,231,214,128,6,7,39,131,212,246,62,180,152,62,135,242,53,244,61,20,1,231,158,2,4,13,
87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,0,125,15,95,60,176,57,60,30,167,177,245,161,73,200,228,245,29,207,173,125,13,64,31,60,96,250,
31,200,215,162,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,148,1,232,116,87,207,25,62,167,243,52,170,78,71,39,168,238,125,104,0,96,114,120,61,79,99,235,
73,131,232,127,35,95,67,209,64,30,121,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,87,157,228,250,159,204,208,7,208,245,243,203,3,147,193,234,123,31,90,
20,156,142,79,81,220,250,215,208,212,1,243,198,15,161,252,141,122,39,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,64,30,135,72,221,15,208,255,0,42,249,
231,39,212,254,102,149,73,200,228,245,29,207,173,0,124,151,226,143,249,24,181,175,251,9,94,127,233,68,149,131,93,127,143,255,0,228,117,241,71,253,134,245,31,253,42,146,185,10,0,40,162,138,0,40,162,138,
0,40,162,138,0,40,162,138,0,43,185,248,117,255,0,35,93,135,251,151,95,250,75,53,112,213,235,191,3,185,248,141,163,103,254,121,106,31,250,65,115,64,31,92,120,8,16,53,92,140,115,101,215,254,222,235,208,
235,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,35,147,212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,
114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,215,195,191,180,55,252,143,177,255,0,216,14,195,255,0,70,221,215,173,228,250,159,204,215,206,191,20,137,62,37,
92,156,255,0,196,186,215,175,251,243,208,7,156,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,87,191,124,35,248,185,47,134,37,135,195,254,32,153,230,240,252,206,18,218,229,203,60,154,
76,142,122,142,172,214,108,78,94,49,147,17,37,208,99,114,159,1,162,128,63,84,225,158,27,152,99,184,183,150,57,160,153,22,88,166,137,213,227,146,55,80,200,232,234,74,178,178,144,65,7,4,28,215,207,204,14,
79,7,169,236,125,107,231,191,3,120,226,93,34,88,180,205,74,87,147,76,145,194,197,43,49,102,178,102,61,71,36,152,9,57,100,25,41,203,40,198,69,126,131,67,44,83,197,20,240,58,75,12,209,164,145,72,140,25,
30,55,80,200,202,195,32,171,41,4,16,112,65,160,15,159,48,125,15,228,107,209,60,4,8,26,174,70,57,178,235,255,0,111,117,232,117,231,158,61,36,13,43,7,28,222,244,255,0,183,74,0,244,58,43,231,140,159,83,249,
154,85,39,35,147,212,119,62,180,0,48,57,60,30,167,177,245,164,193,244,63,145,175,161,232,160,15,60,240,16,32,106,185,24,230,203,175,253,189,215,161,215,158,120,244,144,52,172,28,115,123,211,254,221,43,
206,242,125,79,230,104,3,232,133,234,62,163,249,209,95,60,2,114,57,61,71,115,235,69,0,125,14,221,79,212,255,0,58,74,243,211,227,209,147,255,0,18,163,212,255,0,203,232,245,255,0,175,74,79,248,79,71,253,
2,143,254,6,143,254,68,160,15,36,253,165,255,0,228,27,225,95,250,252,212,255,0,244,77,165,124,139,95,78,252,119,214,134,187,163,232,147,11,111,178,253,139,80,158,61,166,111,59,204,251,84,1,179,159,42,
45,155,62,205,140,97,183,111,234,54,243,243,21,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,21,233,31,8,191,228,163,120,95,254,191,159,255,0,73,103,175,55,
174,235,225,173,239,246,119,142,60,61,121,229,249,190,69,227,55,151,191,102,236,219,204,184,221,181,241,215,57,218,126,148,1,246,223,143,122,105,95,91,223,229,105,94,117,94,141,199,141,199,125,51,251,
48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,128,60,237,122,143,168,254,117,244,61,121,224,240,16,4,31,237,83,199,63,241,228,63,
249,46,131,227,208,9,31,217,71,142,63,227,244,127,242,37,0,122,29,121,231,143,122,105,95,91,223,229,105,71,252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,
255,0,1,124,191,47,236,191,237,238,223,252,59,121,0,243,154,85,234,62,163,249,215,162,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,0,244,58,43,207,15,
143,64,36,127,101,30,56,255,0,143,209,255,0,200,148,127,194,122,63,232,20,127,240,52,127,242,37,0,30,61,233,165,125,111,127,149,165,121,213,122,55,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,
23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,0,243,181,234,62,163,249,215,208,245,231,131,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,15,143,
64,36,127,101,30,56,255,0,143,209,255,0,200,148,1,232,117,231,158,61,233,165,125,111,127,149,165,31,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,
242,252,191,178,255,0,183,187,127,240,237,228,3,206,105,87,168,250,143,231,94,137,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,3,208,232,175,60,
62,61,0,145,253,148,120,227,254,63,71,255,0,34,81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,0,120,247,166,149,245,189,254,86,149,231,85,232,220,120,220,119,211,63,179,15,253,126,121,223,108,
255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,3,206,215,168,250,143,231,95,67,215,158,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,62,61,
0,145,253,148,120,227,254,63,71,255,0,34,80,7,161,215,158,120,247,166,149,245,189,254,86,148,127,194,122,63,232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,
242,254,203,254,222,237,255,0,195,183,144,15,57,165,94,163,234,63,157,122,39,252,32,67,254,130,167,255,0,0,135,255,0,37,208,60,4,1,7,251,84,241,207,252,121,15,254,75,160,15,67,162,188,240,248,244,2,71,
246,81,227,143,248,253,31,252,137,71,252,39,163,254,129,71,255,0,3,71,255,0,34,80,1,227,222,154,87,214,247,249,90,87,157,87,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,
191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,160,15,59,94,163,234,63,157,125,15,94,120,60,4,1,7,251,84,241,207,252,121,15,254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,
64,30,135,94,121,227,222,154,87,214,247,249,90,81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,
222,64,60,230,149,122,143,168,254,117,232,159,240,129,15,250,10,159,252,2,31,252,151,71,252,32,96,115,253,170,78,57,255,0,143,33,219,159,249,251,160,15,134,124,127,255,0,35,175,138,63,236,55,168,255,0,
233,84,149,200,87,77,227,59,143,181,120,175,196,55,59,60,191,59,86,190,147,102,237,219,119,92,200,113,187,11,156,122,237,31,74,230,104,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,175,93,248,
27,255,0,37,31,70,255,0,174,90,135,254,144,92,215,145,87,165,252,36,212,63,178,252,115,165,222,249,94,127,149,29,232,242,247,249,123,183,217,78,191,127,99,227,25,207,221,57,233,197,0,125,149,227,222,154,
87,214,247,249,90,87,157,87,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,160,15,59,94,163,234,63,157,125,
15,94,120,60,4,1,7,251,84,241,207,252,121,15,254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,64,30,135,94,121,227,222,154,87,214,247,249,90,81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,
148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,64,60,230,190,118,248,163,255,0,35,42,255,0,216,58,215,255,0,67,158,190,206,255,0,132,8,127,208,
84,255,0,224,16,255,0,228,186,249,39,227,102,149,253,143,227,20,180,243,254,209,157,38,206,95,51,203,242,190,252,151,35,110,221,242,116,219,215,119,126,148,1,228,20,81,69,0,20,81,69,0,20,81,69,0,20,81,
69,0,20,81,69,0,20,81,69,0,20,81,69,0,21,244,87,193,223,139,82,104,83,67,225,159,17,220,151,209,37,96,154,125,228,204,89,244,201,89,128,88,93,142,73,177,114,79,4,255,0,163,183,204,184,140,176,31,58,209,
64,31,170,200,233,34,44,145,178,188,110,161,209,208,134,86,86,25,86,86,25,4,16,65,4,28,17,94,125,227,222,154,87,214,247,249,90,87,206,159,10,126,49,93,104,113,199,225,205,113,77,245,137,42,154,109,212,
215,62,83,88,158,113,109,35,180,114,151,183,115,129,25,56,242,27,11,254,173,179,31,209,96,175,142,6,65,254,205,26,111,32,140,94,121,255,0,108,29,127,229,212,70,35,22,191,237,239,223,252,59,121,0,243,170,
85,234,62,163,249,215,162,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,0,244,58,43,207,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,148,127,194,
122,63,232,20,127,240,52,127,242,37,0,30,61,233,165,125,111,127,149,165,121,213,122,55,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,
127,208,84,255,0,224,16,255,0,228,186,0,243,181,234,62,163,249,209,94,138,60,4,50,63,226,106,122,143,249,114,30,191,245,247,69,0,121,211,117,63,83,252,233,41,196,28,158,15,83,216,250,210,96,250,31,200,
208,7,151,124,87,255,0,144,13,151,253,133,35,255,0,210,107,170,249,254,190,128,248,174,8,208,108,178,49,255,0,19,72,250,255,0,215,181,205,124,255,0,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,
81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,117,126,7,255,0,145,171,70,255,0,175,150,255,0,209,50,87,41,93,95,129,255,0,228,106,209,191,235,229,191,244,76,148,1,247,87,128,186,106,191,91,47,229,119,94,135,
94,121,224,32,64,213,114,49,205,151,95,251,123,175,67,160,2,190,120,110,167,234,127,157,125,15,95,60,176,57,60,30,167,177,245,160,6,215,162,248,11,166,171,245,178,254,87,117,231,120,62,135,242,53,232,
158,2,4,13,87,35,28,217,117,255,0,183,186,0,244,58,40,162,128,62,120,110,167,234,127,157,37,57,129,201,224,245,61,143,173,38,15,161,252,141,0,122,39,128,186,106,191,91,47,229,119,94,135,94,121,224,32,
64,213,114,49,205,151,95,251,123,175,67,160,2,190,120,110,167,234,127,157,125,15,95,60,176,57,60,30,167,177,245,160,6,215,162,248,11,166,171,245,178,254,87,117,231,120,62,135,242,53,232,158,2,4,13,87,
35,28,217,117,255,0,183,186,0,244,58,40,162,128,62,120,110,167,234,127,157,37,57,129,201,224,245,61,143,173,38,15,161,252,141,0,122,39,128,186,106,191,91,47,229,119,94,135,94,121,224,32,64,213,114,49,
205,151,95,251,123,175,67,160,2,190,120,110,167,234,127,157,125,15,95,60,176,57,60,30,167,177,245,160,6,215,162,248,11,166,171,245,178,254,87,117,231,120,62,135,242,53,232,158,2,4,13,87,35,28,217,117,
255,0,183,186,0,244,58,40,162,128,62,120,110,167,234,127,157,37,57,129,201,224,245,61,143,173,38,15,161,252,141,0,122,39,128,186,106,191,91,47,229,119,94,135,94,121,224,32,64,213,114,49,205,151,95,251,
123,175,67,160,2,190,120,110,167,234,127,157,125,15,95,60,176,57,60,30,167,177,245,160,6,215,162,248,11,166,171,245,178,254,87,117,231,120,62,135,242,53,232,158,2,4,13,87,35,28,217,117,255,0,183,186,0,
244,58,70,232,126,135,249,82,210,55,67,244,63,202,128,63,49,188,81,255,0,35,22,181,255,0,97,43,207,253,40,146,176,107,123,197,31,242,49,107,95,246,18,188,255,0,210,137,43,6,128,10,40,162,128,10,40,162,
128,10,40,162,128,10,40,162,128,10,238,126,29,127,200,215,97,254,229,215,254,146,205,92,53,119,63,14,191,228,107,176,255,0,114,235,255,0,73,102,160,15,183,60,5,211,85,250,217,127,43,186,244,58,243,207,
1,2,6,171,145,142,108,186,255,0,219,221,122,29,0,21,243,195,117,63,83,252,235,232,122,249,229,129,201,224,245,61,143,173,0,54,189,23,192,93,53,95,173,151,242,187,175,59,193,244,63,145,175,68,240,16,32,
106,185,24,230,203,175,253,189,208,7,161,215,195,191,180,55,252,143,177,127,216,14,195,255,0,70,221,215,220,85,240,239,237,13,255,0,35,236,127,246,3,176,255,0,209,183,116,1,225,52,81,69,0,20,81,69,0,20,
81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,40,36,28,142,8,175,167,254,6,124,71,183,182,185,151,195,58,245,194,198,215,166,218,61,38,246,86,33,76,145,25,85,108,167,118,36,6,115,40,22,
238,72,4,143,41,176,118,19,242,253,42,177,82,25,73,86,82,8,32,224,130,57,4,17,200,32,208,7,234,189,21,243,223,193,159,138,159,240,145,91,167,134,188,65,114,163,91,181,141,86,194,234,86,195,106,182,232,
167,40,236,199,230,189,129,84,23,207,205,60,103,204,27,157,36,175,161,40,3,231,134,234,126,167,249,210,83,152,28,158,15,83,216,250,210,96,250,31,200,208,7,162,120,11,166,171,245,178,254,87,117,232,117,
231,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,0,85,234,62,163,249,209,66,245,31,81,252,232,160,1,186,159,169,254,116,148,173,212,253,79,243,164,160,15,152,127,105,127,249,6,248,91,254,191,53,63,
253,19,105,254,38,190,69,175,174,191,105,127,249,6,248,87,254,191,53,63,253,19,105,95,34,208,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,94,145,240,139,254,
74,55,133,255,0,235,249,255,0,244,154,122,243,122,244,143,132,95,242,81,188,47,255,0,95,207,255,0,164,179,208,7,217,190,61,36,13,43,7,28,222,244,255,0,183,74,243,188,159,83,249,154,244,79,30,244,210,190,
183,191,202,210,188,234,128,28,164,228,114,122,142,231,214,190,134,175,158,23,168,250,143,231,95,67,208,1,94,121,227,210,64,210,176,113,205,239,79,251,116,175,67,175,60,241,239,77,43,235,123,252,173,40,
3,206,242,125,79,230,105,84,156,142,79,81,220,250,211,105,87,168,250,143,231,64,31,67,209,69,20,1,231,158,61,36,13,43,7,28,222,244,255,0,183,74,243,188,159,83,249,154,244,79,30,244,210,190,183,191,202,
210,188,234,128,28,164,228,114,122,142,231,214,190,134,175,158,23,168,250,143,231,95,67,208,1,94,121,227,210,64,210,176,113,205,239,79,251,116,175,67,175,60,241,239,77,43,235,123,252,173,40,3,206,242,
125,79,230,105,84,156,142,79,81,220,250,211,105,87,168,250,143,231,64,31,67,209,69,20,1,231,158,61,36,13,43,7,28,222,244,255,0,183,74,243,188,159,83,249,154,244,79,30,244,210,190,183,191,202,210,188,234,
128,28,164,228,114,122,142,231,214,190,134,175,158,23,168,250,143,231,95,67,208,1,94,121,227,210,64,210,176,113,205,239,79,251,116,175,67,175,60,241,239,77,43,235,123,252,173,40,3,206,242,125,79,230,105,
84,156,142,79,81,220,250,211,105,87,168,250,143,231,64,31,67,209,69,20,1,231,158,61,36,13,43,7,28,222,244,255,0,183,74,243,188,159,83,249,154,244,79,30,244,210,190,183,191,202,210,188,234,128,28,164,228,
114,122,142,231,214,190,134,175,158,23,168,250,143,231,95,67,208,1,94,121,227,210,64,210,176,113,205,239,79,251,116,175,67,175,60,241,239,77,43,235,123,252,173,40,3,206,242,125,79,230,105,84,156,142,79,
81,220,250,211,105,87,168,250,143,231,64,31,46,248,255,0,254,71,95,20,127,216,111,81,255,0,210,169,43,144,174,191,199,255,0,242,58,248,163,254,195,122,143,254,149,73,92,133,0,20,81,69,0,20,81,69,0,20,
81,69,0,20,81,69,0,21,235,191,3,185,248,141,163,103,254,121,106,31,250,65,115,94,69,94,187,240,55,254,74,62,141,255,0,92,181,15,253,32,185,160,15,174,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,
62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,57,73,200,228,245,29,207,173,125,13,95,60,47,81,245,31,206,190,135,160,2,188,243,199,164,129,165,96,227,155,222,159,246,233,94,135,94,121,
227,222,154,87,214,247,249,90,80,7,157,228,250,159,204,215,206,191,20,137,62,37,92,156,255,0,196,186,215,175,251,243,215,209,53,243,183,197,31,249,25,87,254,193,214,191,250,28,244,1,231,20,81,69,0,20,
81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,75,4,242,219,77,21,196,18,52,83,67,34,75,20,136,112,201,34,48,100,101,61,138,176,4,123,138,250,99,193,94,44,143,196,
86,98,57,156,38,167,104,177,173,212,121,218,37,7,129,113,24,201,202,182,63,120,160,157,142,121,249,89,73,249,138,180,180,141,86,235,70,191,183,191,180,144,164,176,56,108,115,181,208,240,241,186,130,3,
35,175,4,31,168,228,3,64,31,168,212,87,49,225,15,21,105,222,49,208,237,53,173,57,198,217,148,37,205,185,96,210,90,93,170,169,154,218,92,99,230,66,192,171,96,7,66,174,188,26,233,232,3,207,60,122,72,26,
86,14,57,189,233,255,0,110,149,231,121,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,56,19,145,201,234,59,159,90,41,23,168,250,143,231,69,0,122,41,241,232,201,255,0,137,81,234,127,229,
244,122,255,0,215,165,39,252,39,163,254,129,71,255,0,3,71,255,0,34,87,157,183,83,245,63,206,146,128,56,207,142,250,208,215,116,125,18,97,109,246,95,177,106,19,199,180,205,231,121,159,106,128,54,115,229,
69,179,103,217,177,140,54,237,253,70,222,126,98,175,160,62,43,255,0,200,6,203,254,194,145,255,0,233,53,213,124,255,0,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,
81,64,5,119,95,13,111,127,179,188,113,225,235,207,47,205,242,47,25,188,189,251,55,102,222,101,198,237,175,142,185,206,211,244,174,22,186,191,3,255,0,200,213,163,127,215,203,127,232,153,40,3,238,190,60,
110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,120,11,166,171,245,178,254,87,117,232,116,1,231,131,
192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,149,232,117,243,195,117,63,83,252,232,3,209,63,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,
250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,207,156,215,162,248,11,166,171,245,178,254,87,116,0,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,16,127,
181,79,28,255,0,199,144,255,0,228,186,244,58,40,3,207,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,148,127,194,122,63,232,20,127,240,52,127,242,37,121,219,117,63,83,252,233,40,3,209,184,241,184,
239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,209,224,46,154,175,214,203,249,93,215,161,208,7,158,15,1,0,65,254,
213,60,115,255,0,30,67,255,0,146,232,62,61,0,145,253,148,120,227,254,63,71,255,0,34,87,161,215,207,13,212,253,79,243,160,15,68,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,59,233,159,
217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,62,115,94,139,224,46,154,175,214,203,249,93,208,1,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,15,1,0,65,254,213,
60,115,255,0,30,67,255,0,146,235,208,232,160,15,60,62,61,0,145,253,148,120,227,254,63,71,255,0,34,81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,149,231,109,212,253,79,243,164,160,15,70,227,198,227,
190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,10,159,252,2,31,252,151,71,128,186,106,191,91,47,229,119,94,135,64,30,120,60,4,1,7,251,84,241,
207,252,121,15,254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,94,135,95,60,55,83,245,63,206,128,61,19,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,102,31,250,252,
243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,249,205,122,47,128,186,106,191,91,47,229,119,64,7,252,32,67,254,130,167,255,0,0,135,255,0,37,208,60,4,1,7,251,84,241,207,252,121,15,254,75,
175,67,162,128,60,240,248,244,2,71,246,81,227,143,248,253,31,252,137,71,252,39,163,254,129,71,255,0,3,71,255,0,34,87,157,183,83,245,63,206,146,128,61,27,143,27,142,250,103,246,97,255,0,175,207,59,237,
159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,30,2,233,170,253,108,191,149,221,122,29,0,121,224,240,16,4,31,237,83,199,63,241,228,63,249,46,131,227,
208,9,31,217,71,142,63,227,244,127,242,37,122,29,124,240,221,79,212,255,0,58,0,244,79,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,
127,219,221,191,248,118,243,231,53,232,190,2,233,170,253,108,191,149,221,0,31,240,129,15,250,10,159,252,2,31,252,151,71,252,32,96,115,253,170,78,57,255,0,143,33,219,159,249,251,175,67,164,110,135,232,
127,149,0,126,103,120,206,227,237,94,43,241,13,206,207,47,206,213,175,164,217,187,118,221,215,50,28,110,194,231,30,187,71,210,185,154,222,241,71,252,140,90,215,253,132,175,63,244,162,74,193,160,2,138,
40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,189,47,225,38,161,253,151,227,157,46,247,202,243,252,168,239,71,151,191,203,221,190,202,117,251,251,31,24,206,126,233,207,78,43,205,43,185,248,117,255,0,
35,93,135,251,151,95,250,75,53,0,125,187,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,143,1,116,213,126,
182,95,202,238,189,14,128,60,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,189,14,190,120,110,167,234,127,157,0,122,39,252,39,163,254,129,71,255,0,
3,71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,243,154,244,95,1,116,213,126,182,95,202,238,128,15,248,64,135,253,5,79,254,1,15,254,
75,175,146,126,54,105,95,216,254,49,75,79,63,237,25,210,108,229,243,60,191,43,239,201,114,54,237,223,39,77,189,119,119,233,95,124,215,195,191,180,55,252,143,177,127,216,14,195,255,0,70,221,208,7,132,209,
69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,1,234,127,11,126,34,93,120,27,88,43,38,110,52,125,71,100,55,214,173,33,69,73,51,136,110,209,182,
73,177,225,44,67,252,184,104,153,129,228,41,31,96,39,196,8,228,69,116,211,55,163,168,100,101,190,5,89,88,101,88,17,105,130,8,32,131,233,95,157,157,43,232,47,134,190,34,109,75,79,147,73,185,124,221,105,
200,166,22,98,75,75,104,204,84,14,122,155,118,42,135,253,135,140,115,131,64,31,74,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,
5,79,254,1,15,254,75,163,192,93,53,95,173,151,242,187,175,67,160,15,61,30,2,25,31,241,53,61,71,252,185,15,95,250,251,162,189,13,122,143,168,254,116,80,7,207,4,28,158,15,83,216,250,210,96,250,31,200,215,
209,13,212,253,79,243,164,160,15,137,254,43,130,52,27,44,140,127,196,210,62,191,245,237,115,95,63,215,215,95,180,191,252,131,124,45,255,0,95,154,159,254,137,180,255,0,19,95,34,208,1,69,20,80,1,69,20,80,
1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,93,95,129,255,0,228,106,209,191,235,229,191,244,76,149,202,87,164,124,34,255,0,146,141,225,127,250,254,127,253,38,158,128,62,205,240,
16,32,106,185,24,230,203,175,253,189,215,161,215,158,120,244,144,52,172,28,115,123,211,254,221,43,206,242,125,79,230,104,3,232,122,249,229,129,201,224,245,61,143,173,10,78,71,39,168,238,125,107,232,106,
0,249,227,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,94,135,94,121,227,210,64,210,176,113,205,239,79,251,116,160,15,67,162,190,120,201,245,63,153,165,82,114,57,61,71,115,235,64,3,3,147,
193,234,123,31,90,76,31,67,249,26,250,30,138,0,243,207,1,2,6,171,145,142,108,186,255,0,219,221,122,29,121,231,143,73,3,74,193,199,55,189,63,237,210,188,239,39,212,254,102,128,62,135,175,158,88,28,158,
15,83,216,250,208,164,228,114,122,142,231,214,190,134,160,15,158,48,125,15,228,107,209,60,4,8,26,174,70,57,178,235,255,0,111,117,232,117,231,158,61,36,13,43,7,28,222,244,255,0,183,74,0,244,58,43,231,140,
159,83,249,154,85,39,35,147,212,119,62,180,0,48,57,60,30,167,177,245,164,193,244,63,145,175,161,232,160,15,60,240,16,32,106,185,24,230,203,175,253,189,215,161,215,158,120,244,144,52,172,28,115,123,211,
254,221,43,206,242,125,79,230,104,3,232,122,249,229,129,201,224,245,61,143,173,10,78,71,39,168,238,125,107,232,106,0,249,227,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,94,135,94,121,
227,210,64,210,176,113,205,239,79,251,116,160,15,67,162,190,120,201,245,63,153,165,82,114,57,61,71,115,235,64,3,3,147,193,234,123,31,90,76,31,67,249,26,250,30,138,0,243,207,1,2,6,171,145,142,108,186,255,
0,219,221,122,29,121,231,143,73,3,74,193,199,55,189,63,237,210,188,239,39,212,254,102,128,62,135,175,158,88,28,158,15,83,216,250,208,164,228,114,122,142,231,214,190,134,160,15,158,48,125,15,228,107,209,
60,4,8,26,174,70,57,178,235,255,0,111,117,232,117,231,158,61,36,13,43,7,28,222,244,255,0,183,74,0,244,58,70,232,126,135,249,87,207,57,62,167,243,52,170,78,71,39,168,238,125,104,3,228,191,20,127,200,197,
173,127,216,74,243,255,0,74,36,172,26,235,252,127,255,0,35,175,138,63,236,55,168,255,0,233,84,149,200,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,93,207,195,175,249,26,236,63,220,186,255,0,210,89,
171,134,175,93,248,29,207,196,109,27,63,243,203,80,255,0,210,11,154,0,250,227,192,64,129,170,228,99,155,46,191,246,247,94,135,94,121,227,210,64,210,176,113,205,239,79,251,116,175,59,201,245,63,153,160,
15,161,235,231,150,7,39,131,212,246,62,180,41,57,28,158,163,185,245,175,161,168,3,231,140,31,67,249,26,244,79,1,2,6,171,145,142,108,186,255,0,219,221,122,29,121,231,143,73,3,74,193,199,55,189,63,237,210,
128,61,14,190,29,253,161,191,228,125,143,254,192,118,31,250,54,238,189,111,39,212,254,102,190,117,248,164,73,241,42,228,231,254,37,214,189,127,223,158,128,60,226,138,40,160,2,138,40,160,2,138,40,160,2,
138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,183,188,53,171,190,137,172,217,95,169,111,46,57,66,92,34,243,190,222,79,146,101,35,191,200,197,128,254,242,169,
28,128,107,6,138,0,253,19,248,126,202,241,234,82,33,202,72,44,29,24,116,101,101,186,101,97,234,8,32,231,220,87,162,215,206,94,31,214,155,91,240,7,131,103,121,60,203,139,56,117,13,50,225,183,110,109,214,
18,91,193,14,243,185,152,177,182,16,49,220,119,29,217,61,106,108,159,83,249,154,0,250,33,122,143,168,254,116,87,207,0,156,142,79,81,220,250,209,64,31,67,183,83,245,63,206,146,188,244,248,244,100,255,0,
196,168,245,63,242,250,61,127,235,210,147,254,19,209,255,0,64,163,255,0,129,163,255,0,145,40,3,201,63,105,127,249,6,248,87,254,191,53,63,253,19,105,95,34,215,211,191,29,245,161,174,232,250,36,194,219,
236,191,98,212,39,143,105,155,206,243,62,213,0,108,231,202,139,102,207,179,99,24,109,219,250,141,188,252,197,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,
5,122,71,194,47,249,40,222,23,255,0,175,231,255,0,210,89,235,205,235,186,248,107,123,253,157,227,143,15,94,121,126,111,145,120,205,229,239,217,187,54,243,46,55,109,124,117,206,118,159,165,0,125,183,227,
222,154,87,214,247,249,90,87,157,87,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,160,15,59,94,163,234,
63,157,125,15,94,120,60,4,1,7,251,84,241,207,252,121,15,254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,64,30,135,94,121,227,222,154,87,214,247,249,90,81,255,0,9,232,255,0,160,81,255,0,192,209,
255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,64,60,230,149,122,143,168,254,117,232,159,240,129,15,250,10,159,252,2,31,252,151,64,
240,16,4,31,237,83,199,63,241,228,63,249,46,128,61,14,138,243,195,227,208,9,31,217,71,142,63,227,244,127,242,37,31,240,158,143,250,5,31,252,13,31,252,137,64,7,143,122,105,95,91,223,229,105,94,117,94,141,
199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,128,60,237,122,143,168,254,117,244,61,121,224,240,16,4,31,
237,83,199,63,241,228,63,249,46,131,227,208,9,31,217,71,142,63,227,244,127,242,37,0,122,29,121,231,143,122,105,95,91,223,229,105,71,252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,76,254,
204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,0,243,154,85,234,62,163,249,215,162,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,16,127,181,79,28,255,0,199,144,255,0,
228,186,0,244,58,43,207,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,148,127,194,122,63,232,20,127,240,52,127,242,37,0,30,61,233,165,125,111,127,149,165,121,213,122,55,30,55,29,244,207,236,195,255,
0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,0,243,181,234,62,163,249,215,208,245,231,131,192,64,16,127,181,79,28,255,0,199,
144,255,0,228,186,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,148,1,232,117,231,158,61,233,165,125,111,127,149,165,31,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,
231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,228,3,206,105,87,168,250,143,231,94,137,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,
232,3,208,232,175,60,62,61,0,145,253,148,120,227,254,63,71,255,0,34,81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,0,120,247,166,149,245,189,254,86,149,231,85,232,220,120,220,119,211,63,179,15,
253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,3,206,215,168,250,143,231,95,67,215,158,15,1,0,65,254,213,60,115,255,0,30,67,
255,0,146,232,62,61,0,145,253,148,120,227,254,63,71,255,0,34,80,7,161,215,158,120,247,166,149,245,189,254,86,148,127,194,122,63,232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,
219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,144,15,57,165,94,163,234,63,157,122,39,252,32,67,254,130,167,255,0,0,135,255,0,37,209,255,0,8,24,28,255,0,106,147,142,127,227,200,118,231,254,126,
232,3,225,159,31,255,0,200,235,226,143,251,13,234,63,250,85,37,114,21,211,120,206,227,237,94,43,241,13,206,207,47,206,213,175,164,217,187,118,221,215,50,28,110,194,231,30,187,71,210,185,154,0,40,162,138,
0,40,162,138,0,40,162,138,0,40,162,138,0,43,215,126,6,255,0,201,71,209,191,235,150,161,255,0,164,23,53,228,85,233,127,9,53,15,236,191,28,233,119,190,87,159,229,71,122,60,189,254,94,237,246,83,175,223,
216,248,198,115,247,78,122,113,64,31,101,120,247,166,149,245,189,254,86,149,231,85,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,
255,0,65,83,255,0,128,67,255,0,146,232,3,206,215,168,250,143,231,95,67,215,158,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,62,61,0,145,253,148,120,227,254,63,71,255,0,34,80,7,161,215,158,120,247,
166,149,245,189,254,86,148,127,194,122,63,232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,144,15,57,175,157,190,40,255,
0,200,202,191,246,14,181,255,0,208,231,175,179,191,225,2,31,244,21,63,248,4,63,249,46,190,73,248,217,165,127,99,248,197,45,60,255,0,180,103,73,179,151,204,242,252,175,191,37,200,219,183,124,157,54,245,
221,223,165,0,121,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,31,70,124,44,186,50,120,78,75,70,144,49,182,215,47,164,88,248,
221,26,92,89,105,128,18,7,59,93,224,114,164,255,0,18,190,15,97,232,149,194,124,5,208,191,183,44,188,68,134,235,236,162,214,231,79,108,136,124,239,48,220,71,118,58,121,177,109,218,32,28,229,179,187,182,
57,250,3,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,3,206,215,168,250,143,231,69,122,40,240,16,200,255,0,137,169,234,63,229,200,122,255,0,215,221,20,1,231,77,212,253,79,243,164,167,16,114,120,61,
79,99,235,73,131,232,127,35,64,30,93,241,95,254,64,54,95,246,20,143,255,0,73,174,171,231,250,250,3,226,184,35,65,178,200,199,252,77,35,235,255,0,94,215,53,243,253,0,20,81,69,0,20,81,69,0,20,81,69,0,20,
81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,21,213,248,31,254,70,173,27,254,190,91,255,0,68,201,92,165,117,126,7,255,0,145,171,70,255,0,175,150,255,0,209,50,80,7,221,94,2,233,170,253,108,191,149,
221,122,29,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,128,10,249,225,186,159,169,254,117,244,61,124,242,192,228,240,122,158,199,214,128,27,94,139,224,46,154,175,214,203,249,93,215,157,224,250,
31,200,215,162,120,8,16,53,92,140,115,101,215,254,222,232,3,208,232,162,138,0,249,225,186,159,169,254,116,148,230,7,39,131,212,246,62,180,152,62,135,242,52,1,232,158,2,233,170,253,108,191,149,221,122,
29,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,128,10,249,225,186,159,169,254,117,244,61,124,242,192,228,240,122,158,199,214,128,27,94,139,224,46,154,175,214,203,249,93,215,157,224,250,31,200,
215,162,120,8,16,53,92,140,115,101,215,254,222,232,3,208,232,162,138,0,249,225,186,159,169,254,116,148,230,7,39,131,212,246,62,180,152,62,135,242,52,1,232,158,2,233,170,253,108,191,149,221,122,29,121,
231,128,129,3,85,200,199,54,93,127,237,238,189,14,128,10,249,225,186,159,169,254,117,244,61,124,242,192,228,240,122,158,199,214,128,27,94,139,224,46,154,175,214,203,249,93,215,157,224,250,31,200,215,162,
120,8,16,53,92,140,115,101,215,254,222,232,3,208,232,162,138,0,249,225,186,159,169,254,116,148,230,7,39,131,212,246,62,180,152,62,135,242,52,1,232,158,2,233,170,253,108,191,149,221,122,29,121,231,128,
129,3,85,200,199,54,93,127,237,238,189,14,128,10,249,225,186,159,169,254,117,244,61,124,242,192,228,240,122,158,199,214,128,27,94,139,224,46,154,175,214,203,249,93,215,157,224,250,31,200,215,162,120,8,
16,53,92,140,115,101,215,254,222,232,3,208,233,27,161,250,31,229,75,72,221,15,208,255,0,42,0,252,198,241,71,252,140,90,215,253,132,175,63,244,162,74,193,173,239,20,127,200,197,173,127,216,74,243,255,0,
74,36,172,26,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,43,185,248,117,255,0,35,93,135,251,151,95,250,75,53,112,213,220,252,58,255,0,145,174,195,253,203,175,253,37,154,128,62,220,240,23,77,
87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,
239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,95,14,254,208,223,242,62,197,255,0,96,59,15,253,27,119,95,113,87,195,191,180,55,252,143,177,255,0,216,14,195,255,0,70,221,208,
7,132,209,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,1,245,175,236,207,255,0,30,158,46,255,0,174,250,55,254,129,169,87,212,117,
242,231,236,207,255,0,30,158,45,255,0,174,250,63,254,129,169,87,212,116,0,171,212,125,71,243,162,133,234,62,163,249,209,64,3,117,63,83,252,233,41,91,169,250,159,231,73,64,31,48,254,210,255,0,242,13,240,
183,253,126,106,127,250,38,211,252,77,124,139,95,93,126,210,255,0,242,13,240,175,253,126,106,127,250,38,210,190,69,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,
40,160,2,138,40,160,2,189,35,225,23,252,148,111,11,255,0,215,243,255,0,233,52,245,230,245,233,31,8,191,228,163,120,95,254,191,159,255,0,73,103,160,15,179,124,122,72,26,86,14,57,189,233,255,0,110,149,231,
121,62,167,243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,57,73,200,228,245,29,207,173,125,13,95,60,47,81,245,31,206,190,135,160,2,188,243,199,164,129,165,96,227,155,222,159,246,233,94,135,94,
121,227,222,154,87,214,247,249,90,80,7,157,228,250,159,204,210,169,57,28,158,163,185,245,166,210,175,81,245,31,206,128,62,135,162,138,40,3,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,
243,53,232,158,61,233,165,125,111,127,149,165,121,213,0,57,73,200,228,245,29,207,173,125,13,95,60,47,81,245,31,206,190,135,160,2,188,243,199,164,129,165,96,227,155,222,159,246,233,94,135,94,121,227,222,
154,87,214,247,249,90,80,7,157,228,250,159,204,210,169,57,28,158,163,185,245,166,210,175,81,245,31,206,128,62,135,162,138,40,3,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,53,232,
158,61,233,165,125,111,127,149,165,121,213,0,57,73,200,228,245,29,207,173,125,13,95,60,47,81,245,31,206,190,135,160,2,188,243,199,164,129,165,96,227,155,222,159,246,233,94,135,94,121,227,222,154,87,214,
247,249,90,80,7,157,228,250,159,204,210,169,57,28,158,163,185,245,166,210,175,81,245,31,206,128,62,135,162,138,40,3,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,53,232,158,61,233,
165,125,111,127,149,165,121,213,0,57,73,200,228,245,29,207,173,125,13,95,60,47,81,245,31,206,190,135,160,2,188,243,199,164,129,165,96,227,155,222,159,246,233,94,135,94,121,227,222,154,87,214,247,249,90,
80,7,157,228,250,159,204,210,169,57,28,158,163,185,245,166,210,175,81,245,31,206,128,62,93,241,255,0,252,142,190,40,255,0,176,222,163,255,0,165,82,87,33,93,127,143,255,0,228,117,241,71,253,134,245,31,
253,42,146,185,10,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,43,215,126,7,115,241,27,70,207,252,242,212,63,244,130,230,188,138,189,119,224,111,252,148,125,27,254,185,106,31,250,65,115,64,31,
92,120,244,144,52,172,28,115,123,211,254,221,43,206,242,125,79,230,107,209,60,123,211,74,250,222,255,0,43,74,243,170,0,114,147,145,201,234,59,159,90,250,26,190,120,94,163,234,63,157,125,15,64,5,121,231,
143,73,3,74,193,199,55,189,63,237,210,189,14,188,243,199,189,52,175,173,239,242,180,160,15,59,201,245,63,153,175,157,126,41,18,124,74,185,57,255,0,137,117,175,95,247,231,175,162,107,231,111,138,63,242,
50,175,253,131,173,127,244,57,232,3,206,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,247,95,132,132,141,
63,87,193,199,250,93,191,79,250,229,37,122,230,79,169,252,205,121,31,194,95,249,7,234,223,245,247,111,255,0,162,158,189,110,128,28,9,200,228,245,29,207,173,20,139,212,125,71,243,162,128,61,20,248,244,
100,255,0,196,168,245,63,242,250,61,127,235,210,147,254,19,209,255,0,64,163,255,0,129,163,255,0,145,43,206,219,169,250,159,231,73,64,28,103,199,125,104,107,186,62,137,48,182,251,47,216,181,9,227,218,102,
243,188,207,181,64,27,57,242,162,217,179,236,216,198,27,118,254,163,111,63,49,87,208,31,21,255,0,228,3,101,255,0,97,72,255,0,244,154,234,190,127,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,
2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,187,175,134,183,191,217,222,56,240,245,231,151,230,249,23,140,222,94,253,155,179,111,50,227,118,215,199,92,231,105,250,87,11,93,95,129,255,0,228,106,
209,191,235,229,191,244,76,148,1,247,95,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,60,5,211,
85,250,217,127,43,186,244,58,0,243,193,224,32,8,63,218,167,142,127,227,200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,244,58,249,225,186,159,169,254,116,1,232,159,240,158,143,250,5,
31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,231,206,107,209,124,5,211,85,250,217,127,43,186,0,63,225,2,31,244,21,63,248,
4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,122,29,20,1,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,188,237,186,159,169,254,116,
148,1,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,240,23,77,87,235,101,252,174,235,208,
232,3,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,43,208,235,231,134,234,126,167,249,208,7,162,127,194,122,63,232,20,127,240,52,127,
242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,159,57,175,69,240,23,77,87,235,101,252,174,232,0,255,0,132,8,127,208,84,255,0,224,16,255,0,228,
186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,117,232,116,80,7,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,243,182,234,126,
167,249,210,80,7,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,163,192,93,53,95,173,151,242,187,175,67,
160,15,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,175,67,175,158,27,169,250,159,231,64,30,137,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,
148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,124,230,189,23,192,93,53,95,173,151,242,187,160,3,254,16,33,255,0,65,83,255,0,128,67,255,0,146,
232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,215,161,209,64,30,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,43,206,219,169,250,159,231,73,
64,30,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,143,1,116,213,126,182,95,202,238,189,14,128,60,240,
120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,189,14,190,120,110,167,234,127,157,0,122,39,252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,
76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,243,154,244,95,1,116,213,126,182,95,202,238,128,15,248,64,135,253,5,79,254,1,15,254,75,163,254,16,48,57,254,213,39,28,
255,0,199,144,237,207,252,253,215,161,210,55,67,244,63,202,128,63,51,188,103,113,246,175,21,248,134,231,103,151,231,106,215,210,108,221,187,110,235,153,14,55,97,115,143,93,163,233,92,205,111,120,163,254,
70,45,107,254,194,87,159,250,81,37,96,208,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,94,151,240,147,80,254,203,241,206,151,123,229,121,254,84,119,163,203,223,229,238,223,101,58,253,253,143,140,103,
63,116,231,167,21,230,149,220,252,58,255,0,145,174,195,253,203,175,253,37,154,128,62,221,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,
15,250,10,159,252,2,31,252,151,71,128,186,106,191,91,47,229,119,94,135,64,30,120,60,4,1,7,251,84,241,207,252,121,15,254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,94,135,95,60,55,83,245,63,
206,128,61,19,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,249,205,122,47,128,186,106,191,91,
47,229,119,64,7,252,32,67,254,130,167,255,0,0,135,255,0,37,215,201,63,27,52,175,236,127,24,165,167,159,246,140,233,54,114,249,158,95,149,247,228,185,27,118,239,147,166,222,187,187,244,175,190,107,225,
223,218,27,254,71,216,191,236,7,97,255,0,163,110,232,3,194,104,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,
0,250,87,224,46,133,253,185,101,226,37,55,95,101,251,37,206,158,217,242,124,237,255,0,104,142,236,99,30,108,91,118,249,30,173,157,221,177,207,208,31,240,129,15,250,10,159,252,2,31,252,151,94,63,251,51,
255,0,199,167,139,191,235,190,141,255,0,160,106,85,245,29,0,121,232,240,16,200,255,0,137,169,234,63,229,200,122,255,0,215,221,21,232,107,212,125,71,243,162,128,62,120,32,228,240,122,158,199,214,147,7,
208,254,70,190,136,110,167,234,127,157,37,0,124,79,241,92,17,160,217,100,99,254,38,145,245,255,0,175,107,154,249,254,190,186,253,165,255,0,228,27,225,111,250,252,212,255,0,244,77,167,248,154,249,22,128,
10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,234,252,15,255,0,35,86,141,255,0,95,45,255,0,162,100,174,82,189,35,225,23,252,148,111,
11,255,0,215,243,255,0,233,52,244,1,246,111,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,67,215,207,44,14,79,7,169,236,125,
104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,242,53,232,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,0,122,29,21,243,198,79,169,252,205,42,
147,145,201,234,59,159,90,0,24,28,158,15,83,216,250,210,96,250,31,200,215,208,244,80,7,158,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,
167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,35,147,212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,
247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,28,158,163,185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,188,
243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,67,215,207,44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,242,53,232,158,2,4,13,87,35,28,217,117,
255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,0,122,29,21,243,198,79,169,252,205,42,147,145,201,234,59,159,90,0,24,28,158,15,83,216,250,210,96,250,31,200,215,208,244,80,7,158,120,
8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,35,147,212,119,62,181,244,53,0,
124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,210,55,67,244,63,202,190,121,201,245,63,153,165,82,114,57,61,71,115,
235,64,31,37,248,163,254,70,45,107,254,194,87,159,250,81,37,96,215,95,227,255,0,249,29,124,81,255,0,97,189,71,255,0,74,164,174,66,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,238,126,
29,127,200,215,97,254,229,215,254,146,205,92,53,122,239,192,238,126,35,104,217,255,0,158,90,135,254,144,92,208,7,215,30,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,
127,219,165,121,222,79,169,252,205,0,125,15,95,60,176,57,60,30,167,177,245,161,73,200,228,245,29,207,173,125,13,64,31,60,96,250,31,200,215,162,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,
122,72,26,86,14,57,189,233,255,0,110,148,1,232,117,240,239,237,13,255,0,35,236,127,246,3,176,255,0,209,183,117,235,121,62,167,243,53,243,175,197,34,79,137,87,39,63,241,46,181,235,254,252,244,1,231,20,
81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,125,107,251,51,255,0,199,167,139,127,235,190,143,255,0,160,106,85,245,29,124,57,240,
144,145,167,234,248,56,255,0,75,183,233,255,0,92,164,175,92,201,245,63,153,160,15,162,23,168,250,143,231,69,124,240,9,200,228,245,29,207,173,20,1,244,59,117,63,83,252,233,43,207,79,143,70,79,252,74,143,
83,255,0,47,163,215,254,189,41,63,225,61,31,244,10,63,248,26,63,249,18,128,60,147,246,151,255,0,144,111,133,127,235,243,83,255,0,209,54,149,242,45,125,59,241,223,90,26,238,143,162,76,45,190,203,246,45,
66,120,246,153,188,239,51,237,80,6,206,124,168,182,108,251,54,49,134,221,191,168,219,207,204,84,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,87,164,124,34,
255,0,146,141,225,127,250,254,127,253,37,158,188,222,187,175,134,183,191,217,222,56,240,245,231,151,230,249,23,140,222,94,253,155,179,111,50,227,118,215,199,92,231,105,250,80,7,219,126,61,233,165,125,
111,127,149,165,121,213,122,55,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,0,243,181,234,62,
163,249,215,208,245,231,131,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,148,1,232,117,231,158,61,233,165,125,111,127,149,165,31,240,158,143,250,
5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,228,3,206,105,87,168,250,143,231,94,137,255,0,8,16,255,0,160,169,255,0,192,
33,255,0,201,116,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,3,208,232,175,60,62,61,0,145,253,148,120,227,254,63,71,255,0,34,81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,0,120,247,166,
149,245,189,254,86,149,231,85,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,3,206,215,168,
250,143,231,95,67,215,158,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,62,61,0,145,253,148,120,227,254,63,71,255,0,34,80,7,161,215,158,120,247,166,149,245,189,254,86,148,127,194,122,63,232,20,127,
240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,144,15,57,165,94,163,234,63,157,122,39,252,32,67,254,130,167,255,0,0,135,255,0,37,
208,60,4,1,7,251,84,241,207,252,121,15,254,75,160,15,67,162,188,240,248,244,2,71,246,81,227,143,248,253,31,252,137,71,252,39,163,254,129,71,255,0,3,71,255,0,34,80,1,227,222,154,87,214,247,249,90,87,157,
87,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,160,15,59,94,163,234,63,157,125,15,94,120,60,4,1,7,251,
84,241,207,252,121,15,254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,64,30,135,94,121,227,222,154,87,214,247,249,90,81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,188,120,220,119,211,
63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,64,60,230,149,122,143,168,254,117,232,159,240,129,15,250,10,159,252,2,31,252,151,64,240,16,4,31,237,83,199,63,241,228,
63,249,46,128,61,14,138,243,195,227,208,9,31,217,71,142,63,227,244,127,242,37,31,240,158,143,250,5,31,252,13,31,252,137,64,7,143,122,105,95,91,223,229,105,94,117,94,141,199,141,199,125,51,251,48,255,0,
215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,128,60,237,122,143,168,254,117,244,61,121,224,240,16,4,31,237,83,199,63,241,228,63,249,46,
131,227,208,9,31,217,71,142,63,227,244,127,242,37,0,122,29,121,231,143,122,105,95,91,223,229,105,71,252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,
1,124,191,47,236,191,237,238,223,252,59,121,0,243,154,85,234,62,163,249,215,162,127,194,4,63,232,42,127,240,8,127,242,93,31,240,129,129,207,246,169,56,231,254,60,135,110,127,231,238,128,62,25,241,255,
0,252,142,190,40,255,0,176,222,163,255,0,165,82,87,33,93,55,140,238,62,213,226,191,16,220,236,242,252,237,90,250,77,155,183,109,221,115,33,198,236,46,113,235,180,125,43,153,160,2,138,40,160,2,138,40,160,
2,138,40,160,2,138,40,160,2,189,119,224,111,252,148,125,27,254,185,106,31,250,65,115,94,69,94,151,240,147,80,254,203,241,206,151,123,229,121,254,84,119,163,203,223,229,238,223,101,58,253,253,143,140,103,
63,116,231,167,20,1,246,87,143,122,105,95,91,223,229,105,94,117,94,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,
4,63,249,46,128,60,237,122,143,168,254,117,244,61,121,224,240,16,4,31,237,83,199,63,241,228,63,249,46,131,227,208,9,31,217,71,142,63,227,244,127,242,37,0,122,29,121,231,143,122,105,95,91,223,229,105,71,
252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,0,243,154,249,219,226,143,252,140,171,255,0,96,235,95,253,
14,122,251,59,254,16,33,255,0,65,83,255,0,128,67,255,0,146,235,228,159,141,154,87,246,63,140,82,211,207,251,70,116,155,57,124,207,47,202,251,242,92,141,187,119,201,211,111,93,221,250,80,7,144,81,69,20,
0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,1,238,191,9,127,228,31,171,127,215,221,191,254,138,122,245,186,225,62,2,232,95,219,150,94,
34,83,117,246,95,178,92,233,237,159,39,206,223,246,136,238,198,49,230,197,183,111,145,234,217,221,219,28,253,1,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,1,231,107,212,125,71,243,162,189,20,120,
8,100,127,196,212,245,31,242,228,61,127,235,238,138,0,243,166,234,126,167,249,210,83,136,57,60,30,167,177,245,164,193,244,63,145,160,15,46,248,175,255,0,32,27,47,251,10,71,255,0,164,215,85,243,253,125,
1,241,92,17,160,217,100,99,254,38,145,245,255,0,175,107,154,249,254,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,234,252,15,255,
0,35,86,141,255,0,95,45,255,0,162,100,174,82,186,159,4,178,167,138,116,98,204,20,27,176,160,177,0,22,116,116,69,201,238,206,202,170,58,150,32,14,72,160,15,187,60,5,211,85,250,217,127,43,186,244,58,243,
207,1,2,6,171,145,142,108,186,255,0,219,221,122,29,0,21,243,195,117,63,83,252,235,232,122,249,229,129,201,224,245,61,143,173,0,54,189,23,192,93,53,95,173,151,242,187,175,59,193,244,63,145,175,68,240,16,
32,106,185,24,230,203,175,253,189,208,7,161,209,69,20,1,243,195,117,63,83,252,233,41,204,14,79,7,169,236,125,105,48,125,15,228,104,3,209,60,5,211,85,250,217,127,43,186,244,58,243,207,1,2,6,171,145,142,
108,186,255,0,219,221,122,29,0,21,243,195,117,63,83,252,235,232,122,249,229,129,201,224,245,61,143,173,0,54,189,23,192,93,53,95,173,151,242,187,175,59,193,244,63,145,175,68,240,16,32,106,185,24,230,203,
175,253,189,208,7,161,209,69,20,1,243,195,117,63,83,252,233,41,204,14,79,7,169,236,125,105,48,125,15,228,104,3,209,60,5,211,85,250,217,127,43,186,244,58,243,207,1,2,6,171,145,142,108,186,255,0,219,221,
122,29,0,21,243,195,117,63,83,252,235,232,122,249,229,129,201,224,245,61,143,173,0,54,189,23,192,93,53,95,173,151,242,187,175,59,193,244,63,145,175,68,240,16,32,106,185,24,230,203,175,253,189,208,7,161,
209,69,20,1,243,195,117,63,83,252,233,41,204,14,79,7,169,236,125,105,48,125,15,228,104,3,209,60,5,211,85,250,217,127,43,186,244,58,243,207,1,2,6,171,145,142,108,186,255,0,219,221,122,29,0,21,243,195,117,
63,83,252,235,232,122,249,229,129,201,224,245,61,143,173,0,54,189,23,192,93,53,95,173,151,242,187,175,59,193,244,63,145,175,68,240,16,32,106,185,24,230,203,175,253,189,208,7,161,210,55,67,244,63,202,150,
144,244,61,184,52,1,249,141,226,143,249,24,181,175,251,9,94,127,233,68,149,131,94,183,174,124,53,241,61,254,177,169,94,219,73,162,125,158,234,242,226,120,124,251,235,248,166,242,229,145,157,68,145,199,
164,76,138,227,118,8,89,92,122,49,172,175,248,85,62,46,255,0,158,158,31,255,0,193,142,165,255,0,202,58,0,243,154,43,216,52,143,129,222,55,214,126,209,246,123,159,12,69,246,127,43,127,157,169,234,131,119,
155,230,109,218,19,65,124,227,203,59,179,140,100,99,57,56,218,255,0,134,114,248,129,255,0,63,222,17,255,0,193,166,175,255,0,204,245,0,120,45,21,239,71,246,114,248,128,1,255,0,78,240,143,254,13,117,127,
254,103,171,139,255,0,133,83,226,241,255,0,45,60,63,255,0,131,29,75,255,0,148,116,1,231,52,87,163,127,194,169,241,119,252,244,240,255,0,254,12,117,47,254,81,214,214,145,240,59,198,250,207,218,62,207,115,
225,136,190,207,229,111,243,181,61,80,110,243,124,205,187,66,104,47,156,121,103,118,113,140,140,103,39,0,30,63,69,123,215,252,51,151,196,15,249,254,240,143,254,13,53,127,254,103,168,63,179,151,196,0,15,
250,119,132,127,240,107,171,255,0,243,61,64,30,11,93,207,195,175,249,26,236,63,220,186,255,0,210,89,170,239,252,42,159,23,143,249,105,225,255,0,252,24,234,95,252,163,174,155,194,30,0,241,22,135,174,218,
234,55,239,164,27,104,82,112,226,210,242,246,121,203,73,11,198,155,99,155,76,181,140,141,207,150,38,80,64,28,2,120,160,15,170,124,5,211,85,250,217,127,43,186,244,58,243,207,1,2,6,171,145,142,108,186,255,
0,219,221,122,29,0,21,243,195,117,63,83,252,235,232,122,249,229,129,201,224,245,61,143,173,0,54,189,23,192,93,53,95,173,151,242,187,175,59,193,244,63,145,175,68,240,16,32,106,185,24,230,203,175,253,189,
208,7,161,215,195,191,180,55,252,143,177,127,216,14,195,255,0,70,221,215,220,85,240,239,237,12,65,241,236,120,61,52,59,0,125,143,155,117,197,0,120,77,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,
64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,31,90,254,204,255,0,241,233,226,239,250,239,163,127,232,26,149,125,71,95,46,126,204,255,0,241,233,226,223,250,239,163,255,0,232,26,
149,125,71,64,10,189,71,212,127,58,40,94,163,234,63,157,20,0,55,83,245,63,206,146,149,186,159,169,254,116,148,1,243,15,237,47,255,0,32,223,11,127,215,230,167,255,0,162,109,63,196,215,200,181,245,215,237,
47,255,0,32,223,10,255,0,215,230,167,255,0,162,109,43,228,90,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,43,111,195,122,151,246,63,136,52,
93,83,0,173,134,167,101,116,224,244,41,5,196,114,72,58,143,188,138,195,175,122,196,163,165,0,126,136,120,218,120,238,45,244,91,136,28,60,51,199,117,52,78,167,33,227,145,44,221,24,17,212,21,96,71,214,184,
12,159,83,249,154,227,124,15,227,101,241,7,135,52,173,6,241,255,0,226,101,225,245,184,129,11,30,110,52,247,22,255,0,102,117,39,239,60,2,54,134,64,58,42,70,199,27,235,177,160,7,41,57,28,158,163,185,245,
175,161,171,231,133,234,62,163,249,215,208,244,0,87,158,120,244,144,52,172,28,115,123,211,254,221,43,208,235,207,60,123,211,74,250,222,255,0,43,74,0,243,188,159,83,249,154,85,39,35,147,212,119,62,180,
218,85,234,62,163,249,208,7,208,244,81,69,0,121,231,143,73,3,74,193,199,55,189,63,237,210,188,239,39,212,254,102,189,19,199,189,52,175,173,239,242,180,175,58,160,7,41,57,28,158,163,185,245,175,161,171,
231,133,234,62,163,249,215,208,244,0,87,158,120,244,144,52,172,28,115,123,211,254,221,43,208,235,207,60,123,211,74,250,222,255,0,43,74,0,243,188,159,83,249,154,85,39,35,147,212,119,62,180,218,85,234,62,
163,249,208,7,208,244,81,69,0,121,231,143,73,3,74,193,199,55,189,63,237,210,188,239,39,212,254,102,189,19,199,189,52,175,173,239,242,180,175,58,160,7,41,57,28,158,163,185,245,175,161,171,231,133,234,62,
163,249,215,208,244,0,87,158,120,244,144,52,172,28,115,123,211,254,221,43,208,235,207,60,123,211,74,250,222,255,0,43,74,0,243,188,159,83,249,154,85,39,35,147,212,119,62,180,218,85,234,62,163,249,208,7,
208,244,81,69,0,121,231,143,73,3,74,193,199,55,189,63,237,210,188,239,39,212,254,102,189,19,199,189,52,175,173,239,242,180,175,58,160,7,41,57,28,158,163,185,245,175,161,171,231,133,234,62,163,249,215,
208,244,0,87,158,120,244,144,52,172,28,115,123,211,254,221,43,208,235,207,60,123,211,74,250,222,255,0,43,74,0,243,188,159,83,249,154,85,39,35,147,212,119,62,180,218,85,234,62,163,249,208,7,208,244,81,
69,0,121,231,143,73,3,74,193,199,55,189,63,237,210,188,239,39,212,254,102,189,19,199,189,52,175,173,239,242,180,175,58,160,7,41,57,28,158,163,185,245,175,161,171,231,133,234,62,163,249,215,208,244,0,87,
158,120,244,144,52,172,28,115,123,211,254,221,43,208,235,207,60,123,211,74,250,222,255,0,43,74,0,243,188,159,83,249,154,85,39,35,147,212,119,62,180,218,85,234,62,163,249,208,7,208,244,81,69,0,121,231,
143,73,3,74,193,199,55,189,63,237,210,188,239,39,212,254,102,189,19,199,189,52,175,173,239,242,180,175,58,160,7,41,57,28,158,163,185,245,175,161,171,231,133,234,62,163,249,215,208,244,0,87,158,120,244,
144,52,172,28,115,123,211,254,221,43,208,235,207,60,123,211,74,250,222,255,0,43,74,0,243,188,159,83,249,154,249,103,198,247,235,168,120,155,84,153,8,49,199,48,182,70,29,88,90,162,219,179,19,185,129,203,
198,196,17,143,151,110,64,57,175,121,241,143,136,35,208,52,137,164,73,20,95,93,35,193,100,132,130,194,70,92,25,246,243,148,128,16,231,60,22,218,185,203,87,203,140,204,236,204,196,179,49,44,196,146,73,
36,228,146,78,73,36,245,36,230,128,18,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,15,117,248,72,72,211,
245,124,28,127,165,219,244,255,0,174,82,87,174,100,250,159,204,215,145,252,37,255,0,144,126,173,255,0,95,118,255,0,250,41,235,214,232,1,192,156,142,79,81,220,250,209,72,189,71,212,127,58,40,3,209,79,143,
70,79,252,74,143,83,255,0,47,163,215,254,189,41,63,225,61,31,244,10,63,248,26,63,249,18,188,237,186,159,169,254,116,148,1,198,124,119,214,134,187,163,232,147,11,111,178,253,139,80,158,61,166,111,59,204,
251,84,1,179,159,42,45,155,62,205,140,97,183,111,234,54,243,243,21,125,1,241,95,254,64,54,95,246,20,143,255,0,73,174,171,231,250,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,138,0,40,162,
138,0,40,162,138,0,40,162,138,0,40,162,138,0,185,167,223,221,105,151,112,95,89,202,209,92,91,184,116,101,36,115,130,10,176,31,121,24,18,174,167,134,82,65,224,215,213,30,0,241,38,129,227,20,138,206,247,
87,143,70,215,8,10,108,231,128,121,23,76,7,45,103,112,247,49,171,150,251,222,75,133,145,122,40,144,13,213,242,93,42,179,41,12,164,171,3,144,65,32,130,61,8,160,15,209,65,224,53,224,141,84,145,193,31,232,
67,7,184,231,237,103,131,235,205,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,248,195,64,248,173,227,159,14,68,150,246,90,220,211,218,198,70,219,93,65,82,250,37,28,252,168,211,134,154,52,231,132,
142,84,81,129,129,86,99,248,171,175,170,1,37,174,155,35,243,151,242,103,93,217,36,143,149,110,64,4,12,3,128,1,32,144,6,112,0,62,198,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,59,233,
159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,63,29,255,0,194,215,214,255,0,231,203,77,255,0,191,119,31,252,147,91,122,63,199,63,18,232,223,104,251,62,157,164,73,
246,159,43,127,155,21,209,199,149,230,109,219,182,237,122,249,135,57,207,65,142,244,1,245,71,252,32,67,254,130,167,255,0,0,135,255,0,37,208,60,4,1,7,251,84,241,207,252,121,15,254,75,175,156,127,225,163,
252,91,255,0,64,157,11,254,252,222,255,0,242,109,31,240,209,254,45,255,0,160,78,133,255,0,126,111,127,249,54,128,62,142,62,61,0,145,253,148,120,227,254,63,71,255,0,34,81,255,0,9,232,255,0,160,81,255,0,
192,209,255,0,200,149,241,231,252,45,125,112,255,0,203,150,155,255,0,126,238,63,249,38,143,248,90,250,223,252,249,105,191,247,238,227,255,0,146,104,3,236,78,60,110,59,233,159,217,135,254,191,60,239,182,
127,224,47,151,229,253,151,253,189,219,255,0,135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,117,242,190,143,241,207,196,186,55,218,62,207,167,105,18,125,167,202,223,230,197,116,113,229,121,
155,118,237,187,94,190,97,206,115,208,99,189,109,127,195,71,248,183,254,129,58,23,253,249,189,255,0,228,218,0,250,56,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,
63,249,18,190,113,255,0,134,143,241,111,253,2,116,47,251,243,123,255,0,201,181,197,127,194,215,215,15,252,185,105,191,247,238,227,255,0,146,104,3,236,63,248,79,71,253,2,143,254,6,143,254,68,165,227,198,
227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,243,241,223,252,45,125,111,254,124,180,223,251,247,113,255,0,201,53,183,163,252,115,241,46,141,246,143,179,233,
218,68,159,105,242,183,249,177,93,28,121,94,102,221,187,110,215,175,152,115,156,244,24,239,64,31,84,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,249,199,
254,26,63,197,191,244,9,208,191,239,205,239,255,0,38,209,255,0,13,31,226,223,250,4,232,95,247,230,247,255,0,147,104,3,232,227,227,208,9,31,217,71,142,63,227,244,127,242,37,31,240,158,143,250,5,31,252,
13,31,252,137,95,30,127,194,215,215,15,252,185,105,191,247,238,227,255,0,146,104,255,0,133,175,173,255,0,207,150,155,255,0,126,238,63,249,38,128,62,196,227,198,227,190,153,253,152,127,235,243,206,251,
103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,10,159,252,2,31,252,151,95,43,232,255,0,28,252,75,163,125,163,236,250,118,145,39,218,124,173,254,108,87,71,30,87,153,183,110,219,
181,235,230,28,231,61,6,59,214,215,252,52,127,139,127,232,19,161,127,223,155,223,254,77,160,15,163,135,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,
0,145,43,231,31,248,104,255,0,22,255,0,208,39,66,255,0,191,55,191,252,155,92,87,252,45,125,112,255,0,203,150,155,255,0,126,238,63,249,38,128,62,195,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,
94,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,63,29,255,0,194,215,214,255,0,231,203,77,255,0,191,119,31,252,147,91,122,63,199,63,18,232,223,104,251,
62,157,164,73,246,159,43,127,155,21,209,199,149,230,109,219,182,237,122,249,135,57,207,65,142,244,1,245,71,252,32,67,254,130,167,255,0,0,135,255,0,37,208,60,4,1,7,251,84,241,207,252,121,15,254,75,175,
156,127,225,163,252,91,255,0,64,157,11,254,252,222,255,0,242,109,31,240,209,254,45,255,0,160,78,133,255,0,126,111,127,249,54,128,62,142,62,61,0,145,253,148,120,227,254,63,71,255,0,34,81,255,0,9,232,255,
0,160,81,255,0,192,209,255,0,200,149,241,231,252,45,125,112,255,0,203,150,155,255,0,126,238,63,249,38,143,248,90,250,223,252,249,105,191,247,238,227,255,0,146,104,3,236,78,60,110,59,233,159,217,135,254,
191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,117,242,190,143,241,207,196,186,55,218,62,207,167,105,18,125,167,202,223,230,197,
116,113,229,121,155,118,237,187,94,190,97,206,115,208,99,189,109,127,195,71,248,183,254,129,58,23,253,249,189,255,0,228,218,0,250,56,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,
163,199,31,241,250,63,249,18,190,113,255,0,134,143,241,111,253,2,116,47,251,243,123,255,0,201,181,197,127,194,215,215,15,252,185,105,191,247,238,227,255,0,146,104,3,236,63,248,79,71,253,2,143,254,6,143,
254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,243,241,223,252,45,125,111,254,124,180,223,251,247,113,255,0,201,53,183,163,252,115,241,46,141,
246,143,179,233,218,68,159,105,242,183,249,177,93,28,121,94,102,221,187,110,215,175,152,115,156,244,24,239,64,31,84,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,16,127,181,79,28,255,0,199,144,255,
0,228,186,249,199,254,26,63,197,191,244,9,208,191,239,205,239,255,0,38,209,255,0,13,31,226,223,250,4,232,95,247,230,247,255,0,147,104,3,232,227,227,208,9,31,217,71,142,63,227,244,127,242,37,31,240,158,
143,250,5,31,252,13,31,252,137,95,30,127,194,215,215,15,252,185,105,191,247,238,227,255,0,146,104,255,0,133,175,173,255,0,207,150,155,255,0,126,238,63,249,38,128,62,196,227,198,227,190,153,253,152,127,
235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,10,159,252,2,31,252,151,95,43,232,255,0,28,252,75,163,125,163,236,250,118,145,39,218,124,173,254,108,87,71,30,87,
153,183,110,219,181,235,230,28,231,61,6,59,214,215,252,52,127,139,127,232,19,161,127,223,155,223,254,77,160,15,163,135,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,
255,0,31,163,255,0,145,43,231,31,248,104,255,0,22,255,0,208,39,66,255,0,191,55,191,252,155,92,87,252,45,125,112,255,0,203,150,155,255,0,126,238,63,249,38,128,62,195,255,0,132,244,127,208,40,255,0,224,
104,255,0,228,74,94,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,63,29,255,0,194,215,214,255,0,231,203,77,255,0,191,119,31,252,147,91,122,63,199,63,
18,232,223,104,251,62,157,164,73,246,159,43,127,155,21,209,199,149,230,109,219,182,237,122,249,135,57,207,65,142,244,1,245,71,252,32,67,254,130,167,255,0,0,135,255,0,37,208,60,4,1,7,251,84,241,207,252,
121,15,254,75,175,156,127,225,163,252,91,255,0,64,157,11,254,252,222,255,0,242,109,31,240,209,254,45,255,0,160,78,133,255,0,126,111,127,249,54,128,62,142,62,61,0,145,253,148,120,227,254,63,71,255,0,34,
81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,149,241,231,252,45,125,112,255,0,203,150,155,255,0,126,238,63,249,38,143,248,90,250,223,252,249,105,191,247,238,227,255,0,146,104,3,236,78,60,110,59,
233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,117,242,190,143,241,207,196,186,55,218,62,207,167,105,18,125,
167,202,223,230,197,116,113,229,121,155,118,237,187,94,190,97,206,115,208,99,189,109,127,195,71,248,183,254,129,58,23,253,249,189,255,0,228,218,0,250,56,120,8,2,15,246,169,227,159,248,242,31,252,151,65,
241,232,4,143,236,163,199,31,241,250,63,249,18,190,113,255,0,134,143,241,111,253,2,116,47,251,243,123,255,0,201,181,196,191,197,109,116,171,5,179,211,85,136,59,88,197,112,64,98,56,37,126,212,50,1,228,
140,140,244,200,160,15,177,63,225,61,31,244,10,63,248,26,63,249,18,188,251,199,95,18,52,5,179,223,123,33,183,212,108,150,79,177,233,118,236,47,38,188,123,144,160,153,164,11,2,89,69,9,129,55,188,155,217,
196,152,141,11,46,15,203,215,254,62,241,54,160,141,27,223,125,154,54,24,100,179,141,109,242,61,55,174,102,25,239,137,121,28,28,215,28,238,242,51,60,140,206,236,75,51,49,44,204,199,169,36,228,146,123,147,
201,160,13,109,115,92,189,215,239,158,250,245,129,114,54,69,18,100,69,12,64,229,99,141,73,56,3,169,36,146,204,73,39,160,24,244,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,
20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,31,74,252,5,208,191,183,44,188,68,166,235,236,191,100,185,211,219,62,79,157,191,237,17,221,140,99,205,139,110,223,35,213,179,187,182,57,250,3,254,16,
33,255,0,65,83,255,0,128,67,255,0,146,235,199,255,0,102,127,248,244,241,119,253,119,209,191,244,13,74,190,163,160,15,61,30,2,25,31,241,53,61,71,252,185,15,95,250,251,162,189,13,122,143,168,254,116,80,
7,207,4,28,158,15,83,216,250,210,96,250,31,200,215,209,13,212,253,79,243,164,160,15,137,254,43,130,52,27,44,140,127,196,210,62,191,245,237,115,95,63,215,215,95,180,191,252,131,124,45,255,0,95,154,159,
254,137,180,255,0,19,95,34,208,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,
20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,
80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,7,214,191,179,63,252,122,120,183,
254,187,232,255,0,250,6,165,95,81,215,195,159,9,9,26,126,175,131,143,244,187,126,159,245,202,74,245,204,159,83,249,154,0,250,33,122,143,168,254,116,87,207,0,156,142,79,81,220,250,209,64,31,67,183,83,245,
63,206,146,188,244,248,244,100,255,0,196,168,245,63,242,250,61,127,235,210,147,254,19,209,255,0,64,163,255,0,129,163,255,0,145,40,3,201,63,105,127,249,6,248,87,254,191,53,63,253,19,105,95,34,215,211,191,
29,245,161,174,232,250,36,194,219,236,191,98,212,39,143,105,155,206,243,62,213,0,108,231,202,139,102,207,179,99,24,109,219,250,141,188,252,197,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,
5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,
20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,
81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,30,235,240,151,254,65,250,183,253,125,219,255,0,232,167,175,91,174,19,224,46,133,253,185,101,226,37,55,95,101,251,37,
206,158,217,242,124,237,255,0,104,142,236,99,30,108,91,118,249,30,173,157,221,177,207,208,31,240,129,15,250,10,159,252,2,31,252,151,64,30,118,189,71,212,127,58,43,209,71,128,134,71,252,77,79,81,255,0,
46,67,215,254,190,232,160,15,58,110,167,234,127,157,37,56,131,147,193,234,123,31,90,76,31,67,249,26,0,242,239,138,255,0,242,1,178,255,0,176,164,127,250,77,117,95,63,215,208,31,21,193,26,13,150,70,63,226,
105,31,95,250,246,185,175,159,232,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,
40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,
162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,
40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,3,235,95,217,159,254,61,60,93,255,0,93,244,111,253,3,82,175,168,235,229,207,217,159,254,61,60,91,255,0,93,244,127,253,3,82,175,168,232,
1,87,168,250,143,231,69,11,212,125,71,243,162,128,6,234,126,167,249,210,82,183,83,245,63,206,146,128,62,97,253,165,255,0,228,27,225,111,250,252,212,255,0,244,77,167,248,154,249,22,190,186,253,165,255,
0,228,27,225,95,250,252,212,255,0,244,77,165,124,139,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,
20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,
81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,30,235,
240,144,145,167,234,248,56,255,0,75,183,233,255,0,92,164,175,92,201,245,63,153,175,35,248,75,255,0,32,253,91,254,190,237,255,0,244,83,215,173,208,3,129,57,28,158,163,185,245,162,145,122,143,168,254,116,
80,7,162,159,30,140,159,248,149,30,167,254,95,71,175,253,122,82,127,194,122,63,232,20,127,240,52,127,242,37,121,219,117,63,83,252,233,40,3,140,248,239,173,13,119,71,209,38,22,223,101,251,22,161,60,123,
76,222,119,153,246,168,3,103,62,84,91,54,125,155,24,195,110,223,212,109,231,230,42,250,3,226,191,252,128,108,191,236,41,31,254,147,93,87,207,244,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,
0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,
81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,
69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,1,244,175,192,93,11,251,114,203,196,74,110,190,203,246,75,157,61,179,228,249,219,254,209,29,216,198,60,216,182,237,242,
61,91,59,187,99,159,160,63,225,2,31,244,21,63,248,4,63,249,46,188,127,246,103,255,0,143,79,23,127,215,125,27,255,0,64,212,171,234,58,0,243,209,224,33,145,255,0,19,83,212,127,203,144,245,255,0,175,186,
43,208,215,168,250,143,231,69,0,124,240,65,201,224,245,61,143,173,38,15,161,252,141,125,16,221,79,212,255,0,58,74,0,248,159,226,184,35,65,178,200,199,252,77,35,235,255,0,94,215,53,243,253,125,117,251,
75,255,0,200,55,194,223,245,249,169,255,0,232,155,79,241,53,242,45,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,93,255,0,129,190,28,235,254,59,187,217,167,197,246,93,58,39,11,119,171,
92,35,253,150,1,144,89,19,3,51,220,109,59,146,4,35,56,30,99,196,167,120,0,224,42,120,173,174,39,44,33,130,105,74,128,88,71,27,185,80,217,0,144,160,144,9,4,2,120,56,53,247,175,133,254,10,248,39,195,177,
70,247,22,11,174,223,169,87,123,189,89,86,104,247,175,63,185,178,199,217,99,69,108,148,222,147,74,56,221,43,96,99,71,198,182,150,182,113,105,49,90,91,91,218,196,162,237,86,59,120,99,134,53,84,22,129,84,
36,106,170,2,142,0,3,0,112,56,160,15,207,255,0,236,221,67,254,124,110,255,0,240,30,95,254,34,143,236,221,67,254,124,110,255,0,240,30,95,254,34,190,195,165,94,163,234,63,157,0,124,113,246,27,207,249,245,
184,255,0,191,50,127,241,52,125,134,243,254,125,110,63,239,204,159,252,77,126,166,237,95,65,249,10,48,61,7,228,40,3,242,204,105,247,205,247,108,238,91,29,113,4,135,31,146,211,191,179,117,15,249,241,187,
255,0,192,121,127,248,138,253,7,241,232,0,105,88,0,115,123,208,127,215,165,121,221,0,124,121,253,155,168,127,207,141,223,254,3,203,255,0,196,83,62,195,121,255,0,62,183,31,247,230,79,254,38,190,199,94,
163,234,63,157,125,13,181,125,7,228,40,3,242,203,236,55,159,243,235,113,255,0,126,100,255,0,226,105,70,159,124,223,118,206,229,177,215,16,72,113,249,45,126,166,96,122,15,200,87,158,120,244,0,52,172,0,
57,189,232,63,235,210,128,63,62,63,179,117,15,249,241,187,255,0,192,121,127,248,138,63,179,117,15,249,241,187,255,0,192,121,127,248,138,251,14,149,122,143,168,254,116,1,241,199,216,111,63,231,214,227,
254,252,201,255,0,196,209,246,27,207,249,245,184,255,0,191,50,127,241,53,250,155,181,125,7,228,40,192,244,31,144,160,15,203,49,167,223,55,221,179,185,108,117,196,18,28,126,75,78,254,205,212,63,231,198,
239,255,0,1,229,255,0,226,43,244,31,199,160,1,165,96,1,205,239,65,255,0,94,149,231,116,1,241,231,246,110,161,255,0,62,55,127,248,15,47,255,0,17,76,251,13,231,252,250,220,127,223,153,63,248,154,251,29,
122,143,168,254,117,244,54,213,244,31,144,160,15,203,47,176,222,127,207,173,199,253,249,147,255,0,137,165,26,125,243,125,219,59,150,199,92,65,33,199,228,181,250,153,129,232,63,33,94,121,227,208,0,210,
176,0,230,247,160,255,0,175,74,0,252,248,254,205,212,63,231,198,239,255,0,1,229,255,0,226,40,254,205,212,63,231,198,239,255,0,1,229,255,0,226,43,236,58,85,234,62,163,249,208,7,199,31,97,188,255,0,159,
91,143,251,243,39,255,0,19,71,216,111,63,231,214,227,254,252,201,255,0,196,215,234,110,213,244,31,144,163,3,208,126,66,128,63,44,198,159,124,223,118,206,229,177,215,16,72,113,249,45,59,251,55,80,255,0,
159,27,191,252,7,151,255,0,136,175,208,127,30,128,6,149,128,7,55,189,7,253,122,87,157,208,7,199,159,217,186,135,252,248,221,255,0,224,60,191,252,69,51,236,55,159,243,235,113,255,0,126,100,255,0,226,107,
236,117,234,62,163,249,215,208,219,87,208,126,66,128,63,44,190,195,121,255,0,62,183,31,247,230,79,254,38,148,105,247,205,247,108,238,91,29,113,4,135,31,146,215,234,102,7,160,252,133,121,231,143,64,3,74,
192,3,155,222,131,254,189,40,3,243,227,251,55,80,255,0,159,27,191,252,7,151,255,0,136,163,251,55,80,255,0,159,27,191,252,7,151,255,0,136,175,176,233,87,168,250,143,231,64,31,28,125,134,243,254,125,110,
63,239,204,159,252,77,31,97,188,255,0,159,91,143,251,243,39,255,0,19,95,169,187,87,208,126,66,140,15,65,249,10,0,252,179,26,125,243,125,219,59,150,199,92,65,33,199,228,180,239,236,221,67,254,124,110,255,
0,240,30,95,254,34,191,65,252,122,0,26,86,0,28,222,244,31,245,233,94,119,64,31,30,127,102,234,31,243,227,119,255,0,128,242,255,0,241,20,207,176,222,127,207,173,199,253,249,147,255,0,137,175,177,215,168,
250,143,231,95,67,109,95,65,249,10,0,252,178,251,13,231,252,250,220,127,223,153,63,248,154,81,167,223,55,221,179,185,108,117,196,18,28,126,75,95,169,152,30,131,242,21,231,158,61,0,13,43,0,14,111,122,15,
250,244,160,15,207,143,236,221,67,254,124,110,255,0,240,30,95,254,34,143,236,221,67,254,124,110,255,0,240,30,95,254,34,190,195,165,94,163,234,63,157,0,124,113,246,27,207,249,245,184,255,0,191,50,127,241,
52,125,134,243,254,125,110,63,239,204,159,252,77,126,166,237,95,65,249,10,48,61,7,228,40,3,242,204,105,247,205,247,108,238,91,29,113,4,135,31,146,211,191,179,117,15,249,241,187,255,0,192,121,127,248,138,
253,7,241,232,0,105,88,0,115,123,208,127,215,165,121,221,0,124,121,253,155,168,127,207,141,223,254,3,203,255,0,196,83,62,195,121,255,0,62,183,31,247,230,79,254,38,190,199,94,163,234,63,157,125,13,181,
125,7,228,40,3,242,203,236,55,159,243,235,113,255,0,126,100,255,0,226,105,70,159,124,223,118,206,229,177,215,16,72,113,249,45,126,166,96,122,15,200,87,158,120,244,0,52,172,0,57,189,232,63,235,210,128,
63,62,63,179,117,15,249,241,187,255,0,192,121,127,248,138,63,179,117,15,249,241,187,255,0,192,121,127,248,138,251,14,149,122,143,168,254,116,1,241,199,216,111,63,231,214,227,254,252,201,255,0,196,209,
246,27,207,249,245,184,255,0,191,50,127,241,53,250,155,181,125,7,228,40,192,244,31,144,160,15,203,49,167,223,55,221,179,185,108,117,196,18,28,126,75,78,254,205,212,63,231,198,239,255,0,1,229,255,0,226,
43,244,31,199,160,1,165,96,1,205,239,65,255,0,94,149,231,116,1,241,231,246,110,161,255,0,62,55,127,248,15,47,255,0,17,76,251,13,231,252,250,220,127,223,153,63,248,154,251,29,122,143,168,254,117,244,54,
213,244,31,144,160,15,203,47,176,222,127,207,173,199,253,249,147,255,0,137,165,26,125,243,125,219,59,150,199,92,65,33,199,228,181,250,153,129,232,63,33,94,121,227,208,0,210,176,0,230,247,160,255,0,175,
74,0,252,248,254,205,212,63,231,198,239,255,0,1,229,255,0,226,40,254,205,212,63,231,198,239,255,0,1,229,255,0,226,43,236,58,85,234,62,163,249,208,7,199,31,97,188,255,0,159,91,143,251,243,39,255,0,19,71,
216,111,63,231,214,227,254,252,201,255,0,196,215,234,110,213,244,31,144,163,3,208,126,66,128,63,44,198,159,124,223,118,206,229,177,215,16,72,113,249,45,59,251,55,80,255,0,159,27,191,252,7,151,255,0,136,
175,208,127,30,128,6,149,128,7,55,189,7,253,122,87,157,208,7,199,159,217,186,135,252,248,221,255,0,224,60,191,252,69,51,236,55,159,243,235,113,255,0,126,100,255,0,226,107,236,117,234,62,163,249,215,208,
219,87,208,126,66,128,63,44,190,195,121,255,0,62,183,31,247,230,79,254,38,162,146,9,161,32,75,20,145,150,4,168,116,101,36,12,2,64,32,18,1,35,36,122,138,253,82,192,244,31,144,175,55,248,133,111,4,241,233,
105,52,49,76,141,246,229,101,150,52,145,72,34,212,16,67,2,8,32,144,70,59,154,0,252,240,162,190,152,214,126,31,248,127,85,71,104,109,198,155,114,114,86,107,48,17,11,28,145,230,91,227,202,101,45,130,219,
4,110,64,225,193,57,175,11,241,23,133,245,63,13,220,8,239,16,73,111,33,34,222,242,32,198,9,176,50,87,36,3,28,128,114,99,112,27,134,43,185,70,234,0,230,232,162,138,0,40,162,138,0,40,162,138,0,40,162,138,
0,40,162,138,0,40,162,138,0,250,215,246,103,255,0,143,79,22,255,0,215,125,31,255,0,64,212,171,234,58,248,115,225,33,35,79,213,240,113,254,151,111,211,254,185,73,94,185,147,234,127,51,64,31,68,47,81,245,
31,206,138,249,224,19,145,201,234,59,159,90,40,3,232,118,234,126,167,249,210,87,158,159,30,140,159,248,149,30,167,254,95,71,175,253,122,82,127,194,122,63,232,20,127,240,52,127,242,37,0,121,39,237,47,255,
0,32,223,10,255,0,215,230,167,255,0,162,109,43,228,90,250,119,227,190,180,53,221,31,68,152,91,125,151,236,90,132,241,237,51,121,222,103,218,160,13,156,249,81,108,217,246,108,99,13,187,127,81,183,159,152,
168,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,3,160,240,206,131,63,136,117,88,44,35,202,69,159,50,230,108,18,34,129,72,222,221,49,184,146,168,128,245,102,28,17,154,253,36,209,180,
125,59,64,211,173,116,173,46,218,59,75,59,72,194,71,20,99,25,32,124,210,59,125,233,36,145,178,207,35,18,204,196,146,107,231,47,131,63,15,60,255,0,12,13,126,91,161,111,54,173,60,158,80,251,48,149,190,201,
107,35,66,159,63,159,30,3,206,179,49,27,115,194,231,56,21,235,199,199,160,18,63,178,143,28,127,199,232,255,0,228,74,0,244,58,243,207,30,244,210,190,183,191,202,210,143,248,79,71,253,2,143,254,6,143,254,
68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,1,231,52,171,212,125,71,243,175,68,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,
32,255,0,106,158,57,255,0,143,33,255,0,201,116,1,232,116,87,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,0,60,123,211,74,250,222,255,0,
43,74,243,170,244,110,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,1,231,107,212,125,71,243,
175,161,235,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,3,208,235,207,60,123,211,74,250,222,255,0,43,74,63,225,61,31,244,10,63,248,
26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,200,7,156,210,175,81,245,31,206,189,19,254,16,33,255,0,65,83,255,0,128,67,255,0,146,
232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,7,161,209,94,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,40,0,241,239,77,43,235,123,252,
173,43,206,171,209,184,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,208,7,157,175,81,245,31,206,190,
135,175,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,160,15,67,175,60,241,239,77,43,235,123,252,173,40,255,0,132,244,127,208,40,255,0,224,104,255,
0,228,74,94,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,32,30,115,74,189,71,212,127,58,244,79,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,
169,227,159,248,242,31,252,151,64,30,135,69,121,225,241,232,4,143,236,163,199,31,241,250,63,249,18,143,248,79,71,253,2,143,254,6,143,254,68,160,3,199,189,52,175,173,239,242,180,175,58,175,70,227,198,227,
190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,10,159,252,2,31,252,151,64,30,118,189,71,212,127,58,250,30,188,240,120,8,2,15,246,169,227,159,
248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,128,61,14,188,243,199,189,52,175,173,239,242,180,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,102,
31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,128,121,205,42,245,31,81,252,235,209,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,
0,122,29,21,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,128,15,30,244,210,190,183,191,202,210,188,234,189,27,143,27,142,250,103,246,97,255,0,175,207,
59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,0,121,218,245,31,81,252,235,232,122,243,193,224,32,8,63,218,167,142,127,227,200,127,242,93,7,
199,160,18,63,178,143,28,127,199,232,255,0,228,74,0,244,58,243,207,30,244,210,190,183,191,202,210,143,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,
249,126,95,217,127,219,221,191,248,118,242,1,231,52,171,212,125,71,243,175,68,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,1,232,116,87,158,
31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,0,60,123,211,74,250,222,255,0,43,74,243,170,244,110,60,110,59,233,159,217,135,254,191,60,239,182,
127,224,47,151,229,253,151,253,189,219,255,0,135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,1,231,107,212,125,71,243,175,161,235,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,
116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,3,208,235,207,60,123,211,74,250,222,255,0,43,74,63,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,207,59,237,159,
248,11,229,249,127,101,255,0,111,118,255,0,225,219,200,7,156,210,175,81,245,31,206,189,19,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,7,161,209,
94,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,40,0,241,239,77,43,235,123,252,173,43,206,171,209,184,241,184,239,166,127,102,31,250,252,243,190,
217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,208,7,157,175,81,245,31,206,190,135,175,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,
122,1,35,251,40,241,199,252,126,143,254,68,160,15,67,175,60,241,239,77,43,235,123,252,173,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,59,233,159,217,135,254,191,60,239,182,127,224,
47,151,229,253,151,253,189,219,255,0,135,111,32,30,115,74,189,71,212,127,58,244,79,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,64,30,135,69,121,225,241,232,4,
143,236,163,199,31,241,250,63,249,18,143,248,79,71,253,2,143,254,6,143,254,68,160,3,199,189,52,175,173,239,242,180,175,58,175,70,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,
127,219,221,191,248,118,242,159,240,129,15,250,10,159,252,2,31,252,151,64,30,118,189,71,212,127,58,250,30,188,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,
63,249,18,128,61,14,188,243,199,189,52,175,173,239,242,180,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,
111,254,29,188,128,121,205,82,212,52,235,93,86,206,107,11,200,196,150,247,8,81,135,70,82,126,236,136,221,86,68,63,50,176,193,4,122,18,15,169,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,16,127,181,
79,28,255,0,199,144,255,0,228,186,0,248,111,199,62,16,189,240,87,136,46,180,123,173,207,18,159,54,198,232,140,45,221,156,132,152,102,28,99,112,0,199,42,140,132,153,29,65,192,25,227,171,234,111,141,247,
48,248,143,70,179,212,147,79,251,61,222,147,63,150,243,9,196,166,75,75,146,16,198,195,201,139,10,147,249,110,167,113,219,150,0,29,196,143,150,104,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,
162,138,40,3,221,126,18,255,0,200,63,86,255,0,175,187,127,253,20,245,235,117,194,124,5,208,191,183,44,188,68,166,235,236,191,100,185,211,219,62,79,157,191,237,17,221,140,99,205,139,110,223,35,213,179,
187,182,57,250,3,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,3,206,215,168,250,143,231,69,122,40,240,16,200,255,0,137,169,234,63,229,200,122,255,0,215,221,20,1,231,77,212,253,79,243,164,167,16,114,
120,61,79,99,235,73,131,232,127,35,64,30,93,241,95,254,64,54,95,246,20,143,255,0,73,174,171,231,250,250,3,226,184,35,65,178,200,199,252,77,35,235,255,0,94,215,53,243,253,0,20,81,69,0,20,81,69,0,20,81,
69,0,20,81,69,0,20,163,146,7,169,20,148,171,212,125,71,243,160,15,210,95,135,150,241,218,248,31,194,176,196,8,65,162,88,191,56,36,180,176,172,174,73,0,12,151,118,61,59,215,149,55,83,245,63,206,189,115,
192,164,127,194,25,225,126,122,104,90,110,125,191,209,98,175,36,96,114,120,61,79,99,235,64,13,175,69,240,23,77,87,235,101,252,174,235,206,240,125,15,228,107,209,60,4,8,26,174,70,57,178,235,255,0,111,116,
1,232,116,81,69,0,124,240,221,79,212,255,0,58,74,115,3,147,193,234,123,31,90,76,31,67,249,26,0,244,79,1,116,213,126,182,95,202,238,189,14,188,243,192,64,129,170,228,99,155,46,191,246,247,94,135,64,5,124,
240,221,79,212,255,0,58,250,30,190,121,96,114,120,61,79,99,235,64,13,175,69,240,23,77,87,235,101,252,174,235,206,240,125,15,228,107,209,60,4,8,26,174,70,57,178,235,255,0,111,116,1,232,116,81,69,0,124,
240,221,79,212,255,0,58,74,115,3,147,193,234,123,31,90,76,31,67,249,26,0,244,79,1,116,213,126,182,95,202,238,189,14,188,243,192,64,129,170,228,99,155,46,191,246,247,94,135,64,5,124,240,221,79,212,255,
0,58,250,30,190,121,96,114,120,61,79,99,235,64,13,175,69,240,23,77,87,235,101,252,174,235,206,240,125,15,228,107,209,60,4,8,26,174,70,57,178,235,255,0,111,116,1,232,116,81,69,0,124,240,221,79,212,255,
0,58,74,115,3,147,193,234,123,31,90,76,31,67,249,26,0,244,79,1,116,213,126,182,95,202,238,189,14,188,243,192,64,129,170,228,99,155,46,191,246,247,94,135,64,5,124,240,221,79,212,255,0,58,250,30,190,121,
96,114,120,61,79,99,235,64,13,175,69,240,23,77,87,235,101,252,174,235,206,240,125,15,228,107,209,60,4,8,26,174,70,57,178,235,255,0,111,116,1,232,116,81,69,0,124,240,221,79,212,255,0,58,74,115,3,147,193,
234,123,31,90,76,31,67,249,26,0,244,79,1,116,213,126,182,95,202,238,189,14,188,243,192,64,129,170,228,99,155,46,191,246,247,94,135,64,5,124,240,221,79,212,255,0,58,250,30,190,121,96,114,120,61,79,99,235,
64,13,175,69,240,23,77,87,235,101,252,174,235,206,240,125,15,228,107,209,60,4,8,26,174,70,57,178,235,255,0,111,116,1,232,116,81,69,0,124,240,221,79,212,255,0,58,74,115,3,147,193,234,123,31,90,76,31,67,
249,26,0,244,79,1,116,213,126,182,95,202,238,189,14,188,243,192,64,129,170,228,99,155,46,191,246,247,94,135,64,5,124,240,221,79,212,255,0,58,250,30,190,121,96,114,120,61,79,99,235,64,13,175,69,240,23,
77,87,235,101,252,174,235,206,240,125,15,228,107,209,60,4,8,26,174,70,57,178,235,255,0,111,116,1,232,116,81,69,0,124,240,221,79,212,255,0,58,74,115,3,147,193,234,123,31,90,76,31,67,249,26,0,244,79,1,116,
213,126,182,95,202,238,189,14,188,243,192,64,129,170,228,99,155,46,191,246,247,94,135,64,5,124,240,221,79,212,255,0,58,250,30,190,121,96,114,120,61,79,99,235,64,13,175,69,240,23,77,87,235,101,252,174,
235,206,240,125,15,228,107,209,60,4,8,26,174,70,57,178,235,255,0,111,116,1,232,116,81,69,0,124,240,221,79,212,255,0,58,74,115,3,147,193,234,123,31,90,76,31,67,249,26,0,244,79,1,116,213,126,182,95,202,
238,189,14,188,243,192,64,129,170,228,99,155,46,191,246,247,94,135,64,5,124,240,221,79,212,255,0,58,250,30,190,121,96,114,120,61,79,99,235,64,13,175,69,240,23,77,87,235,101,252,174,235,206,240,125,15,
228,107,209,60,4,8,26,174,70,57,178,235,255,0,111,116,1,232,116,81,69,0,124,175,226,232,126,209,225,205,110,60,128,126,195,59,169,35,32,52,67,205,94,62,168,57,237,214,190,79,60,18,61,43,235,143,18,130,
52,29,107,32,255,0,200,58,247,183,253,49,122,249,33,186,159,169,254,116,0,148,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,125,107,251,51,255,0,199,167,139,191,235,190,141,255,0,160,106,85,245,
29,124,185,251,51,255,0,199,167,139,127,235,190,143,255,0,160,106,85,245,29,0,42,245,31,81,252,232,161,122,143,168,254,116,80,0,221,79,212,255,0,58,74,86,234,126,167,249,210,80,7,204,63,180,191,252,131,
124,45,255,0,95,154,159,254,137,180,255,0,19,95,34,215,215,95,180,191,252,131,124,43,255,0,95,154,159,254,137,180,175,145,104,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,165,94,163,234,63,157,
37,42,245,31,81,252,232,3,235,127,13,18,52,29,23,4,255,0,200,58,207,191,253,49,74,250,130,190,94,240,215,252,128,116,95,251,7,89,127,232,148,175,168,104,0,175,60,241,233,32,105,88,56,230,247,167,253,186,
87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,
121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,
158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,
169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,
166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,
122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,
189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,
105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,
1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,
229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,
167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,
117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,
170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,
114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,
168,238,125,105,180,171,212,125,71,243,160,15,92,241,208,31,240,134,120,163,142,154,22,165,143,111,244,89,107,243,77,186,159,169,254,117,250,89,227,175,249,19,60,83,255,0,96,45,79,255,0,73,101,175,205,
54,234,126,167,249,208,2,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,1,238,191,9,9,26,126,175,131,143,244,187,126,159,245,202,74,245,204,159,83,249,154,242,63,132,191,242,15,213,191,235,238,223,
255,0,69,61,122,221,0,56,19,145,201,234,59,159,90,41,23,168,250,143,231,69,0,122,41,241,232,201,255,0,137,81,234,127,229,244,122,255,0,215,165,39,252,39,163,254,129,71,255,0,3,71,255,0,34,87,157,183,83,
245,63,206,146,128,56,207,142,250,208,215,116,125,18,97,109,246,95,177,106,19,199,180,205,231,121,159,106,128,54,115,229,69,179,103,217,177,140,54,237,253,70,222,126,98,175,160,62,43,255,0,200,6,203,254,
194,145,255,0,233,53,213,124,255,0,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,42,245,31,81,252,233,41,87,168,250,143,231,64,31,120,248,63,193,66,235,194,222,30,186,58,150,195,62,145,97,46,207,178,
110,219,190,222,54,219,187,237,43,156,103,25,218,51,215,29,171,163,62,61,0,145,253,148,120,227,254,63,71,255,0,34,86,199,129,127,228,76,240,183,253,128,180,207,253,37,138,188,141,186,159,169,254,116,1,
232,159,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,231,206,107,209,124,5,211,85,250,217,127,43,186,0,
63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,122,29,20,1,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,188,
237,186,159,169,254,116,148,1,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,240,23,77,87,
235,101,252,174,235,208,232,3,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,43,208,235,231,134,234,126,167,249,208,7,162,127,194,122,63,
232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,159,57,175,69,240,23,77,87,235,101,252,174,232,0,255,0,132,8,127,208,84,
255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,117,232,116,80,7,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,
228,74,243,182,234,126,167,249,210,80,7,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,163,192,93,53,95,
173,151,242,187,175,67,160,15,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,175,67,175,158,27,169,250,159,231,64,30,137,255,0,9,232,255,0,160,81,
255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,124,230,189,23,192,93,53,95,173,151,242,187,160,3,254,16,33,255,0,65,83,
255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,215,161,209,64,30,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,43,206,
219,169,250,159,231,73,64,30,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,143,1,116,213,126,182,95,
202,238,189,14,128,60,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,189,14,190,120,110,167,234,127,157,0,122,39,252,39,163,254,129,71,255,0,3,71,255,
0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,243,154,244,95,1,116,213,126,182,95,202,238,128,15,248,64,135,253,5,79,254,1,15,254,75,160,120,
8,2,15,246,169,227,159,248,242,31,252,151,94,135,69,0,121,225,241,232,4,143,236,163,199,31,241,250,63,249,18,143,248,79,71,253,2,143,254,6,143,254,68,175,59,110,167,234,127,157,37,0,122,55,30,55,29,244,
207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,60,5,211,85,250,217,127,43,186,244,58,0,243,193,224,32,8,63,218,
167,142,127,227,200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,244,58,249,225,186,159,169,254,116,1,232,159,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,
0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,231,206,107,209,124,5,211,85,250,217,127,43,186,0,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,
242,93,122,29,20,1,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,188,237,186,159,169,254,116,148,1,232,220,120,220,119,211,63,179,15,253,126,121,223,
108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,240,23,77,87,235,101,252,174,235,208,232,3,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,
0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,43,208,235,231,134,234,126,167,249,208,7,162,127,194,122,63,232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,
240,23,203,242,254,203,254,222,237,255,0,195,183,159,57,175,69,240,23,77,87,235,101,252,174,232,0,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,
117,232,116,80,7,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,243,182,234,126,167,249,210,80,7,163,113,227,113,223,76,254,204,63,245,249,
231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,163,192,93,53,95,173,151,242,187,175,67,160,15,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,
124,122,1,35,251,40,241,199,252,126,143,254,68,175,67,175,158,27,169,250,159,231,64,30,137,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,
192,95,47,203,251,47,251,123,183,255,0,14,222,124,230,189,23,192,93,53,95,173,151,242,187,160,3,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,215,161,
209,64,30,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,43,206,219,169,250,159,231,73,64,30,141,199,141,199,125,51,251,48,255,0,215,231,157,246,
207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,143,1,116,213,126,182,95,202,238,189,14,128,60,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,
4,143,236,163,199,31,241,250,63,249,18,189,14,190,120,110,167,234,127,157,0,122,39,252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,
191,237,238,223,252,59,121,243,154,244,95,1,116,213,126,182,95,202,238,128,15,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,94,135,69,0,120,207,140,60,106,46,188,
45,226,27,81,166,236,51,233,23,241,111,251,94,237,187,237,228,93,219,126,204,185,198,115,141,195,61,51,222,190,14,110,167,234,127,157,125,109,226,95,249,0,235,95,246,14,189,255,0,209,47,95,36,183,83,245,
63,206,128,18,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,15,165,126,2,232,95,219,150,94,34,83,117,246,95,178,92,233,237,159,39,206,223,246,136,238,198,49,230,197,183,111,145,234,217,
221,219,28,253,1,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,117,227,255,0,179,63,252,122,120,187,254,187,232,223,250,6,165,95,81,208,7,158,143,1,12,143,248,154,158,163,254,92,135,175,253,125,209,
94,134,189,71,212,127,58,40,3,231,130,14,79,7,169,236,125,105,48,125,15,228,107,232,134,234,126,167,249,210,80,7,196,255,0,21,193,26,13,150,70,63,226,105,31,95,250,246,185,175,159,235,235,175,218,95,254,
65,190,22,255,0,175,205,79,255,0,68,218,127,137,175,145,104,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,165,94,163,234,63,157,37,42,245,31,81,252,232,3,244,179,192,164,127,194,25,225,126,122,
104,90,110,125,191,209,98,175,36,96,114,120,61,79,99,235,88,190,26,36,104,58,46,9,255,0,144,117,159,127,250,98,149,245,5,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,
175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,28,158,163,185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,85,200,
199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,67,215,207,44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,242,53,
232,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,0,122,29,21,243,198,79,169,252,205,42,147,145,201,234,59,159,90,0,24,28,158,15,83,216,250,210,96,250,
31,200,215,208,244,80,7,158,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,
35,147,212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,
28,158,163,185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,
127,51,64,31,67,215,207,44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,242,53,232,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,
219,165,0,122,29,21,243,198,79,169,252,205,42,147,145,201,234,59,159,90,0,24,28,158,15,83,216,250,210,96,250,31,200,215,208,244,80,7,158,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,
26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,35,147,212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,
251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,28,158,163,185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,
129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,67,215,207,44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,
62,135,242,53,232,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,0,122,29,21,243,198,79,169,252,205,42,147,145,201,234,59,159,90,0,24,28,158,15,83,216,
250,210,96,250,31,200,215,208,244,80,7,158,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,
199,214,133,39,35,147,212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,
204,210,169,57,28,158,163,185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,
94,119,147,234,127,51,64,31,67,215,207,44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,242,53,232,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,
142,111,122,127,219,165,0,122,29,21,243,198,79,169,252,205,42,147,145,201,234,59,159,90,0,197,241,40,35,65,214,178,15,252,131,175,123,127,211,23,175,146,27,169,250,159,231,95,165,158,58,3,254,16,207,20,
113,211,66,212,177,237,254,139,45,126,105,183,83,245,63,206,128,18,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,15,173,127,102,127,248,244,241,111,253,119,209,255,0,244,13,74,190,163,
175,135,62,18,18,52,253,95,7,31,233,118,253,63,235,148,149,235,153,62,167,243,52,1,244,66,245,31,81,252,232,175,158,1,57,28,158,163,185,245,162,128,62,135,110,167,234,127,157,37,121,233,241,232,201,255,
0,137,81,234,127,229,244,122,255,0,215,165,39,252,39,163,254,129,71,255,0,3,71,255,0,34,80,7,146,126,210,255,0,242,13,240,175,253,126,106,127,250,38,210,190,69,175,167,126,59,235,67,93,209,244,73,133,
183,217,126,197,168,79,30,211,55,157,230,125,170,0,217,207,149,22,205,159,102,198,48,219,183,245,27,121,249,138,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,85,234,62,163,249,210,82,
175,81,245,31,206,128,62,182,240,215,252,128,116,95,251,7,89,127,232,148,175,168,107,198,124,31,224,161,117,225,111,15,93,29,75,97,159,72,176,151,103,217,55,109,223,111,27,109,221,246,149,206,51,140,237,
25,235,142,213,209,159,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,3,208,235,207,60,123,211,74,250,222,255,0,43,74,63,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,
207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,200,7,156,210,175,81,245,31,206,189,19,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,
208,7,161,209,94,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,40,0,241,239,77,43,235,123,252,173,43,206,171,209,184,241,184,239,166,127,102,31,
250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,208,7,157,175,81,245,31,206,190,135,175,60,30,2,0,131,253,170,120,231,254,60,135,255,
0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,160,15,67,175,60,241,239,77,43,235,123,252,173,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,59,233,159,217,135,254,191,60,239,
182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,32,30,115,74,189,71,212,127,58,244,79,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,64,30,135,69,121,225,
241,232,4,143,236,163,199,31,241,250,63,249,18,143,248,79,71,253,2,143,254,6,143,254,68,160,3,199,189,52,175,173,239,242,180,175,58,175,70,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,
126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,10,159,252,2,31,252,151,64,30,118,189,71,212,127,58,250,30,188,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,
31,241,250,63,249,18,128,61,14,188,243,199,189,52,175,173,239,242,180,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,
95,246,247,111,254,29,188,128,121,205,42,245,31,81,252,235,209,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,0,122,29,21,231,135,199,160,18,63,178,143,28,127,
199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,128,15,30,244,210,190,183,191,202,210,188,234,189,27,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,
255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,0,121,218,245,31,81,252,235,232,122,243,193,224,32,8,63,218,167,142,127,227,200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,
0,244,58,243,207,30,244,210,190,183,191,202,210,143,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,1,231,
52,171,212,125,71,243,175,68,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,1,232,116,87,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,
145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,0,60,123,211,74,250,222,255,0,43,74,243,170,244,110,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,
135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,1,231,107,212,125,71,243,175,161,235,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,
255,0,145,40,3,208,235,207,60,123,211,74,250,222,255,0,43,74,63,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,
219,200,7,156,210,175,81,245,31,206,189,19,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,7,161,209,94,120,124,122,1,35,251,40,241,199,252,126,143,
254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,40,0,241,239,77,43,235,123,252,173,43,206,171,209,184,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,
254,29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,208,7,157,175,81,245,31,206,190,135,175,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,160,
15,67,175,60,241,239,77,43,235,123,252,173,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,32,
30,115,74,189,71,212,127,58,244,79,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,64,30,135,69,121,225,241,232,4,143,236,163,199,31,241,250,63,249,18,143,248,79,
71,253,2,143,254,6,143,254,68,160,3,199,189,52,175,173,239,242,180,175,58,175,70,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,
10,159,252,2,31,252,151,64,30,118,189,71,212,127,58,250,30,188,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,128,61,14,188,243,199,189,52,175,173,
239,242,180,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,128,121,205,42,245,31,81,252,235,
209,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,0,122,29,21,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,
18,128,15,30,244,210,190,183,191,202,210,188,234,189,27,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,
93,0,121,218,245,31,81,252,235,232,122,243,193,224,32,8,63,218,167,142,127,227,200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,0,244,58,243,207,30,244,210,190,183,191,202,210,143,248,
79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,1,231,52,171,212,125,71,243,175,68,255,0,132,8,127,208,84,255,
0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,1,177,227,175,249,19,60,83,255,0,96,45,79,255,0,73,101,175,205,54,234,126,167,249,215,222,62,48,241,168,186,240,183,136,
109,70,155,176,207,164,95,197,191,237,123,182,239,183,145,119,109,251,50,231,25,206,55,12,244,207,122,248,57,186,159,169,254,116,0,148,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,123,175,194,95,
249,7,234,223,245,247,111,255,0,162,158,189,110,184,79,128,186,23,246,229,151,136,148,221,125,151,236,151,58,123,103,201,243,183,253,162,59,177,140,121,177,109,219,228,122,182,119,118,199,63,64,127,194,
4,63,232,42,127,240,8,127,242,93,0,121,218,245,31,81,252,232,175,69,30,2,25,31,241,53,61,71,252,185,15,95,250,251,162,128,60,233,186,159,169,254,116,148,226,14,79,7,169,236,125,105,48,125,15,228,104,3,
203,190,43,255,0,200,6,203,254,194,145,255,0,233,53,213,124,255,0,95,64,124,87,4,104,54,89,24,255,0,137,164,125,127,235,218,230,190,127,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,149,122,
143,168,254,116,148,171,212,125,71,243,160,15,210,207,2,255,0,200,153,225,111,251,1,105,159,250,75,21,121,27,117,63,83,252,235,215,60,10,71,252,33,158,23,231,166,133,166,231,219,253,22,42,242,70,7,39,
131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,
245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,
218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,
160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,
182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,
235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,
7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,
235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,
64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,
70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,
46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,
117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,
135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,
13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,203,222,
37,255,0,144,14,181,255,0,96,235,223,253,18,245,242,75,117,63,83,252,235,235,127,18,130,52,29,107,32,255,0,200,58,247,183,253,49,122,249,33,186,159,169,254,116,0,148,81,69,0,20,81,69,0,20,81,69,0,20,81,
69,0,20,81,69,0,125,107,251,51,255,0,199,167,139,191,235,190,141,255,0,160,106,85,245,29,124,185,251,51,255,0,199,167,139,127,235,190,143,255,0,160,106,85,245,29,0,42,245,31,81,252,232,161,122,143,168,
254,116,80,0,221,79,212,255,0,58,74,86,234,126,167,249,210,80,7,204,63,180,191,252,131,124,45,255,0,95,154,159,254,137,180,255,0,19,95,34,215,215,95,180,191,252,131,124,43,255,0,95,154,159,254,137,180,
175,145,104,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,165,94,163,234,63,157,37,42,245,31,81,252,232,3,235,127,13,18,52,29,23,4,255,0,200,58,207,191,253,49,74,250,130,190,94,240,215,252,128,
116,95,251,7,89,127,232,148,175,168,104,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,
212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,
212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,
160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,
175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,
162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,
175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,
207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,
32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,
149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,
230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,
111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,
253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,
219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,
161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,92,241,208,31,240,134,120,163,142,154,22,165,143,111,244,89,107,243,77,
186,159,169,254,117,250,89,227,175,249,19,60,83,255,0,96,45,79,255,0,73,101,175,205,54,234,126,167,249,208,2,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,1,238,191,9,9,26,126,175,131,143,244,187,
126,159,245,202,74,245,204,159,83,249,154,242,63,132,191,242,15,213,191,235,238,223,255,0,69,61,122,221,0,56,19,145,201,234,59,159,90,41,23,168,250,143,231,69,0,122,41,241,232,201,255,0,137,81,234,127,
229,244,122,255,0,215,165,39,252,39,163,254,129,71,255,0,3,71,255,0,34,87,157,183,83,245,63,206,146,128,56,207,142,250,208,215,116,125,18,97,109,246,95,177,106,19,199,180,205,231,121,159,106,128,54,115,
229,69,179,103,217,177,140,54,237,253,70,222,126,98,175,160,62,43,255,0,200,6,203,254,194,145,255,0,233,53,213,124,255,0,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,42,245,31,81,252,233,41,87,168,
250,143,231,64,31,120,248,63,193,66,235,194,222,30,186,58,150,195,62,145,97,46,207,178,110,219,190,222,54,219,187,237,43,156,103,25,218,51,215,29,171,163,62,61,0,145,253,148,120,227,254,63,71,255,0,34,
86,199,129,127,228,76,240,183,253,128,180,207,253,37,138,188,141,186,159,169,254,116,1,232,159,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,
191,178,255,0,183,187,127,240,237,231,206,107,209,124,5,211,85,250,217,127,43,186,0,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,122,29,20,1,231,135,199,160,
18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,188,237,186,159,169,254,116,148,1,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,
123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,240,23,77,87,235,101,252,174,235,208,232,3,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,
113,255,0,31,163,255,0,145,43,208,235,231,134,234,126,167,249,208,7,162,127,194,122,63,232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,
255,0,195,183,159,57,175,69,240,23,77,87,235,101,252,174,232,0,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,117,232,116,80,7,158,31,30,128,72,
254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,243,182,234,126,167,249,210,80,7,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,
191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,163,192,93,53,95,173,151,242,187,175,67,160,15,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,
143,254,68,175,67,175,158,27,169,250,159,231,64,30,137,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,
0,14,222,124,230,189,23,192,93,53,95,173,151,242,187,160,3,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,215,161,209,64,30,120,124,122,1,35,251,40,241,
199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,43,206,219,169,250,159,231,73,64,30,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,
127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,143,1,116,213,126,182,95,202,238,189,14,128,60,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,
189,14,190,120,110,167,234,127,157,0,122,39,252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,243,154,244,
95,1,116,213,126,182,95,202,238,128,15,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,94,135,69,0,121,225,241,232,4,143,236,163,199,31,241,250,63,249,18,143,248,
79,71,253,2,143,254,6,143,254,68,175,59,110,167,234,127,157,37,0,122,55,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,
0,224,16,255,0,228,186,60,5,211,85,250,217,127,43,186,244,58,0,243,193,224,32,8,63,218,167,142,127,227,200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,244,58,249,225,186,159,169,254,
116,1,232,159,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,231,206,107,209,124,5,211,85,250,217,127,43,
186,0,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,122,29,20,1,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,
18,188,237,186,159,169,254,116,148,1,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,240,23,
77,87,235,101,252,174,235,208,232,3,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,43,208,235,231,134,234,126,167,249,208,7,162,127,194,
122,63,232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,159,57,175,69,240,23,77,87,235,101,252,174,232,0,255,0,132,8,127,
208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,117,232,116,80,7,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,
255,0,228,74,243,182,234,126,167,249,210,80,7,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,163,192,93,
53,95,173,151,242,187,175,67,160,15,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,175,67,175,158,27,169,250,159,231,64,30,137,255,0,9,232,255,0,160,
81,255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,124,230,189,23,192,93,53,95,173,151,242,187,160,3,254,16,33,255,0,65,
83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,215,161,209,64,30,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,43,
206,219,169,250,159,231,73,64,30,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,143,1,116,213,126,182,
95,202,238,189,14,128,60,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,189,14,190,120,110,167,234,127,157,0,122,39,252,39,163,254,129,71,255,0,3,71,
255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,243,154,244,95,1,116,213,126,182,95,202,238,128,15,248,64,135,253,5,79,254,1,15,254,75,160,
120,8,2,15,246,169,227,159,248,242,31,252,151,94,135,69,0,120,207,140,60,106,46,188,45,226,27,81,166,236,51,233,23,241,111,251,94,237,187,237,228,93,219,126,204,185,198,115,141,195,61,51,222,190,14,110,
167,234,127,157,125,109,226,95,249,0,235,95,246,14,189,255,0,209,47,95,36,183,83,245,63,206,128,18,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,15,165,126,2,232,95,219,150,94,34,83,117,
246,95,178,92,233,237,159,39,206,223,246,136,238,198,49,230,197,183,111,145,234,217,221,219,28,253,1,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,117,227,255,0,179,63,252,122,120,187,254,187,232,223,
250,6,165,95,81,208,7,158,143,1,12,143,248,154,158,163,254,92,135,175,253,125,209,94,134,189,71,212,127,58,40,3,231,130,14,79,7,169,236,125,105,48,125,15,228,107,232,134,234,126,167,249,210,80,7,196,255,
0,21,193,26,13,150,70,63,226,105,31,95,250,246,185,175,159,235,235,175,218,95,254,65,190,22,255,0,175,205,79,255,0,68,218,127,137,175,145,104,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,165,
94,163,234,63,157,37,42,245,31,81,252,232,3,244,179,192,164,127,194,25,225,126,122,104,90,110,125,191,209,98,175,36,96,114,120,61,79,99,235,88,190,26,36,104,58,46,9,255,0,144,117,159,127,250,98,149,245,
5,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,28,158,163,185,245,160,1,
129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,67,215,207,
44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,242,53,232,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,0,122,29,21,243,
198,79,169,252,205,42,147,145,201,234,59,159,90,0,24,28,158,15,83,216,250,210,96,250,31,200,215,208,244,80,7,158,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,
0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,35,147,212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,
233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,28,158,163,185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,85,200,199,54,93,
127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,67,215,207,44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,242,53,232,158,
2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,0,122,29,21,243,198,79,169,252,205,42,147,145,201,234,59,159,90,0,24,28,158,15,83,216,250,210,96,250,31,200,
215,208,244,80,7,158,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,35,147,
212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,28,158,
163,185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,
64,31,67,215,207,44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,242,53,232,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,
0,122,29,21,243,198,79,169,252,205,42,147,145,201,234,59,159,90,0,24,28,158,15,83,216,250,210,96,250,31,200,215,208,244,80,7,158,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,
14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,35,147,212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,
175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,28,158,163,185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,
85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,67,215,207,44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,
242,53,232,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,0,122,29,21,243,198,79,169,252,205,42,147,145,201,234,59,159,90,0,197,241,40,35,65,214,178,
15,252,131,175,123,127,211,23,175,146,27,169,250,159,231,95,165,158,58,3,254,16,207,20,113,211,66,212,177,237,254,139,45,126,105,183,83,245,63,206,128,18,138,40,160,2,138,40,160,2,138,40,160,2,138,40,
160,2,138,40,160,15,173,127,102,127,248,244,241,111,253,119,209,255,0,244,13,74,190,163,175,135,62,18,18,52,253,95,7,31,233,118,253,63,235,148,149,235,153,62,167,243,52,1,244,66,245,31,81,252,232,175,
158,1,57,28,158,163,185,245,162,128,62,135,110,167,234,127,157,37,121,233,241,232,201,255,0,137,81,234,127,229,244,122,255,0,215,165,39,252,39,163,254,129,71,255,0,3,71,255,0,34,80,7,146,126,210,255,0,
242,13,240,175,253,126,106,127,250,38,210,190,69,175,167,126,59,235,67,93,209,244,73,133,183,217,126,197,168,79,30,211,55,157,230,125,170,0,217,207,149,22,205,159,102,198,48,219,183,245,27,121,249,138,
128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,85,234,62,163,249,210,82,175,81,245,31,206,128,62,182,240,215,252,128,116,95,251,7,89,127,232,148,175,168,107,198,124,31,224,161,117,225,
111,15,93,29,75,97,159,72,176,151,103,217,55,109,223,111,27,109,221,246,149,206,51,140,237,25,235,142,213,209,159,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,3,208,235,207,60,123,211,74,250,222,
255,0,43,74,63,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,200,7,156,210,175,81,245,31,206,189,19,254,
16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,7,161,209,94,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,
255,0,145,40,0,241,239,77,43,235,123,252,173,43,206,171,209,184,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,167,252,32,67,254,130,167,255,0,0,135,
255,0,37,208,7,157,175,81,245,31,206,190,135,175,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,160,15,67,175,60,241,239,77,43,235,123,252,173,40,
255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,32,30,115,74,189,71,212,127,58,244,79,248,64,135,
253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,64,30,135,69,121,225,241,232,4,143,236,163,199,31,241,250,63,249,18,143,248,79,71,253,2,143,254,6,143,254,68,160,3,199,189,52,
175,173,239,242,180,175,58,175,70,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,10,159,252,2,31,252,151,64,30,118,189,71,212,127,
58,250,30,188,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,128,61,14,188,243,199,189,52,175,173,239,242,180,163,254,19,209,255,0,64,163,255,0,129,
163,255,0,145,41,120,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,128,121,205,42,245,31,81,252,235,209,63,225,2,31,244,21,63,248,4,63,249,46,129,224,
32,8,63,218,167,142,127,227,200,127,242,93,0,122,29,21,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,128,15,30,244,210,190,183,191,202,210,188,234,189,
27,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,0,121,218,245,31,81,252,235,232,122,243,193,224,32,
8,63,218,167,142,127,227,200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,0,244,58,243,207,30,244,210,190,183,191,202,210,143,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,
153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,1,231,52,171,212,125,71,243,175,68,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,
255,0,143,33,255,0,201,116,1,232,116,87,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,0,60,123,211,74,250,222,255,0,43,74,243,170,244,110,
60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,1,231,107,212,125,71,243,175,161,235,207,7,128,
128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,3,208,235,207,60,123,211,74,250,222,255,0,43,74,63,225,61,31,244,10,63,248,26,63,249,18,151,143,
27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,200,7,156,210,175,81,245,31,206,189,19,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,
170,120,231,254,60,135,255,0,37,208,7,161,209,94,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,40,0,241,239,77,43,235,123,252,173,43,206,171,209,
184,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,208,7,157,175,81,245,31,206,190,135,175,60,30,2,0,131,
253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,160,15,67,175,60,241,239,77,43,235,123,252,173,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,59,
233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,32,30,115,74,189,71,212,127,58,244,79,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,
31,252,151,64,30,135,69,121,225,241,232,4,143,236,163,199,31,241,250,63,249,18,143,248,79,71,253,2,143,254,6,143,254,68,160,3,199,189,52,175,173,239,242,180,175,58,175,70,227,198,227,190,153,253,152,127,
235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,10,159,252,2,31,252,151,64,30,118,189,71,212,127,58,250,30,188,240,120,8,2,15,246,169,227,159,248,242,31,252,151,
65,241,232,4,143,236,163,199,31,241,250,63,249,18,128,61,14,188,243,199,189,52,175,173,239,242,180,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,102,31,250,252,243,190,
217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,128,121,205,42,245,31,81,252,235,209,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,0,122,29,21,231,135,
199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,128,15,30,244,210,190,183,191,202,210,188,234,189,27,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,
229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,0,121,218,245,31,81,252,235,232,122,243,193,224,32,8,63,218,167,142,127,227,200,127,242,93,7,199,160,18,63,178,
143,28,127,199,232,255,0,228,74,0,244,58,243,207,30,244,210,190,183,191,202,210,143,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,
219,221,191,248,118,242,1,231,52,171,212,125,71,243,175,68,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,1,177,227,175,249,19,60,83,255,0,96,
45,79,255,0,73,101,175,205,54,234,126,167,249,215,222,62,48,241,168,186,240,183,136,109,70,155,176,207,164,95,197,191,237,123,182,239,183,145,119,109,251,50,231,25,206,55,12,244,207,122,248,57,186,159,
169,254,116,0,148,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,123,175,194,95,249,7,234,223,245,247,111,255,0,162,158,189,110,184,79,128,186,23,246,229,151,136,148,221,125,151,236,151,58,123,103,
201,243,183,253,162,59,177,140,121,177,109,219,228,122,182,119,118,199,63,64,127,194,4,63,232,42,127,240,8,127,242,93,0,121,218,245,31,81,252,232,175,69,30,2,25,31,241,53,61,71,252,185,15,95,250,251,162,
128,60,233,186,159,169,254,116,148,226,14,79,7,169,236,125,105,48,125,15,228,104,3,203,190,43,255,0,200,6,203,254,194,145,255,0,233,53,213,124,255,0,95,64,124,87,4,104,54,89,24,255,0,137,164,125,127,235,
218,230,190,127,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,149,122,143,168,254,116,148,171,212,125,71,243,160,15,210,207,2,255,0,200,153,225,111,251,1,105,159,250,75,21,121,27,117,63,83,
252,235,215,60,10,71,252,33,158,23,231,166,133,166,231,219,253,22,42,242,70,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,
246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,
116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,
80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,
79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,
243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,
150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,
167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,
62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,
244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,
1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,
240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,
202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,
252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,
254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,203,222,37,255,0,144,14,181,255,0,96,235,223,253,18,245,242,75,117,63,83,252,235,235,127,18,130,52,29,107,32,255,0,200,58,247,
183,253,49,122,249,33,186,159,169,254,116,0,148,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,125,107,251,51,255,0,199,167,139,191,235,190,141,255,0,160,106,85,245,29,124,185,251,51,255,0,199,167,
139,127,235,190,143,255,0,160,106,85,245,29,0,42,245,31,81,252,232,161,122,143,168,254,116,80,0,221,79,212,255,0,58,74,86,234,126,167,249,210,80,7,204,63,180,191,252,131,124,45,255,0,95,154,159,254,137,
180,255,0,19,95,34,215,215,95,180,191,252,131,124,43,255,0,95,154,159,254,137,180,175,145,104,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,165,94,163,234,63,157,37,42,245,31,81,252,232,3,235,
127,13,18,52,29,23,4,255,0,200,58,207,191,253,49,74,250,130,190,94,240,215,252,128,116,95,251,7,89,127,232,148,175,168,104,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,
149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,
39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,
254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,
95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,
231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,
229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,
167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,
117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,
170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,
114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,
168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,
115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,
105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,
67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,
212,125,71,243,160,15,92,241,208,31,240,134,120,163,142,154,22,165,143,111,244,89,107,243,77,186,159,169,254,117,250,89,227,175,249,19,60,83,255,0,96,45,79,255,0,73,101,175,205,54,234,126,167,249,208,
2,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,1,238,191,9,9,26,126,175,131,143,244,187,126,159,245,202,74,245,204,159,83,249,154,242,63,132,191,242,15,213,191,235,238,223,255,0,69,61,122,221,
0,56,19,145,201,234,59,159,90,41,23,168,250,143,231,69,0,122,41,241,232,201,255,0,137,81,234,127,229,244,122,255,0,215,165,39,252,39,163,254,129,71,255,0,3,71,255,0,34,87,157,183,83,245,63,206,146,128,
56,207,142,250,208,215,116,125,18,97,109,246,95,177,106,19,199,180,205,231,121,159,106,128,54,115,229,69,179,103,217,177,140,54,237,253,70,222,126,98,175,160,62,43,255,0,200,6,203,254,194,145,255,0,233,
53,213,124,255,0,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,42,245,31,81,252,233,41,87,168,250,143,231,64,31,120,248,63,193,66,235,194,222,30,186,58,150,195,62,145,97,46,207,178,110,219,190,222,
54,219,187,237,43,156,103,25,218,51,215,29,171,163,62,61,0,145,253,148,120,227,254,63,71,255,0,34,86,199,129,127,228,76,240,183,253,128,180,207,253,37,138,188,141,186,159,169,254,116,1,232,159,240,158,
143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,231,206,107,209,124,5,211,85,250,217,127,43,186,0,63,225,2,31,244,
21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,122,29,20,1,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,188,237,186,159,169,
254,116,148,1,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,240,23,77,87,235,101,252,174,
235,208,232,3,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,43,208,235,231,134,234,126,167,249,208,7,162,127,194,122,63,232,20,127,240,
52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,159,57,175,69,240,23,77,87,235,101,252,174,232,0,255,0,132,8,127,208,84,255,0,224,16,
255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,117,232,116,80,7,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,243,182,
234,126,167,249,210,80,7,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,163,192,93,53,95,173,151,242,187,
175,67,160,15,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,175,67,175,158,27,169,250,159,231,64,30,137,255,0,9,232,255,0,160,81,255,0,192,209,255,
0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,124,230,189,23,192,93,53,95,173,151,242,187,160,3,254,16,33,255,0,65,83,255,0,128,67,255,
0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,215,161,209,64,30,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,43,206,219,169,250,159,
231,73,64,30,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,143,1,116,213,126,182,95,202,238,189,14,128,
60,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,189,14,190,120,110,167,234,127,157,0,122,39,252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,
113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,243,154,244,95,1,116,213,126,182,95,202,238,128,15,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,
227,159,248,242,31,252,151,94,135,69,0,121,225,241,232,4,143,236,163,199,31,241,250,63,249,18,143,248,79,71,253,2,143,254,6,143,254,68,175,59,110,167,234,127,157,37,0,122,55,30,55,29,244,207,236,195,255,
0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,60,5,211,85,250,217,127,43,186,244,58,0,243,193,224,32,8,63,218,167,142,127,227,
200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,244,58,249,225,186,159,169,254,116,1,232,159,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,
207,252,5,242,252,191,178,255,0,183,187,127,240,237,231,206,107,209,124,5,211,85,250,217,127,43,186,0,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,122,29,20,
1,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,188,237,186,159,169,254,116,148,1,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,
47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,240,23,77,87,235,101,252,174,235,208,232,3,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,
128,72,254,202,60,113,255,0,31,163,255,0,145,43,208,235,231,134,234,126,167,249,208,7,162,127,194,122,63,232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,
254,203,254,222,237,255,0,195,183,159,57,175,69,240,23,77,87,235,101,252,174,232,0,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,117,232,116,80,
7,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,243,182,234,126,167,249,210,80,7,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,
0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,163,192,93,53,95,173,151,242,187,175,67,160,15,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,
40,241,199,252,126,143,254,68,175,67,175,158,27,169,250,159,231,64,30,137,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,
47,251,123,183,255,0,14,222,124,230,189,23,192,93,53,95,173,151,242,187,160,3,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,215,161,209,64,30,120,124,
122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,43,206,219,169,250,159,231,73,64,30,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,
191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,143,1,116,213,126,182,95,202,238,189,14,128,60,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,
31,241,250,63,249,18,189,14,190,120,110,167,234,127,157,0,122,39,252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,
59,121,243,154,244,95,1,116,213,126,182,95,202,238,128,15,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,94,135,69,0,120,207,140,60,106,46,188,45,226,27,81,166,236,
51,233,23,241,111,251,94,237,187,237,228,93,219,126,204,185,198,115,141,195,61,51,222,190,14,110,167,234,127,157,125,109,226,95,249,0,235,95,246,14,189,255,0,209,47,95,36,183,83,245,63,206,128,18,138,
40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,15,165,126,2,232,95,219,150,94,34,83,117,246,95,178,92,233,237,159,39,206,223,246,136,238,198,49,230,197,183,111,145,234,217,221,219,28,253,1,
255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,117,227,255,0,179,63,252,122,120,187,254,187,232,223,250,6,165,95,81,208,7,158,143,1,12,143,248,154,158,163,254,92,135,175,253,125,209,94,134,189,71,212,
127,58,40,3,231,130,14,79,7,169,236,125,105,48,125,15,228,107,232,134,234,126,167,249,210,80,7,196,255,0,21,193,26,13,150,70,63,226,105,31,95,250,246,185,175,159,235,235,175,218,95,254,65,190,22,255,0,
175,205,79,255,0,68,218,127,137,175,145,104,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,165,94,163,234,63,157,37,42,245,31,81,252,232,3,244,179,192,164,127,194,25,225,126,122,104,90,110,125,
191,209,98,175,36,96,114,120,61,79,99,235,88,190,26,36,104,58,46,9,255,0,144,117,159,127,250,98,149,245,5,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,
32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,28,158,163,185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,85,200,199,54,93,127,
237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,67,215,207,44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,242,53,232,158,2,4,
13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,0,122,29,21,243,198,79,169,252,205,42,147,145,201,234,59,159,90,0,24,28,158,15,83,216,250,210,96,250,31,200,215,
208,244,80,7,158,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,35,147,212,
119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,28,158,163,
185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,
31,67,215,207,44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,242,53,232,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,0,
122,29,21,243,198,79,169,252,205,42,147,145,201,234,59,159,90,0,24,28,158,15,83,216,250,210,96,250,31,200,215,208,244,80,7,158,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,
57,189,233,255,0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,133,39,35,147,212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,
175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,169,57,28,158,163,185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,
85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,67,215,207,44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,
242,53,232,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,0,122,29,21,243,198,79,169,252,205,42,147,145,201,234,59,159,90,0,24,28,158,15,83,216,250,210,
96,250,31,200,215,208,244,80,7,158,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,244,61,124,242,192,228,240,122,158,199,214,
133,39,35,147,212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,100,250,159,204,210,
169,57,28,158,163,185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,94,119,
147,234,127,51,64,31,67,215,207,44,14,79,7,169,236,125,104,82,114,57,61,71,115,235,95,67,80,7,207,24,62,135,242,53,232,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,
122,127,219,165,0,122,29,21,243,198,79,169,252,205,42,147,145,201,234,59,159,90,0,197,241,40,35,65,214,178,15,252,131,175,123,127,211,23,175,146,27,169,250,159,231,95,165,158,58,3,254,16,207,20,113,211,
66,212,177,237,254,139,45,126,105,183,83,245,63,206,128,18,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,15,173,127,102,127,248,244,241,111,253,119,209,255,0,244,13,74,190,163,175,135,
62,18,18,52,253,95,7,31,233,118,253,63,235,148,149,235,153,62,167,243,52,1,244,66,245,31,81,252,232,175,158,1,57,28,158,163,185,245,162,128,62,135,110,167,234,127,157,37,121,233,241,232,201,255,0,137,
81,234,127,229,244,122,255,0,215,165,39,252,39,163,254,129,71,255,0,3,71,255,0,34,80,7,146,126,210,255,0,242,13,240,175,253,126,106,127,250,38,210,190,69,175,167,126,59,235,67,93,209,244,73,133,183,217,
126,197,168,79,30,211,55,157,230,125,170,0,217,207,149,22,205,159,102,198,48,219,183,245,27,121,249,138,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,85,234,62,163,249,210,82,175,81,245,
31,206,128,62,182,240,215,252,128,116,95,251,7,89,127,232,148,175,168,107,198,124,31,224,161,117,225,111,15,93,29,75,97,159,72,176,151,103,217,55,109,223,111,27,109,221,246,149,206,51,140,237,25,235,142,
213,209,159,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,3,208,235,207,60,123,211,74,250,222,255,0,43,74,63,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,207,59,237,
159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,200,7,156,210,175,81,245,31,206,189,19,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,7,161,
209,94,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,40,0,241,239,77,43,235,123,252,173,43,206,171,209,184,241,184,239,166,127,102,31,250,252,243,
190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,208,7,157,175,81,245,31,206,190,135,175,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,
124,122,1,35,251,40,241,199,252,126,143,254,68,160,15,67,175,60,241,239,77,43,235,123,252,173,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,59,233,159,217,135,254,191,60,239,182,127,
224,47,151,229,253,151,253,189,219,255,0,135,111,32,30,115,74,189,71,212,127,58,244,79,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,64,30,135,69,121,225,241,232,
4,143,236,163,199,31,241,250,63,249,18,143,248,79,71,253,2,143,254,6,143,254,68,160,3,199,189,52,175,173,239,242,180,175,58,175,70,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,
217,127,219,221,191,248,118,242,159,240,129,15,250,10,159,252,2,31,252,151,64,30,118,189,71,212,127,58,250,30,188,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,
250,63,249,18,128,61,14,188,243,199,189,52,175,173,239,242,180,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,
247,111,254,29,188,128,121,205,42,245,31,81,252,235,209,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,0,122,29,21,231,135,199,160,18,63,178,143,28,127,199,232,
255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,128,15,30,244,210,190,183,191,202,210,188,234,189,27,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,
225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,0,121,218,245,31,81,252,235,232,122,243,193,224,32,8,63,218,167,142,127,227,200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,0,244,
58,243,207,30,244,210,190,183,191,202,210,143,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,1,231,52,171,
212,125,71,243,175,68,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,1,232,116,87,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,
255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,0,60,123,211,74,250,222,255,0,43,74,243,170,244,110,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,
41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,1,231,107,212,125,71,243,175,161,235,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,
145,40,3,208,235,207,60,123,211,74,250,222,255,0,43,74,63,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,
200,7,156,210,175,81,245,31,206,189,19,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,7,161,209,94,120,124,122,1,35,251,40,241,199,252,126,143,254,
68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,40,0,241,239,77,43,235,123,252,173,43,206,171,209,184,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,
29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,208,7,157,175,81,245,31,206,190,135,175,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,160,15,
67,175,60,241,239,77,43,235,123,252,173,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,32,30,
115,74,189,71,212,127,58,244,79,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,64,30,135,69,121,225,241,232,4,143,236,163,199,31,241,250,63,249,18,143,248,79,71,
253,2,143,254,6,143,254,68,160,3,199,189,52,175,173,239,242,180,175,58,175,70,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,10,
159,252,2,31,252,151,64,30,118,189,71,212,127,58,250,30,188,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,128,61,14,188,243,199,189,52,175,173,239,
242,180,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,128,121,205,42,245,31,81,252,235,209,
63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,0,122,29,21,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,128,
15,30,244,210,190,183,191,202,210,188,234,189,27,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,0,121,
218,245,31,81,252,235,232,122,243,193,224,32,8,63,218,167,142,127,227,200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,0,244,58,243,207,30,244,210,190,183,191,202,210,143,248,79,71,253,
2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,1,231,52,171,212,125,71,243,175,68,255,0,132,8,127,208,84,255,0,224,16,255,
0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,1,177,227,175,249,19,60,83,255,0,96,45,79,255,0,73,101,175,205,54,234,126,167,249,215,222,62,48,241,168,186,240,183,136,109,70,155,176,
207,164,95,197,191,237,123,182,239,183,145,119,109,251,50,231,25,206,55,12,244,207,122,248,57,186,159,169,254,116,0,148,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,123,175,194,95,249,7,234,223,
245,247,111,255,0,162,158,189,110,184,79,128,186,23,246,229,151,136,148,221,125,151,236,151,58,123,103,201,243,183,253,162,59,177,140,121,177,109,219,228,122,182,119,118,199,63,64,127,194,4,63,232,42,
127,240,8,127,242,93,0,121,218,245,31,81,252,232,175,69,30,2,25,31,241,53,61,71,252,185,15,95,250,251,162,128,60,233,186,159,169,254,116,148,226,14,79,7,169,236,125,105,48,125,15,228,104,3,203,190,43,
255,0,200,6,203,254,194,145,255,0,233,53,213,124,255,0,95,64,124,87,4,104,54,89,24,255,0,137,164,125,127,235,218,230,190,127,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,149,122,143,168,254,
116,148,171,212,125,71,243,160,15,210,207,2,255,0,200,153,225,111,251,1,105,159,250,75,21,121,27,117,63,83,252,235,215,60,10,71,252,33,158,23,231,166,133,166,231,219,253,22,42,242,70,7,39,131,212,246,
62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,
244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,
1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,
240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,
202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,
252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,
254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,
207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,
129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,
57,178,235,255,0,111,117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,
46,191,246,247,64,30,135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,
117,232,116,0,87,207,13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,
135,69,20,80,7,207,13,212,253,79,243,164,167,48,57,60,30,167,177,245,164,193,244,63,145,160,15,68,240,23,77,87,235,101,252,174,235,208,235,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,116,0,87,207,
13,212,253,79,243,175,161,235,231,150,7,39,131,212,246,62,180,0,218,244,95,1,116,213,126,182,95,202,238,188,239,7,208,254,70,189,19,192,64,129,170,228,99,155,46,191,246,247,64,30,135,69,20,80,7,203,222,
37,255,0,144,14,181,255,0,96,235,223,253,18,245,242,75,117,63,83,252,235,235,127,18,130,52,29,107,32,255,0,200,58,247,183,253,49,122,249,33,186,159,169,254,116,0,148,81,69,0,20,81,69,0,20,81,69,0,20,81,
69,0,20,81,69,0,125,107,251,51,255,0,199,167,139,191,235,190,141,255,0,160,106,85,245,29,124,185,251,51,255,0,199,167,139,127,235,190,143,255,0,160,106,85,245,29,0,42,245,31,81,252,232,161,122,143,168,
254,116,80,0,221,79,212,255,0,58,74,86,234,126,167,249,210,80,7,204,63,180,191,252,131,124,45,255,0,95,154,159,254,137,180,255,0,19,95,34,215,215,95,180,191,252,131,124,43,255,0,95,154,159,254,137,180,
175,145,104,0,162,138,40,0,162,138,40,0,162,138,40,0,162,138,40,0,165,94,163,234,63,157,37,42,245,31,81,252,232,3,235,127,13,18,52,29,23,4,255,0,200,58,207,191,253,49,74,250,130,190,94,240,215,252,128,
116,95,251,7,89,127,232,148,175,168,104,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,
212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,
212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,
160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,
175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,
162,138,0,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,
175,60,241,233,32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,
207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,
32,105,88,56,230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,
149,131,142,111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,
230,247,167,253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,
111,122,127,219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,
253,186,87,161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,161,232,162,138,0,243,207,30,146,6,149,131,142,111,122,127,
219,165,121,222,79,169,252,205,122,39,143,122,105,95,91,223,229,105,94,117,64,14,82,114,57,61,71,115,235,95,67,87,207,11,212,125,71,243,175,161,232,0,175,60,241,233,32,105,88,56,230,247,167,253,186,87,
161,215,158,120,247,166,149,245,189,254,86,148,1,231,121,62,167,243,52,170,78,71,39,168,238,125,105,180,171,212,125,71,243,160,15,92,241,208,31,240,134,120,163,142,154,22,165,143,111,244,89,107,243,77,
186,159,169,254,117,250,89,227,175,249,19,60,83,255,0,96,45,79,255,0,73,101,175,205,54,234,126,167,249,208,2,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,0,81,69,20,1,238,191,9,9,26,126,175,131,143,244,187,
126,159,245,202,74,245,204,159,83,249,154,242,63,132,191,242,15,213,191,235,238,223,255,0,69,61,122,221,0,56,19,145,201,234,59,159,90,41,23,168,250,143,231,69,0,122,41,241,232,201,255,0,137,81,234,127,
229,244,122,255,0,215,165,39,252,39,163,254,129,71,255,0,3,71,255,0,34,87,157,183,83,245,63,206,146,128,56,207,142,250,208,215,116,125,18,97,109,246,95,177,106,19,199,180,205,231,121,159,106,128,54,115,
229,69,179,103,217,177,140,54,237,253,70,222,126,98,175,160,62,43,255,0,200,6,203,254,194,145,255,0,233,53,213,124,255,0,64,5,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,42,245,31,81,252,233,41,87,168,
250,143,231,64,31,120,248,63,193,66,235,194,222,30,186,58,150,195,62,145,97,46,207,178,110,219,190,222,54,219,187,237,43,156,103,25,218,51,215,29,171,163,62,61,0,145,253,148,120,227,254,63,71,255,0,34,
86,199,129,127,228,76,240,183,253,128,180,207,253,37,138,188,141,186,159,169,254,116,1,232,159,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,
191,178,255,0,183,187,127,240,237,231,206,107,209,124,5,211,85,250,217,127,43,186,0,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,122,29,20,1,231,135,199,160,
18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,188,237,186,159,169,254,116,148,1,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,
123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,240,23,77,87,235,101,252,174,235,208,232,3,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,
113,255,0,31,163,255,0,145,43,208,235,231,134,234,126,167,249,208,7,162,127,194,122,63,232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,
255,0,195,183,159,57,175,69,240,23,77,87,235,101,252,174,232,0,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,117,232,116,80,7,158,31,30,128,72,
254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,243,182,234,126,167,249,210,80,7,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,
191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,163,192,93,53,95,173,151,242,187,175,67,160,15,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,
143,254,68,175,67,175,158,27,169,250,159,231,64,30,137,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,
0,14,222,124,230,189,23,192,93,53,95,173,151,242,187,160,3,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,215,161,209,64,30,120,124,122,1,35,251,40,241,
199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,43,206,219,169,250,159,231,73,64,30,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,
127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,143,1,116,213,126,182,95,202,238,189,14,128,60,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,
189,14,190,120,110,167,234,127,157,0,122,39,252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,243,154,244,
95,1,116,213,126,182,95,202,238,128,15,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,94,135,69,0,121,225,241,232,4,143,236,163,199,31,241,250,63,249,18,143,248,
79,71,253,2,143,254,6,143,254,68,175,59,110,167,234,127,157,37,0,122,55,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,
0,224,16,255,0,228,186,60,5,211,85,250,217,127,43,186,244,58,0,243,193,224,32,8,63,218,167,142,127,227,200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,244,58,249,225,186,159,169,254,
116,1,232,159,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,231,206,107,209,124,5,211,85,250,217,127,43,
186,0,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,122,29,20,1,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,
18,188,237,186,159,169,254,116,148,1,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,240,23,
77,87,235,101,252,174,235,208,232,3,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,43,208,235,231,134,234,126,167,249,208,7,162,127,194,
122,63,232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,159,57,175,69,240,23,77,87,235,101,252,174,232,0,255,0,132,8,127,
208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,117,232,116,80,7,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,
255,0,228,74,243,182,234,126,167,249,210,80,7,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,163,192,93,
53,95,173,151,242,187,175,67,160,15,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,175,67,175,158,27,169,250,159,231,64,30,137,255,0,9,232,255,0,160,
81,255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,124,230,189,23,192,93,53,95,173,151,242,187,160,3,254,16,33,255,0,65,
83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,215,161,209,64,30,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,43,
206,219,169,250,159,231,73,64,30,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,143,1,116,213,126,182,
95,202,238,189,14,128,60,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,31,241,250,63,249,18,189,14,190,120,110,167,234,127,157,0,122,39,252,39,163,254,129,71,255,0,3,71,
255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,243,154,244,95,1,116,213,126,182,95,202,238,128,15,248,64,135,253,5,79,254,1,15,254,75,160,
120,8,2,15,246,169,227,159,248,242,31,252,151,94,135,69,0,120,207,140,60,106,46,188,45,226,27,81,166,236,51,233,23,241,111,251,94,237,187,237,228,93,219,126,204,185,198,115,141,195,61,51,222,190,14,110,
167,234,127,157,125,109,226,95,249,0,235,95,246,14,189,255,0,209,47,95,36,183,83,245,63,206,128,18,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,15,165,126,2,232,95,219,150,94,34,83,117,
246,95,178,92,233,237,159,39,206,223,246,136,238,198,49,230,197,183,111,145,234,217,221,219,28,253,1,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,117,227,255,0,179,63,252,122,120,187,254,187,232,223,
250,6,167,95,81,208,7,158,143,1,12,143,248,154,158,163,254,92,135,175,253,125,209,94,134,189,71,212,127,58,40,3,231,130,14,79,7,169,236,125,105,48,125,15,228,107,232,134,234,126,167,249,210,80,7,197,255,
0,21,109,25,252,49,111,120,22,82,45,245,171,72,88,168,253,218,173,205,158,160,193,164,24,200,249,173,194,171,146,20,18,84,252,206,160,252,239,95,111,252,127,178,55,158,22,183,42,187,158,210,73,174,212,
2,221,35,146,210,57,9,218,9,59,97,150,70,228,96,99,36,129,146,62,32,160,2,138,40,160,2,138,40,160,2,138,40,160,2,138,40,160,2,149,122,143,168,254,116,148,171,212,125,71,243,160,15,210,207,2,145,255,0,
8,103,133,249,233,161,105,185,246,255,0,69,138,188,145,129,201,224,245,61,143,173,98,248,104,145,160,232,184,39,254,65,214,125,255,0,233,138,87,212,20,1,243,198,15,161,252,141,122,39,128,129,3,85,200,
199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,64,30,135,69,124,241,147,234,127,51,74,164,228,114,122,142,231,214,128,6,7,39,131,212,246,62,180,152,62,135,242,53,244,61,
20,1,231,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,0,125,15,95,60,176,57,60,30,167,177,245,161,73,200,228,245,29,207,173,
125,13,64,31,60,96,250,31,200,215,162,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,148,1,232,116,87,207,25,62,167,243,52,170,78,71,39,168,238,125,104,
0,96,114,120,61,79,99,235,73,131,232,127,35,95,67,209,64,30,121,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,87,157,228,250,159,204,208,7,208,245,243,
203,3,147,193,234,123,31,90,20,156,142,79,81,220,250,215,208,212,1,243,198,15,161,252,141,122,39,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,64,30,
135,69,124,241,147,234,127,51,74,164,228,114,122,142,231,214,128,6,7,39,131,212,246,62,180,152,62,135,242,53,244,61,20,1,231,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,
111,122,127,219,165,121,222,79,169,252,205,0,125,15,95,60,176,57,60,30,167,177,245,161,73,200,228,245,29,207,173,125,13,64,31,60,96,250,31,200,215,162,120,8,16,53,92,140,115,101,215,254,222,235,208,235,
207,60,122,72,26,86,14,57,189,233,255,0,110,148,1,232,116,87,207,25,62,167,243,52,170,78,71,39,168,238,125,104,0,96,114,120,61,79,99,235,73,131,232,127,35,95,67,209,64,30,121,224,32,64,213,114,49,205,
151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,87,157,228,250,159,204,208,7,208,245,243,203,3,147,193,234,123,31,90,20,156,142,79,81,220,250,215,208,212,1,243,198,15,161,252,141,
122,39,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,159,246,233,64,30,135,69,124,241,147,234,127,51,74,164,228,114,122,142,231,214,128,6,7,39,131,212,246,62,180,
152,62,135,242,53,244,61,20,1,231,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,0,125,15,95,60,176,57,60,30,167,177,245,161,73,
200,228,245,29,207,173,125,13,64,31,60,96,250,31,200,215,162,120,8,16,53,92,140,115,101,215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,148,1,232,116,87,207,25,62,167,243,52,170,78,
71,39,168,238,125,104,0,96,114,120,61,79,99,235,73,131,232,127,35,95,67,209,64,30,121,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,87,157,228,250,159,
204,208,7,208,245,243,203,3,147,193,234,123,31,90,20,156,142,79,81,220,250,215,208,212,1,243,198,15,161,252,141,122,39,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,
222,159,246,233,64,30,135,69,124,241,147,234,127,51,74,164,228,114,122,142,231,214,128,6,7,39,131,212,246,62,180,152,62,135,242,53,244,61,20,1,231,158,2,4,13,87,35,28,217,117,255,0,183,186,244,58,243,
207,30,146,6,149,131,142,111,122,127,219,165,121,222,79,169,252,205,0,125,15,95,60,176,57,60,30,167,177,245,161,73,200,228,245,29,207,173,125,13,64,31,60,96,250,31,200,215,162,120,8,16,53,92,140,115,101,
215,254,222,235,208,235,207,60,122,72,26,86,14,57,189,233,255,0,110,148,1,232,116,87,207,25,62,167,243,52,170,78,71,39,168,238,125,104,3,23,196,160,141,7,90,200,63,242,14,189,237,255,0,76,94,190,72,110,
167,234,127,157,126,150,120,232,15,248,67,60,81,199,77,11,82,199,183,250,44,181,249,166,221,79,212,255,0,58,0,74,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,163,173,0,125,133,251,53,219,
148,209,60,71,112,80,47,157,168,217,198,175,198,233,18,27,121,8,232,79,202,175,43,128,27,4,49,115,183,105,82,223,75,87,205,30,20,211,27,75,248,119,224,240,234,35,150,255,0,251,91,81,144,0,84,176,185,184,
132,219,177,57,37,137,181,88,14,125,56,28,86,134,79,169,252,205,0,125,16,189,71,212,127,58,43,231,128,78,71,39,168,238,125,104,160,15,161,219,169,250,159,231,73,94,122,124,122,50,127,226,84,122,159,249,
125,30,191,245,233,73,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,1,83,226,101,162,95,88,91,89,72,51,29,221,190,169,110,253,142,38,138,218,50,65,236,70,236,131,216,128,123,87,231,221,204,15,109,
60,214,242,2,178,65,43,196,234,122,171,198,197,24,30,6,8,32,130,8,7,218,191,68,56,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,252,147,241,151,193,
146,120,83,196,105,112,142,103,179,214,97,55,81,204,33,49,40,185,70,9,117,22,55,200,161,131,24,229,32,55,252,182,206,0,197,0,120,253,20,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,42,245,31,81,252,233,41,
65,193,7,208,230,128,62,182,240,215,252,128,116,95,251,7,89,127,232,148,175,168,107,195,252,7,225,88,245,127,7,248,119,81,143,82,242,214,125,54,223,49,139,81,38,201,33,6,9,16,184,185,93,197,100,137,148,
157,160,228,114,1,200,29,105,241,232,4,143,236,163,199,31,241,250,63,249,18,128,61,14,188,243,199,189,52,175,173,239,242,180,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,
127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,128,121,205,42,245,31,81,252,235,209,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,
242,93,0,122,29,21,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,128,15,30,244,210,190,183,191,202,210,188,234,189,27,143,27,142,250,103,246,97,255,
0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,0,121,218,245,31,81,252,235,232,122,243,193,224,32,8,63,218,167,142,127,227,200,127,
242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,0,244,58,243,207,30,244,210,190,183,191,202,210,143,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,
103,254,2,249,126,95,217,127,219,221,191,248,118,242,1,231,52,171,212,125,71,243,175,68,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,1,232,
116,87,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,0,60,123,211,74,250,222,255,0,43,74,243,170,244,110,60,110,59,233,159,217,135,254,191,
60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,1,231,107,212,125,71,243,175,161,235,207,7,128,128,32,255,0,106,158,57,255,0,143,
33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,40,3,208,235,207,60,123,211,74,250,222,255,0,43,74,63,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,207,
59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,219,200,7,156,210,175,81,245,31,206,189,19,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,
7,161,209,94,120,124,122,1,35,251,40,241,199,252,126,143,254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,40,0,241,239,77,43,235,123,252,173,43,206,171,209,184,241,184,239,166,127,102,31,250,
252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,254,29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,208,7,157,175,81,245,31,206,190,135,175,60,30,2,0,131,253,170,120,231,254,60,135,255,0,
37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,160,15,67,175,60,241,239,77,43,235,123,252,173,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,59,233,159,217,135,254,191,60,239,
182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,32,30,115,74,189,71,212,127,58,244,79,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,64,30,135,69,121,225,
241,232,4,143,236,163,199,31,241,250,63,249,18,143,248,79,71,253,2,143,254,6,143,254,68,160,3,199,189,52,175,173,239,242,180,175,58,175,70,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,
126,95,217,127,219,221,191,248,118,242,159,240,129,15,250,10,159,252,2,31,252,151,64,30,118,189,71,212,127,58,250,30,188,240,120,8,2,15,246,169,227,159,248,242,31,252,151,65,241,232,4,143,236,163,199,
31,241,250,63,249,18,128,61,14,188,243,199,189,52,175,173,239,242,180,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,41,120,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,
95,246,247,111,254,29,188,128,121,205,42,245,31,81,252,235,209,63,225,2,31,244,21,63,248,4,63,249,46,129,224,32,8,63,218,167,142,127,227,200,127,242,93,0,122,29,21,231,135,199,160,18,63,178,143,28,127,
199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,128,15,30,244,210,190,183,191,202,210,188,234,189,27,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,
255,0,225,219,202,127,194,4,63,232,42,127,240,8,127,242,93,0,121,218,245,31,81,252,235,232,122,243,193,224,32,8,63,218,167,142,127,227,200,127,242,93,7,199,160,18,63,178,143,28,127,199,232,255,0,228,74,
0,244,58,243,207,30,244,210,190,183,191,202,210,143,248,79,71,253,2,143,254,6,143,254,68,165,227,198,227,190,153,253,152,127,235,243,206,251,103,254,2,249,126,95,217,127,219,221,191,248,118,242,1,231,
52,171,212,125,71,243,175,68,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,1,232,116,87,158,31,30,128,72,254,202,60,113,255,0,31,163,255,0,
145,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,0,60,123,211,74,250,222,255,0,43,74,243,170,244,110,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,
135,111,41,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,1,231,107,212,125,71,243,175,161,235,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,
255,0,145,40,3,208,235,207,60,123,211,74,250,222,255,0,43,74,63,225,61,31,244,10,63,248,26,63,249,18,151,143,27,142,250,103,246,97,255,0,175,207,59,237,159,248,11,229,249,127,101,255,0,111,118,255,0,225,
219,200,7,156,210,175,81,245,31,206,189,19,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,7,161,209,94,120,124,122,1,35,251,40,241,199,252,126,143,
254,68,163,254,19,209,255,0,64,163,255,0,129,163,255,0,145,40,0,241,239,77,43,235,123,252,173,43,206,171,209,184,241,184,239,166,127,102,31,250,252,243,190,217,255,0,128,190,95,151,246,95,246,247,111,
254,29,188,167,252,32,67,254,130,167,255,0,0,135,255,0,37,208,7,157,175,81,245,31,206,190,135,175,60,30,2,0,131,253,170,120,231,254,60,135,255,0,37,208,124,122,1,35,251,40,241,199,252,126,143,254,68,160,
15,67,175,60,241,239,77,43,235,123,252,173,40,255,0,132,244,127,208,40,255,0,224,104,255,0,228,74,94,60,110,59,233,159,217,135,254,191,60,239,182,127,224,47,151,229,253,151,253,189,219,255,0,135,111,32,
30,115,74,189,71,212,127,58,244,79,248,64,135,253,5,79,254,1,15,254,75,160,120,8,2,15,246,169,227,159,248,242,31,252,151,64,27,30,58,255,0,145,51,197,63,246,2,212,255,0,244,150,90,252,211,110,167,234,
127,157,125,207,227,223,30,231,193,254,34,136,105,235,11,79,166,207,104,178,201,119,185,85,174,177,108,167,103,217,211,113,204,163,106,239,25,56,25,175,133,207,36,159,90,0,40,162,138,0,40,162,138,0,40,
162,138,0,40,162,138,0,42,246,153,99,54,167,168,89,105,214,200,100,158,250,234,11,72,80,127,20,151,18,172,72,59,113,185,198,125,170,141,122,191,194,11,85,95,21,65,173,79,107,246,171,109,21,26,225,80,176,
141,90,241,213,163,182,249,204,114,96,198,89,231,24,82,119,68,189,5,0,125,95,226,155,8,116,173,47,195,90,101,186,133,131,79,179,146,202,21,0,0,35,181,130,198,20,192,24,3,229,65,92,77,122,55,30,55,29,244,
207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,0,243,181,234,62,163,249,209,94,138,60,4,50,63,226,106,122,143,
249,114,30,191,245,247,69,0,121,211,117,63,83,252,233,41,196,28,158,15,83,216,250,210,96,250,31,200,208,7,162,120,11,166,171,245,178,254,87,117,79,226,223,132,7,139,188,35,119,20,17,239,212,244,192,218,
142,157,180,101,221,226,67,231,219,175,115,246,136,67,42,175,121,86,35,218,174,120,8,16,53,92,140,115,101,215,254,222,235,208,232,3,242,161,148,163,50,176,33,148,144,65,24,32,131,130,8,60,142,105,43,221,
190,56,120,5,188,57,174,54,189,167,65,183,69,214,164,105,89,98,66,18,203,80,110,103,133,182,141,169,28,231,51,193,156,2,76,177,129,136,198,124,38,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,
128,62,205,253,158,60,79,29,246,129,121,225,153,228,31,107,210,39,123,171,84,98,1,123,11,182,220,225,6,114,124,155,163,33,124,0,0,158,63,82,106,70,234,126,167,249,215,202,126,18,241,62,161,225,13,114,
207,91,211,155,247,150,236,86,104,88,145,29,213,179,224,77,111,46,63,134,69,232,71,40,225,92,124,202,43,233,125,31,88,178,215,108,163,190,177,144,58,63,18,71,199,153,4,152,5,162,149,70,74,178,231,131,
209,134,25,73,6,128,53,43,209,124,5,211,85,250,217,127,43,186,243,188,31,67,249,26,244,79,1,2,6,171,145,142,108,186,255,0,219,221,0,122,29,20,81,64,31,60,55,83,245,63,206,146,156,192,228,240,122,158,199,
214,147,7,208,254,70,128,61,19,192,93,53,95,173,151,242,187,175,67,175,60,240,16,32,106,185,24,230,203,175,253,189,215,161,208,1,95,60,55,83,245,63,206,190,135,175,158,88,28,158,15,83,216,250,208,3,107,
209,124,5,211,85,250,217,127,43,186,243,188,31,67,249,26,244,79,1,2,6,171,145,142,108,186,255,0,219,221,0,122,29,20,81,64,31,60,55,83,245,63,206,146,156,192,228,240,122,158,199,214,147,7,208,254,70,128,
61,19,192,93,53,95,173,151,242,187,175,67,175,60,240,16,32,106,185,24,230,203,175,253,189,215,161,208,1,95,60,55,83,245,63,206,190,135,175,158,88,28,158,15,83,216,250,208,3,107,209,124,5,211,85,250,217,
127,43,186,243,188,31,67,249,26,244,79,1,2,6,171,145,142,108,186,255,0,219,221,0,122,29,20,81,64,31,60,55,83,245,63,206,146,156,192,228,240,122,158,199,214,147,7,208,254,70,128,61,19,192,93,53,95,173,
151,242,187,175,67,175,60,240,16,32,106,185,24,230,203,175,253,189,215,161,208,1,95,60,55,83,245,63,206,190,135,175,158,88,28,158,15,83,216,250,208,3,107,209,124,5,211,85,250,217,127,43,186,243,188,31,
67,249,26,244,79,1,2,6,171,145,142,108,186,255,0,219,221,0,122,29,20,81,64,31,60,55,83,245,63,206,146,156,192,228,240,122,158,199,214,147,7,208,254,70,128,61,19,192,93,53,95,173,151,242,187,175,67,175,
60,240,16,32,106,185,24,230,203,175,253,189,215,161,208,1,95,60,55,83,245,63,206,190,135,175,158,88,28,158,15,83,216,250,208,3,107,209,124,5,211,85,250,217,127,43,186,243,188,31,67,249,26,244,79,1,2,6,
171,145,142,108,186,255,0,219,221,0,122,29,20,81,64,31,60,55,83,245,63,206,146,156,192,228,240,122,158,199,214,147,7,208,254,70,128,61,19,192,93,53,95,173,151,242,187,175,67,175,60,240,16,32,106,185,24,
230,203,175,253,189,215,161,208,1,95,60,55,83,245,63,206,190,135,175,158,88,28,158,15,83,216,250,208,3,107,209,124,5,211,85,250,217,127,43,186,243,188,31,67,249,26,244,79,1,2,6,171,145,142,108,186,255,
0,219,221,0,122,29,20,81,64,31,60,55,83,245,63,206,146,156,192,228,240,122,158,199,214,147,7,208,254,70,128,61,19,192,93,53,95,173,151,242,187,175,67,175,60,240,16,32,106,185,24,230,203,175,253,189,215,
161,208,1,95,60,55,83,245,63,206,190,135,175,158,88,28,158,15,83,216,250,208,3,107,209,124,5,211,85,250,217,127,43,186,243,188,31,67,249,26,244,79,1,2,6,171,145,142,108,186,255,0,219,221,0,122,29,20,81,
64,31,60,55,83,245,63,206,146,156,192,228,240,122,158,199,214,147,7,208,254,70,128,61,19,192,93,53,95,173,151,242,187,175,67,175,60,240,16,32,106,185,24,230,203,175,253,189,215,161,208,1,95,60,55,83,245,
63,206,190,135,175,158,88,28,158,15,83,216,250,208,3,107,209,124,5,211,85,250,217,127,43,186,243,188,31,67,249,26,244,79,1,2,6,171,145,142,108,186,255,0,219,221,0,122,29,20,87,51,226,223,21,233,94,15,
209,238,117,125,82,117,69,141,28,90,219,7,65,113,123,115,180,152,237,173,209,152,111,119,35,44,126,236,104,26,71,33,84,154,0,249,31,226,166,174,176,88,91,233,17,176,50,222,77,246,137,148,55,204,144,64,
127,119,184,3,210,73,78,70,238,15,148,72,228,113,224,181,171,173,106,247,58,230,163,115,168,221,49,243,39,114,85,50,74,67,24,226,56,99,29,146,52,1,71,114,65,99,150,102,39,42,128,10,40,162,128,10,40,162,
128,10,40,162,128,10,40,162,128,21,84,179,5,80,75,49,0,0,9,36,147,128,0,25,36,251,10,250,139,193,90,16,208,180,59,120,164,77,183,151,96,93,222,18,62,97,36,138,60,184,79,253,112,143,106,17,211,204,243,
24,125,227,94,81,240,235,195,13,170,95,13,86,234,38,54,22,18,43,68,25,78,219,139,165,33,145,71,102,72,184,121,56,32,157,171,220,138,250,23,7,208,254,70,128,61,19,192,93,53,95,173,151,242,187,175,67,175,
60,240,16,32,106,185,24,230,203,175,253,189,215,161,208,2,175,81,245,31,206,138,23,168,250,143,231,69,0,13,212,253,79,243,164,165,110,167,234,127,157,37,0,121,231,143,73,3,74,193,199,55,189,63,237,210,
188,239,39,212,254,102,189,19,199,189,52,175,173,239,242,180,175,58,160,10,58,158,157,109,171,217,79,167,222,41,120,46,83,99,115,243,35,117,73,80,159,187,36,109,135,67,216,142,114,9,7,230,207,26,248,59,
83,240,86,181,62,149,168,35,24,201,105,108,46,177,251,187,203,66,196,71,50,17,192,108,0,178,167,88,228,5,79,27,89,190,162,94,163,234,63,157,122,167,142,60,17,165,120,231,71,125,55,80,95,46,226,61,210,
105,247,232,160,205,101,112,70,3,175,77,241,62,0,154,34,112,234,56,195,42,176,0,252,218,162,186,127,21,248,71,89,240,118,169,46,151,172,91,52,108,164,181,189,202,130,109,175,32,201,11,61,188,157,25,91,
31,50,156,60,109,242,186,169,226,185,138,0,40,162,138,0,40,162,138,0,40,162,138,0,43,168,240,183,140,53,239,7,95,174,161,162,94,24,28,224,77,111,32,243,45,46,163,4,19,29,204,4,133,117,35,141,192,172,169,
157,209,73,27,225,135,47,69,0,125,173,225,127,218,15,195,58,156,113,195,226,40,39,208,175,78,213,121,163,71,188,211,157,143,5,213,227,83,115,0,207,37,36,134,69,64,121,153,176,77,110,248,179,197,254,23,
213,163,211,95,77,241,6,147,116,16,92,180,130,43,235,112,241,172,162,216,199,230,70,210,44,145,238,218,216,14,170,114,172,58,171,1,240,101,46,79,169,252,232,3,236,15,237,141,47,254,130,150,31,248,27,111,
255,0,199,105,70,177,165,130,63,226,105,97,212,127,203,237,191,255,0,29,175,143,178,125,79,230,104,201,245,63,153,160,15,211,191,248,73,252,55,255,0,65,253,23,255,0,6,150,95,252,126,143,248,73,252,55,
255,0,67,6,139,255,0,131,75,47,254,63,95,152,153,62,167,243,52,100,250,159,204,208,7,223,222,55,215,244,57,198,153,228,107,90,84,165,77,230,255,0,43,80,180,125,160,253,151,110,237,179,28,103,7,25,235,
131,142,245,192,255,0,108,105,127,244,20,176,255,0,192,219,127,254,59,95,31,228,250,159,204,209,147,234,127,51,64,31,96,141,99,75,4,127,196,210,195,168,255,0,151,219,127,254,59,94,245,255,0,9,63,134,255,
0,232,63,162,255,0,224,210,203,255,0,143,215,230,38,79,169,252,205,25,62,167,243,52,1,250,119,255,0,9,63,134,255,0,232,96,209,127,240,105,101,255,0,199,235,130,241,190,191,161,206,52,207,35,90,210,165,
42,111,55,249,90,133,163,237,7,236,187,119,109,152,227,56,56,207,92,28,119,175,128,114,125,79,230,104,201,245,63,153,160,15,176,63,182,52,191,250,10,88,127,224,109,191,255,0,29,165,26,198,150,8,255,0,
137,165,135,81,255,0,47,182,255,0,252,118,190,62,201,245,63,153,163,39,212,254,102,128,63,78,255,0,225,39,240,223,253,7,244,95,252,26,89,127,241,250,63,225,39,240,223,253,12,26,47,254,13,44,191,248,253,
126,98,100,250,159,204,209,147,234,127,51,64,31,127,120,223,95,208,231,26,103,145,173,105,82,149,55,155,252,173,66,209,246,131,246,93,187,182,204,113,156,28,103,174,14,59,215,3,253,177,165,255,0,208,82,
195,255,0,3,109,255,0,248,237,124,127,147,234,127,51,70,79,169,252,205,0,125,130,53,141,44,17,255,0,19,75,14,163,254,95,109,255,0,248,237,123,215,252,36,254,27,255,0,160,254,139,255,0,131,75,47,254,63,
95,152,153,62,167,243,52,100,250,159,204,208,7,233,223,252,36,254,27,255,0,161,131,69,255,0,193,165,151,255,0,31,174,11,198,250,254,135,56,211,60,141,107,74,148,169,188,223,229,106,22,143,180,31,178,237,
221,182,99,140,224,227,61,112,113,222,190,1,201,245,63,153,163,39,212,254,102,128,62,192,254,216,210,255,0,232,41,97,255,0,129,182,255,0,252,118,148,107,26,88,35,254,38,150,29,71,252,190,219,255,0,241,
218,248,251,39,212,254,102,140,159,83,249,154,0,253,59,255,0,132,159,195,127,244,31,209,127,240,105,101,255,0,199,232,255,0,132,159,195,127,244,48,104,191,248,52,178,255,0,227,245,249,137,147,234,127,
51,70,79,169,252,205,0,125,253,227,125,127,67,156,105,158,70,181,165,74,84,222,111,242,181,11,71,218,15,217,118,238,219,49,198,112,113,158,184,56,239,92,15,246,198,151,255,0,65,75,15,252,13,183,255,0,
227,181,241,254,79,169,252,205,25,62,167,243,52,1,246,8,214,52,176,71,252,77,44,58,143,249,125,183,255,0,227,181,239,95,240,147,248,111,254,131,250,47,254,13,44,191,248,253,126,98,100,250,159,204,209,
147,234,127,51,64,31,167,127,240,147,248,111,254,134,13,23,255,0,6,150,95,252,126,184,47,27,235,250,28,227,76,242,53,173,42,82,166,243,127,149,168,90,62,208,126,203,183,118,217,142,51,131,140,245,193,
199,122,248,7,39,212,254,102,140,159,83,249,154,0,251,3,251,99,75,255,0,160,165,135,254,6,219,255,0,241,218,81,172,105,96,143,248,154,88,117,31,242,251,111,255,0,199,107,227,236,159,83,249,154,50,125,
79,230,104,3,244,239,254,18,127,13,255,0,208,127,69,255,0,193,165,151,255,0,31,163,254,18,127,13,255,0,208,193,162,255,0,224,210,203,255,0,143,215,230,38,79,169,252,205,25,62,167,243,52,1,247,247,141,
245,253,14,113,166,121,26,214,149,41,83,121,191,202,212,45,31,104,63,101,219,187,108,199,25,193,198,122,224,227,189,112,63,219,26,95,253,5,44,63,240,54,223,255,0,142,215,199,249,62,167,243,52,100,250,
159,204,208,7,216,35,88,210,193,31,241,52,176,234,63,229,246,223,255,0,142,215,189,127,194,79,225,191,250,15,232,191,248,52,178,255,0,227,245,249,137,147,234,127,51,70,79,169,252,205,0,126,157,255,0,194,
79,225,191,250,24,52,95,252,26,89,127,241,250,224,188,111,175,232,115,141,51,200,214,180,169,74,155,205,254,86,161,104,251,65,251,46,221,219,102,56,206,14,51,215,7,29,235,224,28,159,83,249,154,50,125,
79,230,104,3,236,15,237,141,47,254,130,150,31,248,27,111,255,0,199,105,70,177,165,130,63,226,105,97,212,127,203,237,191,255,0,29,175,143,178,125,79,230,104,201,245,63,153,160,15,211,191,248,73,252,55,
255,0,65,253,23,255,0,6,150,95,252,126,143,248,73,252,55,255,0,67,6,139,255,0,131,75,47,254,63,95,152,153,62,167,243,52,100,250,159,204,208,7,223,222,55,215,244,57,198,153,228,107,90,84,165,77,230,255,
0,43,80,180,125,160,253,151,110,237,179,28,103,7,25,235,131,142,245,192,255,0,108,105,127,244,20,176,255,0,192,219,127,254,59,95,31,228,250,159,204,209,147,234,127,51,64,31,96,141,99,75,4,127,196,210,
195,168,255,0,151,219,127,254,59,94,245,255,0,9,63,134,255,0,232,63,162,255,0,224,210,203,255,0,143,215,230,38,79,169,252,205,25,62,167,243,52,1,250,119,255,0,9,63,134,255,0,232,96,209,127,240,105,101,
255,0,199,235,130,241,190,191,161,206,52,207,35,90,210,165,42,111,55,249,90,133,163,237,7,236,187,119,109,152,227,56,56,207,92,28,119,175,128,114,125,79,230,104,201,245,63,153,160,15,176,63,182,52,191,
250,10,88,127,224,109,191,255,0,29,165,26,198,150,8,255,0,137,165,135,81,255,0,47,182,255,0,252,118,190,62,201,245,63,153,163,39,212,254,102,128,63,78,255,0,225,39,240,223,253,7,244,95,252,26,89,127,241,
250,63,225,39,240,223,253,12,26,47,254,13,44,191,248,253,126,98,100,250,159,204,209,147,234,127,51,64,31,127,120,223,95,208,231,26,103,145,173,105,82,149,55,155,252,173,66,209,246,131,246,93,187,182,204,
113,156,28,103,174,14,59,215,3,253,177,165,255,0,208,82,195,255,0,3,109,255,0,248,237,124,127,147,234,127,51,70,79,169,252,205,0,125,130,53,141,44,17,255,0,19,75,14,163,254,95,109,255,0,248,237,123,215,
252,36,254,27,255,0,160,254,139,255,0,131,75,47,254,63,95,152,153,62,167,243,52,100,250,159,204,208,7,233,223,252,36,254,27,255,0,161,131,69,255,0,193,165,151,255,0,31,174,11,198,250,254,135,56,211,60,
141,107,74,148,169,188,223,229,106,22,143,180,31,178,237,221,182,99,140,224,227,61,112,113,222,190,1,201,245,63,153,163,39,212,254,102,128,62,192,254,216,210,255,0,232,41,97,255,0,129,182,255,0,252,118,
148,107,26,88,35,254,38,150,29,71,252,190,219,255,0,241,218,248,251,39,212,254,102,140,159,83,249,154,0,253,59,255,0,132,159,195,127,244,31,209,127,240,105,101,255,0,199,232,255,0,132,159,195,127,244,
48,104,191,248,52,178,255,0,227,245,249,137,147,234,127,51,70,79,169,252,205,0,125,253,227,125,127,67,156,105,158,70,181,165,74,84,222,111,242,181,11,71,218,15,217,118,238,219,49,198,112,113,158,184,56,
239,92,15,246,198,151,255,0,65,75,15,252,13,183,255,0,227,181,241,254,79,169,252,205,25,62,167,243,52,1,246,8,214,52,176,71,252,77,44,58,143,249,125,183,255,0,227,181,239,95,240,147,248,111,254,131,250,
47,254,13,44,191,248,253,126,98,100,250,159,204,209,147,234,127,51,64,31,167,127,240,147,248,111,254,134,13,23,255,0,6,150,95,252,126,188,235,226,7,138,188,55,26,105,141,253,189,165,54,209,122,204,33,
191,183,153,246,129,106,115,178,25,29,207,67,128,20,146,120,0,147,138,248,39,39,212,254,102,140,159,83,249,208,7,208,58,207,197,13,42,209,30,61,41,37,212,110,62,101,89,24,52,22,168,70,70,242,204,60,217,
48,121,10,168,138,224,31,222,47,4,248,166,179,174,106,90,245,215,218,181,43,134,153,198,86,36,251,177,66,135,31,36,81,143,149,1,192,36,129,185,136,203,179,55,53,145,69,0,20,81,69,0,20,81,69,0,20,81,69,
0,20,81,69,0,21,208,120,115,195,247,126,34,212,161,179,183,86,88,183,43,93,92,109,202,91,195,159,153,219,177,98,1,88,215,171,185,3,160,98,32,209,52,29,67,95,188,75,75,24,139,101,135,157,59,6,242,109,227,
39,230,150,87,0,128,0,7,106,253,231,108,34,2,198,190,155,240,239,135,236,124,59,101,29,157,154,238,114,85,174,110,92,15,54,230,94,238,231,178,142,68,113,131,182,53,224,100,150,102,0,250,55,65,209,52,255,
0,14,105,54,90,62,153,10,195,105,101,10,196,128,1,186,70,235,36,210,144,6,249,102,114,210,72,228,101,157,137,224,113,90,244,81,64,30,121,227,210,64,210,176,113,205,239,79,251,116,175,59,201,245,63,153,
175,68,241,239,77,43,235,123,252,173,43,206,168,1,192,156,142,79,81,220,250,209,72,189,71,212,127,58,40,3,209,79,143,70,79,252,74,143,83,255,0,47,163,215,254,189,41,63,225,61,31,244,10,63,248,26,63,249,
18,188,237,186,159,169,254,116,148,1,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,240,23,
77,87,235,101,252,174,235,208,232,3,207,7,128,128,32,255,0,106,158,57,255,0,143,33,255,0,201,116,31,30,128,72,254,202,60,113,255,0,31,163,255,0,145,43,208,235,231,134,234,126,167,249,208,7,65,226,157,
75,68,241,134,153,38,151,173,104,34,104,142,90,9,150,248,45,197,164,216,194,205,111,40,180,220,142,63,137,114,82,69,249,36,86,82,69,124,141,226,79,2,107,26,17,158,234,43,121,111,116,152,220,15,183,66,
140,235,2,190,227,26,221,133,95,220,185,84,111,153,191,118,197,24,171,127,13,125,49,94,131,224,120,162,158,29,98,25,163,73,98,144,89,164,145,72,170,241,186,50,221,134,87,70,5,89,88,18,8,32,130,14,13,0,
126,119,81,95,104,120,219,224,14,143,171,153,175,252,47,42,232,215,205,185,205,132,128,182,153,51,18,73,17,227,50,90,49,39,141,190,100,35,128,34,65,150,175,150,252,75,224,143,19,248,78,118,139,90,210,
174,109,163,4,132,187,69,243,172,229,25,0,24,238,162,221,9,206,71,202,89,92,100,6,69,60,80,7,39,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,
80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,
1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,20,80,1,69,21,185,164,248,115,88,214,164,9,167,217,75,
42,238,10,243,176,242,237,227,245,47,51,225,0,29,72,4,183,247,84,146,1,0,195,175,78,248,125,240,187,89,241,221,203,50,56,211,116,152,54,27,173,70,100,44,216,114,225,82,214,2,84,220,72,197,27,157,201,18,
128,75,73,156,43,118,62,30,248,103,97,96,82,231,88,117,212,110,65,86,91,117,12,182,145,17,206,27,56,123,131,147,206,229,68,56,0,163,12,147,244,167,195,244,72,227,212,210,53,84,68,251,10,170,32,10,170,
160,93,128,21,64,0,0,56,0,12,10,0,204,209,254,20,105,218,29,162,89,233,247,194,36,0,25,36,251,8,50,207,32,24,50,74,255,0,106,203,177,237,209,84,97,84,0,0,173,81,224,32,8,63,218,167,142,127,227,200,127,
242,93,122,29,20,1,231,135,199,160,18,63,178,143,28,127,199,232,255,0,228,74,63,225,61,31,244,10,63,248,26,63,249,18,188,237,186,159,169,254,116,148,1,232,220,120,220,119,211,63,179,15,253,126,121,223,
108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,240,23,77,87,235,101,252,174,235,208,232,3,207,71,128,134,71,252,77,79,81,255,0,46,67,215,254,
190,232,175,67,94,163,234,63,157,20,1,243,193,7,39,131,212,246,62,180,152,62,135,242,53,244,67,117,63,83,252,233,40,3,207,60,4,8,26,174,70,57,178,235,255,0,111,117,232,117,231,158,61,36,13,43,7,28,222,
244,255,0,183,74,243,188,159,83,249,154,0,250,30,190,121,96,114,120,61,79,99,235,66,147,145,201,234,59,159,90,250,26,128,62,120,193,244,63,145,175,68,240,16,32,106,185,24,230,203,175,253,189,215,161,215,
158,120,244,144,52,172,28,115,123,211,254,221,40,3,208,234,41,224,130,230,41,32,185,134,41,224,145,74,73,20,209,164,145,58,30,170,232,224,171,41,238,8,34,190,125,201,245,63,153,165,82,114,57,61,71,115,
235,64,28,78,169,240,247,195,154,137,118,91,55,176,149,152,159,50,196,249,75,158,156,192,202,240,96,247,219,26,147,217,133,112,87,223,9,47,151,39,78,212,237,230,24,36,37,228,82,219,183,240,224,111,132,
92,41,207,206,115,181,49,242,142,121,35,239,154,40,3,243,198,63,132,190,57,186,243,205,134,146,151,233,110,209,137,90,222,246,201,112,37,223,177,130,92,79,4,174,9,66,8,72,217,148,242,84,47,53,70,111,134,
30,63,130,70,137,252,43,171,51,46,50,97,183,51,167,32,30,37,128,201,27,117,254,22,56,60,117,175,182,124,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,243,47,252,43,111,30,15,249,149,
53,191,252,0,159,255,0,137,172,191,248,68,124,77,255,0,64,77,71,255,0,1,101,255,0,226,107,234,245,39,35,147,212,119,62,181,244,53,0,126,101,127,194,35,226,111,250,2,106,63,248,11,47,255,0,19,86,173,188,
7,227,27,205,255,0,101,240,230,173,63,151,183,127,149,103,51,109,221,157,187,176,188,110,218,216,245,193,175,210,186,243,207,30,146,6,149,131,142,111,122,127,219,165,0,124,67,255,0,10,219,199,159,244,
42,107,127,248,1,63,255,0,19,71,252,43,111,30,15,249,149,53,191,252,0,159,255,0,137,175,166,178,125,79,230,105,84,156,142,79,81,220,250,208,7,202,31,240,136,248,155,254,128,154,143,254,2,203,255,0,196,
209,255,0,8,143,137,191,232,9,168,255,0,224,44,191,252,77,126,154,209,64,31,154,150,222,3,241,141,230,255,0,178,248,115,86,159,203,219,191,202,179,153,182,238,206,221,216,94,55,109,108,122,224,213,175,
248,86,222,60,255,0,161,83,91,255,0,192,9,255,0,248,154,251,123,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,50,255,0,194,182,241,224,255,0,153,83,91,255,0,192,9,255,0,248,154,
203,255,0,132,71,196,223,244,4,212,127,240,22,95,254,38,190,175,82,114,57,61,71,115,235,95,67,80,7,230,87,252,34,62,38,255,0,160,38,163,255,0,128,178,255,0,241,53,106,219,192,126,49,188,223,246,95,14,
106,211,249,123,119,249,86,115,54,221,217,219,187,11,198,237,173,143,92,26,253,43,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,196,63,240,173,188,121,255,0,66,166,183,255,0,128,19,255,0,241,52,
127,194,182,241,224,255,0,153,83,91,255,0,192,9,255,0,248,154,250,107,39,212,254,102,149,73,200,228,245,29,207,173,0,124,161,255,0,8,143,137,191,232,9,168,255,0,224,44,191,252,77,31,240,136,248,155,254,
128,154,143,254,2,203,255,0,196,215,233,173,20,1,249,169,109,224,63,24,222,111,251,47,135,53,105,252,189,187,252,171,57,155,110,236,237,221,133,227,118,214,199,174,13,90,255,0,133,109,227,207,250,21,53,
191,252,0,159,255,0,137,175,183,188,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,243,47,252,43,111,30,15,249,149,53,191,252,0,159,255,0,137,172,191,248,68,124,77,255,0,64,77,71,255,
0,1,101,255,0,226,107,234,245,39,35,147,212,119,62,181,244,53,0,126,101,127,194,35,226,111,250,2,106,63,248,11,47,255,0,19,86,173,188,7,227,27,205,255,0,101,240,230,173,63,151,183,127,149,103,51,109,221,
157,187,176,188,110,218,216,245,193,175,210,186,243,207,30,146,6,149,131,142,111,122,127,219,165,0,124,67,255,0,10,219,199,159,244,42,107,127,248,1,63,255,0,19,71,252,43,111,30,15,249,149,53,191,252,0,
159,255,0,137,175,166,178,125,79,230,105,84,156,142,79,81,220,250,208,7,202,31,240,136,248,155,254,128,154,143,254,2,203,255,0,196,209,255,0,8,143,137,191,232,9,168,255,0,224,44,191,252,77,126,154,209,
64,31,154,150,222,3,241,141,230,255,0,178,248,115,86,159,203,219,191,202,179,153,182,238,206,221,216,94,55,109,108,122,224,213,175,248,86,222,60,255,0,161,83,91,255,0,192,9,255,0,248,154,251,123,199,164,
129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,50,255,0,194,182,241,224,255,0,153,83,91,255,0,192,9,255,0,248,154,203,255,0,132,71,196,223,244,4,212,127,240,22,95,254,38,190,175,82,114,
57,61,71,115,235,95,67,80,7,230,87,252,34,62,38,255,0,160,38,163,255,0,128,178,255,0,241,53,106,219,192,126,49,188,223,246,95,14,106,211,249,123,119,249,86,115,54,221,217,219,187,11,198,237,173,143,92,
26,253,43,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,196,63,240,173,188,121,255,0,66,166,183,255,0,128,19,255,0,241,52,127,194,182,241,224,255,0,153,83,91,255,0,192,9,255,0,248,154,250,107,39,
212,254,102,149,73,200,228,245,29,207,173,0,124,161,255,0,8,143,137,191,232,9,168,255,0,224,44,191,252,77,31,240,136,248,155,254,128,154,143,254,2,203,255,0,196,215,233,173,20,1,249,169,109,224,63,24,
222,111,251,47,135,53,105,252,189,187,252,171,57,155,110,236,237,221,133,227,118,214,199,174,13,90,255,0,133,109,227,207,250,21,53,191,252,0,159,255,0,137,175,183,188,122,72,26,86,14,57,189,233,255,0,
110,149,231,121,62,167,243,52,1,243,47,252,43,111,30,15,249,149,53,191,252,0,159,255,0,137,172,191,248,68,124,77,255,0,64,77,71,255,0,1,101,255,0,226,107,234,245,39,35,147,212,119,62,181,244,53,0,126,
101,127,194,35,226,111,250,2,106,63,248,11,47,255,0,19,86,173,188,7,227,27,205,255,0,101,240,230,173,63,151,183,127,149,103,51,109,221,157,187,176,188,110,218,216,245,193,175,210,186,243,207,30,146,6,
149,131,142,111,122,127,219,165,0,124,67,255,0,10,219,199,159,244,42,107,127,248,1,63,255,0,19,71,252,43,111,30,15,249,149,53,191,252,0,159,255,0,137,175,166,178,125,79,230,105,84,156,142,79,81,220,250,
208,7,202,31,240,136,248,155,254,128,154,143,254,2,203,255,0,196,209,255,0,8,143,137,191,232,9,168,255,0,224,44,191,252,77,126,154,209,64,31,154,150,222,3,241,141,230,255,0,178,248,115,86,159,203,219,
191,202,179,153,182,238,206,221,216,94,55,109,108,122,224,213,175,248,86,222,60,255,0,161,83,91,255,0,192,9,255,0,248,154,251,123,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,
50,255,0,194,182,241,224,255,0,153,83,91,255,0,192,9,255,0,248,154,203,255,0,132,71,196,223,244,4,212,127,240,22,95,254,38,190,175,82,114,57,61,71,115,235,95,67,80,7,230,87,252,34,62,38,255,0,160,38,163,
255,0,128,178,255,0,241,53,106,219,192,126,49,188,223,246,95,14,106,211,249,123,119,249,86,115,54,221,217,219,187,11,198,237,173,143,92,26,253,43,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,196,
63,240,173,188,121,255,0,66,166,183,255,0,128,19,255,0,241,52,127,194,182,241,224,255,0,153,83,91,255,0,192,9,255,0,248,154,250,107,39,212,254,102,149,73,200,228,245,29,207,173,0,124,161,255,0,8,143,137,
191,232,9,168,255,0,224,44,191,252,77,31,240,136,248,155,254,128,154,143,254,2,203,255,0,196,215,233,173,20,1,249,169,109,224,63,24,222,111,251,47,135,53,105,252,189,187,252,171,57,155,110,236,237,221,
133,227,118,214,199,174,13,90,255,0,133,109,227,207,250,21,53,191,252,0,159,255,0,137,175,183,188,122,72,26,86,14,57,189,233,255,0,110,149,231,121,62,167,243,52,1,243,47,252,43,111,30,15,249,149,53,191,
252,0,159,255,0,137,172,191,248,68,124,77,255,0,64,77,71,255,0,1,101,255,0,226,107,234,245,39,35,147,212,119,62,181,244,53,0,126,101,127,194,35,226,111,250,2,106,63,248,11,47,255,0,19,86,173,188,7,227,
27,205,255,0,101,240,230,173,63,151,183,127,149,103,51,109,221,157,187,176,188,110,218,216,245,193,175,210,186,243,207,30,146,6,149,131,142,111,122,127,219,165,0,124,67,255,0,10,219,199,159,244,42,107,
127,248,1,63,255,0,19,71,252,43,111,30,15,249,149,53,191,252,0,159,255,0,137,175,166,178,125,79,230,105,84,156,142,79,81,220,250,208,7,202,31,240,136,248,155,254,128,154,143,254,2,203,255,0,196,209,255,
0,8,143,137,191,232,9,168,255,0,224,44,191,252,77,126,154,209,64,31,154,150,222,3,241,141,230,255,0,178,248,115,86,159,203,219,191,202,179,153,182,238,206,221,216,94,55,109,108,122,224,213,175,248,86,
222,60,255,0,161,83,91,255,0,192,9,255,0,248,154,251,123,199,164,129,165,96,227,155,222,159,246,233,94,119,147,234,127,51,64,31,50,255,0,194,182,241,224,255,0,153,83,91,255,0,192,9,255,0,248,154,203,255,
0,132,71,196,223,244,4,212,127,240,22,95,254,38,190,175,82,114,57,61,71,115,235,95,67,80,7,230,87,252,34,62,38,255,0,160,38,163,255,0,128,178,255,0,241,53,106,219,192,126,49,188,223,246,95,14,106,211,
249,123,119,249,86,115,54,221,217,219,187,11,198,237,173,143,92,26,253,43,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,196,63,240,173,188,121,255,0,66,166,183,255,0,128,19,255,0,241,52,127,194,
182,241,224,255,0,153,83,91,255,0,192,9,255,0,248,154,250,107,39,212,254,102,149,73,200,228,245,29,207,173,0,124,161,255,0,8,143,137,191,232,9,168,255,0,224,44,191,252,77,62,63,6,248,162,87,8,186,37,248,
102,206,11,194,209,47,3,39,47,38,196,94,58,110,97,147,192,201,226,191,76,168,160,15,207,109,11,225,7,142,53,231,113,111,167,193,108,145,50,9,100,188,189,182,141,80,56,98,174,86,57,38,148,130,81,151,11,
25,96,70,74,237,33,143,168,105,31,179,94,160,254,91,235,158,33,179,182,0,131,36,26,109,188,183,108,203,143,184,39,185,54,136,141,158,173,228,76,56,192,7,57,175,118,241,233,32,105,88,56,230,247,167,253,
186,87,157,228,250,159,204,208,7,91,160,124,21,240,30,133,182,71,211,159,88,185,83,159,63,87,144,92,160,56,193,197,162,44,86,120,238,60,200,36,35,251,198,185,5,137,98,95,46,40,214,52,94,21,17,2,42,129,
192,1,84,0,0,246,20,245,39,35,147,212,119,62,181,244,53,0,124,241,131,232,127,35,94,137,224,32,64,213,114,49,205,151,95,251,123,175,67,175,60,241,233,32,105,88,56,230,247,167,253,186,80,7,161,209,95,60,
100,250,159,204,210,169,57,28,158,163,185,245,160,1,129,201,224,245,61,143,173,38,15,161,252,141,125,15,69,0,121,231,128,129,3,85,200,199,54,93,127,237,238,189,14,188,243,199,164,129,165,96,227,155,222,
159,246,233,94,119,147,234,127,51,64,31,68,47,81,245,31,206,138,249,224,19,145,201,234,59,159,90,40,3,232,118,234,126,167,249,210,87,158,159,30,140,159,248,149,30,167,254,95,71,175,253,122,82,127,194,
122,63,232,20,127,240,52,127,242,37,0,30,61,233,165,125,111,127,149,165,121,213,122,55,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,
127,208,84,255,0,224,16,255,0,228,186,0,243,181,234,62,163,249,215,208,245,231,131,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,148,1,232,117,
231,158,61,233,165,125,111,127,149,165,31,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,228,3,206,105,87,
168,250,143,231,94,137,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,3,208,232,175,60,62,61,0,145,253,148,120,227,254,63,71,255,0,34,81,255,0,9,
232,255,0,160,81,255,0,192,209,255,0,200,148,0,120,247,166,149,245,189,254,86,149,231,85,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,
16,33,255,0,65,83,255,0,128,67,255,0,146,232,3,206,215,168,250,143,231,95,67,215,158,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,62,61,0,145,253,148,120,227,254,63,71,255,0,34,80,7,161,215,158,
120,247,166,149,245,189,254,86,148,127,194,122,63,232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,144,15,57,165,94,163,
234,63,157,122,39,252,32,67,254,130,167,255,0,0,135,255,0,37,208,60,4,1,7,251,84,241,207,252,121,15,254,75,160,15,67,162,188,240,248,244,2,71,246,81,227,143,248,253,31,252,137,71,252,39,163,254,129,71,
255,0,3,71,255,0,34,80,1,227,222,154,87,214,247,249,90,87,157,87,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,
254,75,160,15,59,94,163,234,63,157,125,15,94,120,60,4,1,7,251,84,241,207,252,121,15,254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,64,30,135,94,121,227,222,154,87,214,247,249,90,81,255,0,9,
232,255,0,160,81,255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,64,60,230,149,122,143,168,254,117,232,159,240,129,15,
250,10,159,252,2,31,252,151,64,240,16,4,31,237,83,199,63,241,228,63,249,46,128,61,14,138,243,195,227,208,9,31,217,71,142,63,227,244,127,242,37,31,240,158,143,250,5,31,252,13,31,252,137,64,7,143,122,105,
95,91,223,229,105,94,117,94,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,128,60,237,122,143,168,254,
117,244,61,121,224,240,16,4,31,237,83,199,63,241,228,63,249,46,131,227,208,9,31,217,71,142,63,227,244,127,242,37,0,122,29,121,231,143,122,105,95,91,223,229,105,71,252,39,163,254,129,71,255,0,3,71,255,
0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,0,243,154,85,234,62,163,249,215,162,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,16,127,
181,79,28,255,0,199,144,255,0,228,186,0,244,58,43,207,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,148,127,194,122,63,232,20,127,240,52,127,242,37,0,30,61,233,165,125,111,127,149,165,121,213,122,
55,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,0,243,181,234,62,163,249,215,208,245,231,131,
192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,15,143,64,36,127,101,30,56,255,0,143,209,255,0,200,148,1,232,117,231,158,61,233,165,125,111,127,149,165,31,240,158,143,250,5,31,252,13,31,252,137,75,
199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,240,237,228,3,206,105,87,168,250,143,231,94,137,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,15,1,0,65,
254,213,60,115,255,0,30,67,255,0,146,232,3,208,232,175,60,62,61,0,145,253,148,120,227,254,63,71,255,0,34,81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,0,120,247,166,149,245,189,254,86,149,231,
85,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,3,206,215,168,250,143,231,95,67,215,158,
15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,62,61,0,145,253,148,120,227,254,63,71,255,0,34,80,7,161,215,158,120,247,166,149,245,189,254,86,148,127,194,122,63,232,20,127,240,52,127,242,37,47,30,
55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,183,144,15,57,165,94,163,234,63,157,122,39,252,32,67,254,130,167,255,0,0,135,255,0,37,208,60,4,1,7,251,84,241,
207,252,121,15,254,75,160,15,67,162,188,240,248,244,2,71,246,81,227,143,248,253,31,252,137,71,252,39,163,254,129,71,255,0,3,71,255,0,34,80,1,227,222,154,87,214,247,249,90,87,157,87,163,113,227,113,223,
76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,64,135,253,5,79,254,1,15,254,75,160,15,59,94,163,234,63,157,125,15,94,120,60,4,1,7,251,84,241,207,252,121,15,
254,75,160,248,244,2,71,246,81,227,143,248,253,31,252,137,64,30,135,94,121,227,222,154,87,214,247,249,90,81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,188,120,220,119,211,63,179,15,253,126,121,
223,108,255,0,192,95,47,203,251,47,251,123,183,255,0,14,222,64,60,230,149,122,143,168,254,117,232,159,240,129,15,250,10,159,252,2,31,252,151,64,240,16,4,31,237,83,199,63,241,228,63,249,46,128,61,14,138,
243,195,227,208,9,31,217,71,142,63,227,244,127,242,37,31,240,158,143,250,5,31,252,13,31,252,137,64,7,143,122,105,95,91,223,229,105,94,117,94,141,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,
5,242,252,191,178,255,0,183,187,127,240,237,229,63,225,2,31,244,21,63,248,4,63,249,46,128,60,237,122,143,168,254,117,244,61,121,224,240,16,4,31,237,83,199,63,241,228,63,249,46,131,227,208,9,31,217,71,
142,63,227,244,127,242,37,0,122,29,121,231,143,122,105,95,91,223,229,105,71,252,39,163,254,129,71,255,0,3,71,255,0,34,82,241,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,
238,223,252,59,121,0,243,154,85,234,62,163,249,215,162,127,194,4,63,232,42,127,240,8,127,242,93,3,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,0,244,58,43,207,15,143,64,36,127,101,30,56,255,0,143,
209,255,0,200,148,127,194,122,63,232,20,127,240,52,127,242,37,0,30,61,233,165,125,111,127,149,165,121,213,122,55,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,
0,195,183,148,255,0,132,8,127,208,84,255,0,224,16,255,0,228,186,0,243,181,234,62,163,249,215,208,245,231,131,192,64,16,127,181,79,28,255,0,199,144,255,0,228,186,15,143,64,36,127,101,30,56,255,0,143,209,
255,0,200,148,1,232,117,231,158,61,233,165,125,111,127,149,165,31,240,158,143,250,5,31,252,13,31,252,137,75,199,141,199,125,51,251,48,255,0,215,231,157,246,207,252,5,242,252,191,178,255,0,183,187,127,
240,237,228,3,206,105,87,168,250,143,231,94,137,255,0,8,16,255,0,160,169,255,0,192,33,255,0,201,116,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,3,208,232,175,60,62,61,0,145,253,148,120,227,254,
63,71,255,0,34,81,255,0,9,232,255,0,160,81,255,0,192,209,255,0,200,148,0,120,247,166,149,245,189,254,86,149,231,85,232,220,120,220,119,211,63,179,15,253,126,121,223,108,255,0,192,95,47,203,251,47,251,
123,183,255,0,14,222,83,254,16,33,255,0,65,83,255,0,128,67,255,0,146,232,3,206,215,168,250,143,231,95,67,215,158,15,1,0,65,254,213,60,115,255,0,30,67,255,0,146,232,62,61,0,145,253,148,120,227,254,63,71,
255,0,34,80,7,161,215,158,120,247,166,149,245,189,254,86,148,127,194,122,63,232,20,127,240,52,127,242,37,47,30,55,29,244,207,236,195,255,0,95,158,119,219,63,240,23,203,242,254,203,254,222,237,255,0,195,
183,144,15,57,165,94,163,234,63,157,122,39,252,32,67,254,130,167,255,0,0,135,255,0,37,208,60,4,1,7,251,84,241,207,252,121,15,254,75,160,15,67,162,188,240,248,244,2,71,246,81,227,143,248,253,31,252,137,
71,252,39,163,254,129,71,255,0,3,71,255,0,34,80,1,227,222,154,87,214,247,249,90,87,157,87,163,113,227,113,223,76,254,204,63,245,249,231,125,179,255,0,1,124,191,47,236,191,237,238,223,252,59,121,79,248,
64,135,253,5,79,254,1,15,254,75,160,15,59,94,163,234,63,157,21,232,163,192,67,35,254,38,167,168,255,0,151,33,235,255,0,95,116,80,7,157,55,83,245,63,206,146,158,85,137,60,119,61,199,248,210,108,111,79,
212,127,141,0,122,31,128,186,106,191,91,47,229,119,94,135,94,125,224,37,108,106,188,119,177,238,63,233,239,223,218,189,15,99,122,126,163,252,104,1,181,243,195,117,63,83,252,235,232,157,141,233,250,143,
241,175,158,10,177,39,142,231,184,255,0,26,0,101,122,47,128,186,106,191,91,47,229,119,94,121,177,189,63,81,254,53,232,190,2,86,198,171,199,123,30,227,254,158,253,253,168,3,208,104,167,108,111,79,212,127,
141,27,27,211,245,31,227,64,31,59,55,83,245,63,206,146,158,85,137,60,119,61,199,248,210,108,111,79,212,127,141,0,122,31,128,186,106,191,91,47,229,119,94,135,94,125,224,37,108,106,188,119,177,238,63,233,
239,223,218,189,15,99,122,126,163,252,104,1,181,243,195,117,63,83,252,235,232,157,141,233,250,143,241,175,158,10,177,39,142,231,184,255,0,26,0,101,122,47,128,186,106,191,91,47,229,119,94,121,177,189,63,
81,254,53,232,190,2,86,198,171,199,123,30,227,254,158,253,253,168,3,208,104,167,108,111,79,212,127,141,27,27,211,245,31,227,64,31,59,55,83,245,63,206,146,158,85,137,60,119,61,199,248,210,108,111,79,212,
127,141,0,122,31,128,186,106,191,91,47,229,119,94,135,94,125,224,37,108,106,188,119,177,238,63,233,239,223,218,189,15,99,122,126,163,252,104,1,181,243,195,117,63,83,252,235,232,157,141,233,250,143,241,
175,158,10,177,39,142,231,184,255,0,26,0,101,122,47,128,186,106,191,91,47,229,119,94,121,177,189,63,81,254,53,232,190,2,86,198,171,199,123,30,227,254,158,253,253,168,3,208,104,167,108,111,79,212,127,141,
27,27,211,245,31,227,64,31,59,55,83,245,63,206,146,158,85,137,60,119,61,199,248,210,108,111,79,212,127,141,0,122,31,128,186,106,191,91,47,229,119,94,135,94,125,224,37,108,106,188,119,177,238,63,233,239,
223,218,189,15,99,122,126,163,252,104,1,181,243,195,117,63,83,252,235,232,157,141,233,250,143,241,175,158,10,177,39,142,231,184,255,0,26,0,101,122,47,128,186,106,191,91,47,229,119,94,121,177,189,63,81,
254,53,232,190,2,86,198,171,199,123,30,227,254,158,253,253,168,3,208,104,167,108,111,79,212,127,141,27,27,211,245,31,227,64,31,59,55,83,245,63,206,146,158,85,137,60,119,61,199,248,210,108,111,79,212,127,
141,0,122,31,128,186,106,191,91,47,229,119,94,135,94,125,224,37,108,106,188,119,177,238,63,233,239,223,218,189,15,99,122,126,163,252,104,1,181,243,195,117,63,83,252,235,232,157,141,233,250,143,241,175,
158,10,177,39,142,231,184,255,0,26,0,101,122,47,128,186,106,191,91,47,229,119,94,121,177,189,63,81,254,53,232,190,2,86,198,171,199,123,30,227,254,158,253,253,168,3,208,104,167,108,111,79,212,127,141,27,
27,211,245,31,227,64,31,59,55,83,245,63,206,146,158,85,137,60,119,61,199,248,210,108,111,79,212,127,141,0,122,31,128,186,106,191,91,47,229,119,94,135,94,125,224,37,108,106,188,119,177,238,63,233,239,223,
218,189,15,99,122,126,163,252,104,1,181,243,195,117,63,83,252,235,232,157,141,233,250,143,241,175,158,10,177,39,142,231,184,255,0,26,0,101,122,47,128,186,106,191,91,47,229,119,94,121,177,189,63,81,254,
53,232,190,2,86,198,171,199,123,30,227,254,158,253,253,168,3,208,104,167,108,111,79,212,127,141,27,27,211,245,31,227,64,31,59,55,83,245,63,206,146,158,85,137,60,119,61,199,248,210,108,111,79,212,127,141,
0,122,31,128,186,106,191,91,47,229,119,94,135,94,125,224,37,108,106,188,119,177,238,63,233,239,223,218,189,15,99,122,126,163,252,104,1,181,243,195,117,63,83,252,235,232,157,141,233,250,143,241,175,158,
10,177,39,142,231,184,255,0,26,0,101,122,47,128,186,106,191,91,47,229,119,94,121,177,189,63,81,254,53,232,190,2,86,198,171,199,123,30,227,254,158,253,253,168,3,208,104,167,108,111,79,212,127,141,27,27,
211,245,31,227,64,31,59,55,83,245,63,206,146,158,85,137,60,119,61,199,248,210,108,111,79,212,127,141,0,122,31,128,186,106,191,91,47,229,119,94,135,94,125,224,37,108,106,188,119,177,238,63,233,239,223,
218,189,15,99,122,126,163,252,104,1,181,243,195,117,63,83,252,235,232,157,141,233,250,143,241,175,158,10,177,39,142,231,184,255,0,26,0,101,122,47,128,186,106,191,91,47,229,119,94,121,177,189,63,81,254,
53,232,190,2,86,198,171,199,123,30,227,254,158,253,253,168,3,208,104,167,108,111,79,212,127,141,27,27,211,245,31,227,64,31,59,55,83,245,63,206,146,158,85,137,60,119,61,199,248,210,108,111,79,212,127,141,
0,122,31,128,186,106,191,91,47,229,119,94,135,94,125,224,37,108,106,188,119,177,238,63,233,239,223,218,189,15,99,122,126,163,252,104,1,181,243,195,117,63,83,252,235,232,157,141,233,250,143,241,175,158,
10,177,39,142,231,184,255,0,26,0,101,122,47,128,186,106,191,91,47,229,119,94,121,177,189,63,81,254,53,232,190,2,86,198,171,199,123,30,227,254,158,253,253,168,3,208,104,167,108,111,79,212,127,141,27,27,
211,245,31,227,64,31,59,55,83,245,63,206,146,158,85,137,60,119,61,199,248,210,108,111,79,212,127,141,0,122,31,128,186,106,191,91,47,229,119,94,135,94,125,224,37,108,106,188,119,177,238,63,233,239,223,
218,189,15,99,122,126,163,252,104,1,181,243,195,117,63,83,252,235,232,157,141,233,250,143,241,175,158,10,177,39,142,231,184,255,0,26,0,101,122,47,128,186,106,191,91,47,229,119,94,121,177,189,63,81,254,
53,232,190,2,86,198,171,199,123,30,227,254,158,253,253,168,3,208,104,167,108,111,79,212,127,141,27,27,211,245,31,227,64,31,59,55,83,245,63,206,146,158,85,137,60,119,61,199,248,210,108,111,79,212,127,141,
0,122,31,128,186,106,191,91,47,229,119,94,135,94,125,224,37,108,106,188,119,177,238,63,233,239,223,218,189,15,99,122,126,163,252,104,1,23,168,250,143,231,69,56,43,2,56,238,59,143,241,162,128,63,255,217,
0,0};

const char* PitchEditor::_1241246578_obsoletewhitesaveiconpng_jpg = (const char*) resource_PitchEditor__1241246578_obsoletewhitesaveiconpng_jpg;
const int PitchEditor::_1241246578_obsoletewhitesaveiconpng_jpgSize = 79807;

// JUCER_RESOURCE: muteoff_png, 46397, "muteoff.png"
static const unsigned char resource_PitchEditor_muteoff_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,181,0,0,1,175,8,2,0,0,0,83,133,220,119,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,
4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,180,210,73,68,65,84,120,94,237,157,7,120,27,85,214,134,3,108,138,29,55,89,150,45,75,114,149,45,
203,221,113,58,161,134,0,203,82,151,178,244,190,176,244,208,97,225,167,247,165,44,157,165,183,165,46,236,46,45,244,78,232,189,215,108,72,8,233,174,113,151,172,255,189,115,228,201,68,86,28,23,185,36,220,
47,231,153,140,71,83,239,189,231,157,115,102,238,204,140,10,105,105,105,105,105,69,147,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,
230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,
62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,
163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,
106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,
150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,
105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,
150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,13,131,58,187,20,254,219,80,120,146,161,240,36,45,173,97,149,230,163,214,144,42,204,191,104,10,5,215,98,208,178,187,105,
105,13,190,52,31,181,134,84,130,194,96,151,228,207,176,2,65,211,214,205,71,76,75,107,144,165,249,168,213,55,9,202,194,127,244,93,178,120,152,142,195,196,199,240,230,186,20,158,170,165,213,77,154,143,90,
125,211,0,153,34,139,7,3,65,49,249,19,193,193,33,224,99,120,99,107,42,252,155,150,86,55,105,62,106,173,91,97,142,88,152,21,236,8,40,138,117,67,85,160,189,29,227,87,153,97,53,233,80,176,179,189,173,173,
165,169,153,81,166,183,54,183,52,54,52,200,204,50,167,44,133,49,177,163,181,141,161,90,208,220,68,215,118,229,87,204,92,16,83,51,27,98,124,245,82,166,186,22,52,23,145,181,89,197,95,106,66,215,214,172,
75,107,253,102,165,249,168,181,110,9,65,132,41,97,51,4,110,218,91,90,213,24,68,50,0,103,76,237,52,1,103,146,104,53,117,58,67,243,126,248,241,243,79,63,125,253,149,87,159,121,242,169,127,220,116,243,117,
215,252,253,178,75,46,189,224,220,243,142,59,250,24,211,78,56,246,184,147,102,159,120,218,201,167,156,113,218,233,55,92,119,253,221,119,220,249,223,127,255,231,165,231,95,248,230,203,175,22,254,188,160,
121,85,19,219,97,211,64,150,241,85,245,13,10,187,81,145,214,21,150,178,111,66,85,235,94,153,18,56,6,66,157,65,150,48,44,234,202,180,126,107,210,124,212,90,183,4,34,97,166,24,184,129,77,97,26,26,146,41,
160,74,197,113,93,244,172,171,169,253,246,171,175,129,224,29,183,221,126,248,161,135,237,182,243,46,147,171,39,230,229,228,184,51,93,153,233,25,105,169,246,212,228,148,164,132,196,148,196,36,187,205,230,
176,167,101,164,57,76,99,6,143,203,157,155,149,157,159,155,199,156,76,97,169,28,79,22,83,124,222,130,170,138,202,41,147,38,29,115,212,209,151,92,116,241,163,15,63,50,247,205,183,150,46,94,98,34,82,184,
137,49,165,190,182,78,77,55,118,137,157,100,247,196,216,121,101,112,51,8,12,149,152,195,132,163,230,163,150,72,243,81,43,82,66,67,145,57,69,224,40,124,84,35,252,98,137,25,25,2,71,128,248,197,103,159,63,
246,200,163,167,158,116,242,78,127,216,177,48,223,11,206,4,133,233,246,52,87,134,19,192,121,243,242,25,98,217,110,15,198,159,126,159,175,162,180,108,66,101,149,76,151,159,178,92,110,134,121,217,57,5,121,
249,252,90,82,228,103,68,126,98,157,76,135,155,78,71,58,96,77,28,159,16,55,102,44,63,205,220,114,43,136,73,28,250,242,139,47,254,248,253,15,236,146,192,154,152,209,140,49,25,151,125,198,212,200,154,124,
140,48,45,45,205,71,173,53,36,40,132,29,97,14,118,49,81,112,195,8,67,64,3,113,132,59,140,127,242,225,71,15,220,119,255,97,135,28,186,213,22,91,130,45,151,211,41,241,32,100,52,45,31,162,101,231,192,53,
226,199,178,226,18,172,196,95,140,17,21,18,39,98,130,203,92,34,68,79,86,30,97,35,115,102,101,23,230,230,251,242,189,12,189,57,121,98,252,233,47,40,44,46,244,149,248,252,30,35,162,100,139,128,152,160,146,
113,54,74,64,10,142,161,237,126,251,236,67,110,78,116,249,253,183,223,169,99,65,70,226,111,28,165,186,78,170,16,217,117,2,208,210,138,42,205,71,173,53,164,130,70,131,134,12,21,86,4,145,70,64,85,179,98,
5,73,171,68,86,140,207,121,250,233,147,102,159,56,107,230,76,18,100,12,48,129,39,161,85,81,65,33,192,98,68,140,208,15,180,153,124,20,32,66,70,140,57,77,3,136,98,222,236,28,76,70,128,35,86,144,147,39,230,
72,177,101,164,166,57,237,142,76,71,58,113,37,177,39,88,148,64,82,214,86,89,94,206,38,96,180,45,41,57,126,236,56,70,54,155,190,233,17,135,29,126,238,255,157,51,127,222,60,118,27,166,115,116,28,72,123,
91,155,230,163,86,207,210,124,212,90,67,38,31,197,152,194,176,169,177,145,220,25,80,46,94,180,232,161,7,30,0,55,211,167,78,131,71,68,106,9,241,241,213,85,19,4,85,36,203,240,17,60,193,44,76,66,66,80,72,
178,108,141,31,197,72,147,49,153,83,204,202,71,80,40,136,100,196,202,71,198,139,242,11,36,132,36,97,103,61,4,161,85,21,149,236,3,35,172,36,35,205,33,57,184,144,154,137,252,9,190,97,37,59,185,207,94,127,
186,254,218,107,191,253,234,235,112,44,220,17,104,108,108,148,3,215,210,234,46,205,71,173,53,213,149,77,155,124,108,109,106,94,56,255,231,47,62,251,124,207,221,247,216,114,243,45,8,12,137,215,0,16,220,
145,171,135,140,0,35,76,49,46,123,13,240,241,147,152,240,81,16,105,157,193,106,17,124,196,172,227,24,227,185,110,53,27,35,10,154,6,142,89,16,82,19,186,2,98,246,173,188,164,180,184,200,15,25,153,78,240,
200,79,140,51,5,99,163,204,67,164,201,110,239,187,247,222,119,220,118,251,226,95,23,203,65,107,105,69,149,230,227,111,75,237,22,241,103,155,33,249,9,145,114,54,212,213,183,183,180,18,48,242,39,100,252,
238,171,175,111,189,233,230,109,183,158,105,79,78,17,8,118,55,51,36,132,125,38,7,49,243,162,161,50,9,9,13,147,95,37,150,20,86,138,153,124,20,2,154,102,242,81,16,41,102,174,161,151,198,126,74,178,207,56,
208,36,251,134,146,224,254,207,135,29,254,241,135,31,173,234,138,34,91,90,90,36,233,110,106,82,93,136,130,193,32,5,213,218,218,170,162,234,128,190,94,249,155,147,230,227,111,84,120,62,14,47,227,29,237,
237,181,43,107,212,213,70,242,235,64,80,58,196,124,247,205,55,23,156,123,94,89,81,113,220,239,198,96,155,78,158,234,237,70,70,177,213,24,18,44,70,227,154,213,172,116,27,50,62,138,193,68,185,48,154,150,
106,151,160,149,253,39,251,62,246,232,99,94,126,233,101,201,181,205,98,129,149,192,81,152,200,89,132,17,134,181,181,181,140,152,146,57,181,54,84,105,62,254,118,5,8,64,0,10,24,247,166,235,107,235,26,235,
234,33,227,127,30,127,252,200,195,255,76,114,154,16,23,15,170,166,79,154,82,93,94,153,48,46,110,3,224,163,24,148,44,2,146,198,173,246,212,228,20,82,242,228,196,164,184,113,227,182,216,98,139,219,111,191,
125,197,138,21,20,14,231,15,43,31,25,175,175,175,111,110,86,15,255,104,253,118,164,249,248,219,18,161,162,105,117,117,117,242,16,116,125,93,157,186,73,29,236,124,250,137,39,255,176,253,239,29,169,246,
108,183,135,56,203,95,80,136,229,184,60,185,238,172,114,127,137,202,142,115,149,89,225,136,173,70,207,136,231,163,185,183,101,197,37,126,159,79,210,237,204,244,140,44,183,199,95,228,47,242,249,60,30,15,
148,188,229,230,155,127,93,180,136,226,50,243,107,41,61,36,215,37,180,126,35,210,124,220,240,5,10,165,131,14,65,98,243,154,143,184,200,173,24,33,227,46,59,237,12,22,93,25,206,18,159,191,48,55,223,157,
225,76,183,217,65,149,220,18,193,64,146,194,31,144,202,137,68,164,152,162,167,133,101,86,43,52,204,252,83,80,203,34,66,43,101,107,178,213,106,230,82,86,51,215,208,75,147,204,154,33,219,146,204,218,228,
50,160,244,184,220,196,146,234,167,108,117,15,167,208,91,48,105,226,196,123,238,190,103,193,130,5,148,18,124,172,169,169,129,149,196,146,140,72,209,105,253,22,164,249,184,193,202,188,58,166,128,216,197,
71,53,46,234,12,169,235,140,161,208,15,223,125,127,226,9,179,161,195,216,209,99,128,133,39,211,149,157,233,38,102,148,32,14,56,2,163,82,159,191,162,184,116,157,108,234,137,143,217,202,204,63,135,158,143,
130,69,14,144,152,145,228,154,227,53,173,196,95,204,175,110,227,169,71,167,35,157,33,115,130,200,188,220,188,163,142,58,234,197,23,95,108,108,108,4,145,250,254,204,111,80,154,143,27,172,162,242,81,34,
71,70,150,46,94,82,187,178,230,156,179,207,182,37,37,199,141,25,91,94,82,90,89,94,14,56,24,201,116,164,131,72,24,84,148,95,0,22,137,37,51,82,211,146,226,226,215,201,166,245,133,143,114,139,134,88,82,204,
97,79,227,39,38,114,248,76,47,46,242,147,125,51,36,227,30,53,106,148,203,229,58,247,220,115,191,249,230,27,16,73,8,41,69,170,245,27,145,230,227,6,37,28,216,244,225,160,60,84,167,198,194,15,192,4,218,218,
67,76,12,4,151,254,186,248,221,185,111,195,2,18,106,192,65,0,85,144,151,207,56,193,163,43,61,35,203,233,50,115,106,79,134,147,113,127,65,97,100,252,104,224,41,210,140,233,230,108,86,139,146,95,27,107,
80,215,16,13,11,39,239,209,204,92,202,106,230,26,122,111,130,69,182,197,145,102,185,84,175,117,49,98,70,14,159,95,5,160,254,66,31,160,36,203,206,205,201,153,48,97,130,43,211,181,241,70,27,77,157,58,245,
233,167,158,170,171,171,11,88,222,202,161,181,193,75,243,113,195,17,1,99,187,33,137,28,59,3,193,230,85,77,109,45,173,10,142,234,111,197,199,182,230,150,111,62,255,242,164,227,103,167,165,216,20,152,44,
177,155,105,17,120,138,106,214,249,173,22,49,91,15,22,177,32,22,49,195,58,45,98,241,158,13,152,70,76,89,167,169,174,239,158,44,64,89,144,239,181,165,164,96,135,28,116,208,59,115,223,150,178,101,72,24,
222,216,208,64,193,242,103,123,91,155,156,132,86,219,154,138,248,17,211,26,249,210,124,220,64,68,216,104,222,90,85,247,19,86,172,144,167,95,16,110,204,159,140,4,219,3,79,255,247,137,77,39,79,141,31,61,
118,74,245,196,8,62,70,208,231,55,110,20,8,97,38,70,110,78,174,205,136,203,233,36,174,156,54,101,234,61,119,221,85,187,178,134,168,188,163,181,141,97,107,115,203,255,126,252,201,188,136,177,134,89,196,
95,48,213,180,53,127,212,26,161,210,124,220,64,20,193,71,21,206,160,96,103,75,83,179,128,114,222,15,63,158,112,236,113,57,110,15,206,95,234,243,59,108,118,205,199,30,140,2,33,227,198,40,31,200,72,44,41,
143,114,39,142,79,0,151,127,249,243,17,48,145,130,253,117,225,47,237,198,27,130,235,107,235,86,99,209,52,139,248,75,243,113,189,147,230,227,134,35,133,200,182,54,213,155,199,184,9,131,223,146,77,147,250,
17,230,60,243,228,83,123,239,185,87,186,61,109,252,216,113,254,252,130,234,242,202,44,167,11,4,40,68,26,44,208,124,140,48,10,196,147,233,146,155,54,185,89,217,25,105,142,202,242,114,16,89,85,81,153,153,
158,97,183,217,118,220,97,135,199,31,253,151,74,180,131,157,242,242,142,213,88,52,205,162,136,95,48,173,145,47,205,199,245,94,157,134,128,35,190,74,150,167,60,214,112,190,0,217,159,161,43,47,187,124,179,
105,211,109,137,73,5,57,121,229,69,197,105,137,201,169,9,73,19,74,203,133,2,26,142,81,141,50,177,37,37,231,120,178,96,34,102,118,156,244,184,220,213,85,19,136,40,199,199,197,17,72,222,113,219,237,242,
56,166,68,145,97,81,254,224,82,117,151,84,10,79,212,90,15,165,249,184,129,8,63,148,158,222,88,160,173,29,56,98,223,125,253,205,101,23,95,226,113,186,196,225,75,10,125,37,5,190,194,236,188,92,151,199,149,
150,110,197,129,182,8,163,184,8,30,229,18,36,112,4,133,12,25,119,58,210,129,99,126,110,30,225,100,74,98,210,216,209,99,46,185,232,98,85,254,93,47,205,92,29,31,106,62,174,255,210,124,220,128,36,112,52,
190,141,197,95,159,188,255,225,9,199,30,151,156,144,88,92,232,115,103,56,113,236,188,172,236,82,159,63,59,211,13,31,201,178,35,136,160,205,106,240,113,202,196,73,133,249,94,50,107,178,105,130,71,112,89,
94,82,74,240,40,29,200,153,8,52,203,138,75,54,30,53,106,219,109,102,81,224,205,171,154,136,34,21,34,187,234,66,243,113,125,151,230,227,250,170,40,190,215,5,199,96,123,224,221,55,231,254,113,231,93,146,
226,19,212,77,6,121,175,151,113,67,214,149,158,1,37,11,115,243,115,92,234,70,141,182,181,25,124,228,140,66,156,88,84,80,72,228,8,19,221,153,46,10,48,55,43,27,74,242,19,227,126,159,143,137,32,178,170,162,
146,241,186,154,90,16,105,229,163,32,210,168,27,173,245,82,154,143,235,159,228,45,50,1,36,9,117,40,212,212,216,216,214,210,218,88,87,47,145,227,71,239,127,80,238,47,137,31,61,118,82,229,132,172,76,183,
234,250,103,60,67,66,212,3,37,241,112,12,74,130,128,8,40,104,51,141,194,81,55,175,228,254,190,241,98,139,168,102,206,128,113,42,250,225,187,239,169,145,218,149,53,212,136,186,220,209,25,82,95,164,208,
90,111,165,249,184,254,73,222,104,43,124,148,107,142,164,117,68,142,210,197,228,225,7,31,130,131,101,69,197,19,43,170,64,164,234,208,179,166,51,11,31,49,16,96,90,4,29,180,245,131,143,149,229,229,46,167,
243,149,151,94,166,118,56,81,17,72,18,78,26,53,166,181,190,74,243,113,189,148,60,11,28,52,30,219,80,119,78,201,227,140,207,105,61,241,159,255,78,155,50,117,163,81,163,212,135,0,221,89,89,78,87,137,207,
47,124,204,203,205,203,53,220,216,228,163,242,127,195,52,34,187,91,63,248,72,14,94,92,228,207,72,115,124,242,225,71,212,136,228,218,234,4,166,181,222,74,243,113,189,84,99,67,131,186,176,101,68,142,77,
13,198,183,1,130,157,207,61,51,167,48,223,59,122,227,77,102,110,185,85,65,78,94,194,152,113,213,229,149,69,222,130,181,242,209,244,109,205,199,110,214,15,62,242,103,74,98,82,85,69,101,182,219,243,220,
156,103,169,17,162,72,245,165,10,125,5,114,189,149,230,227,250,173,206,118,21,158,4,219,218,159,250,247,127,167,78,156,148,151,149,237,176,217,125,121,222,194,156,188,60,119,150,39,195,201,20,51,191,142,
240,231,213,166,249,216,205,122,201,71,171,229,120,178,164,203,228,212,201,83,28,246,180,247,222,126,7,50,46,93,188,4,80,74,101,105,173,119,210,124,92,255,164,66,18,227,222,40,145,163,226,99,71,240,229,
231,95,152,49,101,90,252,232,177,12,137,28,147,227,19,74,188,133,19,74,202,24,87,224,179,248,176,233,240,107,152,230,99,55,235,7,31,9,201,203,138,75,8,30,61,46,119,81,65,161,223,231,251,238,155,111,168,
175,240,29,109,173,245,80,154,143,235,153,84,135,145,174,78,200,65,224,24,232,124,253,165,87,14,57,224,192,241,99,199,149,21,21,231,184,60,133,185,249,185,46,15,230,203,205,159,80,86,110,230,215,98,166,
195,175,97,154,143,221,172,31,124,84,157,168,114,212,91,127,156,142,244,140,52,71,69,105,25,148,228,100,166,249,184,254,74,243,113,228,74,61,50,24,173,247,28,254,86,187,178,70,189,66,38,16,92,185,116,
217,62,123,236,181,201,168,81,69,249,5,68,139,234,171,208,57,121,128,210,237,200,112,165,165,231,123,178,229,61,137,166,15,43,159,239,102,176,64,243,49,194,164,76,204,34,226,28,211,179,81,182,68,142,105,
169,118,151,211,57,109,202,212,242,146,210,132,248,120,134,219,110,51,43,58,31,117,210,189,62,72,243,113,132,74,221,157,54,164,2,70,161,164,145,83,139,95,153,93,29,255,114,248,159,237,201,41,211,39,77,
113,218,29,17,30,110,154,213,213,101,188,187,69,44,162,13,139,40,162,117,154,42,225,104,241,230,33,7,29,36,119,177,229,1,68,233,17,169,239,107,175,23,210,124,28,209,130,140,234,133,183,109,109,210,207,
81,76,200,200,148,107,175,190,198,95,80,88,238,47,1,142,37,133,190,8,247,182,90,216,123,141,145,136,159,180,197,196,122,224,99,113,145,255,236,51,255,74,149,45,94,180,72,234,14,68,234,164,123,189,144,
230,227,136,86,84,62,226,90,252,249,198,171,175,249,11,125,163,55,218,152,108,218,150,144,68,126,29,225,177,86,211,124,28,108,235,129,143,100,220,62,111,193,253,247,222,215,222,210,170,249,184,126,73,
243,113,132,74,242,107,216,24,190,10,73,86,221,197,71,126,253,246,171,175,183,218,124,139,228,132,68,224,104,79,76,206,115,103,21,230,230,71,120,172,213,240,94,211,34,126,210,22,19,235,129,143,37,254,
98,248,56,105,66,245,175,11,127,49,243,235,240,11,140,181,70,182,52,31,71,174,192,98,99,99,163,240,177,161,174,126,229,178,229,120,87,91,115,75,235,170,230,115,254,122,214,239,70,109,68,78,61,99,242,84,
219,248,196,194,236,60,183,35,35,194,99,35,76,195,113,80,173,7,62,66,198,220,172,108,119,166,235,136,195,14,175,89,177,66,221,88,211,215,31,215,19,105,62,142,104,193,71,162,200,160,17,116,168,231,8,81,
103,232,214,155,110,198,33,11,114,242,138,189,133,89,233,206,226,252,130,124,119,150,175,199,248,81,219,96,91,15,124,204,118,123,114,140,247,236,58,29,233,87,95,121,149,144,81,125,55,77,107,196,75,243,
113,68,203,228,163,122,73,181,241,1,235,175,191,248,114,251,109,182,181,39,167,144,89,251,243,11,28,73,41,37,222,194,162,156,252,162,60,111,132,199,106,27,74,235,129,143,14,123,90,121,73,41,136,100,132,
63,169,65,245,61,6,173,245,65,154,143,35,90,77,77,77,170,143,79,71,64,60,234,215,133,191,156,118,242,41,14,155,189,48,55,63,51,45,29,62,18,54,166,39,219,38,150,85,102,103,168,151,132,107,27,46,235,129,
143,68,142,242,180,59,227,241,99,199,237,176,221,246,234,9,40,173,245,65,154,143,35,84,114,231,186,165,165,133,97,71,123,187,74,202,58,67,15,61,240,64,186,61,205,219,245,141,124,213,27,60,43,199,180,8,
143,213,54,148,214,3,31,61,46,55,241,99,97,190,151,113,88,105,183,217,78,57,241,36,42,116,197,242,229,84,46,21,93,95,95,47,239,172,107,110,110,86,247,226,180,70,140,52,31,71,180,196,109,148,207,4,59,23,
45,88,184,227,14,59,148,250,139,77,62,42,211,124,28,25,214,51,31,193,34,19,189,121,249,62,111,65,106,114,202,204,45,183,154,251,230,91,82,197,32,82,58,42,80,203,84,55,227,140,152,146,121,180,134,75,154,
143,35,90,171,61,164,51,116,205,85,87,199,141,25,75,166,166,249,56,2,173,55,124,196,224,163,211,145,14,40,247,221,123,111,245,250,119,131,143,12,193,34,112,148,78,93,210,99,65,100,212,189,214,176,73,243,
113,228,170,169,73,189,125,186,182,182,22,63,105,108,104,192,181,240,43,248,136,43,154,110,169,249,56,66,172,103,62,22,23,249,25,161,238,228,107,54,32,178,208,91,240,212,147,79,66,67,169,107,152,40,159,
205,128,146,66,70,145,252,170,53,92,210,124,28,185,90,182,108,25,195,150,22,213,157,248,230,27,111,34,120,44,47,41,141,224,163,182,17,98,61,240,49,219,237,1,139,133,249,222,28,79,22,39,185,178,226,18,
42,49,61,205,177,199,238,123,44,89,178,132,202,21,74,66,67,137,37,133,140,34,254,212,26,70,105,62,142,92,73,170,197,112,193,130,5,4,29,147,171,39,226,105,5,121,249,121,198,215,181,196,34,188,84,219,112,
217,218,248,40,127,2,71,12,44,202,179,134,224,50,39,59,59,47,55,239,209,71,31,149,243,31,146,186,14,115,177,75,242,147,214,112,73,243,113,68,11,15,169,175,175,191,226,242,203,71,141,26,85,93,53,33,45,
213,158,229,114,107,62,142,64,91,27,31,57,177,201,85,17,12,68,102,164,57,36,132,204,246,100,121,60,158,93,119,221,117,222,188,121,84,52,201,181,156,14,145,144,81,36,205,64,107,184,164,249,56,114,181,170,
177,177,181,181,117,254,255,230,87,79,152,224,206,116,165,36,38,205,152,54,61,211,248,128,181,230,227,72,51,248,24,70,164,97,214,87,67,18,45,18,248,75,150,205,159,254,66,31,35,212,163,175,176,240,119,
155,108,50,231,153,57,212,117,205,202,154,14,185,81,211,161,239,95,143,32,105,62,142,92,225,48,173,205,45,183,223,122,91,134,241,161,122,73,211,8,67,76,39,20,159,140,112,84,109,195,101,82,29,189,55,170,
146,44,123,187,89,219,170,143,80,182,181,81,215,13,117,245,107,188,136,4,227,79,49,173,225,144,230,227,200,85,103,32,184,228,215,197,251,238,189,183,68,31,164,105,149,229,229,78,71,186,153,196,9,34,35,
188,84,219,122,97,84,92,142,39,75,69,145,222,130,23,159,123,30,20,214,172,88,17,126,233,89,84,62,106,68,14,135,52,31,71,180,230,60,253,52,64,4,139,248,18,54,105,66,117,70,154,67,243,113,3,48,85,113,70,
215,159,241,113,113,71,28,118,120,71,107,91,248,161,108,43,28,53,31,135,91,154,143,35,87,77,141,141,167,156,120,210,168,81,163,138,139,252,69,5,133,14,123,90,85,69,165,59,211,165,249,184,1,24,21,231,47,
244,145,19,168,11,202,57,57,159,126,244,49,52,132,146,171,234,27,52,31,71,142,52,31,71,174,190,248,236,243,201,213,19,237,54,155,36,215,196,143,4,143,128,82,243,113,3,48,137,31,115,179,178,39,84,86,141,
29,61,230,226,11,47,12,180,183,55,175,106,82,15,218,107,62,142,24,105,62,142,68,169,174,112,29,129,59,111,191,3,56,146,83,171,199,45,242,189,80,146,16,210,239,243,105,62,110,0,70,197,81,173,114,205,36,
53,57,101,171,45,182,172,89,177,98,217,146,165,70,245,107,62,142,20,105,62,142,56,1,199,214,214,214,166,85,77,187,237,186,107,74,98,18,201,53,94,4,28,65,164,199,229,94,13,71,205,199,245,217,168,56,170,
21,68,82,191,210,53,242,223,143,61,166,170,31,14,106,62,142,24,105,62,14,138,6,210,115,45,16,8,52,53,53,213,214,212,150,22,151,224,66,137,227,19,72,174,237,41,182,9,21,149,36,215,234,254,140,238,223,179,
254,27,21,71,228,200,249,47,45,213,94,226,47,118,57,157,199,31,115,44,181,175,190,78,163,249,56,98,164,249,24,123,201,139,88,76,68,26,253,124,149,228,207,158,197,130,13,13,13,140,92,113,249,229,17,113,
98,84,139,240,58,109,235,139,81,119,156,234,228,106,137,207,91,192,72,69,105,25,41,182,106,4,38,16,215,180,112,51,234,38,181,136,214,224,72,243,113,80,68,171,37,12,236,223,187,88,8,30,161,228,81,127,57,
42,130,143,17,14,166,109,189,54,42,212,149,161,158,197,38,57,16,68,98,175,191,242,170,106,1,22,38,134,205,136,37,69,180,13,20,254,195,144,209,106,180,6,69,154,143,131,34,90,109,255,248,216,218,218,218,
220,220,188,124,249,242,169,83,167,106,62,110,192,70,133,82,173,192,17,44,186,51,93,140,48,188,240,188,243,35,201,104,177,166,85,156,58,195,10,55,41,67,225,166,163,53,8,210,124,140,189,84,126,29,232,103,
126,45,47,1,124,229,149,87,220,110,203,173,24,205,199,13,206,168,80,200,72,229,146,89,147,104,231,231,230,217,109,182,61,119,223,67,61,66,211,5,196,213,22,77,225,86,165,249,56,152,210,124,28,4,193,70,
90,185,145,19,169,23,231,27,79,215,50,18,236,8,172,209,250,187,146,164,240,82,93,106,105,105,185,250,234,171,109,41,41,189,225,163,126,63,238,122,106,84,104,65,94,190,203,233,132,143,57,158,44,226,71,
167,35,189,196,95,252,235,194,95,86,183,16,49,139,56,245,146,151,48,66,179,226,84,202,159,50,93,107,144,164,249,56,8,50,111,62,10,40,69,52,116,227,207,48,37,45,87,148,194,51,116,169,182,182,246,232,163,
143,118,56,122,245,28,161,230,227,122,106,84,40,213,106,86,49,177,100,102,122,6,148,124,229,165,151,35,225,216,169,158,196,167,217,172,106,84,50,153,8,40,91,13,201,159,90,131,33,205,199,65,80,55,62,118,
180,182,213,174,172,89,185,108,185,250,176,39,211,187,230,49,165,166,116,105,225,194,133,83,166,76,241,120,60,166,243,104,62,110,120,70,133,102,187,61,197,69,126,176,88,104,188,61,215,227,114,19,78,158,
119,206,185,17,124,164,9,181,183,180,54,175,82,215,28,13,66,54,74,155,65,32,82,46,200,104,13,146,52,31,7,65,22,62,210,196,27,106,235,62,120,247,189,7,238,187,255,230,27,110,124,241,185,231,23,45,88,72,
91,151,95,59,140,175,214,5,13,134,6,131,225,72,243,199,31,127,76,181,217,114,77,56,106,62,110,136,38,124,156,80,81,153,154,156,66,240,72,174,157,155,149,237,202,112,30,176,239,126,17,124,12,182,7,90,26,
155,234,106,106,239,185,251,158,107,174,185,230,238,187,238,122,251,237,183,27,27,26,104,57,252,42,31,249,210,26,36,105,62,198,78,150,54,189,98,233,50,25,249,234,179,47,246,250,227,30,133,185,249,25,105,
142,164,241,9,194,187,115,255,239,28,245,152,173,209,25,152,232,32,96,188,24,149,68,73,90,252,189,119,223,147,237,201,146,23,62,174,147,143,218,214,99,163,110,221,30,172,200,91,224,47,40,204,245,100,49,
101,234,196,73,171,234,234,59,219,3,205,13,141,170,1,25,173,104,246,177,199,205,152,54,61,41,33,145,134,65,123,200,72,79,63,241,132,217,243,126,250,137,83,108,91,75,171,122,107,36,226,140,107,168,165,
169,89,150,210,26,184,52,31,99,36,90,100,151,53,26,237,21,234,61,252,192,67,127,216,110,251,236,76,119,69,113,41,173,159,120,161,186,106,130,221,102,171,44,47,63,254,152,99,235,107,235,200,187,49,197,
199,96,103,187,113,215,155,197,47,190,240,66,119,166,75,189,7,87,243,113,131,54,95,158,55,199,229,193,24,41,41,244,229,186,179,152,72,83,89,52,127,65,253,138,154,64,171,186,206,184,120,225,47,231,157,
117,54,51,112,138,45,130,161,89,217,164,225,52,15,78,159,187,236,180,243,35,15,61,172,78,180,70,171,51,47,221,132,249,168,70,181,6,42,205,199,24,73,90,164,97,114,205,145,132,122,250,148,169,99,55,25,237,
180,59,38,87,85,219,147,83,50,211,51,202,138,75,210,82,237,180,114,178,170,247,223,121,183,189,165,21,56,170,11,76,70,79,73,121,195,254,65,251,31,224,176,167,229,24,145,130,230,227,6,108,86,62,22,229,
23,48,69,16,249,198,203,175,54,214,212,133,104,68,193,208,191,31,253,23,237,103,252,216,113,196,152,36,227,52,6,121,6,159,88,114,227,81,163,182,223,118,59,178,13,133,197,96,167,201,199,240,19,138,154,
143,177,144,230,99,140,100,225,35,33,225,167,31,125,92,93,89,149,110,79,163,197,79,169,170,174,44,46,77,183,217,229,146,147,35,213,62,101,226,164,132,184,248,191,158,126,6,203,73,179,86,231,252,80,8,74,
50,220,106,139,45,161,39,115,130,69,49,22,212,124,220,240,140,144,144,230,1,31,25,17,99,60,51,45,253,174,91,111,87,45,42,208,217,217,214,126,248,65,7,103,57,93,19,43,170,42,75,203,50,210,28,242,178,72,
191,79,125,193,70,94,108,193,121,244,187,111,190,161,213,201,89,25,113,210,85,227,93,233,182,214,64,164,249,24,35,89,248,88,183,162,230,239,127,187,106,147,81,163,104,241,21,254,146,60,119,150,51,53,109,
66,105,121,89,81,49,185,118,98,92,124,69,73,105,202,248,196,130,220,252,182,230,22,201,143,212,57,223,248,224,76,205,138,21,196,152,228,224,165,254,98,193,162,134,227,6,105,5,57,121,52,143,60,0,231,242,
48,142,17,69,130,203,212,164,100,18,106,224,24,106,15,144,104,79,170,156,192,68,178,111,103,154,131,51,107,97,190,23,44,114,238,116,58,210,5,142,164,35,55,92,119,189,186,164,19,236,84,109,201,120,201,
46,124,52,113,169,53,16,105,62,198,72,22,62,254,244,237,247,7,238,179,159,45,33,105,66,89,121,105,129,175,48,59,207,227,200,32,132,36,16,32,141,194,43,92,233,25,158,12,39,25,247,183,95,125,77,252,72,83,
150,91,52,129,142,192,215,95,126,229,243,22,168,215,94,21,250,52,22,55,108,19,44,154,223,161,164,109,48,226,72,177,205,62,246,184,80,71,16,62,126,249,201,167,76,39,162,164,181,144,95,115,226,116,103,186,
104,27,249,198,139,117,73,180,49,16,249,135,237,127,255,243,255,230,67,70,179,45,9,31,59,13,73,243,212,234,159,52,31,99,36,11,31,63,121,255,195,114,127,137,92,75,202,206,112,85,151,150,23,231,23,120,61,
217,169,9,73,52,244,105,19,39,17,50,84,151,87,122,156,174,235,174,249,251,202,101,203,37,132,148,190,62,207,205,121,150,22,159,229,114,251,11,10,197,139,180,109,192,198,201,146,33,237,1,50,82,227,224,
50,35,53,237,178,11,47,150,228,250,218,43,175,230,87,38,18,63,86,149,149,91,249,88,226,47,54,187,76,146,113,127,244,193,135,180,193,150,166,102,218,18,166,249,24,43,105,62,198,78,93,124,124,252,145,71,
55,26,53,138,116,137,228,168,196,91,232,207,245,66,201,242,162,98,152,72,80,73,150,157,110,179,147,104,227,27,187,237,188,11,203,41,62,26,201,117,48,16,188,247,238,123,50,29,233,120,11,94,97,122,145,182,
13,213,36,132,100,4,68,18,63,50,238,180,59,158,125,242,169,16,225,99,83,203,86,51,54,39,231,224,68,75,67,178,230,215,156,65,29,246,52,198,203,75,74,249,51,113,124,194,179,207,204,33,173,166,237,209,150,
36,191,150,140,68,107,128,210,124,140,157,58,67,245,181,117,164,57,167,159,124,74,106,82,50,45,30,2,230,186,60,240,17,83,93,184,115,242,104,235,24,158,160,46,54,121,178,136,8,218,90,90,193,98,115,83,179,
92,63,250,251,85,87,39,199,39,20,229,121,243,140,240,83,219,6,108,149,165,101,156,47,105,36,88,220,239,198,0,65,146,107,50,143,154,101,203,225,227,210,95,22,77,40,43,231,60,106,79,78,217,116,242,84,178,
13,114,106,140,104,81,134,24,129,36,70,8,121,206,217,103,211,126,104,129,144,81,93,203,238,12,223,235,211,26,160,52,31,99,167,78,149,224,4,218,218,143,60,236,112,26,58,28,236,129,143,184,7,124,44,42,40,
252,230,235,175,225,163,106,205,240,177,61,112,249,69,151,164,37,165,16,117,230,195,71,253,72,204,6,109,165,62,63,217,52,141,132,147,165,39,195,57,177,162,42,113,92,220,118,91,207,108,170,87,47,72,254,
224,157,119,105,48,100,18,153,105,233,21,197,165,57,110,143,201,71,211,132,143,153,233,25,71,255,229,40,149,133,232,248,49,214,210,124,140,153,104,148,48,174,165,177,105,183,29,119,166,77,211,184,105,
250,132,129,69,57,249,197,249,5,133,217,42,147,2,142,146,73,49,148,22,255,240,131,15,201,149,71,133,200,64,240,236,51,206,196,103,252,249,5,240,81,63,53,184,1,27,141,1,163,25,72,59,41,41,244,97,99,55,
222,228,212,217,39,169,155,51,161,208,125,119,222,69,22,2,58,65,36,179,49,236,129,143,187,236,180,115,123,139,122,81,69,184,59,45,73,137,113,209,70,107,128,210,124,236,191,204,39,166,149,140,87,153,241,
127,99,93,253,22,155,206,200,114,186,104,244,164,201,94,79,54,100,20,62,226,21,240,145,140,9,62,18,47,208,226,179,221,158,75,46,186,88,82,33,18,109,86,114,242,241,179,61,233,78,89,80,243,113,3,54,106,
159,33,141,132,33,136,4,142,64,112,204,70,27,223,125,219,29,70,123,10,93,116,238,249,224,210,95,80,72,107,33,197,102,206,181,241,209,233,72,223,108,250,166,170,11,109,176,83,40,25,126,192,95,107,192,210,
124,236,191,228,77,124,45,45,45,68,127,192,81,154,230,151,159,125,238,203,87,207,69,224,0,132,129,10,139,158,108,185,127,157,239,201,46,247,151,72,47,31,248,200,108,52,247,125,247,222,91,5,158,198,59,
126,104,211,71,29,246,231,28,167,219,151,147,175,249,184,97,91,4,31,167,84,79,36,231,192,62,126,239,3,213,180,90,219,246,218,109,119,71,138,141,25,152,211,105,119,20,121,11,212,195,2,107,146,209,106,63,
126,255,131,36,215,170,77,26,172,100,68,107,128,210,124,236,191,64,34,67,147,143,210,199,251,229,23,94,116,165,103,72,6,77,227,246,229,230,147,41,251,115,85,60,72,174,13,31,85,95,182,252,2,69,73,111,65,
142,39,107,198,180,233,43,151,45,87,107,51,226,199,195,14,56,40,43,221,169,146,113,3,142,154,143,27,170,69,240,145,17,224,72,20,249,203,255,126,14,5,67,43,22,47,149,155,215,204,198,79,180,25,5,202,181,
240,209,231,45,240,184,220,111,191,53,23,62,170,36,166,171,139,184,106,163,90,3,147,230,99,255,101,141,31,229,162,15,127,222,117,251,29,41,227,19,85,247,70,56,152,231,85,119,162,93,30,226,71,72,39,241,
35,244,148,235,241,196,143,158,76,23,41,246,55,95,126,69,155,150,7,13,247,219,243,79,25,41,118,144,106,34,210,244,40,109,27,146,89,249,136,209,42,56,161,110,58,121,106,75,67,99,168,35,248,213,167,159,
51,145,243,104,118,166,234,9,43,233,200,218,248,88,226,47,118,216,211,30,126,240,33,185,127,45,137,136,92,237,209,26,160,52,31,251,47,43,31,229,164,205,159,151,93,124,73,98,92,252,212,137,147,104,241,
180,126,233,169,195,48,130,143,4,11,12,221,25,78,16,41,103,254,134,218,58,218,247,158,187,236,230,72,74,81,33,167,177,136,230,227,134,106,17,124,84,231,203,60,239,54,91,108,213,209,220,26,106,15,188,249,
202,107,73,113,241,21,197,165,76,47,245,249,153,25,68,230,179,84,151,121,45,124,172,40,45,179,37,37,95,127,237,181,52,63,248,104,125,150,95,107,128,210,124,236,191,228,254,140,10,30,141,252,186,174,166,
22,192,29,119,244,49,132,132,36,206,185,56,128,145,55,145,61,41,62,26,221,128,25,74,50,69,139,199,31,104,241,14,155,253,159,247,222,23,104,83,103,251,214,198,166,63,238,180,75,166,221,1,31,89,68,247,239,
217,224,77,218,3,35,52,137,196,113,113,103,157,118,70,128,212,184,173,253,230,235,110,96,58,124,36,197,46,43,42,102,6,121,59,100,132,9,31,11,243,189,196,143,251,237,187,31,77,200,196,162,254,238,66,76,
164,249,216,127,89,249,200,121,91,110,26,238,183,207,62,242,96,44,73,80,65,158,234,250,43,64,196,76,127,48,39,50,197,153,230,184,230,202,171,66,129,96,40,208,217,222,212,50,107,171,173,213,85,39,119,150,
175,43,178,208,182,1,155,180,7,25,79,77,74,254,219,37,151,17,60,194,199,139,207,191,128,60,163,196,120,41,164,196,143,50,167,213,20,34,13,62,122,243,242,51,210,211,247,216,125,15,154,161,137,69,205,199,
152,72,243,177,255,18,48,138,212,223,198,3,48,219,108,181,181,203,233,84,111,39,179,240,145,80,81,53,232,46,127,144,41,252,68,187,199,13,102,31,119,188,90,186,173,29,199,152,54,113,18,105,56,124,148,254,
64,218,54,96,163,246,165,121,48,2,7,105,9,170,115,79,160,147,16,242,248,163,142,33,156,52,155,138,244,121,144,63,77,179,242,145,38,247,135,29,118,128,137,38,22,245,167,13,99,34,205,199,254,139,248,49,
76,199,174,183,0,144,101,79,168,172,114,27,119,93,104,184,240,145,70,172,154,178,225,15,214,198,141,99,208,238,133,143,251,253,105,111,150,237,104,105,197,55,54,155,58,29,62,230,186,60,133,93,75,105,219,
80,13,38,210,6,24,161,25,228,184,60,252,249,223,127,61,38,79,94,31,176,247,62,27,143,26,197,68,153,193,147,225,36,150,180,182,31,76,82,108,16,137,145,175,108,51,115,230,170,198,70,205,199,216,74,243,177,
255,106,111,111,151,20,187,165,69,61,241,138,254,247,227,79,180,212,240,197,71,224,200,233,221,240,4,28,64,92,194,52,105,250,24,35,219,205,156,165,22,14,116,226,27,251,236,177,151,211,238,160,245,19,50,
68,44,162,109,3,51,170,94,222,210,68,243,192,200,163,223,125,115,46,205,160,165,161,113,230,230,91,58,82,108,21,197,165,210,66,36,126,180,46,107,69,36,203,114,38,46,43,46,249,117,209,34,176,40,39,108,
233,124,166,53,64,105,62,246,95,1,213,219,76,181,66,117,81,220,232,90,241,197,103,159,59,29,233,100,214,10,142,6,31,165,233,139,89,219,183,149,143,155,78,158,218,182,170,89,61,85,214,17,60,246,200,163,
112,12,233,216,97,157,95,219,134,103,84,49,81,161,217,60,38,148,149,127,251,197,87,156,35,151,45,90,60,185,170,218,140,25,137,43,49,230,87,64,236,90,86,248,40,198,178,234,90,77,118,206,143,223,255,64,
83,212,124,140,161,52,31,7,36,21,57,146,104,27,79,94,119,180,182,189,249,218,235,169,201,41,2,71,242,107,154,236,218,222,113,107,229,35,65,196,175,63,47,236,108,107,15,180,182,93,118,225,197,201,241,9,
229,254,18,166,71,44,162,109,3,51,225,35,35,0,142,234,158,62,105,138,122,115,79,40,4,37,153,40,52,132,140,38,4,49,89,80,126,53,141,233,190,124,47,13,239,227,15,63,146,103,249,145,116,62,211,26,160,52,
31,7,164,198,198,70,185,10,73,252,216,210,212,60,231,233,167,19,199,39,8,28,215,201,71,206,249,24,35,68,10,223,125,245,53,124,108,111,106,185,245,166,155,199,143,29,71,40,161,249,184,193,27,85,108,230,
215,100,208,91,110,58,131,54,64,163,250,224,157,119,211,109,118,210,109,0,202,60,230,121,212,186,172,149,143,249,158,108,18,142,113,163,199,188,245,198,27,234,45,162,70,131,108,239,208,241,99,12,164,249,
56,32,209,16,195,124,52,116,237,213,215,88,249,168,174,157,91,218,113,132,9,31,25,113,218,29,175,189,248,114,168,61,208,209,220,250,175,7,31,78,28,23,199,116,241,28,109,27,170,193,68,98,67,185,170,200,
8,231,200,189,119,223,83,218,192,51,79,60,105,75,72,18,122,50,27,148,20,62,50,110,154,117,85,5,89,57,126,227,29,22,119,221,126,71,176,35,64,54,67,139,108,235,104,167,81,134,219,165,86,127,165,249,216,
127,129,69,83,50,229,178,75,46,77,74,72,20,56,174,147,143,166,101,164,166,169,87,70,183,7,48,70,104,232,248,67,196,245,120,109,27,152,9,230,168,104,198,225,163,43,61,227,144,3,14,148,206,61,143,63,252,
40,124,228,87,218,0,205,67,248,200,60,178,136,152,117,85,240,209,151,155,239,72,177,221,116,221,13,193,246,64,0,68,118,118,182,182,183,5,53,31,7,44,205,199,254,203,36,163,26,26,247,103,254,239,175,103,
217,146,146,5,142,234,57,89,154,111,87,156,40,161,98,84,163,101,63,250,192,67,138,143,129,206,183,95,127,131,84,139,192,129,233,86,31,208,182,129,25,140,147,218,167,97,192,190,204,180,244,227,254,114,
180,106,85,237,129,127,222,125,175,188,249,81,248,40,41,118,207,124,196,50,237,142,43,46,190,52,68,248,168,249,24,59,105,62,246,95,38,31,229,254,12,124,60,245,164,147,83,147,83,250,202,71,156,225,158,
59,238,148,183,162,126,242,254,135,76,145,219,154,86,31,208,182,129,25,245,75,69,51,34,124,116,218,29,167,157,120,178,106,85,29,193,59,110,185,149,248,145,115,164,180,25,126,237,137,143,6,28,243,137,64,
211,210,141,15,195,42,62,146,97,107,62,198,68,154,143,253,23,112,148,238,184,180,72,248,136,237,185,251,30,242,121,57,225,35,249,181,9,199,30,44,41,46,254,210,11,46,84,253,31,67,161,197,11,127,193,49,
186,247,119,211,182,225,153,201,62,120,151,145,154,246,247,191,93,165,90,85,71,240,244,147,79,33,156,148,199,174,105,30,12,61,25,206,168,215,163,37,114,244,101,231,229,103,122,138,114,242,143,62,252,8,
33,34,124,100,168,249,56,112,105,62,246,95,38,31,59,140,151,238,97,59,253,97,199,204,244,140,112,240,216,107,62,38,199,39,156,243,215,179,36,126,92,254,235,18,130,71,252,65,130,11,109,27,176,81,197,228,
206,52,0,248,152,110,179,255,227,134,155,84,171,10,134,142,63,234,24,194,73,233,227,197,175,204,214,3,31,11,179,114,252,57,249,240,177,56,175,224,143,59,238,44,173,136,8,210,88,147,230,227,64,165,249,
216,127,5,201,98,186,248,40,175,38,157,185,229,86,238,76,151,240,145,161,121,127,70,56,200,136,105,50,69,140,100,234,148,19,78,84,125,59,130,161,134,149,181,242,86,171,53,114,40,109,27,162,209,12,228,
222,11,117,237,72,177,253,243,238,123,165,93,29,118,224,65,132,147,149,165,101,164,17,210,66,122,230,99,113,174,215,235,202,42,43,240,109,58,105,138,188,132,84,146,107,205,199,129,75,243,177,255,138,224,
99,71,107,219,244,169,211,228,205,61,125,229,227,177,71,30,37,125,223,154,234,27,38,148,149,227,24,100,94,17,206,160,173,151,70,241,90,207,46,35,246,76,195,126,154,241,99,106,82,242,227,15,63,106,52,171,
208,190,123,253,9,92,210,12,192,34,191,50,27,35,81,175,183,88,249,88,226,45,220,108,202,52,121,11,125,115,75,75,32,212,169,249,56,112,105,62,246,95,230,35,10,42,191,238,12,45,93,188,164,170,162,82,30,
190,150,239,40,245,178,127,15,124,252,243,193,135,10,31,57,233,239,48,107,59,194,138,190,242,17,31,195,88,27,129,70,89,81,49,227,172,65,46,234,219,147,83,92,198,75,121,73,217,248,9,159,204,76,75,103,19,
204,137,251,49,15,238,151,50,62,209,140,101,34,214,188,222,25,7,197,49,114,142,145,63,25,103,200,129,203,93,47,142,157,232,140,95,165,184,24,90,77,22,25,26,99,235,12,217,91,134,84,208,91,175,189,174,178,
227,64,231,172,173,182,102,34,123,40,79,215,200,156,98,242,167,105,38,31,93,182,52,127,174,119,243,169,211,107,151,175,80,159,83,215,124,140,145,52,31,251,175,53,248,24,10,45,90,176,176,172,184,164,31,
124,36,118,56,96,239,125,194,124,12,116,238,252,251,29,0,86,132,39,244,198,166,77,156,4,11,160,45,209,7,127,18,113,0,133,82,159,31,99,28,231,103,181,204,192,8,142,55,169,114,2,137,60,63,193,68,102,38,
90,193,152,190,1,196,173,192,133,99,228,184,56,34,185,138,71,129,96,148,51,63,77,172,168,226,216,41,118,74,3,6,73,201,152,22,177,170,65,53,246,65,134,178,51,239,207,125,135,179,35,205,96,179,169,211,101,
138,0,93,102,176,46,104,154,201,71,119,170,195,151,157,55,165,170,122,233,162,197,240,81,95,127,140,149,52,31,251,175,8,62,206,251,225,199,194,124,175,149,143,230,243,133,221,155,184,76,17,195,117,255,
184,211,46,234,197,250,40,24,218,125,151,93,229,235,11,214,249,123,99,184,186,211,238,192,160,128,48,81,194,40,60,13,35,66,193,248,19,2,50,157,113,98,70,66,75,230,231,87,98,73,246,68,102,139,88,237,122,
100,28,2,67,14,156,195,148,227,34,40,150,72,121,74,245,68,138,133,200,145,243,7,67,138,87,232,3,52,173,107,24,122,147,125,102,87,213,151,11,131,161,85,181,245,51,166,76,147,41,82,41,50,67,84,179,242,145,
145,202,226,210,159,127,154,167,110,21,26,210,124,28,184,52,31,251,175,136,252,250,187,111,190,1,139,253,224,99,186,205,78,78,173,94,225,67,139,14,134,246,222,125,79,124,219,204,173,122,111,80,21,135,
39,102,36,68,98,68,224,200,116,226,68,201,46,1,7,127,50,130,227,65,141,201,85,213,252,4,53,24,151,172,19,116,86,150,150,153,43,92,239,76,10,25,246,73,20,204,73,130,35,149,147,1,67,14,182,186,188,18,147,
59,96,24,165,212,143,114,30,12,163,166,62,251,240,99,106,191,102,217,242,77,39,79,101,199,216,103,246,95,142,104,109,22,193,199,10,127,201,15,223,124,39,109,18,1,71,205,199,1,74,243,177,159,234,52,158,
188,150,113,233,31,254,250,43,175,218,109,182,48,25,197,104,196,22,14,174,205,112,221,173,55,219,162,177,166,78,117,129,12,134,142,56,228,48,98,28,60,36,194,25,214,105,56,188,112,16,224,50,206,20,72,33,
65,19,127,74,142,137,177,57,86,46,64,76,138,139,103,102,22,17,134,10,43,173,235,92,47,140,195,193,40,73,9,156,201,169,57,34,136,147,28,159,192,49,114,178,225,96,193,13,67,166,72,225,48,51,115,50,127,68,
156,110,86,10,102,157,62,24,70,81,179,21,193,52,133,63,239,187,31,66,29,193,229,191,46,225,188,69,29,97,2,119,88,207,136,84,104,132,153,124,204,115,186,201,175,61,233,206,143,63,248,80,218,164,164,216,
90,3,148,230,99,255,101,125,51,5,103,234,87,94,122,89,30,46,236,43,31,113,128,233,147,166,212,175,168,81,151,231,131,161,99,142,56,18,55,102,122,132,51,172,211,36,103,100,4,4,168,200,49,39,207,157,225,
28,187,201,104,82,200,169,19,39,237,187,215,159,142,60,236,240,51,78,57,245,255,206,252,43,195,99,142,60,106,159,61,247,34,235,204,113,135,93,17,94,48,2,154,173,235,92,47,204,228,35,37,192,81,0,125,176,
88,226,243,111,54,109,250,193,251,31,112,246,25,103,254,253,111,87,97,231,158,117,246,33,7,28,184,205,150,91,169,47,143,27,175,77,2,154,35,132,143,48,125,1,169,113,71,112,209,252,5,140,211,36,152,8,190,
123,195,199,162,156,124,175,43,139,161,43,45,253,221,185,111,75,123,52,79,222,90,3,145,230,227,128,100,69,228,115,115,158,29,31,23,231,205,203,239,43,31,105,232,184,68,221,242,21,114,139,102,246,177,199,
37,142,139,147,92,184,79,6,19,113,120,252,170,162,164,180,32,47,63,203,229,46,42,40,220,110,155,89,55,93,127,195,27,175,190,86,179,124,133,186,50,37,59,219,25,106,172,171,231,255,95,23,254,114,207,157,
119,29,184,223,254,164,213,246,228,20,60,150,228,46,98,181,35,223,76,62,82,104,240,145,88,248,232,35,142,124,238,233,57,43,150,46,11,182,135,195,40,117,188,93,23,230,158,125,234,233,63,31,124,40,244,97,
169,137,21,85,214,186,176,90,196,86,98,110,148,54,251,32,124,100,159,23,47,252,133,4,226,167,111,191,23,100,179,3,76,135,143,12,123,224,35,230,245,100,19,60,150,120,11,157,169,105,36,49,242,229,235,213,
103,110,173,1,72,243,113,64,162,21,134,27,98,176,243,169,255,62,49,122,147,77,250,17,63,226,36,216,202,37,203,132,143,167,206,62,41,126,244,88,92,34,194,25,162,90,190,197,8,139,136,155,64,36,124,116,58,
210,29,246,180,35,14,59,252,243,79,63,93,85,223,160,118,176,67,145,66,125,100,209,216,223,142,214,182,218,149,53,130,140,182,230,150,59,254,113,219,180,73,83,88,214,186,66,44,98,115,35,211,32,8,70,73,
82,2,132,141,159,126,248,81,147,113,200,28,93,103,32,136,73,239,125,172,181,185,165,190,182,78,117,18,236,8,126,244,222,7,196,212,163,70,141,162,142,76,179,214,75,196,86,98,110,38,31,137,16,225,35,153,
53,187,252,205,231,95,82,245,76,103,134,8,62,50,98,93,28,19,62,230,185,60,190,156,252,210,2,95,90,82,202,75,207,61,207,49,170,99,215,138,133,52,31,99,35,60,240,142,219,110,135,74,37,254,226,190,242,81,
238,183,170,240,193,8,118,46,248,191,115,73,144,123,19,63,10,194,216,138,24,1,99,89,113,9,35,62,111,193,248,113,113,255,126,236,177,69,11,22,26,59,167,158,125,84,88,52,173,75,80,18,99,132,253,255,236,
227,79,8,36,55,130,23,185,121,155,78,157,22,55,102,108,121,73,233,72,70,36,133,70,180,40,112,156,54,113,210,248,177,227,14,63,248,80,14,135,152,145,195,49,153,200,20,25,145,137,66,76,117,212,193,206,249,
63,205,59,229,196,147,56,210,92,208,147,155,151,237,246,80,95,172,141,211,76,68,222,61,24,70,213,179,21,225,35,97,251,170,90,21,209,127,251,197,87,252,41,167,76,246,68,18,109,230,148,195,52,109,245,122,
178,114,178,51,92,240,177,164,192,103,75,72,82,15,225,24,175,106,54,170,87,107,160,210,124,140,141,112,185,27,174,187,158,144,173,184,200,223,87,62,138,147,252,239,251,31,229,21,21,151,95,116,9,124,236,
141,127,134,225,216,181,57,208,92,152,239,181,219,108,164,213,127,187,252,242,159,255,55,159,80,2,34,172,141,143,230,183,228,101,132,57,31,126,240,161,63,238,178,171,203,233,36,10,6,25,21,165,101,110,
163,23,30,22,53,191,27,94,131,32,78,187,99,82,229,132,204,180,116,208,112,220,95,142,174,91,89,19,193,193,53,14,220,40,7,147,143,20,14,182,96,254,207,135,31,122,24,229,102,75,74,102,152,233,72,135,185,
169,73,201,12,35,54,23,115,51,171,158,32,113,235,205,182,104,105,104,164,22,62,251,240,99,185,46,201,79,112,208,202,71,25,23,179,174,39,219,233,42,204,201,43,246,22,82,8,119,220,114,43,173,136,132,192,
172,101,173,129,72,243,49,70,234,12,93,113,233,101,105,169,118,191,207,103,2,171,151,124,20,63,255,242,147,79,101,77,215,93,117,13,241,75,47,227,71,43,31,113,111,34,160,140,52,199,97,135,28,170,30,121,
132,14,93,138,122,53,106,13,62,194,142,80,104,201,175,139,159,155,243,172,55,47,31,200,86,150,151,195,217,245,133,143,100,160,100,166,28,194,202,101,203,133,143,129,142,0,199,213,218,37,198,41,19,245,
238,47,126,229,95,123,123,248,81,229,230,150,15,222,123,111,214,204,153,137,227,19,136,151,211,82,108,101,69,197,148,63,195,136,205,197,220,168,122,106,89,248,248,135,109,183,111,111,106,33,235,127,247,
205,185,234,222,154,113,116,204,32,40,148,145,181,241,145,249,153,185,184,64,241,241,218,43,175,102,37,28,154,58,55,104,13,88,154,143,253,215,26,208,233,12,93,112,238,121,169,201,41,48,197,4,86,47,249,
136,225,231,31,188,243,174,90,79,48,244,143,27,110,226,207,126,240,17,56,122,92,238,169,147,167,188,251,246,59,172,169,185,185,25,46,168,93,51,164,86,222,77,109,134,194,127,116,170,239,119,195,139,191,
252,249,8,129,133,250,138,119,183,141,142,28,179,230,215,247,222,121,151,28,66,125,109,157,240,81,65,80,189,8,81,73,74,64,198,149,96,7,229,97,24,167,4,150,187,233,134,27,41,186,201,213,19,93,233,25,160,
150,26,233,229,245,223,129,24,91,49,249,184,219,142,59,195,199,206,182,246,55,94,126,85,78,69,196,143,204,32,40,148,145,158,249,200,14,195,71,146,143,206,246,64,160,77,5,209,170,64,180,6,38,205,199,254,
75,160,195,176,201,184,233,1,86,200,76,225,212,234,91,52,52,223,110,40,236,110,56,57,64,124,253,165,87,228,254,204,63,239,190,23,47,237,7,31,213,27,49,242,242,79,63,245,84,48,199,122,234,235,213,245,44,
24,97,192,33,44,166,152,226,207,22,67,106,122,103,136,160,67,133,84,157,161,185,111,190,5,28,137,70,189,185,234,142,7,233,30,214,155,253,25,98,51,145,65,114,170,226,223,64,208,188,19,37,241,35,36,132,
254,42,82,108,105,169,171,171,91,186,116,169,28,184,122,95,39,37,97,164,219,146,113,47,252,121,193,140,105,211,115,141,59,33,172,16,54,65,156,136,205,13,134,177,255,108,136,112,117,207,93,119,83,15,8,
132,66,79,255,231,9,135,241,120,168,228,215,38,10,101,220,52,153,104,254,36,48,205,116,164,159,113,202,169,114,68,138,143,107,212,182,86,127,164,249,216,127,225,126,12,129,139,240,241,224,3,14,204,76,
207,200,241,100,245,149,143,100,175,240,241,249,167,231,168,254,143,161,208,99,15,61,66,4,209,155,248,37,234,245,199,55,94,125,77,237,91,32,8,14,128,99,83,83,147,226,98,151,212,126,119,73,200,136,24,105,
51,200,136,129,72,240,186,255,190,251,17,60,114,44,164,153,192,26,27,130,124,179,175,38,111,184,1,13,23,159,127,1,135,35,23,22,217,121,76,248,40,146,131,21,201,241,170,139,15,230,101,217,96,39,33,39,67,
194,127,79,166,171,162,68,61,90,83,238,47,137,216,214,32,153,240,49,221,102,223,255,79,123,171,252,58,24,122,252,225,71,193,37,173,130,227,18,250,203,156,38,25,197,204,53,200,79,2,116,248,120,194,177,
199,201,65,133,249,168,17,57,48,105,62,246,95,107,240,49,20,218,227,143,187,103,164,57,84,78,218,71,62,130,66,60,228,223,143,254,75,221,159,9,116,18,65,144,49,245,35,126,36,120,36,67,108,105,106,150,11,
139,160,65,62,18,47,80,16,241,167,169,181,241,17,239,186,225,186,235,57,150,44,151,122,114,89,226,199,222,240,122,136,13,100,11,65,190,252,244,243,197,191,44,106,106,108,100,231,235,106,106,65,131,201,
71,57,76,78,18,20,133,92,109,104,110,110,94,177,124,185,64,100,53,74,130,157,68,205,78,71,122,113,161,143,108,119,8,110,206,136,153,124,60,252,160,131,201,30,48,178,135,204,180,116,90,133,240,209,156,
211,36,163,152,57,93,126,50,249,120,248,33,135,10,25,213,13,122,205,199,1,75,243,177,255,138,224,227,142,59,236,224,176,167,121,92,238,190,242,145,198,157,154,148,252,224,189,247,19,62,132,218,3,47,206,
121,174,247,124,12,35,210,48,187,205,70,220,39,62,47,187,180,232,151,95,100,15,77,241,167,41,254,132,26,8,148,16,121,225,81,24,35,173,205,45,79,63,241,164,59,211,165,110,248,24,153,53,198,72,196,214,135,
197,228,144,197,136,179,8,247,236,201,41,28,75,83,67,163,226,130,161,48,28,13,62,254,252,243,207,215,92,115,205,118,219,109,55,113,226,196,243,206,59,79,82,108,57,127,8,22,213,181,136,96,103,99,93,61,
231,149,74,2,82,227,154,38,172,137,216,238,32,153,240,145,132,250,152,35,142,164,246,59,154,91,239,186,245,246,254,241,17,131,143,251,237,179,143,58,34,227,190,147,134,227,192,165,249,216,127,9,110,12,
236,116,226,114,155,207,152,33,65,92,24,142,189,230,35,150,50,62,241,206,127,220,166,248,216,17,124,239,173,183,241,121,171,111,244,96,86,94,140,253,221,232,43,175,184,66,188,34,124,5,42,20,34,48,52,71,
106,87,214,144,75,18,97,49,206,14,203,254,3,17,146,113,43,31,25,206,159,55,207,239,243,17,79,229,122,178,72,54,225,117,196,118,135,197,228,48,205,243,129,207,91,144,156,144,40,17,19,251,204,177,52,119,
245,251,83,247,96,58,2,141,141,141,135,30,122,104,82,82,210,232,209,163,167,78,157,26,23,23,55,123,246,108,126,85,241,163,209,247,19,50,194,17,1,202,138,165,203,246,217,235,79,28,175,92,76,160,82,34,182,
30,115,131,107,196,170,108,11,62,158,117,218,25,236,67,219,170,230,107,175,188,218,228,99,196,204,86,179,254,132,1,89,78,102,132,252,91,110,190,5,235,49,203,193,20,53,29,97,90,189,145,230,99,255,37,124,
49,240,216,73,114,55,125,234,180,220,172,108,154,105,63,248,152,28,159,112,227,223,175,149,254,143,159,126,240,17,46,218,221,7,122,54,192,145,153,158,241,143,155,110,102,13,56,188,201,71,185,158,8,25,
239,184,237,246,63,238,178,235,140,105,211,247,248,227,238,183,220,120,147,217,133,152,157,87,161,86,87,183,65,181,84,103,104,217,146,165,210,213,156,253,39,120,196,141,35,54,55,44,22,134,99,87,241,18,
167,39,196,199,159,114,226,73,68,127,178,219,29,28,120,103,103,67,67,3,67,226,226,95,126,249,165,164,164,164,160,160,192,235,245,218,237,246,194,194,194,178,178,178,101,203,150,241,43,51,75,41,81,62,234,
146,66,72,221,248,222,115,183,221,137,31,41,121,133,155,193,15,33,217,144,240,145,211,225,133,231,156,199,62,180,55,181,92,126,209,37,212,62,91,135,143,52,12,235,204,86,51,167,139,169,249,189,5,240,113,
179,233,155,114,92,114,37,193,42,26,22,39,95,211,52,31,123,41,205,199,254,11,55,51,85,179,98,197,164,9,213,57,158,44,154,169,233,192,189,228,35,0,74,138,139,191,236,194,139,229,254,245,55,159,127,217,
203,224,209,106,176,131,173,223,246,143,91,137,137,154,87,53,89,249,200,248,181,87,95,51,185,122,226,232,77,54,73,74,72,140,31,59,14,178,220,122,203,45,198,65,168,248,17,62,154,112,196,152,31,158,22,21,
20,122,115,213,181,81,217,153,238,62,57,244,214,3,31,195,153,178,113,56,84,7,35,205,205,205,223,125,247,221,70,27,109,148,157,157,61,101,202,148,188,188,60,70,82,82,82,126,250,233,39,48,74,4,205,97,170,
69,58,195,169,40,5,181,203,142,59,73,255,112,143,209,235,51,98,235,49,55,138,212,228,227,213,151,95,161,118,190,181,237,156,191,158,69,180,78,171,232,19,31,105,102,194,199,41,147,38,1,122,57,79,168,218,
237,146,230,99,255,164,249,216,127,25,96,12,107,201,175,139,171,42,42,179,221,158,126,240,17,87,132,143,56,6,238,193,106,127,250,246,123,136,201,244,72,31,232,209,96,71,106,114,202,117,215,252,157,180,
145,96,214,188,178,198,144,96,144,216,150,100,89,152,2,40,161,228,166,211,166,47,89,178,68,229,161,198,77,12,43,31,193,43,201,166,199,229,86,111,184,240,22,16,206,64,201,145,16,66,70,240,17,130,39,142,
79,56,204,200,175,195,176,51,248,168,174,168,26,106,105,105,169,174,174,78,76,76,76,72,72,112,56,28,201,201,201,219,109,183,157,196,86,170,136,58,141,75,144,144,212,232,126,64,89,237,176,221,246,25,169,
105,213,229,149,36,188,67,112,139,6,204,9,31,83,147,146,111,186,246,122,184,69,3,56,237,196,147,161,51,181,31,209,6,172,112,196,204,233,97,99,254,130,66,248,56,161,178,138,234,14,170,174,77,96,112,181,
52,31,251,39,205,199,254,43,140,70,227,43,175,95,124,246,185,245,203,133,97,31,54,26,174,64,176,7,35,64,75,183,217,79,56,250,88,245,10,241,246,64,221,242,21,155,78,158,218,215,251,33,176,99,220,232,49,
167,159,122,170,218,179,160,106,255,128,82,226,163,79,62,252,8,231,41,46,242,179,99,132,144,132,24,149,229,229,217,158,172,249,255,155,95,95,95,15,71,212,177,24,151,32,197,248,243,203,207,191,224,112,
240,55,248,232,180,59,240,225,17,200,199,242,146,82,91,82,242,230,51,102,176,195,114,164,205,77,205,84,71,91,91,27,193,163,0,98,206,156,57,219,110,187,173,211,233,204,201,201,217,125,247,221,159,127,254,
121,42,11,110,82,68,32,82,192,170,248,104,4,218,155,111,58,195,150,152,68,224,6,176,134,224,126,125,185,191,132,115,15,13,128,248,241,209,7,30,10,117,4,73,32,14,222,239,0,248,200,175,189,191,254,200,26,
200,175,57,55,123,243,242,169,229,111,190,254,154,195,137,144,230,99,255,164,249,216,127,9,28,17,46,247,193,123,239,185,156,78,26,104,110,86,118,63,248,8,131,14,59,240,32,225,227,170,218,250,45,55,157,
209,15,62,218,83,108,123,237,177,39,153,190,226,163,17,28,169,248,168,51,180,96,254,207,126,159,111,236,232,49,4,23,68,133,236,161,195,158,86,94,86,182,98,249,114,147,35,17,124,124,228,161,135,201,214,
11,243,85,175,17,124,152,8,183,31,41,127,204,45,130,143,21,165,101,18,20,47,90,176,80,241,49,168,238,146,169,192,169,171,95,65,35,65,98,40,244,241,199,31,223,119,223,125,55,220,112,195,135,31,126,200,
196,134,134,6,185,127,13,31,37,179,86,195,144,58,139,176,66,14,150,13,73,4,103,221,244,96,24,165,154,153,150,78,9,19,180,62,243,196,147,194,199,63,253,113,15,217,135,62,241,145,102,38,175,179,163,237,
125,100,188,34,151,35,101,104,74,243,177,127,210,124,236,191,130,157,157,242,228,26,124,124,237,149,87,241,85,146,235,126,244,127,164,137,103,57,93,230,19,102,12,103,109,181,117,95,111,25,195,142,130,
188,124,56,248,217,199,159,152,100,196,100,228,180,147,79,201,76,207,192,255,73,33,225,56,227,199,31,119,156,208,68,29,136,5,142,24,129,231,225,135,30,198,108,204,207,254,19,57,226,195,17,62,57,44,22,
193,199,18,127,49,172,39,132,124,240,254,127,178,219,114,71,158,228,90,106,135,241,166,166,38,147,149,50,17,113,74,144,254,225,24,100,148,227,101,120,195,117,215,83,44,196,203,28,47,108,26,130,254,76,
108,133,243,34,67,128,248,246,235,111,40,110,181,7,182,219,122,102,255,248,232,201,116,17,60,114,8,52,69,14,115,245,99,163,134,52,31,251,39,205,199,126,74,53,56,131,143,24,124,124,110,206,179,42,27,45,
40,164,153,42,31,54,12,127,238,37,31,241,201,109,182,216,74,248,136,147,236,48,107,59,43,31,173,254,16,225,27,166,177,173,9,21,149,4,137,47,62,247,188,186,2,103,220,147,69,140,0,2,16,112,194,177,199,141,
26,53,42,53,57,133,168,240,184,163,143,145,174,145,8,118,4,186,222,118,35,182,114,217,114,208,147,146,152,4,31,89,45,145,35,38,251,57,188,198,206,132,17,105,152,10,111,243,189,233,246,180,227,143,57,150,
202,144,59,242,10,250,164,204,205,205,2,202,101,203,150,45,95,190,156,99,84,97,35,167,158,38,149,74,51,131,122,102,134,99,55,146,107,138,11,59,234,200,35,227,199,142,171,50,62,62,94,89,90,38,73,238,160,
26,69,74,228,40,61,240,213,199,103,212,222,7,54,155,58,93,248,200,57,201,58,179,73,70,49,235,79,170,106,140,119,197,251,11,125,212,239,179,207,204,97,77,234,26,130,69,198,185,114,13,211,234,141,52,31,
251,35,105,97,4,102,152,32,242,234,43,175,2,40,234,227,86,57,121,226,198,98,66,192,158,141,38,142,55,78,172,168,170,89,182,28,15,225,252,126,234,236,147,146,227,19,228,10,61,206,0,158,204,241,238,238,
33,198,182,38,86,77,128,128,123,238,190,199,207,255,155,207,78,194,68,69,73,118,148,196,179,165,21,124,124,253,197,151,111,188,250,26,137,164,220,240,37,140,98,54,34,44,53,98,244,145,150,165,206,58,227,
204,205,103,204,32,46,35,22,46,43,42,198,123,217,189,33,184,159,219,27,179,150,173,47,223,11,92,82,198,39,110,181,217,22,175,27,65,147,82,103,248,90,129,28,157,8,62,114,152,129,64,64,189,141,67,2,171,
174,39,133,164,255,227,163,15,63,178,227,14,59,16,124,1,44,137,151,135,224,122,43,21,74,217,82,185,155,79,223,84,30,190,94,182,104,177,137,69,105,24,189,49,230,196,224,99,113,161,143,147,244,3,247,221,
47,37,160,170,94,107,96,210,124,236,143,20,115,186,248,40,136,188,224,252,243,147,19,18,75,186,94,39,19,209,118,123,54,89,4,87,255,250,179,47,132,143,87,95,126,133,61,57,197,100,34,190,106,101,165,117,
253,166,193,139,178,226,18,135,61,141,20,251,218,171,175,97,39,137,140,22,204,255,25,231,87,247,106,101,183,3,65,198,33,160,74,186,13,1,11,2,43,226,95,229,78,70,31,192,15,222,123,111,219,109,102,145,169,
225,105,165,254,226,138,146,82,182,72,68,19,117,163,195,107,148,73,185,191,4,118,231,122,178,136,142,213,89,33,216,169,94,138,110,32,82,117,90,10,6,229,94,182,28,172,92,142,84,35,28,179,113,50,80,10,118,
46,94,180,136,197,147,18,18,229,249,107,185,152,16,17,190,13,146,177,21,202,246,200,67,15,23,62,18,69,82,218,17,243,172,211,164,21,81,14,240,209,158,98,187,233,134,27,57,124,185,174,162,17,57,64,105,62,
246,71,194,199,142,80,39,38,124,60,105,246,137,73,227,19,104,238,68,4,86,148,72,219,237,217,152,95,46,213,203,69,122,86,253,223,127,61,134,219,8,19,89,137,149,143,98,230,250,77,131,143,100,154,85,21,149,
32,114,114,245,196,167,89,149,161,101,75,212,19,117,48,17,80,194,2,211,97,112,33,48,33,236,0,37,106,82,176,243,187,111,190,249,191,191,158,5,25,61,46,119,94,142,122,64,165,200,171,62,159,223,15,167,29,
2,163,64,40,112,95,158,215,150,152,68,168,43,103,5,142,75,177,62,216,169,46,170,118,93,118,228,48,57,7,48,82,107,72,142,183,102,197,138,165,139,213,39,13,174,184,244,50,74,108,236,232,49,228,236,67,201,
71,182,2,223,109,9,73,119,223,118,135,240,241,223,143,254,139,102,16,49,219,58,77,90,145,240,145,36,230,130,115,207,227,240,195,169,131,230,227,192,164,249,216,31,9,31,113,50,248,200,8,142,120,196,159,
255,156,20,159,0,71,220,233,25,249,125,228,35,248,35,49,79,138,139,87,143,24,26,124,124,247,205,185,194,68,89,9,227,80,128,57,5,142,152,185,126,211,136,161,72,15,157,142,244,28,79,22,128,35,6,36,18,100,
87,137,167,234,106,106,229,70,4,251,173,220,6,5,59,37,128,106,111,107,107,105,105,145,251,185,192,226,226,11,47,76,75,181,203,45,166,66,227,121,53,242,77,14,138,216,150,68,59,98,139,195,110,20,139,35,
197,70,41,81,56,241,99,199,85,87,86,221,115,231,93,45,77,205,156,12,56,82,248,8,7,85,20,105,132,198,114,176,12,155,155,154,127,158,255,51,231,6,102,163,100,200,172,165,215,129,59,211,165,138,206,56,94,
65,100,196,230,98,110,236,255,196,138,170,241,99,199,81,221,194,199,155,175,187,65,94,110,214,87,163,109,192,71,170,137,147,52,167,106,234,87,110,205,107,62,14,80,154,143,253,145,149,143,252,217,180,170,
233,143,187,236,74,228,232,203,205,207,247,244,13,142,24,11,78,169,158,136,159,156,114,194,137,106,237,193,208,175,63,47,196,115,152,46,43,193,255,205,112,102,109,126,43,249,181,244,49,146,222,60,149,
229,229,255,253,247,127,194,126,98,244,136,4,142,171,234,27,228,142,132,177,161,48,37,209,183,95,125,125,196,97,135,195,8,248,8,28,201,175,9,30,21,112,211,28,172,28,199,27,2,94,244,201,160,24,70,201,96,
68,223,78,187,35,110,204,88,194,103,162,72,121,133,143,28,35,7,11,49,101,124,209,47,191,8,34,165,52,86,44,93,70,42,202,145,114,82,33,94,46,47,41,85,183,215,156,46,138,189,212,231,103,229,17,91,140,185,
81,167,82,176,117,203,87,132,2,157,129,214,182,35,14,57,140,3,177,182,141,222,24,171,98,61,114,26,227,148,182,215,30,123,170,115,33,226,40,197,180,250,43,205,199,254,136,38,71,3,4,142,109,65,149,169,17,
140,108,97,244,88,148,143,109,154,14,16,209,142,215,102,196,17,228,89,246,228,148,29,102,109,167,190,130,29,12,225,48,251,238,245,39,86,136,243,48,131,4,143,178,206,30,248,8,206,8,250,96,28,222,78,40,
100,75,74,134,152,103,158,126,198,15,223,125,223,88,87,31,78,177,101,255,141,78,45,210,1,112,241,162,69,15,220,119,255,142,59,236,160,162,197,52,199,244,169,211,64,164,4,83,24,171,149,96,138,240,36,98,
139,195,110,46,227,69,18,12,9,250,212,133,72,167,139,40,18,204,93,116,254,5,79,63,241,228,252,121,243,224,96,152,20,198,33,51,4,151,245,198,247,11,223,124,237,245,131,246,63,192,97,79,27,243,187,209,147,
38,84,39,142,79,224,216,39,84,84,146,162,202,105,73,134,131,106,114,206,219,115,215,221,212,215,22,131,234,230,204,142,219,255,158,114,54,27,70,47,141,218,129,140,42,225,240,22,164,219,211,168,74,14,112,
245,245,71,141,200,1,72,243,177,63,18,62,182,6,218,155,219,90,241,193,218,154,90,241,171,60,119,22,38,173,63,162,17,247,96,146,208,225,231,21,197,165,242,17,21,66,137,191,255,237,42,225,35,63,89,249,184,
54,3,100,210,35,7,68,218,109,182,9,149,85,147,171,39,50,133,64,114,202,164,73,7,31,112,224,53,87,93,253,238,220,183,191,249,242,171,47,62,251,252,245,87,94,125,252,209,127,221,113,219,237,151,94,124,9,
238,52,106,212,40,200,82,226,47,102,113,72,33,121,58,136,44,200,203,151,235,143,236,9,238,23,177,197,225,53,246,10,163,88,0,74,102,90,122,101,105,25,17,55,199,14,242,56,28,34,104,14,153,240,16,14,126,
246,241,39,95,126,254,197,135,239,127,240,193,123,239,189,242,210,203,127,187,236,242,157,254,176,35,52,36,214,230,252,193,81,19,117,114,46,225,79,216,234,203,87,111,237,166,192,169,142,136,45,198,220,
216,121,182,114,235,77,55,203,115,247,159,188,255,161,132,147,210,42,122,111,44,66,4,45,124,116,164,218,55,159,49,131,44,97,117,126,173,249,56,0,105,62,246,71,194,71,224,184,170,165,153,76,110,229,138,
21,240,17,71,205,117,121,48,47,81,100,31,249,8,128,24,33,14,122,235,181,215,101,19,207,60,241,164,149,143,24,227,86,239,138,48,248,88,85,86,142,219,231,102,101,227,246,144,145,241,202,178,242,44,151,27,
231,103,60,105,124,130,61,197,6,251,252,133,62,140,233,140,143,143,139,75,74,72,36,199,172,174,172,114,101,56,179,221,30,89,156,33,51,120,13,223,195,135,241,189,33,123,101,108,239,141,152,49,101,124,34,
104,144,17,138,139,61,247,121,11,160,60,7,66,9,0,125,117,215,37,39,7,2,194,65,208,79,81,112,212,196,197,148,0,133,195,97,50,158,156,144,8,88,167,76,156,196,82,210,109,64,190,249,21,177,185,129,24,149,
27,49,69,204,145,98,11,127,119,40,20,122,233,185,231,147,227,213,45,62,179,97,244,210,132,143,28,62,124,164,138,171,171,38,212,213,212,170,78,11,154,143,3,150,230,99,127,36,124,100,216,216,212,20,8,6,
63,249,248,227,52,227,141,6,192,49,223,157,69,150,93,216,173,17,247,96,96,145,101,113,203,196,113,113,255,119,198,95,213,250,219,218,91,27,155,112,123,2,10,102,72,138,139,23,7,168,46,175,140,112,48,171,
129,200,62,153,234,101,45,207,162,116,251,201,180,136,77,140,112,179,238,249,234,163,235,110,107,206,105,181,136,21,198,196,204,12,128,51,13,35,89,78,23,198,8,39,212,205,166,78,111,172,169,11,117,4,87,
213,214,95,116,238,249,80,190,31,124,228,252,74,251,17,62,122,50,57,239,185,136,151,195,205,212,52,173,126,73,243,177,63,162,189,193,71,108,85,115,51,249,245,59,111,191,45,95,76,134,143,192,81,241,49,
59,178,17,247,96,248,137,220,132,5,148,127,250,227,30,172,95,125,138,36,208,201,184,196,143,132,111,128,18,7,96,19,61,71,145,189,55,88,16,193,199,136,25,214,107,91,227,232,186,219,208,30,47,85,70,229,
82,143,212,32,227,166,17,171,94,115,197,149,234,161,251,80,136,211,33,213,45,55,133,34,154,199,58,77,248,8,115,225,35,33,48,124,84,93,23,172,112,196,180,250,37,205,199,254,136,246,6,28,59,130,193,150,
182,86,242,235,151,94,124,145,28,173,172,168,56,207,157,5,25,197,34,26,241,218,204,244,34,198,241,34,226,196,31,190,254,70,241,49,20,186,243,31,183,225,81,180,126,233,91,35,87,0,197,181,204,165,250,109,
154,143,17,139,12,158,65,46,224,200,41,144,138,35,132,228,84,135,49,194,57,117,225,60,245,164,19,162,210,169,235,126,95,127,164,133,8,31,115,217,132,211,249,202,75,47,75,119,46,205,199,1,74,243,177,63,
18,62,182,7,2,173,237,109,129,64,224,153,167,158,34,51,42,47,42,38,114,244,245,145,143,24,88,196,55,112,164,9,101,229,210,91,88,158,194,254,230,243,47,97,34,142,68,235,103,4,195,7,36,6,177,186,95,255,
12,64,132,33,210,53,30,49,195,122,109,214,163,235,110,67,124,188,212,32,181,12,251,160,100,186,205,94,238,47,193,24,81,159,165,109,15,180,52,168,167,122,168,116,154,144,212,172,181,109,244,198,132,143,
42,11,241,22,120,115,243,224,227,211,79,60,169,239,95,199,68,154,143,253,145,217,228,212,19,26,193,206,107,174,188,42,57,62,161,194,87,172,224,72,114,109,164,216,226,27,17,77,57,170,49,155,202,205,141,
135,172,51,211,210,85,138,29,12,167,216,219,207,156,37,153,59,88,100,72,116,137,27,196,132,143,152,96,98,136,97,49,100,102,61,186,238,22,49,243,160,26,100,100,72,173,113,134,19,150,81,215,52,24,146,107,
245,70,100,227,137,0,121,173,153,186,197,103,188,10,164,247,38,107,54,173,32,47,63,53,57,229,246,91,111,83,125,185,76,56,74,99,213,234,187,52,31,251,163,53,154,92,176,243,210,11,47,78,75,74,41,47,244,
23,229,228,123,93,89,125,229,163,132,132,196,134,230,133,164,197,11,127,145,62,31,184,144,196,29,66,79,34,77,126,101,102,89,185,182,245,194,168,98,42,145,26,148,147,28,53,200,57,143,218,92,254,235,18,
213,243,209,72,174,57,243,49,15,211,9,45,173,109,99,157,198,250,77,56,98,133,249,94,248,120,253,181,215,106,62,198,68,154,143,253,145,181,201,117,6,130,103,157,113,102,166,221,81,90,64,16,232,149,251,
215,125,226,35,158,35,212,195,127,112,15,226,136,155,175,187,129,176,2,68,46,154,191,224,247,219,108,139,231,200,156,172,144,153,153,83,86,174,109,189,48,194,198,202,210,50,185,60,66,240,104,75,72,98,
228,160,125,247,167,138,229,66,243,165,23,92,104,79,78,153,82,61,49,126,244,88,179,85,244,210,100,19,2,71,226,98,121,197,217,37,23,93,172,251,63,198,68,154,143,253,81,184,213,25,175,63,224,68,125,242,
236,19,211,109,118,197,199,188,254,240,145,80,66,34,71,241,37,146,172,93,118,216,145,200,66,61,75,19,10,225,72,240,81,174,238,51,155,172,86,219,122,100,84,232,228,170,106,169,217,233,147,166,0,71,206,
130,119,254,227,182,214,198,38,140,179,32,167,64,34,199,138,226,82,134,4,146,214,101,35,154,74,119,147,217,164,109,192,199,146,34,191,45,41,249,255,254,122,150,122,27,102,184,153,26,166,213,47,105,62,
246,93,107,182,182,182,150,214,131,15,56,48,211,145,94,236,45,44,202,243,42,50,118,193,177,55,237,27,195,49,32,32,77,28,255,153,84,57,129,33,121,244,251,115,223,145,16,242,199,111,190,203,72,77,35,190,
32,6,113,18,165,142,188,126,218,218,122,54,200,69,157,2,190,194,220,124,226,71,242,131,173,55,219,98,85,109,61,149,219,182,170,249,229,231,95,0,151,114,141,133,202,229,215,136,197,77,139,104,54,166,177,
32,167,79,248,235,37,145,55,226,199,195,15,61,76,223,191,142,137,52,31,251,168,110,109,78,248,232,49,122,252,250,243,11,10,187,78,233,61,183,105,171,225,54,130,72,240,39,119,96,50,211,210,207,62,253,204,
64,107,27,249,23,46,180,195,172,237,152,136,243,224,69,68,31,214,245,107,27,249,6,188,100,132,234,163,150,57,219,93,240,127,231,134,218,3,234,18,115,71,240,184,191,28,205,20,24,199,175,204,41,160,52,205,
92,9,22,209,108,76,99,54,89,16,62,22,21,20,106,62,198,80,154,143,125,84,183,54,39,124,204,245,168,219,142,32,146,97,111,218,180,213,136,47,8,43,228,202,189,76,145,94,32,228,215,170,243,112,71,240,142,
91,110,101,30,166,48,148,121,172,155,208,54,194,141,86,129,17,223,137,145,98,191,247,214,219,210,120,22,206,155,15,221,56,249,113,142,148,110,64,17,76,180,154,180,141,238,102,242,145,149,104,62,198,86,
154,143,125,84,183,54,39,124,164,117,210,82,105,166,12,123,211,166,35,140,150,45,94,132,193,65,22,4,145,55,254,253,90,181,1,227,139,134,155,77,157,78,140,9,28,193,40,243,91,55,161,109,132,155,92,48,129,
140,36,7,84,235,9,71,31,219,176,178,86,213,108,48,196,153,47,113,92,28,241,35,51,144,61,68,44,24,97,214,6,99,53,205,199,193,147,230,99,31,213,173,205,13,156,143,184,13,129,33,173,156,228,139,38,206,248,
196,138,42,254,156,82,61,49,28,66,134,66,215,94,121,53,174,149,50,62,177,178,180,140,69,172,155,208,54,194,141,250,74,77,74,134,146,147,42,39,208,78,94,125,225,69,149,89,135,66,139,23,254,178,233,228,
169,84,180,52,3,70,100,230,136,101,215,105,154,143,131,39,205,199,62,170,91,155,107,111,107,27,32,31,73,174,9,46,72,175,136,16,129,35,190,4,40,9,40,8,43,254,245,224,195,129,214,54,16,185,108,209,98,112,
41,1,38,139,88,215,111,142,107,27,153,38,23,142,51,211,210,201,12,118,217,97,71,129,99,168,35,120,215,173,183,143,217,104,227,105,19,39,209,108,96,156,156,26,35,42,84,90,72,207,166,249,56,120,210,124,
236,163,186,181,185,129,243,145,165,160,30,254,3,40,105,226,246,228,20,254,164,209,195,199,221,119,217,181,110,249,10,233,69,252,183,75,46,195,193,196,145,204,245,91,199,181,13,175,81,53,82,161,17,211,
201,15,56,225,17,63,114,254,123,246,201,167,164,217,204,251,238,135,153,155,111,25,63,122,44,63,73,2,33,183,230,228,252,215,39,139,202,71,253,124,97,76,164,249,216,119,173,217,218,58,218,219,225,99,150,
193,71,107,112,23,126,142,141,63,187,204,108,208,17,150,229,116,145,80,19,66,210,190,39,148,149,51,196,145,200,166,241,153,184,223,141,121,113,206,115,196,143,80,114,85,109,61,51,51,209,202,68,182,104,
142,107,27,94,139,224,163,89,77,212,172,156,216,166,79,154,210,218,216,20,10,168,6,244,216,67,143,0,71,114,2,242,6,208,38,243,56,237,142,254,241,145,165,52,31,7,67,154,143,253,145,217,228,58,141,143,235,
31,123,244,49,41,137,73,170,177,26,111,126,196,37,4,142,121,184,71,110,94,216,140,239,98,139,195,244,210,8,10,8,33,183,159,57,11,62,170,16,50,208,249,143,27,110,26,53,106,20,63,17,107,16,102,18,111,226,
24,228,227,224,149,208,195,186,172,182,33,54,206,91,112,10,66,97,50,78,245,81,77,140,112,206,3,94,201,241,9,111,190,242,26,109,70,178,1,146,110,235,226,204,38,35,180,34,115,98,132,153,64,140,48,89,21,
45,193,227,116,193,199,196,241,9,103,158,126,134,230,99,76,164,249,216,31,73,147,83,223,15,53,62,60,127,250,105,167,67,43,218,104,46,49,96,118,152,143,234,85,49,57,57,249,185,121,98,32,178,175,124,36,
166,96,88,89,90,118,255,93,247,132,58,130,245,43,106,22,47,252,101,243,233,155,218,18,146,112,57,60,10,63,196,9,33,35,134,43,90,151,213,54,196,102,229,35,52,148,110,170,76,97,132,58,226,28,182,255,159,
246,110,105,104,12,180,182,97,247,221,121,23,243,88,23,239,141,69,96,209,52,214,47,45,33,215,147,37,207,95,95,114,209,197,154,143,49,145,230,99,127,36,77,174,189,67,93,104,15,4,2,87,92,126,57,14,144,231,
206,138,45,31,49,233,78,252,135,109,183,87,91,53,94,201,251,207,187,239,77,138,139,39,23,35,106,32,53,19,135,100,235,76,137,88,86,219,80,154,240,145,32,78,82,93,147,143,76,151,63,95,120,230,89,169,68,
82,236,201,85,213,252,100,93,188,55,22,129,69,171,113,42,13,119,126,200,202,206,72,115,220,114,227,77,154,143,49,145,230,99,127,36,77,174,185,69,189,92,128,248,241,230,155,110,74,78,72,20,62,202,147,215,
49,225,35,233,51,67,92,203,145,98,187,245,166,155,201,175,73,205,26,107,234,102,109,181,53,19,9,24,241,10,220,207,188,174,111,93,86,219,16,155,53,126,100,4,102,1,44,206,97,152,211,238,216,102,139,173,
104,42,171,106,213,215,116,175,187,234,26,78,108,132,123,17,107,88,167,89,129,104,53,54,7,130,217,144,124,95,33,51,61,227,190,123,238,213,124,140,137,52,31,251,35,107,147,35,126,124,234,201,39,97,159,
43,45,61,252,252,117,44,248,72,187,23,103,195,241,112,167,137,21,85,29,205,173,88,103,91,59,172,36,168,148,196,141,33,100,100,102,102,139,88,131,182,33,54,193,162,24,85,3,31,153,66,221,49,242,208,253,
255,12,117,4,57,189,45,156,55,127,218,196,73,234,109,202,125,143,247,205,149,71,24,91,145,20,155,214,66,240,136,189,252,226,139,154,143,49,145,230,99,127,36,77,46,40,239,239,9,4,62,253,228,19,159,87,117,
176,240,231,23,228,27,223,191,142,73,252,136,107,77,40,43,135,128,114,173,234,138,139,47,197,199,136,34,23,47,252,101,175,221,118,103,10,254,64,228,136,111,72,8,105,46,168,109,88,12,78,201,8,245,194,73,
139,63,169,20,42,241,144,3,14,148,183,81,208,90,174,185,226,74,42,84,162,126,115,193,94,90,4,22,77,99,67,4,143,52,18,95,190,151,224,209,155,151,255,217,199,159,104,62,198,68,154,143,253,145,52,185,142,
64,128,113,242,235,218,154,218,202,210,50,90,48,141,94,190,127,29,19,62,102,166,165,203,69,70,201,157,97,229,130,159,230,133,218,213,70,255,245,224,195,211,39,77,225,39,220,3,103,19,111,180,46,171,109,
120,141,234,160,118,24,82,107,207,61,245,180,212,218,251,115,223,153,185,249,150,84,43,181,70,6,16,177,200,58,205,4,98,132,229,184,60,21,197,165,172,150,64,53,219,237,153,50,105,210,138,165,203,56,123,
175,134,35,166,213,47,105,62,246,71,210,228,218,219,85,68,208,217,217,217,80,95,63,105,66,117,145,183,0,156,209,88,225,96,76,248,72,211,199,139,136,65,128,47,16,180,37,36,93,121,217,229,202,211,130,170,
143,200,129,251,236,55,126,236,56,182,136,99,72,223,242,136,197,181,13,177,89,79,81,192,145,74,1,142,187,237,184,179,186,177,102,232,255,206,248,235,152,141,54,38,222,167,214,28,41,54,115,230,94,154,149,
137,86,35,114,172,46,175,76,183,217,139,11,125,185,89,217,219,108,181,181,130,163,230,99,44,164,249,216,127,17,57,50,108,111,107,235,12,4,15,218,255,128,148,196,164,137,21,85,185,30,117,157,94,224,56,
64,62,18,14,64,198,164,184,120,233,234,152,154,148,28,126,245,75,160,19,251,250,179,47,112,66,112,140,123,224,36,250,250,227,176,27,85,48,109,226,36,192,199,8,245,197,217,139,137,225,47,20,6,58,191,253,
226,43,206,118,78,187,99,198,148,105,241,163,199,246,227,124,102,101,162,213,200,30,104,6,96,151,6,22,55,102,236,169,39,157,172,46,253,232,231,11,99,33,205,199,1,137,224,177,173,69,189,63,226,194,243,
206,207,72,115,148,210,232,65,21,124,236,250,148,232,64,248,72,0,34,145,35,28,36,129,74,25,159,136,51,204,62,246,56,156,77,93,204,10,116,254,249,224,67,11,115,243,153,141,24,179,31,215,179,180,197,214,
168,41,169,5,117,41,48,207,203,137,237,138,139,47,85,53,21,12,53,172,172,37,222,167,178,228,146,49,103,62,136,102,93,182,55,102,101,98,132,113,74,102,211,156,155,51,211,51,194,31,159,81,173,83,243,113,
160,210,124,28,144,224,163,250,208,71,40,244,244,19,79,42,44,102,231,20,21,20,154,112,28,32,31,193,162,244,115,196,241,240,183,44,167,139,64,18,7,123,247,205,185,106,211,109,237,159,188,255,225,214,155,
109,1,55,153,200,108,17,139,107,27,98,147,219,104,138,83,198,11,195,103,109,181,245,143,223,124,103,52,147,208,107,47,190,60,110,147,209,212,17,81,30,81,36,103,59,153,185,79,22,193,68,211,216,28,13,128,
166,162,214,153,155,247,254,59,239,118,180,182,169,173,106,62,14,88,154,143,3,149,250,208,71,40,244,237,87,95,251,188,5,238,76,87,137,191,56,130,143,52,89,101,125,124,190,144,22,79,148,1,22,241,40,124,
128,112,131,63,25,1,145,127,250,227,30,29,205,173,242,221,228,203,46,188,120,204,70,27,79,174,170,230,215,136,53,104,27,98,131,137,84,22,85,134,165,219,236,55,95,119,67,83,125,3,213,68,240,184,247,238,
123,38,199,39,240,43,39,57,121,184,158,241,136,197,215,105,38,16,35,76,194,85,82,13,78,168,147,171,39,46,93,188,164,189,165,85,223,191,142,137,52,31,7,42,105,136,205,171,154,118,217,105,231,209,155,108,
2,31,97,98,152,143,52,235,174,151,83,40,91,179,185,175,211,36,185,134,140,101,198,11,208,240,40,140,41,169,73,201,79,255,231,9,217,250,79,223,126,63,115,243,45,153,25,63,177,46,171,109,232,141,58,34,207,
149,203,29,187,236,176,163,234,13,30,84,97,254,221,183,221,1,22,169,77,34,71,88,198,8,39,185,126,92,15,177,50,209,106,180,10,206,166,133,249,222,132,248,248,253,247,221,143,86,209,212,168,206,157,154,
143,3,151,230,99,63,69,102,45,183,8,59,3,65,16,201,25,251,130,115,207,75,74,72,244,251,124,17,124,52,219,113,68,115,95,167,177,8,158,134,215,225,81,66,70,140,17,220,108,255,63,237,189,244,151,69,234,101,
48,161,208,35,255,124,0,98,242,83,196,226,218,134,216,128,35,28,164,130,24,191,239,206,187,164,195,227,194,121,243,183,220,116,134,35,197,198,116,208,73,160,71,245,85,151,87,82,179,214,101,123,99,102,
67,138,48,214,76,106,66,99,35,125,185,230,170,171,141,230,105,72,243,113,192,210,124,236,191,192,162,186,248,24,84,151,32,161,228,219,111,205,165,129,122,243,242,177,152,240,81,130,71,70,200,157,173,124,
44,247,151,224,99,119,221,122,187,188,9,134,12,238,207,7,31,202,20,235,178,218,134,222,168,44,162,66,42,226,132,163,143,165,106,218,86,53,135,218,3,151,93,120,49,105,47,232,36,114,148,54,160,178,224,170,
234,117,126,77,161,187,153,13,41,194,104,18,57,110,79,182,219,83,85,81,249,205,151,95,133,105,104,133,163,76,209,234,187,52,31,251,175,64,71,160,161,174,30,50,146,92,243,103,75,83,51,57,14,88,44,200,83,
175,9,0,142,234,130,163,113,111,145,244,39,162,173,175,211,104,247,44,197,80,162,18,107,126,93,234,243,143,31,59,110,98,69,85,123,83,75,195,202,90,226,148,151,158,123,62,57,62,33,98,13,218,134,198,168,
35,25,1,121,155,78,158,106,75,72,82,55,208,58,130,156,183,136,241,169,68,162,251,138,226,82,2,198,41,213,19,9,36,229,19,216,253,136,247,133,134,86,147,235,54,190,124,245,102,51,87,134,115,203,205,183,
104,111,107,227,108,205,153,123,141,235,143,90,253,149,230,99,255,21,12,6,105,142,88,115,83,115,99,67,3,160,188,232,252,11,18,226,227,11,114,243,165,23,36,129,30,141,88,46,159,247,195,31,48,229,3,93,35,
166,65,73,123,114,10,196,60,249,248,217,161,64,231,242,95,151,0,202,191,28,254,231,148,241,137,64,147,36,142,33,65,10,24,197,24,49,215,166,45,38,38,103,44,134,101,69,197,84,7,149,203,16,252,81,212,212,
242,57,127,61,43,96,220,62,134,143,103,158,114,106,63,250,129,175,205,204,6,32,38,112,244,230,170,111,94,19,60,166,36,38,157,119,206,185,109,173,173,52,72,206,220,234,250,143,214,128,165,249,56,32,169,
254,143,109,109,45,45,45,114,69,252,209,135,31,33,114,148,91,201,96,17,111,193,139,0,25,173,185,127,124,52,205,234,24,172,16,159,196,241,182,222,108,139,15,222,121,87,237,71,71,240,249,167,231,48,145,
80,69,101,91,198,22,217,52,22,177,30,109,3,55,74,85,106,147,2,7,139,20,53,101,206,144,248,113,171,25,155,83,35,242,225,242,207,62,252,152,60,154,159,172,203,14,196,164,246,77,19,56,230,231,230,229,120,
178,24,58,29,233,47,190,240,130,217,38,155,154,84,78,163,53,64,105,62,14,84,52,71,206,216,42,157,9,133,150,46,94,50,109,242,20,161,18,124,196,97,112,36,154,50,192,178,54,244,126,152,213,49,240,73,34,68,
248,72,192,120,250,201,167,200,179,189,29,205,173,199,28,113,36,121,119,73,161,143,237,194,104,98,28,76,247,251,137,185,81,5,114,233,131,106,181,242,145,104,157,224,209,104,20,170,58,206,58,237,12,234,
8,134,70,44,222,111,99,19,86,51,249,200,41,25,219,106,139,45,107,87,214,200,214,219,219,219,155,155,85,183,51,173,1,74,243,177,255,130,140,162,96,192,120,208,208,120,144,230,136,195,14,151,228,23,74,226,
60,140,248,141,87,124,171,6,221,173,197,247,222,172,142,1,121,229,233,52,162,197,25,83,166,189,252,252,11,68,43,157,109,237,140,192,77,182,197,166,153,141,161,144,90,91,108,141,178,229,172,3,34,51,141,
55,77,8,28,41,246,223,111,179,237,151,159,124,170,26,70,91,251,91,175,189,78,225,115,118,28,248,169,209,52,182,98,53,147,143,37,254,98,135,61,237,148,147,78,38,173,238,48,158,156,9,24,111,78,209,26,184,
52,31,251,163,48,23,13,5,131,234,59,11,76,92,182,100,105,40,216,249,232,67,15,167,165,216,146,227,19,202,253,37,248,70,65,86,78,105,129,207,227,200,152,84,81,21,209,220,251,100,86,199,144,75,254,68,43,
140,192,202,131,246,221,191,177,166,142,29,32,102,57,255,236,115,226,126,55,6,191,101,17,252,22,99,92,64,169,113,25,43,35,36,164,114,41,76,169,11,170,128,234,224,207,127,222,125,175,106,27,109,237,84,
199,81,127,62,34,41,46,158,211,85,196,178,3,49,107,27,192,76,62,22,23,249,227,198,142,123,227,245,215,217,58,153,53,67,121,115,138,214,192,165,249,216,31,153,100,68,156,171,85,252,104,116,17,231,167,159,
255,55,127,214,86,91,219,18,147,240,28,245,24,153,211,37,124,172,44,46,141,104,238,125,50,171,99,144,65,195,95,98,19,214,143,19,226,153,234,165,21,198,75,98,62,120,231,93,166,19,203,144,217,17,99,194,
80,137,100,77,139,88,237,48,90,126,55,139,152,97,196,26,37,204,137,135,66,134,140,140,100,164,166,81,176,123,237,182,187,170,0,163,67,248,83,255,254,47,243,76,174,170,230,228,212,143,126,224,107,51,107,
27,192,76,62,102,187,61,32,178,165,165,165,181,181,149,214,72,203,212,124,140,149,52,31,251,35,43,31,149,140,252,26,53,53,54,118,6,130,231,156,117,118,186,61,45,207,232,183,152,110,179,227,33,110,71,6,
89,118,68,115,239,147,89,29,131,213,146,194,227,159,149,165,101,2,202,195,14,60,168,97,101,45,206,89,191,162,230,180,19,79,198,45,217,46,49,14,11,130,233,17,200,71,1,34,69,100,218,122,132,72,43,31,169,
11,91,66,210,118,91,207,132,137,161,142,224,170,218,250,246,166,22,34,250,148,241,137,91,110,58,131,106,226,20,21,177,120,191,205,218,6,48,147,143,41,137,73,231,159,123,158,217,44,9,33,165,113,74,155,
212,26,136,52,31,251,35,105,136,194,70,81,99,131,234,170,189,124,233,50,134,255,126,236,49,78,233,185,89,217,62,111,65,114,66,98,113,161,79,122,8,71,52,247,62,153,213,49,240,79,60,19,195,247,240,195,41,
213,19,25,190,63,247,29,213,33,57,20,122,247,205,185,204,131,3,243,171,220,206,30,57,124,20,8,138,41,44,74,47,250,174,190,244,235,11,31,35,242,107,32,120,228,161,135,135,2,157,53,203,150,83,254,111,190,
242,26,211,165,251,55,243,80,254,214,101,7,98,108,75,26,128,152,201,71,135,61,237,197,23,94,144,147,52,205,146,64,146,17,29,66,198,68,154,143,253,151,73,73,25,17,201,67,135,51,166,77,183,219,108,184,125,
81,65,161,211,145,142,243,23,228,229,15,196,255,173,142,33,105,29,198,8,201,29,67,82,185,93,118,216,81,241,209,8,26,78,58,238,248,196,113,113,96,148,232,102,184,242,107,217,22,46,45,1,44,227,96,37,203,
229,78,136,139,119,101,56,57,121,228,120,178,84,201,228,228,248,125,62,210,67,202,199,157,225,36,242,101,135,137,184,153,153,253,199,98,120,255,55,86,198,78,78,172,168,34,66,231,12,148,229,116,113,128,
141,53,117,114,114,66,59,110,255,123,233,124,202,79,204,89,86,84,108,22,190,148,67,191,141,162,96,205,36,13,212,248,132,178,114,248,88,234,47,166,12,103,205,156,217,110,92,118,108,36,125,209,124,140,169,
52,31,251,47,1,98,4,31,81,160,35,64,190,147,156,152,196,185,189,32,223,235,114,58,213,19,135,107,70,79,17,77,127,157,102,194,145,113,220,76,184,3,62,160,9,38,17,205,91,175,189,174,248,24,232,124,242,241,
255,152,169,61,243,196,202,63,251,106,66,112,161,57,59,153,235,201,2,130,66,195,210,226,18,74,38,51,35,195,227,114,131,72,112,137,159,79,157,56,105,82,229,4,220,158,140,149,153,57,40,161,100,196,106,135,
221,56,150,138,226,82,80,69,21,48,188,252,162,75,90,26,26,59,141,55,114,190,56,231,57,217,103,97,153,124,62,104,224,229,111,214,62,38,43,103,85,30,167,107,211,169,211,54,25,181,209,185,255,119,78,91,75,
43,241,99,107,107,43,205,79,243,49,134,210,124,236,191,132,134,221,5,49,191,255,254,123,175,215,235,43,84,239,130,36,215,38,138,100,168,50,74,195,250,129,72,211,61,240,73,113,18,140,113,129,8,30,75,66,
167,250,66,118,125,192,235,248,163,142,137,31,61,86,46,126,13,220,63,251,103,66,70,161,36,123,75,36,229,243,22,164,165,218,227,199,142,35,37,116,187,220,153,78,39,124,228,228,193,116,16,153,156,144,8,
37,41,40,194,204,145,204,71,142,136,29,99,4,246,109,183,245,204,229,191,46,161,49,212,175,80,125,15,247,218,109,119,9,129,169,26,106,100,250,164,41,114,247,38,38,229,207,70,89,45,43,164,36,213,5,104,167,
107,98,213,132,204,244,140,79,62,252,136,77,75,8,73,243,211,124,140,161,52,31,251,47,161,97,119,201,175,219,109,183,157,61,213,158,237,201,2,145,68,76,68,145,140,132,109,0,124,196,4,136,18,71,16,33,18,
57,50,130,55,18,212,188,63,247,29,121,184,237,249,167,231,56,82,108,184,19,206,28,43,255,236,147,201,174,202,70,217,13,142,151,17,79,166,11,62,110,62,99,198,177,71,31,115,255,253,247,207,157,59,247,203,
207,191,120,233,249,23,174,191,246,218,227,143,57,118,218,148,169,68,220,204,160,46,221,230,143,220,252,90,46,62,22,121,213,157,235,123,239,188,171,211,232,159,79,177,127,253,217,23,2,71,130,119,118,155,
113,201,133,165,16,196,34,86,213,39,99,181,16,153,176,148,29,72,28,23,71,160,205,233,100,183,157,119,81,151,116,66,33,130,71,134,52,63,205,199,24,74,243,113,80,68,8,121,203,45,183,164,218,108,240,17,56,
18,37,185,51,93,177,226,35,184,17,79,99,4,63,132,128,120,14,150,28,159,112,209,185,231,203,227,52,4,53,132,54,169,73,201,248,39,115,198,196,63,251,106,213,229,149,48,90,122,26,21,230,123,83,147,83,182,
222,98,203,43,175,184,162,179,235,118,191,234,143,210,229,198,76,252,241,251,31,110,188,254,134,109,182,218,218,158,98,115,166,57,56,58,57,46,235,177,91,45,98,115,67,102,158,12,39,108,74,138,79,248,195,
246,191,111,172,83,159,252,87,239,235,238,12,93,114,193,133,20,56,7,11,34,169,23,246,80,134,17,139,247,219,168,104,134,20,11,235,228,204,65,19,218,104,212,168,219,111,189,77,74,79,122,134,107,62,198,86,
154,143,131,162,218,218,218,175,191,254,186,162,188,28,50,250,125,234,245,1,196,68,177,226,163,105,242,147,201,62,80,184,233,228,169,63,125,251,189,10,33,131,161,203,47,186,132,121,204,27,169,98,178,200,
208,152,100,130,236,67,202,248,68,71,170,253,128,253,246,127,110,206,179,245,181,117,170,163,168,17,242,40,25,35,193,142,64,83,99,35,172,100,228,213,151,95,217,247,79,123,103,58,210,9,148,132,8,230,241,
70,152,117,91,67,105,236,216,196,138,170,28,79,214,163,15,63,34,59,191,170,190,1,35,90,36,190,155,84,57,65,246,156,208,30,92,170,27,41,221,214,208,63,131,182,172,191,212,231,167,30,25,22,23,250,188,185,
121,191,46,252,133,50,148,83,14,112,228,196,44,100,212,143,208,196,68,154,143,131,162,70,67,167,157,122,106,70,122,186,92,92,35,128,34,121,28,84,62,74,100,241,143,27,110,82,143,211,4,67,159,127,252,201,
140,41,211,8,223,172,243,200,34,67,99,227,199,142,155,92,85,13,34,129,221,158,187,237,254,193,123,239,133,75,199,96,35,206,220,180,170,169,174,166,54,252,177,148,96,231,74,163,127,12,184,249,248,131,15,
79,56,230,88,16,64,32,198,208,122,200,86,139,216,220,144,153,100,208,7,237,127,0,64,151,200,17,221,254,143,91,237,198,215,129,248,21,62,50,66,22,156,20,23,79,16,29,177,120,255,76,14,153,26,132,146,252,
73,169,230,122,178,142,63,230,216,246,150,86,224,40,124,132,137,130,69,16,105,94,231,209,26,136,52,31,99,47,73,112,208,99,255,250,87,90,170,93,94,10,25,241,94,241,152,240,17,179,230,215,248,36,1,203,94,
187,237,46,247,10,64,228,49,71,28,153,105,60,107,104,229,35,75,49,100,102,89,115,108,141,227,50,13,31,102,127,200,67,247,251,211,222,239,203,123,134,66,161,134,186,122,249,226,35,34,216,105,107,85,238,
45,241,35,83,72,87,37,227,254,254,235,111,246,223,123,31,185,11,161,58,250,25,230,203,247,154,227,67,192,122,54,97,222,29,146,66,147,227,34,72,79,73,76,122,225,217,231,216,79,248,78,68,204,200,204,45,
183,98,87,229,153,25,106,132,5,9,39,1,37,245,34,107,24,184,177,206,138,226,82,214,47,117,237,76,115,188,250,210,203,242,72,2,140,150,224,81,248,40,79,25,106,13,92,154,143,131,34,154,169,188,247,172,188,
172,204,229,84,221,253,72,180,7,194,199,238,38,124,180,78,193,159,113,93,226,151,39,31,255,143,218,135,214,182,207,62,252,24,196,144,232,225,78,184,22,126,43,60,37,168,140,161,223,154,38,248,224,232,196,
10,242,242,75,253,197,99,127,55,250,205,215,94,199,135,65,9,123,69,204,136,39,75,116,35,67,171,90,154,154,137,200,100,248,237,87,95,239,248,251,29,72,204,203,75,74,73,102,147,19,18,253,133,190,116,123,
90,37,25,171,241,80,221,192,203,112,157,70,97,18,0,130,36,202,182,196,231,31,55,122,12,91,103,103,8,30,57,34,114,106,224,8,220,159,126,226,201,152,212,105,207,198,62,96,212,96,70,106,154,45,33,105,135,
89,219,45,253,117,177,186,64,97,116,185,165,48,225,227,218,10,86,171,127,210,124,28,20,153,124,60,254,184,227,18,199,39,84,148,150,13,48,126,236,141,17,173,128,66,160,121,214,105,103,176,15,157,109,237,
191,252,239,231,223,111,179,45,113,135,199,120,129,144,244,179,33,99,149,57,35,22,31,184,133,225,40,199,8,91,156,78,119,166,11,148,44,249,117,49,16,145,71,140,154,155,155,241,94,83,70,105,117,41,216,9,
22,133,143,50,1,238,84,150,151,39,196,199,87,85,84,74,55,41,130,113,167,35,124,201,98,176,121,36,97,32,69,199,185,68,186,49,86,87,86,145,16,148,21,151,60,244,192,3,240,145,93,85,177,91,40,116,198,105,
167,103,164,57,6,123,127,216,13,106,144,234,227,84,231,180,59,206,62,227,76,73,174,5,145,81,202,83,107,192,210,124,28,20,153,124,124,239,221,119,51,129,145,191,56,226,187,52,131,225,75,18,230,224,66,51,
166,76,91,56,111,190,218,143,142,224,181,87,94,141,111,227,78,184,58,88,36,244,128,140,248,188,92,198,138,173,169,131,50,207,1,57,57,132,204,80,227,141,87,95,19,234,181,54,183,116,180,183,83,44,20,78,
216,155,45,254,28,12,4,229,254,12,62,207,204,146,110,243,231,185,255,119,14,124,36,132,132,137,172,147,146,36,183,85,31,25,31,252,120,13,30,81,104,169,198,215,17,40,85,119,134,115,171,205,183,96,103,14,
63,244,48,34,71,33,35,123,248,191,31,127,42,46,242,103,145,31,116,91,67,108,205,202,71,170,239,237,55,222,146,29,80,23,64,131,234,169,4,107,121,106,197,68,154,143,131,162,118,3,4,114,33,114,219,109,102,
225,216,4,62,131,202,71,60,153,100,144,32,81,66,197,39,30,123,156,252,26,251,244,131,143,128,38,19,73,177,153,129,204,26,7,3,151,120,90,196,26,6,110,86,62,18,223,37,37,36,238,179,215,159,196,129,219,90,
0,100,43,5,66,201,72,26,40,146,226,18,153,31,59,99,92,16,9,131,160,15,5,72,212,70,233,17,66,82,140,156,111,96,165,122,105,246,154,91,143,185,17,63,82,98,156,93,0,19,69,10,31,75,140,174,90,79,252,231,191,
236,30,199,5,208,177,135,31,124,72,118,105,176,247,7,51,243,235,189,119,223,179,85,61,78,170,34,110,21,60,6,212,75,82,144,148,164,86,172,164,249,24,123,225,246,225,62,22,198,75,197,175,185,234,234,248,
177,227,36,126,12,167,216,131,19,251,224,204,184,52,65,34,227,135,31,116,48,249,117,123,83,11,136,220,249,247,59,64,79,60,92,64,137,183,227,99,146,48,154,102,93,79,255,45,39,79,61,102,110,188,209,26,126,
193,199,231,230,60,75,9,252,252,63,21,204,74,7,102,107,240,136,152,98,21,222,174,28,94,20,236,156,63,111,30,255,223,119,207,189,27,143,26,197,106,97,19,57,59,193,26,43,31,130,252,26,147,114,99,164,186,
188,210,153,230,136,27,51,150,224,17,220,171,88,216,184,115,93,95,91,119,240,1,7,170,206,173,131,31,207,82,101,147,42,39,112,158,27,179,209,198,247,220,113,167,42,161,246,128,206,175,7,85,154,143,177,
23,205,148,224,145,17,248,136,35,125,253,197,151,184,52,177,207,96,243,17,255,41,43,42,38,66,196,133,38,86,84,125,251,197,87,242,80,240,249,103,159,83,228,45,72,183,217,225,23,97,35,191,178,117,96,58,
168,124,228,120,253,62,159,186,146,216,25,90,177,124,57,101,34,157,78,172,193,35,146,18,179,10,135,151,59,194,140,44,152,255,51,1,90,243,170,166,9,149,170,191,33,107,150,203,127,4,107,132,108,131,205,
35,9,177,39,148,149,103,166,165,79,159,52,197,227,116,113,80,66,252,101,75,150,170,184,56,20,122,119,238,219,83,38,77,98,223,92,25,206,193,222,31,206,109,236,12,123,69,125,125,255,245,55,48,177,209,248,
124,166,230,227,224,73,243,49,246,162,153,154,124,196,139,104,196,199,28,117,52,193,212,96,243,145,96,199,140,31,137,122,84,136,209,161,18,174,247,222,122,123,219,173,103,166,219,211,72,78,33,151,192,
11,31,99,31,98,197,71,9,178,224,35,155,48,249,120,220,209,199,24,229,161,174,145,201,219,183,40,22,241,97,195,151,149,140,223,215,16,115,214,215,41,62,42,159,23,231,15,133,174,191,246,90,176,232,116,164,
203,23,198,225,227,16,240,136,243,13,229,201,41,135,34,37,232,134,143,251,237,189,143,116,63,170,89,177,2,238,179,123,55,92,119,125,106,114,202,208,196,143,212,47,129,63,176,62,234,207,71,180,54,53,7,
218,218,195,55,178,52,31,7,77,154,143,177,23,205,212,228,163,250,51,16,124,240,254,127,38,196,199,119,231,227,192,193,20,97,114,227,133,16,35,41,46,254,148,19,78,36,191,94,85,87,79,138,253,151,195,255,
12,185,8,232,216,7,200,133,63,243,167,9,199,1,238,6,139,71,229,163,60,250,38,119,93,132,143,114,65,86,60,89,196,159,86,81,110,114,105,98,85,99,227,210,197,234,189,15,74,193,206,69,191,252,82,94,86,70,
126,13,25,9,33,7,239,28,99,53,138,177,220,95,226,180,59,160,36,199,200,159,255,50,30,152,105,107,110,1,142,146,101,31,253,151,163,216,159,140,52,7,248,30,140,253,97,157,166,145,4,168,87,192,57,210,159,
120,252,63,106,31,140,178,85,175,165,208,124,28,52,105,62,198,94,2,71,88,0,20,212,125,216,96,231,170,250,134,233,83,167,145,18,130,15,130,32,127,161,143,86,46,94,23,195,126,54,18,63,98,120,50,171,101,
56,255,199,159,216,19,249,112,216,125,247,220,11,31,213,214,125,62,118,131,157,113,166,57,224,154,220,124,128,170,172,129,164,155,165,248,179,79,38,23,233,136,182,240,97,176,8,41,28,246,52,182,50,239,
135,31,165,39,163,233,189,82,50,225,63,12,241,167,41,153,18,145,128,35,16,208,209,222,126,241,69,23,143,143,143,47,244,22,148,151,148,130,164,33,184,31,66,164,38,223,59,99,188,178,180,108,155,45,182,106,
110,80,119,213,59,90,90,57,229,112,80,63,124,247,189,34,181,113,243,141,40,50,230,251,35,88,228,76,32,70,221,177,161,45,55,219,124,197,210,101,194,68,179,96,77,73,73,106,197,74,154,143,177,151,149,143,
132,24,68,79,12,79,63,245,212,209,155,108,50,185,122,34,236,32,188,18,95,18,162,89,93,162,223,38,97,96,97,215,123,33,25,146,15,62,63,231,89,240,68,130,47,175,81,248,247,99,143,17,220,177,27,213,85,19,
240,52,210,70,118,131,57,89,16,10,200,226,86,240,245,210,160,42,67,225,99,150,203,45,159,211,219,124,198,12,224,168,208,140,27,27,189,151,3,1,117,135,85,220,216,148,81,96,97,241,39,63,119,115,121,53,15,
113,210,19,79,60,225,241,120,216,127,185,16,169,134,221,10,33,230,70,73,114,254,224,0,25,191,241,239,215,42,44,18,181,25,29,3,136,224,30,127,244,95,84,37,81,45,81,249,96,92,15,101,133,138,140,6,130,177,
162,130,66,178,144,171,254,118,229,218,224,136,140,130,212,138,153,52,31,99,47,43,31,37,187,228,207,247,222,126,7,23,170,44,47,119,57,157,174,12,103,69,73,41,64,193,241,64,82,132,87,244,207,4,85,248,179,
192,145,41,14,155,253,164,19,102,139,35,169,11,85,140,132,66,175,188,244,242,150,155,111,145,56,62,129,40,140,48,22,195,3,1,37,89,36,75,193,2,40,41,171,234,189,201,81,8,31,61,153,174,226,34,63,249,230,
126,251,236,35,145,163,42,17,131,125,240,81,70,172,146,95,69,2,199,238,136,84,63,5,131,203,151,47,159,62,125,186,51,35,131,48,138,77,12,193,245,199,82,227,3,21,21,197,165,28,32,241,248,226,133,191,200,
126,170,55,36,117,168,71,250,142,57,234,104,248,168,122,134,231,230,81,140,131,205,71,2,243,164,132,196,239,191,253,78,234,52,170,194,123,168,21,35,105,62,198,94,38,31,85,131,53,30,46,86,83,59,67,127,
216,254,247,146,34,225,219,19,202,43,161,18,201,108,132,75,12,196,128,20,43,132,83,146,179,147,62,79,172,154,160,190,58,203,198,3,193,101,203,212,183,113,16,136,156,185,229,86,182,164,100,92,14,208,16,
238,185,51,93,42,238,243,249,139,188,5,80,213,155,19,126,198,25,139,64,97,84,179,242,145,67,147,44,126,246,241,199,43,55,238,114,88,78,21,136,17,195,139,87,75,126,21,225,242,1,246,52,20,137,72,245,147,
177,236,236,19,102,67,118,226,53,41,195,193,230,163,60,63,46,133,121,204,17,71,26,251,184,90,132,228,228,248,132,177,246,20,27,148,100,151,6,155,143,108,110,155,173,182,150,173,203,245,220,238,167,28,
227,71,173,152,73,243,49,246,146,59,12,38,31,49,193,196,61,119,221,53,106,212,40,28,137,70,15,200,96,10,193,90,132,75,12,196,88,27,193,35,153,114,185,191,4,223,118,103,56,9,109,62,249,240,163,213,61,10,
141,215,67,52,175,106,250,224,189,247,182,222,114,43,98,177,236,172,44,146,86,201,16,137,37,179,221,30,2,64,229,147,134,41,135,239,70,195,168,6,34,229,114,42,188,144,248,241,166,27,110,12,243,17,11,118,
226,207,134,255,70,42,188,91,134,212,140,134,173,49,213,40,79,153,249,177,127,253,11,62,178,9,16,204,126,14,54,31,49,234,136,200,154,194,124,199,120,88,69,250,75,201,94,189,249,234,107,99,54,222,132,159,
114,61,234,115,105,204,25,177,236,192,45,130,143,4,143,100,244,234,116,75,248,104,240,81,90,154,20,142,200,216,53,173,152,73,243,49,246,146,179,186,120,181,17,20,25,157,84,58,67,139,23,45,2,142,248,118,
81,65,97,142,209,195,70,156,42,86,148,148,204,26,95,37,77,38,55,244,229,123,199,143,139,187,241,250,27,90,141,231,82,228,249,51,248,168,246,173,165,117,238,155,111,205,216,116,211,156,156,156,140,140,
140,180,180,180,66,111,1,73,34,160,132,62,166,67,226,156,125,229,35,145,148,92,127,124,248,193,135,212,81,119,217,218,100,20,88,88,107,227,99,125,125,61,115,18,66,126,255,253,247,149,198,43,53,65,176,
250,116,223,154,135,31,115,35,114,244,229,121,109,9,73,123,239,190,39,9,117,71,115,43,38,93,166,72,177,175,187,234,26,126,146,232,146,195,167,240,173,203,198,196,34,248,56,101,210,164,166,198,70,106,83,
93,180,233,138,31,165,12,141,178,84,82,251,166,21,59,105,62,198,94,52,83,57,177,171,254,61,22,62,50,114,202,137,39,101,166,103,168,199,135,179,178,37,17,142,161,95,177,78,86,104,250,42,127,166,36,38,29,
176,223,254,138,55,157,170,199,76,173,241,6,29,194,73,121,149,14,225,216,62,251,236,227,116,58,29,14,7,212,150,126,63,234,82,218,0,248,88,144,151,47,124,124,253,149,87,77,56,170,66,88,139,84,121,117,137,
63,162,242,81,102,171,171,171,107,109,109,221,119,239,189,57,40,54,49,4,241,35,167,25,242,107,142,235,174,91,111,87,187,33,193,163,241,122,246,214,198,38,121,42,9,128,202,173,127,106,211,186,108,76,44,
130,143,23,158,119,62,155,86,217,128,81,64,102,114,205,153,195,40,75,37,245,131,86,236,164,249,56,40,34,185,102,40,124,52,77,162,54,213,125,207,104,250,153,142,116,18,97,2,73,198,163,90,132,183,244,198,
42,138,75,113,90,87,122,198,164,202,9,208,138,60,119,218,148,169,43,151,45,111,105,106,6,46,56,210,47,11,23,10,46,151,47,91,198,159,247,223,127,127,117,117,117,166,211,105,6,143,221,249,104,90,4,19,173,
38,124,100,30,159,183,64,250,247,124,254,233,167,214,99,95,155,164,184,68,198,126,133,205,42,41,204,218,90,197,244,11,47,184,96,147,81,27,193,71,121,31,196,64,202,42,170,89,215,89,89,90,22,247,187,49,
51,55,223,242,203,79,63,239,232,122,103,101,123,147,218,153,85,117,245,234,113,108,227,85,222,156,147,40,1,233,6,20,91,99,31,172,124,124,246,153,57,68,142,152,236,137,60,175,105,133,35,146,159,180,98,
37,205,199,65,148,217,94,205,17,82,236,63,108,255,123,176,165,242,80,227,165,47,132,147,140,43,55,88,211,196,69,35,28,166,151,38,204,194,117,37,36,196,175,216,116,211,170,38,134,32,219,52,245,103,32,240,
212,83,79,77,158,52,41,203,152,19,238,200,221,88,171,145,201,42,91,59,34,137,179,128,178,10,166,242,189,114,17,211,155,151,255,233,71,31,247,149,143,107,147,121,61,151,225,127,30,127,60,53,57,69,238,135,
196,164,172,172,38,235,49,87,43,91,217,123,207,189,130,64,201,120,171,144,218,141,70,245,113,136,151,95,120,49,33,46,126,66,121,101,182,209,213,148,101,25,177,174,106,32,6,151,161,109,102,90,122,145,183,
128,48,217,150,148,76,189,236,176,221,246,81,79,32,189,44,67,173,254,73,243,113,40,36,141,152,252,186,121,85,211,233,167,158,138,135,23,23,249,37,165,101,68,241,209,12,217,76,139,29,31,175,191,246,90,
92,154,112,131,221,0,136,166,100,223,86,172,88,241,236,179,207,18,241,185,156,206,202,242,114,245,28,200,154,124,20,19,68,154,76,140,48,217,110,97,46,57,118,62,91,132,143,253,136,31,215,38,217,85,185,
158,251,246,91,115,57,40,202,135,93,138,73,89,89,45,12,199,174,213,18,11,83,53,234,70,147,145,213,170,192,141,244,218,0,37,19,201,3,212,235,124,186,46,146,96,17,107,235,183,81,158,4,227,12,9,81,57,223,
176,27,52,152,203,46,185,52,42,31,181,6,85,154,143,67,39,249,174,0,30,142,215,209,232,197,253,202,75,74,7,143,143,228,203,208,234,224,3,14,100,211,192,69,176,104,74,34,50,4,58,207,63,247,60,102,198,224,
181,21,139,166,173,141,143,178,69,200,136,177,195,28,11,91,44,42,40,252,246,171,175,99,197,71,102,51,175,231,46,249,117,49,37,198,254,172,81,104,131,195,71,40,207,144,144,191,174,166,54,104,188,205,76,
186,145,114,146,59,104,255,3,216,1,138,107,48,248,152,229,116,85,20,151,150,250,252,105,41,54,246,71,221,205,243,100,125,241,217,231,154,143,67,47,205,199,161,147,188,64,155,198,125,200,65,7,17,175,169,
12,209,112,194,193,224,35,67,147,143,51,166,77,87,159,12,52,58,102,134,209,104,136,41,112,135,145,218,218,90,98,219,63,31,118,248,184,49,99,217,31,43,22,77,235,33,126,4,13,196,59,114,127,134,224,142,56,
20,151,254,225,187,239,99,197,71,36,40,87,159,48,13,118,202,103,178,57,180,152,148,149,213,34,248,152,153,158,177,251,110,187,177,93,225,35,166,94,44,212,169,122,62,78,174,158,200,49,58,29,233,240,81,
46,47,228,24,207,216,196,196,72,213,203,253,37,96,87,245,69,53,194,100,114,124,137,94,87,155,214,144,72,243,113,8,213,105,220,124,12,133,30,122,224,129,241,113,113,160,68,66,72,211,33,215,176,1,251,188,
240,145,245,179,21,104,165,94,216,107,116,92,175,169,81,95,239,2,139,242,231,143,63,254,200,16,125,251,205,55,147,39,77,74,181,217,242,240,201,46,235,13,31,49,51,126,204,50,190,244,13,250,99,120,253,17,
53,52,52,4,131,65,226,71,32,181,207,94,127,2,193,177,45,43,177,8,62,146,65,171,75,19,40,216,41,241,35,198,137,132,208,152,159,224,35,5,203,81,115,98,128,143,49,188,127,77,121,122,140,87,153,145,95,83,
146,241,99,199,61,241,159,255,170,221,208,124,28,114,105,62,14,157,72,114,213,123,177,66,161,95,23,254,130,107,1,29,146,89,98,16,211,33,215,176,129,249,60,112,52,249,136,205,121,250,105,224,34,89,106,
163,241,233,2,25,23,66,1,202,250,122,213,47,114,206,156,57,121,86,245,154,143,98,204,192,22,229,250,224,91,111,188,17,67,62,54,55,55,203,245,71,202,112,246,241,199,131,224,24,150,149,105,17,124,36,126,
252,232,131,15,85,239,81,78,39,6,28,197,158,125,102,78,106,114,10,105,190,202,0,140,78,172,170,168,99,23,63,2,92,248,104,150,103,137,191,152,136,85,237,134,9,199,222,22,155,214,64,165,249,56,132,10,118,
226,93,252,79,20,121,202,137,39,225,99,30,151,219,244,198,72,139,5,31,5,142,248,249,5,70,215,57,16,131,36,179,134,137,36,173,117,117,117,196,101,192,81,238,222,48,126,193,5,23,132,225,136,250,206,71,225,
11,136,124,230,201,167,34,248,200,70,213,127,107,138,137,235,20,179,177,219,32,146,241,230,85,77,215,94,125,13,235,31,130,252,154,68,94,189,215,195,120,143,153,149,143,23,158,119,126,74,98,18,103,184,
82,127,49,249,53,11,134,15,191,219,10,251,103,178,54,87,122,70,145,183,32,35,205,113,206,217,103,183,183,180,170,75,159,38,28,123,85,108,90,49,144,230,227,144,202,244,180,23,159,123,30,62,210,250,43,203,
203,77,135,92,195,98,199,71,187,205,118,224,254,7,176,117,200,104,222,147,129,143,208,16,73,186,45,2,151,200,76,174,123,201,71,2,40,25,97,6,53,155,113,11,251,145,135,30,182,242,81,158,247,16,38,90,37,
219,237,89,178,159,164,216,140,55,212,213,63,244,192,3,192,113,141,83,75,236,248,200,254,203,241,178,218,67,14,58,136,154,2,70,64,89,106,77,236,200,195,255,156,148,144,200,89,167,186,178,42,147,240,223,
120,163,135,244,18,143,137,65,70,146,107,134,148,39,91,121,245,229,87,212,110,80,140,154,143,67,46,205,199,33,149,56,24,35,132,144,83,39,79,193,15,7,41,191,198,204,104,8,96,109,185,249,22,144,81,226,71,
1,19,172,92,27,158,72,198,199,142,30,147,237,201,114,57,213,203,38,42,74,203,136,215,10,242,242,123,224,163,61,57,165,162,184,212,157,225,132,47,144,11,34,223,116,195,141,157,198,235,221,112,230,246,182,
54,233,110,201,62,200,214,77,201,22,123,16,243,8,31,17,227,172,16,94,128,39,201,226,99,82,86,28,130,217,159,134,148,25,163,196,198,252,110,244,61,119,221,197,14,168,192,45,20,146,239,41,162,250,218,186,
45,54,219,156,173,115,152,10,166,93,107,192,172,235,28,136,101,57,93,114,67,60,35,53,109,203,205,54,167,24,213,101,107,147,140,98,90,67,34,205,199,33,148,241,136,33,198,8,254,118,197,165,151,141,222,100,
19,92,113,181,159,91,45,118,124,36,132,156,50,105,210,130,5,11,64,140,201,71,193,77,120,199,214,212,130,249,63,239,183,207,62,48,8,124,19,191,176,56,241,154,162,198,154,88,52,13,62,226,201,165,62,213,
25,144,217,152,57,45,213,78,18,106,229,163,186,245,220,95,62,34,3,143,234,19,125,172,234,141,87,95,147,151,15,197,170,172,56,132,8,62,178,78,66,123,185,68,160,14,193,8,252,141,189,9,253,248,253,15,37,
198,215,122,57,121,112,164,3,172,163,168,198,206,228,184,60,254,130,66,130,211,179,206,56,51,188,105,29,63,14,135,52,31,135,72,138,5,93,77,28,112,192,71,48,132,159,251,140,207,58,71,177,216,241,145,72,
7,151,158,59,119,46,187,33,97,163,16,71,237,210,90,244,242,139,47,18,216,58,236,105,100,202,128,0,28,244,144,95,99,234,98,153,241,222,114,245,66,73,227,206,47,73,168,149,143,3,137,31,145,224,81,189,4,
40,16,148,103,52,133,98,49,41,43,246,223,228,163,84,7,225,97,89,113,137,250,236,162,145,92,7,229,57,81,163,251,193,235,175,188,90,84,80,200,12,234,30,250,128,235,40,170,17,137,19,66,114,214,153,60,161,
250,163,247,63,80,109,134,114,48,78,171,171,77,107,72,164,249,56,116,18,70,168,17,233,105,28,10,205,154,57,51,53,57,101,181,159,91,45,118,124,196,147,137,4,255,243,239,255,168,77,247,142,143,120,224,46,
59,237,76,12,85,94,82,202,26,192,43,177,210,218,248,200,182,32,35,35,185,158,44,121,252,6,176,238,241,199,221,77,62,170,171,10,49,226,35,107,123,119,238,219,236,24,137,127,172,202,138,61,183,198,143,28,
41,37,54,99,218,116,233,140,213,40,223,8,36,128,235,8,80,107,143,63,250,47,98,234,240,213,79,22,239,122,39,177,148,67,76,172,220,95,66,228,152,110,179,239,191,183,122,199,48,27,101,211,82,146,171,77,107,
72,164,249,56,116,194,193,1,4,35,36,155,242,158,177,187,239,184,147,20,123,181,159,91,45,118,124,36,250,179,165,164,92,117,213,85,38,104,100,68,197,68,166,89,124,79,216,125,239,221,247,144,89,179,44,200,
0,121,114,173,13,10,116,55,235,22,205,248,107,66,101,149,116,102,98,133,194,71,235,214,77,169,25,214,165,240,172,134,248,243,189,183,223,33,182,5,217,49,44,43,248,46,215,79,57,88,118,222,110,179,29,115,
212,209,170,52,44,87,30,219,141,199,159,174,191,246,90,162,126,230,97,78,202,135,40,143,92,24,99,36,98,157,253,182,146,66,31,123,146,150,98,251,251,85,87,131,102,69,231,238,53,165,53,36,210,124,28,58,
129,6,185,252,7,44,96,80,125,109,221,162,5,11,135,224,254,12,158,156,156,152,116,246,89,103,9,158,16,251,160,98,177,238,94,103,152,186,131,20,236,252,117,225,47,91,110,190,133,36,146,132,84,37,69,254,
222,240,17,100,200,22,1,235,39,31,126,164,14,187,83,117,252,228,144,195,219,30,32,31,7,33,126,196,76,62,194,119,14,150,245,203,203,196,96,147,96,17,73,56,121,198,105,167,147,221,179,81,14,80,98,234,152,
199,143,190,60,213,173,114,210,132,106,206,4,154,143,195,43,205,199,33,18,190,45,104,0,145,146,39,18,152,144,55,29,176,223,254,171,253,220,106,177,227,35,62,159,16,31,127,216,97,135,201,14,132,135,107,
231,163,177,187,42,92,186,234,111,87,146,75,146,44,67,189,162,130,194,222,240,209,99,188,156,162,162,180,12,136,220,119,207,189,234,202,157,92,194,91,141,199,1,241,145,21,190,245,198,27,196,119,32,56,
134,101,101,242,81,174,159,186,51,93,236,60,155,166,16,20,158,216,135,174,239,100,236,190,219,110,208,147,121,56,76,138,37,215,163,200,136,129,200,136,117,246,219,128,35,135,115,236,81,71,115,18,213,124,
28,94,105,62,14,157,204,142,217,248,185,76,33,176,186,245,150,91,196,201,115,178,85,228,69,38,43,127,22,228,169,199,245,34,60,167,79,198,226,38,31,227,198,141,251,227,110,187,201,197,71,33,20,195,40,94,
103,24,241,99,107,115,11,251,54,247,205,183,32,29,17,46,112,36,86,82,251,3,13,13,51,225,136,89,183,168,122,237,229,230,85,150,149,3,145,139,206,191,64,93,53,11,170,151,150,71,229,35,99,82,14,61,43,60,
183,33,243,254,181,89,80,202,98,202,71,214,204,193,190,240,236,115,108,90,158,91,167,76,128,163,128,114,234,228,41,156,48,216,168,240,49,135,68,219,120,182,178,127,207,207,72,223,73,243,79,142,2,243,56,
213,231,128,110,185,241,38,138,46,58,31,181,134,74,154,143,67,39,208,192,80,40,137,58,218,219,235,235,235,87,44,95,158,107,192,17,203,72,79,47,52,158,200,246,24,31,194,31,160,207,179,184,240,81,93,83,
243,100,77,154,56,81,94,145,27,38,205,154,146,93,18,241,39,251,198,204,236,155,132,75,66,4,181,54,195,196,141,35,54,39,38,63,137,205,218,122,166,90,157,225,228,226,219,86,241,151,154,16,102,114,79,94,
47,243,35,32,11,112,239,190,227,78,120,173,110,31,199,136,143,37,133,62,91,66,210,164,202,9,114,253,145,242,207,118,123,190,254,226,75,99,219,93,214,245,8,54,88,20,52,171,97,118,206,64,226,199,44,167,
75,248,232,47,40,228,79,41,52,214,73,129,179,27,181,43,107,212,69,106,75,161,25,133,161,53,164,210,124,28,58,133,155,185,209,208,25,2,202,230,230,102,16,185,227,142,59,58,157,78,175,215,155,151,155,7,
31,213,85,45,185,43,210,205,163,250,100,226,108,120,50,107,131,143,149,21,149,203,140,119,134,203,62,68,72,246,208,20,83,218,13,68,206,62,254,248,212,228,20,120,33,55,94,122,207,35,102,152,80,81,249,191,
31,127,98,109,234,134,207,154,124,20,56,170,79,21,66,30,195,122,240,254,240,50,6,31,137,106,255,118,217,229,176,137,93,234,211,254,244,96,224,201,145,98,171,46,175,84,15,11,26,107,134,191,243,126,248,
113,53,28,49,131,143,43,151,45,103,115,86,62,246,123,187,144,81,76,240,138,153,245,197,154,119,219,121,151,38,227,83,51,225,35,55,20,46,14,173,33,148,230,227,208,41,220,204,187,4,170,64,36,24,186,233,
166,155,210,137,28,11,11,65,100,129,113,255,180,172,184,36,156,207,14,192,172,254,6,31,139,124,190,111,190,249,166,151,124,68,76,36,138,188,255,222,251,164,147,166,64,33,108,189,227,35,7,114,239,221,247,
176,42,117,11,120,96,124,148,161,74,210,59,2,39,28,123,28,241,117,95,247,167,7,43,202,47,112,218,29,229,254,18,178,108,130,71,34,211,73,19,170,151,46,94,98,229,35,219,197,190,253,234,107,217,180,152,249,
252,76,63,204,196,162,9,74,179,190,216,129,59,110,51,190,120,67,114,109,145,81,24,90,67,42,205,199,161,83,184,153,91,36,211,63,255,252,115,137,31,221,110,229,123,96,165,186,106,194,192,191,239,204,226,
97,151,203,206,145,152,244,253,247,222,235,125,252,40,195,79,63,249,36,205,120,151,151,220,148,232,61,143,152,129,69,8,63,57,3,168,59,191,3,200,175,217,103,134,106,17,35,79,223,111,159,125,156,198,103,
196,229,208,100,103,214,185,63,61,24,124,244,100,56,201,178,115,220,30,225,227,22,155,109,190,170,190,65,246,89,140,67,128,143,239,189,253,78,12,243,122,226,86,225,163,188,27,141,85,169,195,201,201,225,
236,56,127,222,60,227,200,141,146,234,146,154,162,53,180,210,124,28,126,225,255,191,255,253,239,51,50,50,28,14,135,186,16,105,244,178,142,201,247,239,5,28,88,166,35,29,207,127,254,185,231,194,174,214,
77,225,93,49,212,102,188,70,151,145,246,182,182,154,21,43,42,74,203,224,227,26,175,20,235,5,23,152,33,203,229,222,113,135,29,22,204,255,25,178,8,101,34,196,4,217,98,207,50,175,216,178,63,12,183,217,106,
235,164,132,68,185,62,107,90,196,214,251,100,240,49,199,229,241,229,121,137,31,9,9,51,211,51,182,223,118,59,233,228,100,154,122,145,143,241,245,27,126,237,83,57,244,108,194,71,70,160,51,171,98,229,169,
201,41,242,82,94,81,184,164,12,133,39,105,13,161,52,31,135,95,52,253,115,207,61,55,43,43,203,149,233,146,187,216,56,255,192,243,107,171,185,51,156,132,165,184,183,120,90,119,133,119,197,144,36,254,140,
52,55,53,131,137,157,119,220,9,56,174,209,79,179,23,92,96,6,248,200,129,60,252,224,67,114,23,27,235,46,217,98,207,146,157,97,102,226,199,133,63,47,152,58,121,10,145,233,64,114,219,8,131,143,50,2,31,9,
75,57,210,157,254,176,35,7,46,247,142,197,84,56,25,10,61,120,255,63,249,149,51,141,105,49,217,7,73,180,89,21,117,68,81,255,237,178,203,9,167,165,112,140,66,10,75,149,133,214,208,74,243,113,68,232,221,
119,223,45,44,44,148,247,137,1,32,143,75,57,106,172,252,191,48,55,63,215,147,69,64,122,215,157,119,134,93,173,155,194,251,209,37,153,82,111,188,52,247,180,147,79,33,94,131,215,125,229,35,135,64,110,126,
232,193,7,47,249,117,241,64,248,40,249,181,188,255,241,217,103,230,192,220,24,178,9,35,114,196,212,99,48,110,143,191,208,199,62,19,193,153,215,4,196,228,153,162,91,111,185,69,58,135,247,190,28,122,99,
230,245,71,74,140,80,253,155,47,191,234,119,89,105,197,86,154,143,35,66,180,254,210,210,210,194,130,2,111,94,62,70,124,164,58,226,117,115,164,254,153,223,136,143,88,231,13,215,93,111,58,30,255,91,125,
48,188,31,107,170,102,101,13,243,95,115,213,213,241,99,199,201,131,216,189,231,2,51,148,20,249,227,198,140,173,170,168,84,87,211,186,64,19,161,240,150,122,148,204,86,87,87,199,240,150,155,111,38,9,245,
251,124,4,167,177,42,31,206,31,164,183,158,12,39,144,42,245,23,67,192,125,246,250,83,68,126,45,79,209,80,20,118,155,173,79,229,208,131,73,102,141,17,60,178,117,86,197,214,41,46,194,85,117,216,150,135,
229,69,50,81,107,40,165,249,56,124,162,193,139,49,8,4,207,58,243,175,14,123,90,186,209,247,13,223,27,120,255,112,211,114,50,221,37,5,62,123,114,202,165,23,94,44,132,18,56,138,137,140,29,10,75,226,181,
54,227,98,31,59,246,216,35,143,166,36,38,73,96,219,123,46,48,3,7,82,226,47,38,97,188,237,31,183,170,16,210,144,10,196,122,233,233,102,249,24,132,146,8,238,192,253,15,176,25,223,131,158,80,81,25,171,242,
49,141,21,114,90,162,22,246,222,115,47,181,3,22,62,202,158,156,113,218,233,208,89,110,94,99,228,248,214,174,242,17,107,91,167,229,186,179,192,98,169,207,47,221,203,43,75,203,18,226,226,175,184,244,50,
181,45,67,240,145,186,8,215,144,230,227,112,72,243,113,152,36,158,47,134,39,180,183,63,242,208,195,160,135,224,145,161,220,47,142,33,31,75,11,124,105,73,97,62,98,248,92,0,244,133,86,35,210,216,167,176,
34,248,248,196,127,254,75,72,213,15,62,114,20,176,6,182,78,159,58,109,225,207,11,88,155,220,229,48,143,186,39,201,60,93,22,52,30,95,89,180,96,33,105,181,92,12,101,229,131,193,71,41,249,232,124,12,118,
198,150,143,196,143,114,95,72,150,45,46,244,217,83,108,79,63,241,164,113,252,42,106,182,194,17,201,116,173,161,148,230,227,48,201,226,252,8,255,95,188,104,81,117,213,132,145,195,199,118,227,141,182,80,
233,217,103,230,128,164,126,240,145,16,143,5,115,60,89,100,217,119,220,118,59,171,10,119,132,236,58,234,158,36,243,24,214,209,218,198,178,76,187,235,246,59,70,111,178,9,123,66,225,12,48,183,141,106,145,
124,180,236,131,178,46,62,202,53,16,44,226,157,234,17,107,91,167,177,136,92,247,4,148,140,231,122,178,38,86,77,144,19,9,155,11,174,217,249,17,169,233,90,67,43,205,199,97,146,213,241,144,241,213,249,3,
246,219,31,231,196,69,97,80,108,243,235,213,124,36,99,11,24,253,172,249,191,119,124,124,249,197,23,137,218,86,195,177,215,124,244,121,11,224,99,85,69,37,139,79,174,158,168,94,55,27,10,213,174,172,89,125,
212,61,72,230,49,44,28,117,134,66,96,139,252,55,219,237,41,47,41,141,237,253,125,49,225,35,193,105,20,62,82,76,129,224,233,167,158,202,175,177,138,31,129,163,122,233,122,134,147,68,27,68,102,164,170,188,
94,93,247,68,198,23,123,140,154,89,45,53,93,107,104,165,249,56,180,178,186,92,151,169,238,129,198,79,87,92,122,217,152,223,141,46,241,23,123,44,223,54,25,184,229,186,60,37,222,194,228,248,132,243,206,
62,39,42,31,141,61,11,75,92,17,68,202,205,1,28,245,189,183,223,145,251,197,125,229,35,217,226,132,202,42,136,227,247,249,126,183,241,198,103,159,249,87,21,6,174,121,236,189,49,21,117,118,134,72,60,147,
198,39,108,177,233,140,212,164,228,178,162,226,76,71,122,196,22,7,110,236,51,228,13,243,145,77,171,226,232,178,65,224,99,118,166,187,164,208,7,25,229,245,104,240,241,210,139,46,86,27,53,98,252,238,50,
118,72,107,72,165,249,56,132,50,157,109,77,147,215,88,241,251,27,175,190,230,176,167,1,20,194,174,138,210,178,65,226,99,160,67,93,246,135,143,98,61,240,17,142,154,124,236,71,255,158,44,151,27,62,114,44,
137,227,19,56,28,86,242,192,125,247,247,3,145,44,210,222,210,186,231,238,123,192,199,98,3,40,89,78,23,145,87,196,22,7,110,236,115,73,145,159,16,158,109,153,39,45,115,31,152,114,218,201,167,168,212,222,
82,14,49,225,35,86,152,155,95,89,90,246,242,11,47,170,237,106,62,142,24,105,62,14,161,186,156,45,210,140,119,175,226,24,43,150,46,219,98,179,205,93,78,39,40,81,31,42,232,230,81,253,179,181,241,81,226,
71,99,207,86,75,92,17,62,42,13,140,143,5,121,249,114,57,207,150,148,188,195,118,219,51,156,53,115,166,122,105,174,245,216,123,99,198,149,199,194,124,175,39,211,165,186,112,231,230,195,199,114,127,73,196,
22,7,110,236,51,59,156,150,106,255,227,46,187,170,254,143,170,56,194,54,216,124,36,132,252,195,118,219,215,44,95,161,58,18,105,62,142,24,105,62,14,173,186,252,205,106,248,94,93,77,173,116,184,251,203,
17,71,36,196,199,155,253,251,76,139,112,173,62,89,78,166,187,216,91,152,50,62,81,241,49,168,222,94,46,124,196,7,7,149,143,62,227,243,246,217,110,207,132,138,74,210,82,254,76,73,76,10,167,174,125,177,229,
75,150,250,11,125,106,7,178,178,225,145,244,137,233,199,251,196,214,105,236,51,20,78,77,78,217,101,167,157,213,51,63,170,56,194,70,29,81,65,131,199,71,87,122,198,190,123,253,41,208,102,124,254,87,243,
113,196,72,243,113,248,213,222,214,6,137,86,25,247,118,255,126,245,53,191,219,120,227,124,227,43,210,184,159,216,0,17,9,80,240,195,212,164,228,227,142,62,134,77,52,173,106,130,143,2,199,168,94,103,76,
14,139,63,159,121,242,41,121,174,195,202,133,94,237,15,200,136,102,231,158,117,246,15,223,124,23,108,107,111,105,108,90,177,120,105,40,160,182,194,120,83,67,99,248,238,68,40,196,175,12,59,219,3,205,13,
141,83,170,39,86,149,149,171,151,36,26,223,146,197,76,36,245,131,74,61,24,7,69,136,234,176,167,77,168,172,34,126,148,16,50,28,208,25,49,254,9,199,30,199,175,102,57,12,240,250,163,211,238,152,80,86,158,
145,154,70,102,61,110,147,209,15,222,119,63,219,210,249,245,136,146,230,227,240,75,122,26,182,182,170,143,180,200,27,16,128,35,33,155,233,135,189,229,209,90,12,62,170,87,28,166,218,79,57,233,100,54,212,
212,212,36,206,182,54,175,147,233,34,254,124,248,193,135,224,53,209,95,95,247,199,4,71,132,141,26,53,234,136,67,14,155,247,221,15,161,142,32,182,108,209,226,229,191,170,151,137,5,219,213,37,63,0,177,108,
241,18,200,24,106,15,124,249,201,167,39,31,63,187,162,184,84,58,81,19,103,13,54,31,137,118,41,255,202,242,242,218,149,53,17,124,132,221,39,158,48,219,124,126,102,224,247,103,228,188,149,153,150,94,148,
95,64,56,252,210,115,207,203,225,107,62,142,28,105,62,14,191,132,143,132,116,12,191,255,246,187,201,213,19,211,98,250,125,231,28,151,167,200,91,144,110,79,59,239,156,115,217,132,201,199,181,73,188,81,
4,182,254,113,211,205,80,163,31,251,99,130,163,187,17,58,253,126,155,109,31,184,231,190,182,85,205,18,63,162,198,186,250,230,85,77,100,178,140,55,213,55,188,240,204,179,164,156,113,191,27,195,170,228,
10,29,7,50,216,124,228,180,196,201,73,222,48,182,6,31,13,59,245,164,147,83,18,147,40,129,152,220,191,150,35,34,203,6,148,155,79,223,244,151,255,253,172,74,161,107,91,221,165,126,213,26,90,105,62,14,191,
172,124,108,109,110,249,195,246,191,79,74,72,44,46,242,247,149,71,221,141,165,148,207,123,178,10,242,242,73,12,47,187,228,82,54,33,47,122,232,65,97,119,52,68,208,116,213,223,174,116,103,186,98,203,71,
130,166,223,141,218,8,210,29,184,207,126,183,223,124,203,39,239,127,248,237,151,95,177,105,82,236,175,62,255,226,169,255,62,113,218,73,39,19,243,166,38,37,67,82,23,1,117,134,51,203,233,194,134,128,143,
57,158,44,191,207,247,229,231,95,88,249,168,194,186,80,232,244,83,79,165,106,4,142,3,231,35,139,144,92,67,73,123,114,10,229,208,220,208,213,121,94,243,113,196,72,243,113,152,37,77,95,221,12,65,70,232,
68,148,71,144,82,81,90,214,87,30,69,152,192,145,101,113,99,220,30,62,222,114,243,205,164,240,210,241,187,7,9,175,145,188,111,241,248,99,142,37,229,140,33,31,109,9,73,149,165,101,24,35,73,113,241,0,98,
114,85,245,140,41,211,152,66,24,85,226,243,143,217,120,147,113,155,140,102,13,147,42,39,84,151,87,90,87,8,28,25,33,236,130,152,230,244,88,25,7,5,28,9,150,9,33,95,121,233,101,142,93,226,89,76,110,215,252,
237,178,203,229,81,244,88,241,145,184,152,3,164,28,46,58,247,124,226,104,117,133,65,199,143,35,73,154,143,195,44,105,250,38,31,161,215,221,119,220,9,143,6,30,63,10,28,89,28,180,101,123,178,28,14,199,93,
119,221,5,28,217,78,120,219,107,81,4,31,15,57,232,160,140,52,135,60,248,216,167,253,49,193,17,97,101,69,197,48,17,99,4,99,78,71,138,45,126,244,88,50,77,126,157,80,86,142,85,20,151,150,251,75,192,7,33,
164,117,157,152,228,218,24,35,17,63,13,208,56,40,137,31,41,127,98,88,142,221,228,163,188,78,252,186,107,254,46,159,78,140,9,31,217,127,150,42,245,249,51,29,233,15,221,255,207,150,198,38,21,165,234,248,
113,36,73,243,113,152,37,77,95,240,8,31,155,26,27,223,123,251,29,136,214,143,120,45,194,76,62,22,21,20,18,16,101,164,167,63,242,200,35,102,240,216,131,191,173,193,199,206,208,110,59,239,98,183,217,192,
65,95,247,199,4,71,132,17,253,73,178,204,8,185,51,217,37,176,155,82,61,17,86,130,72,140,17,95,158,151,208,146,52,124,230,230,91,154,43,28,60,50,138,169,131,50,192,71,172,45,223,191,54,249,88,179,98,5,
240,186,253,214,219,98,24,63,82,2,114,103,134,160,248,167,239,127,104,149,175,152,105,62,142,36,105,62,14,179,164,233,155,124,172,93,89,179,228,215,197,242,180,73,95,121,20,97,38,31,9,69,221,153,46,103,
70,198,19,79,60,193,70,194,27,94,187,172,124,36,158,157,53,115,166,64,161,175,251,99,130,35,194,32,2,92,16,52,64,58,127,65,33,128,0,133,68,145,44,5,25,65,36,35,4,86,204,163,62,168,109,89,39,105,53,75,
49,34,137,118,108,141,131,42,200,203,247,121,11,82,147,83,254,113,211,205,160,202,228,227,210,197,75,58,90,219,128,102,196,245,199,190,214,11,243,155,70,216,88,92,232,115,166,57,202,138,75,194,112,164,
61,24,125,78,53,31,71,136,52,31,135,95,225,230,111,136,63,113,197,189,246,216,115,224,239,169,102,17,225,35,169,113,89,73,105,124,92,220,219,111,191,13,31,91,91,213,171,94,123,184,10,25,222,21,67,63,126,
255,131,211,248,162,64,63,250,63,70,96,49,170,69,44,178,78,147,16,50,98,226,0,173,196,120,57,46,67,55,195,34,63,71,74,18,173,238,245,3,41,3,142,152,220,171,121,233,249,23,40,141,190,150,131,105,204,28,
174,20,195,160,48,39,194,241,227,226,118,223,117,55,54,1,139,217,68,160,99,141,119,226,90,165,234,70,107,104,165,249,56,252,10,55,127,145,113,43,224,240,67,15,203,28,240,119,160,194,174,104,172,129,16,
50,213,102,251,248,227,143,217,130,240,209,12,18,187,75,118,68,244,214,27,111,176,39,107,60,60,211,235,253,137,64,97,84,139,88,100,157,6,31,77,139,248,169,223,102,229,163,191,208,39,124,60,225,216,227,
76,56,98,194,199,55,95,123,93,245,219,183,148,67,159,246,199,90,35,24,89,124,121,73,105,66,124,252,177,70,191,253,54,163,3,108,184,220,163,73,106,71,107,40,165,249,56,252,10,55,127,145,113,11,251,162,
243,47,136,33,31,179,221,30,245,89,237,172,172,239,190,251,142,45,244,137,143,215,95,123,109,134,241,74,243,126,228,251,17,40,140,106,17,139,172,211,250,196,163,94,26,100,204,114,186,132,143,28,169,228,
215,132,240,38,28,129,87,192,8,183,63,250,224,67,235,117,6,242,107,217,141,94,238,79,4,31,165,163,101,226,248,132,191,95,125,13,43,39,180,151,174,87,225,162,239,38,85,55,90,67,43,205,199,225,23,142,33,
173,95,245,239,49,174,208,223,119,207,189,17,207,249,14,132,143,110,227,211,172,190,194,194,249,243,231,179,45,33,99,111,242,107,118,230,164,217,39,146,81,170,151,101,196,238,250,163,213,34,22,89,167,
9,137,122,201,163,94,154,191,160,208,228,163,121,253,113,214,204,153,66,70,25,202,157,229,47,63,255,194,250,28,81,4,31,215,185,75,17,124,228,148,83,226,47,78,74,72,124,228,161,135,165,216,27,26,212,87,
18,165,240,187,203,168,28,173,33,149,230,227,240,203,100,86,7,204,50,46,210,191,250,242,43,214,231,124,7,200,71,44,219,147,181,205,204,153,141,141,141,108,11,50,134,29,206,144,177,11,145,106,107,81,49,
38,218,229,15,59,101,103,186,43,74,74,97,199,106,223,142,29,31,251,106,17,155,136,137,21,229,23,112,140,57,46,143,47,31,248,41,62,186,156,78,191,207,167,62,43,102,188,153,66,85,138,97,181,43,107,54,159,
49,131,243,13,161,31,116,131,143,44,194,26,32,99,111,174,138,70,240,145,184,158,109,113,250,249,218,232,27,143,224,99,184,86,162,73,230,209,26,74,105,62,142,8,181,180,168,238,199,234,242,19,222,24,10,
125,246,241,39,253,232,111,24,97,166,55,18,250,225,207,127,216,97,7,245,136,247,154,159,124,66,198,246,215,84,87,58,185,104,193,194,25,83,166,1,142,138,226,82,143,211,181,161,242,81,238,152,11,31,57,52,
152,5,251,128,23,181,64,81,168,43,143,93,195,166,198,198,237,102,109,219,157,143,192,145,197,173,235,140,106,17,124,204,241,100,81,53,108,78,129,184,235,52,25,241,205,66,171,140,186,209,26,82,105,62,142,
8,17,217,225,24,106,204,72,232,150,45,89,58,117,242,20,241,34,92,72,93,251,51,250,18,99,235,76,226,76,51,189,17,212,18,16,237,185,231,158,248,152,240,81,16,105,108,57,154,36,169,236,84,183,107,11,141,
79,235,73,87,237,13,149,143,28,35,128,195,24,17,62,18,60,218,109,182,151,95,124,145,243,132,124,55,81,13,141,44,123,207,221,247,16,62,82,14,42,216,36,228,52,122,44,169,242,233,99,126,141,177,158,233,83,
167,45,95,186,44,24,80,113,61,27,2,145,6,12,163,200,168,27,173,33,149,230,227,136,80,125,125,125,248,134,73,167,122,79,12,126,72,156,34,46,52,112,62,22,230,123,51,210,211,247,223,127,127,86,47,112,68,
106,91,107,145,192,145,225,61,119,222,229,53,222,183,168,158,114,201,81,125,253,212,10,141,53,111,192,124,44,50,62,8,145,150,106,127,252,209,127,81,23,234,201,25,227,221,25,234,18,100,40,116,192,126,251,
71,240,81,78,33,253,227,35,201,245,246,219,110,215,104,164,213,154,143,35,80,154,143,35,66,214,187,37,210,149,100,143,63,238,158,145,230,128,140,194,71,245,142,9,3,16,184,113,132,215,173,205,76,111,44,
47,41,221,120,163,141,174,253,251,223,241,49,129,99,116,103,99,154,152,241,220,8,56,152,125,220,241,9,227,226,38,86,84,21,229,23,200,10,77,179,110,104,125,55,74,53,76,183,156,188,146,34,63,167,19,194,
109,248,120,193,185,231,41,38,26,87,132,145,170,151,206,208,89,103,156,41,253,22,41,88,70,88,196,236,208,190,78,51,107,68,140,106,181,37,37,31,118,200,161,234,108,212,21,218,235,252,122,68,73,243,113,
68,72,248,40,247,175,133,143,7,31,112,96,172,248,72,64,148,148,144,120,215,157,119,170,77,172,19,142,198,143,132,75,245,181,117,123,238,182,123,106,82,114,101,105,25,219,141,88,249,134,100,86,62,82,86,
20,56,17,34,133,63,251,248,227,165,46,20,34,187,62,51,123,253,181,215,130,197,178,226,18,10,86,245,193,202,202,134,143,89,78,87,196,58,163,90,4,31,49,178,248,99,142,58,90,101,238,1,227,131,63,134,132,
134,221,165,246,68,107,104,165,249,56,34,36,23,31,149,147,180,27,111,216,15,133,78,154,125,162,240,209,155,151,159,227,201,202,113,135,95,125,216,155,251,0,98,166,55,178,120,150,219,243,223,255,254,87,
109,162,55,124,236,84,175,89,251,242,243,47,170,43,171,92,233,25,234,197,221,6,68,172,43,223,32,141,18,35,101,166,196,72,159,9,33,247,222,115,47,185,248,216,222,210,10,25,49,16,249,212,127,159,128,143,
96,84,234,133,243,22,149,66,252,200,48,98,109,221,45,130,143,172,193,97,79,59,237,228,83,212,202,123,33,169,40,173,161,148,230,227,136,144,201,71,192,36,124,60,247,255,206,137,21,31,9,115,252,62,223,43,
175,188,194,106,195,174,102,72,109,216,148,5,142,234,141,135,161,208,156,167,158,206,114,185,137,143,114,141,45,254,70,248,72,137,81,230,242,138,179,109,183,153,37,23,31,169,20,16,70,148,7,46,63,120,239,
61,130,62,42,133,48,211,75,104,111,240,145,248,177,55,229,211,157,143,84,241,57,103,159,77,22,31,174,146,30,101,212,147,214,144,74,243,113,152,37,77,63,156,91,25,55,70,212,53,175,206,208,173,183,220,18,
67,62,206,216,116,211,255,205,155,199,134,214,150,190,153,112,84,22,10,117,180,180,94,126,209,37,227,54,25,237,203,205,47,200,202,241,122,178,243,13,139,216,196,6,102,38,31,49,202,188,162,180,236,219,
175,190,166,58,84,150,109,220,188,134,143,63,255,111,126,121,73,169,212,75,97,190,151,69,128,35,41,118,196,170,162,90,4,31,33,108,82,66,226,109,255,184,53,130,143,70,187,208,26,17,210,124,28,102,137,75,
88,249,40,47,172,190,251,142,59,99,197,71,242,193,157,254,176,99,109,77,109,75,75,139,218,74,151,100,211,162,53,248,24,236,108,110,104,220,127,239,125,82,147,146,77,62,230,185,179,54,120,62,170,96,217,
242,165,70,159,183,96,238,155,111,17,57,194,47,140,122,1,148,181,43,107,54,155,190,169,204,198,12,94,22,50,248,168,46,95,118,91,97,132,69,240,145,154,77,73,76,186,239,158,123,53,31,71,172,52,31,135,89,
226,18,97,98,25,73,28,57,29,62,249,224,253,255,236,43,31,35,82,60,43,31,247,219,103,31,149,188,183,182,134,55,100,72,54,45,90,131,143,129,224,194,249,63,151,20,249,61,198,247,12,100,181,42,126,236,5,2,
214,107,163,196,212,39,182,221,30,34,59,98,67,70,30,123,228,81,57,97,144,98,171,243,22,229,20,8,254,113,151,93,169,23,106,71,93,133,28,0,31,217,4,85,243,239,199,30,147,247,16,107,141,64,105,62,14,179,
4,79,97,98,25,55,1,234,106,106,25,226,153,253,230,35,190,138,153,222,72,126,125,224,254,7,200,182,204,155,164,72,54,29,22,104,150,253,49,24,253,193,123,239,17,218,176,221,130,220,124,16,160,86,181,161,
195,17,227,48,41,43,143,203,13,31,97,159,195,158,118,235,45,183,24,133,18,226,164,165,174,11,27,124,60,244,224,131,169,23,91,82,178,191,208,199,34,194,199,222,244,43,136,224,35,155,176,219,108,115,158,
126,90,243,113,196,74,243,113,248,5,157,194,196,50,216,68,182,133,31,254,247,223,255,233,19,31,129,163,196,122,2,71,49,22,199,18,199,39,220,124,227,77,178,45,233,72,212,220,220,188,122,163,134,2,70,231,
103,164,158,1,15,133,206,56,237,244,141,71,141,194,129,11,242,242,189,93,47,130,197,34,54,186,129,153,201,47,248,200,16,120,157,121,250,25,148,70,99,93,61,88,148,51,7,67,160,153,148,144,72,244,71,176,
73,33,83,236,253,227,35,32,38,68,125,234,191,79,232,252,122,196,74,243,113,248,133,75,116,81,170,139,143,161,1,241,17,95,197,76,62,18,7,177,54,214,201,22,224,35,155,107,107,107,147,13,138,36,168,52,246,
69,61,3,78,46,121,216,33,135,38,196,199,23,21,170,94,44,192,34,108,134,135,139,69,108,125,195,176,8,126,81,254,7,31,112,32,101,34,87,60,76,147,111,148,83,41,170,120,141,251,215,240,177,55,215,133,35,214,
111,242,81,173,214,34,169,8,173,145,32,205,199,225,23,46,33,156,26,32,31,241,210,168,241,35,104,251,234,139,47,89,167,92,127,148,39,216,96,162,153,107,139,79,202,20,70,126,248,225,135,210,210,82,87,166,
171,192,235,101,235,234,46,109,23,34,9,36,241,240,13,21,145,221,249,53,99,218,116,98,121,243,43,11,24,181,243,233,71,31,251,125,62,167,35,93,189,201,162,139,143,3,137,31,85,88,106,17,85,160,53,66,164,
249,56,252,194,37,132,83,114,253,17,99,98,76,242,107,137,113,74,252,197,181,43,107,88,103,83,83,19,219,146,151,176,154,33,36,76,20,159,36,180,148,103,192,31,125,244,209,248,184,56,95,87,240,8,31,241,106,
233,56,29,182,223,6,31,41,58,254,4,94,109,70,255,71,177,64,123,251,175,11,127,169,174,154,64,246,93,234,47,214,124,220,176,165,249,56,82,132,99,52,55,53,43,56,26,14,114,255,189,247,245,137,143,24,112,
148,17,147,143,184,159,203,233,220,101,167,157,101,157,117,117,117,12,229,253,225,114,33,210,100,34,91,151,17,116,218,169,167,110,188,209,70,80,213,157,233,82,143,220,121,11,88,149,80,50,236,219,191,5,
62,26,239,205,77,25,159,248,221,87,95,83,38,234,18,161,193,199,142,214,54,210,237,157,119,220,105,124,92,92,121,73,169,43,61,131,74,41,43,42,166,136,34,214,214,221,34,248,88,84,80,72,9,63,254,232,191,
84,210,176,250,182,153,206,181,71,144,52,31,71,138,112,6,248,168,146,107,156,162,51,116,247,29,119,146,193,9,31,25,74,156,210,51,31,77,51,249,152,101,60,39,55,251,248,227,37,103,151,215,175,10,25,37,149,
110,105,105,145,17,166,203,59,40,87,174,88,177,211,31,118,76,28,159,80,89,94,238,202,112,226,210,242,161,65,121,55,162,201,142,223,8,31,29,41,182,167,255,163,62,132,29,108,15,243,177,189,165,181,181,185,
229,47,127,62,194,150,148,92,82,228,231,188,69,249,80,47,253,227,35,167,192,135,31,124,72,243,113,196,74,243,113,164,8,103,8,199,143,184,97,123,251,45,55,222,20,193,71,194,67,172,55,121,156,152,201,199,
187,110,191,3,151,102,19,228,215,66,67,185,75,195,136,249,66,127,224,72,252,200,240,137,39,158,200,72,79,247,251,124,24,139,227,210,96,130,85,41,4,88,216,241,27,225,35,225,225,133,231,156,71,17,153,124,
148,103,13,175,188,226,10,10,86,222,111,86,82,232,99,54,51,120,239,193,186,243,49,37,49,233,222,187,239,225,116,168,249,56,50,165,249,56,82,132,99,192,71,117,41,202,112,194,235,174,249,123,102,122,134,
240,81,57,85,215,251,31,123,230,163,117,6,147,143,175,188,244,114,11,145,105,32,104,70,139,160,80,124,175,182,182,150,97,160,35,80,179,178,134,41,4,143,179,79,152,77,240,184,229,230,91,144,250,225,255,
184,52,241,145,240,49,236,222,134,159,99,230,70,55,24,147,227,50,77,29,184,59,235,192,125,246,83,213,99,156,183,168,26,121,99,197,131,247,255,147,170,201,241,100,149,248,252,165,62,127,106,82,114,196,
170,162,26,235,180,242,177,208,91,64,146,126,199,109,183,179,66,33,163,200,0,99,88,106,211,90,195,39,205,199,17,33,2,58,33,23,161,132,188,30,226,180,147,79,1,109,120,96,190,113,203,216,228,35,35,17,94,
103,154,61,57,5,151,206,206,116,87,151,87,226,177,204,73,132,82,152,239,93,182,100,41,192,237,96,27,93,91,145,248,209,188,224,104,142,204,125,243,45,210,106,235,221,106,175,113,91,156,149,11,31,77,179,
110,119,67,50,243,208,10,178,114,124,185,249,24,227,245,43,107,229,2,46,231,152,85,141,141,80,114,209,130,133,164,198,4,152,212,8,241,35,243,244,230,21,144,172,220,202,199,2,175,215,237,118,95,124,209,
197,106,205,22,9,25,69,106,171,12,52,39,135,73,154,143,35,66,226,24,50,46,239,239,57,234,200,35,137,224,132,143,210,61,123,157,124,116,218,29,240,49,199,248,28,2,67,149,30,102,56,55,159,49,163,163,181,
173,189,173,141,32,81,182,98,202,196,162,122,126,195,120,50,228,220,255,59,7,191,141,224,35,100,100,229,178,117,235,230,54,96,3,142,88,81,142,122,246,60,215,229,121,255,237,119,84,252,216,117,13,164,173,
165,181,169,161,113,98,69,149,186,44,155,231,165,204,25,233,7,31,243,114,243,156,78,231,153,103,158,201,154,195,85,98,72,200,40,10,195,81,35,114,152,164,249,56,204,10,187,129,33,194,19,245,159,129,170,
125,247,222,27,62,146,196,153,124,20,31,91,27,164,224,38,94,42,0,197,105,129,26,148,76,26,159,112,220,209,199,192,71,117,251,181,171,207,163,108,17,173,193,71,227,157,225,192,212,110,179,117,231,227,111,
10,142,152,240,17,243,122,178,221,142,140,43,47,187,92,30,190,70,42,12,167,184,130,157,71,28,114,152,45,33,137,228,154,249,61,25,78,235,226,107,179,238,124,76,75,75,59,234,168,163,88,101,24,141,134,194,
213,99,104,53,28,195,109,68,107,72,165,249,56,252,146,156,87,141,116,61,228,71,8,185,203,78,59,123,140,143,228,153,124,148,200,113,109,156,18,132,201,60,128,18,131,143,113,99,198,222,114,227,77,234,230,
181,113,135,20,127,179,186,159,201,71,124,30,34,255,231,241,199,201,25,189,93,111,54,20,56,202,106,197,172,155,219,176,77,224,152,235,116,51,204,201,116,31,126,208,193,45,141,77,66,40,117,35,133,242,12,
4,175,187,250,154,141,71,141,162,144,41,106,248,40,81,118,207,22,193,199,220,156,156,84,155,109,255,253,247,111,110,110,22,50,138,194,213,99,72,243,113,120,165,249,56,252,82,110,96,142,24,95,59,33,148,
155,92,61,81,185,80,86,182,242,37,144,231,81,207,11,246,140,42,166,75,71,60,87,122,6,35,120,99,74,98,210,91,111,188,33,43,55,101,248,157,146,252,89,91,91,43,207,20,238,241,199,221,5,199,44,40,198,58,11,
137,31,179,13,251,141,241,177,48,43,39,63,211,195,144,44,123,139,105,155,46,152,55,159,178,82,31,200,237,8,200,229,136,55,95,125,45,101,124,98,73,161,15,62,102,57,93,100,217,17,43,233,110,17,124,44,241,
23,103,185,61,219,110,51,107,233,226,37,214,171,31,225,234,49,164,249,56,188,210,124,28,113,34,148,195,97,138,139,252,38,31,25,230,184,61,146,62,247,192,199,236,76,119,69,113,41,67,230,36,156,193,38,77,
168,94,180,96,97,120,189,93,10,123,158,193,71,134,77,77,77,56,252,231,159,126,154,148,144,232,243,22,224,192,66,70,177,48,28,13,51,39,110,240,38,124,44,112,103,99,197,128,47,43,231,181,151,213,219,215,
85,7,128,46,62,126,245,217,23,37,62,213,255,145,226,242,56,93,126,227,43,20,61,91,4,31,41,237,28,79,214,140,105,211,191,255,246,59,205,199,145,41,205,199,17,167,85,245,13,223,126,245,117,102,122,134,233,
72,240,209,140,31,229,106,96,132,227,137,57,237,142,9,101,229,228,122,190,60,47,67,92,119,247,93,119,83,239,190,94,187,72,237,113,200,85,141,141,179,143,63,30,62,250,125,62,79,166,75,243,81,242,107,245,
214,116,119,86,89,161,223,145,108,187,225,239,215,82,92,170,3,191,228,215,157,161,154,229,43,118,221,105,103,91,82,114,97,190,151,202,130,143,214,114,139,106,17,124,84,167,61,79,86,89,113,201,220,55,223,
210,124,28,153,210,124,28,17,10,123,131,17,211,173,92,182,252,195,247,63,72,28,159,96,117,164,222,228,215,246,228,20,248,152,153,150,78,210,7,43,201,178,15,57,240,32,197,199,181,120,23,155,147,75,159,
117,117,117,164,213,69,5,133,4,173,42,98,181,220,34,255,45,243,49,207,229,201,113,186,171,138,75,199,143,30,123,242,9,39,82,80,77,171,154,224,99,192,184,92,27,10,118,30,253,151,163,198,252,110,52,124,
204,72,115,16,12,246,134,143,86,227,84,164,106,54,43,123,206,211,79,195,199,142,128,50,48,41,45,1,169,139,45,82,119,107,169,65,173,193,150,230,227,48,43,236,10,93,194,13,112,191,75,46,186,56,45,213,110,
242,81,5,29,93,216,90,27,28,177,28,151,135,252,26,62,18,203,128,200,196,184,248,127,222,123,159,4,59,107,243,46,181,197,80,232,252,243,207,119,216,211,220,198,103,239,179,221,171,63,117,207,182,126,155,
124,84,150,149,147,157,225,42,45,240,49,66,193,78,159,52,165,161,182,78,58,135,115,202,145,62,88,143,61,242,232,239,54,222,24,192,77,157,60,197,233,72,7,121,145,43,233,102,214,121,178,51,221,5,185,249,
196,158,127,61,67,117,241,81,55,198,59,212,106,195,45,1,56,106,62,14,183,52,31,135,89,226,12,225,204,42,16,108,111,83,125,113,78,60,97,54,137,91,84,62,246,96,184,113,89,81,49,124,148,78,121,238,12,231,
59,111,205,85,241,163,225,105,162,240,86,13,181,24,90,188,120,241,110,187,238,154,158,230,128,143,229,37,165,246,20,155,233,195,191,105,62,102,171,158,143,240,81,58,54,82,158,223,124,254,37,144,162,60,
85,240,104,232,173,55,222,200,204,80,239,27,159,80,89,37,207,170,155,102,93,79,119,147,248,148,226,165,78,137,34,143,58,242,72,170,134,224,177,157,240,209,168,35,85,83,154,143,35,64,154,143,195,44,131,
90,74,194,71,124,111,85,125,195,14,219,109,79,64,103,229,227,58,93,14,179,242,145,241,25,83,166,45,91,188,68,69,58,107,225,163,232,159,255,252,103,126,126,62,78,142,85,150,151,147,42,202,182,240,222,223,
56,31,177,194,220,124,79,134,147,114,112,165,103,60,116,255,63,41,46,121,186,73,21,105,40,180,98,249,242,41,147,38,169,139,143,62,95,142,39,75,157,198,12,91,39,34,133,143,172,156,217,0,235,204,173,183,
86,215,31,141,234,233,80,173,192,24,213,124,28,1,210,124,28,102,225,9,128,81,134,120,6,83,22,47,90,36,119,54,251,202,71,34,29,147,143,105,41,182,253,247,222,39,220,171,121,237,124,236,104,111,63,232,192,
3,147,147,146,242,115,243,196,195,213,7,21,140,20,62,204,71,19,145,107,207,235,55,84,131,95,12,229,122,110,70,106,218,57,127,61,75,158,194,166,220,26,27,26,84,164,31,8,254,126,187,237,225,35,69,71,1,246,
190,190,132,143,121,238,44,194,82,78,72,132,237,234,158,184,33,82,236,112,77,105,62,142,0,105,62,14,191,0,163,12,229,217,222,87,94,122,57,41,33,177,168,160,176,247,254,38,150,229,116,201,147,133,204,140,
215,93,126,201,165,240,177,174,198,120,118,56,154,119,177,173,47,63,255,194,229,116,178,137,66,227,83,206,246,228,148,138,146,82,86,37,112,140,48,235,182,126,11,38,93,26,85,153,20,151,194,199,237,183,
217,54,92,112,84,150,244,242,9,133,206,253,191,115,210,82,237,185,198,171,54,123,95,95,194,199,226,252,130,50,159,159,250,74,183,167,189,253,214,92,181,90,163,37,104,62,142,28,105,62,14,191,228,38,178,
240,145,145,235,174,249,123,226,248,4,233,255,216,75,127,19,195,211,136,28,85,114,237,246,128,215,231,230,60,203,218,154,87,25,15,126,24,81,79,132,112,242,27,175,191,97,124,92,28,51,19,51,130,3,88,64,
4,202,170,34,200,40,102,221,214,111,193,40,73,66,114,206,58,254,130,66,178,236,105,147,166,44,91,188,68,21,156,65,43,66,239,214,214,86,10,153,10,2,142,234,190,127,175,235,75,248,232,207,245,150,120,85,
175,73,103,154,227,190,187,239,49,235,72,243,113,228,72,243,113,248,21,193,199,125,247,222,219,110,179,169,215,154,245,218,223,76,195,153,43,75,203,220,25,206,205,55,157,177,228,215,197,172,77,221,76,
192,203,194,87,183,214,208,252,121,243,182,221,102,150,59,211,69,240,72,46,153,107,124,210,43,130,131,191,101,62,170,228,55,53,173,212,231,151,146,161,136,222,157,251,54,229,38,93,74,3,29,129,218,154,
218,165,139,151,84,150,151,3,71,138,177,247,245,37,124,244,122,178,125,185,249,69,121,94,234,235,132,99,143,107,51,174,108,74,99,80,178,146,81,76,107,200,165,249,56,252,50,201,5,31,3,237,237,211,166,76,
205,241,100,73,218,187,78,127,99,186,105,190,124,175,195,102,159,82,61,145,228,122,167,63,236,72,120,88,95,171,62,168,128,107,49,110,110,69,174,114,50,241,157,185,111,167,38,167,228,231,230,165,165,216,
136,149,8,30,39,85,78,112,165,103,88,215,252,91,230,163,181,76,128,35,172,252,207,99,143,83,114,242,178,97,202,115,217,178,101,132,231,147,38,84,251,188,5,17,253,177,40,186,136,181,89,77,248,152,147,233,
86,175,80,51,226,253,29,182,219,94,58,15,153,15,197,175,198,162,152,214,112,72,243,113,68,72,46,60,33,152,5,221,212,77,228,94,92,239,23,132,241,171,105,222,220,60,167,35,221,150,148,252,183,203,46,103,
109,109,198,167,102,16,201,32,201,90,19,241,169,193,74,213,73,165,61,112,236,81,71,3,98,144,202,74,228,94,4,201,53,73,186,185,102,49,115,115,191,53,147,50,17,227,244,144,20,159,112,242,108,213,75,92,186,
76,33,117,167,185,35,112,209,249,23,196,143,29,215,143,251,105,68,166,196,251,197,198,91,202,43,74,203,222,125,251,29,243,28,166,129,56,66,164,249,56,34,36,124,108,111,107,187,235,206,59,129,35,193,163,
223,231,91,167,191,49,81,97,177,107,54,82,114,185,171,227,176,167,189,244,252,11,248,24,57,160,172,95,221,76,16,62,6,153,170,182,213,210,216,180,235,78,59,103,187,61,30,167,75,94,210,133,89,249,40,192,
253,45,243,209,26,50,147,95,19,75,30,126,200,161,234,74,133,97,10,142,198,179,52,143,60,244,48,112,236,83,126,45,38,151,53,41,124,170,128,138,120,224,159,255,52,67,123,205,199,17,34,205,199,17,164,154,
149,53,251,239,187,31,153,26,164,83,175,138,88,151,191,69,240,17,43,241,23,227,105,83,39,79,169,93,89,35,55,88,37,36,105,109,109,197,165,21,31,145,113,31,224,219,47,191,42,200,203,103,102,178,114,243,
221,10,154,143,86,51,175,42,48,164,88,136,242,118,217,113,167,186,154,90,43,31,219,90,90,231,253,240,227,230,51,102,112,86,91,93,17,189,43,55,86,155,153,150,78,153,3,223,212,228,148,99,143,62,166,190,
190,126,117,8,169,53,2,164,249,56,252,50,147,235,69,191,252,50,121,226,68,162,191,170,138,74,149,175,89,32,21,213,223,194,20,235,114,75,50,235,178,226,146,164,132,196,195,15,61,12,191,37,185,102,205,178,
114,248,72,38,168,238,101,163,64,176,189,169,229,191,143,61,78,102,157,235,201,194,63,137,98,242,61,234,225,156,168,124,52,205,220,238,111,199,64,152,188,54,137,97,142,219,179,229,102,155,47,94,180,200,
228,99,71,123,187,92,52,220,125,183,221,236,54,155,89,17,82,110,17,171,234,110,172,211,105,119,148,251,75,72,228,147,19,18,55,155,190,233,47,11,35,95,182,164,53,188,210,124,28,126,169,139,131,70,208,240,
210,11,47,164,167,57,32,35,97,160,188,71,167,103,54,49,221,202,71,121,0,102,212,168,81,183,253,227,86,224,216,214,214,38,124,36,36,81,143,103,116,4,204,103,63,58,90,90,207,58,237,140,180,20,27,158,89,
152,147,231,78,75,207,115,103,85,248,75,10,178,114,4,148,230,154,243,45,239,202,93,219,110,108,168,6,191,40,31,78,24,240,145,16,143,64,155,160,158,104,81,206,52,148,170,92,181,192,46,60,239,124,2,64,179,
34,122,201,71,78,75,18,63,146,98,147,188,19,159,190,254,202,171,170,130,180,70,140,52,31,135,95,248,27,195,250,218,186,43,175,184,66,238,204,228,26,111,190,90,167,143,69,240,209,229,116,146,152,227,168,
239,189,251,46,174,107,188,11,38,44,156,153,144,71,222,170,16,108,15,172,170,171,63,228,128,3,9,94,252,249,5,194,71,95,110,190,122,214,56,195,37,95,164,178,242,81,12,68,254,6,249,40,93,32,133,143,128,
204,149,225,252,254,219,239,76,62,18,149,203,69,140,199,31,253,87,118,95,250,135,139,101,57,93,172,188,40,191,192,111,124,231,139,112,254,154,43,175,10,95,3,209,26,25,210,124,28,126,65,46,134,223,126,
245,245,118,179,182,37,71,150,206,34,242,64,75,132,71,69,88,4,31,49,22,220,114,243,45,64,45,49,169,96,17,74,42,80,178,9,254,50,54,20,104,107,39,191,222,107,183,221,9,88,74,10,125,132,72,174,180,116,66,
24,70,210,109,246,98,175,242,85,245,136,97,23,25,127,203,124,4,94,32,76,162,200,73,149,19,198,143,139,251,250,139,47,41,70,51,126,84,137,118,71,224,127,63,254,52,109,202,212,213,21,97,84,141,42,198,110,
235,180,26,235,15,71,166,198,23,34,217,208,206,127,216,177,251,251,140,181,134,81,154,143,195,47,193,214,220,55,223,34,120,36,173,134,68,73,227,19,74,124,254,222,240,209,250,216,70,89,113,201,248,184,
184,227,142,62,166,181,185,5,32,130,69,249,160,171,124,254,137,173,200,134,100,184,255,222,251,164,167,166,21,23,250,228,101,145,114,229,209,145,98,99,68,193,145,108,90,243,209,194,71,98,189,77,39,79,
29,53,106,212,231,159,126,202,153,70,248,168,46,140,24,129,63,69,188,251,110,187,153,21,161,78,90,221,122,218,119,55,230,33,114,100,205,204,201,38,216,80,150,203,253,205,151,95,177,78,173,17,34,205,199,
225,83,103,216,106,86,172,192,229,102,31,127,252,232,77,54,153,54,105,202,248,177,227,138,188,202,45,35,220,169,187,225,96,240,17,131,95,196,155,240,17,7,254,239,191,255,67,142,134,247,182,181,181,169,
219,50,65,5,74,245,230,213,14,35,138,100,131,157,157,139,126,249,229,141,215,95,183,37,37,147,21,2,68,214,195,218,8,39,51,211,210,217,116,119,56,98,191,65,62,78,155,56,137,50,161,112,132,146,137,113,241,
149,101,229,111,188,250,26,101,216,210,212,76,49,82,158,234,100,211,169,30,226,188,245,150,91,226,198,140,221,124,198,12,135,61,77,157,180,140,231,109,132,125,107,51,74,158,213,98,140,240,103,106,82,242,
196,170,9,71,29,121,36,1,105,99,67,3,91,9,95,24,233,146,106,51,90,67,43,205,199,97,82,23,28,149,133,66,11,230,255,188,227,14,59,56,82,237,4,20,196,113,68,46,17,190,26,213,112,194,28,79,150,201,71,25,190,
247,246,59,17,241,99,132,216,92,115,115,51,136,220,116,218,244,138,210,50,16,16,63,102,108,185,191,4,115,216,236,240,209,100,162,213,126,131,124,180,39,167,76,172,168,98,132,176,186,178,180,140,194,153,
52,161,122,85,189,34,151,240,17,65,70,85,153,129,224,235,175,188,154,153,158,65,65,169,7,159,136,61,61,234,222,78,207,124,164,192,205,17,102,118,103,56,169,202,237,102,109,75,64,26,142,244,229,173,78,
154,146,195,39,205,199,97,146,133,143,56,195,237,183,222,134,107,145,92,103,58,194,29,226,228,154,84,207,22,193,71,210,243,189,246,216,115,217,146,165,172,208,236,252,8,34,37,191,70,192,81,198,229,167,
79,62,250,184,196,95,156,16,31,191,213,230,91,36,39,36,58,29,233,155,78,157,70,106,47,64,140,176,223,32,31,211,109,118,234,34,35,53,13,132,77,174,170,78,25,159,248,199,93,118,149,155,105,194,71,70,194,
183,83,58,85,150,189,237,54,179,198,199,197,81,17,170,111,150,81,131,61,240,17,32,50,131,140,19,159,50,238,51,190,99,227,206,116,61,253,196,147,172,82,106,80,42,78,113,177,75,106,115,90,67,37,205,199,
97,146,129,197,48,34,131,157,123,237,190,7,193,99,121,73,41,62,89,85,82,86,100,124,224,63,194,93,77,195,247,196,8,82,172,124,76,28,159,112,230,233,103,200,234,155,141,126,121,136,20,27,44,138,155,9,31,
201,187,37,138,196,213,159,155,243,236,212,201,83,198,142,30,67,32,201,122,24,169,170,168,180,98,209,180,13,158,143,28,93,119,163,22,200,127,213,157,153,177,227,188,57,121,47,60,251,156,244,145,130,143,
242,108,18,5,10,34,101,226,169,39,157,252,187,141,55,166,36,57,207,81,59,235,140,31,61,25,78,201,175,25,97,126,88,76,33,115,146,59,248,128,3,229,17,198,149,43,86,144,7,168,44,222,34,54,164,53,100,210,
124,28,38,209,230,141,91,159,140,126,240,206,187,56,9,233,21,201,117,33,158,147,101,124,21,171,203,139,34,220,24,35,251,14,155,39,203,95,232,243,25,25,113,158,209,191,231,225,7,31,146,183,203,180,180,
168,119,40,32,80,136,83,9,31,145,25,66,226,117,114,145,235,63,143,63,62,185,122,34,120,101,13,118,155,109,66,101,149,21,139,166,109,216,124,20,26,170,251,42,22,35,166,166,100,136,169,179,92,238,148,196,
164,107,174,188,138,147,153,116,8,111,107,105,149,155,51,212,160,105,255,126,236,49,102,243,230,229,83,152,194,86,19,133,81,45,51,45,93,206,115,140,64,82,226,71,22,148,28,226,203,79,63,103,229,108,75,
189,11,195,232,98,41,47,197,208,26,98,105,62,14,143,228,2,19,237,190,165,177,233,172,211,206,72,77,74,38,201,42,246,22,86,248,75,50,82,236,240,81,222,12,24,213,196,169,196,128,163,188,9,141,64,114,250,
212,105,95,127,241,165,114,39,35,59,147,176,81,130,14,5,68,67,50,209,24,83,247,22,22,254,188,0,94,126,254,233,167,211,166,76,5,142,213,85,19,226,198,140,141,32,163,216,6,207,71,197,68,243,6,180,97,28,
53,192,26,53,106,84,137,191,248,222,187,239,145,43,143,18,245,67,67,226,71,85,178,198,73,78,236,251,111,191,163,0,201,145,75,253,197,172,48,130,134,17,38,219,133,161,24,245,168,174,56,51,209,120,139,187,
61,57,229,166,235,110,32,38,229,84,167,249,56,188,210,124,28,38,25,20,195,229,62,253,232,227,201,19,170,9,31,240,22,242,172,242,162,98,143,35,35,207,248,50,148,184,80,119,91,237,99,134,71,225,201,56,149,
199,229,62,252,208,195,88,167,56,18,248,51,243,104,100,64,82,41,12,71,212,5,104,28,27,39,255,226,179,207,247,219,103,31,249,232,141,21,139,166,253,6,249,88,85,81,73,169,146,47,95,122,241,37,70,41,26,61,
13,140,152,81,93,21,33,54,55,138,206,52,112,70,106,156,148,144,88,94,82,74,213,152,213,20,213,36,186,148,147,156,140,203,213,18,202,217,227,116,209,36,62,255,228,83,29,63,14,187,52,31,135,83,243,231,205,
123,224,190,251,19,198,197,85,148,148,226,21,202,73,92,158,202,226,82,119,90,58,177,100,132,15,155,198,108,234,114,190,113,141,18,175,22,56,186,51,93,226,198,203,150,44,197,123,201,254,228,249,66,217,
80,152,142,107,242,49,236,114,198,23,101,249,127,209,130,133,179,143,63,94,222,8,217,221,76,62,178,117,204,186,63,235,175,113,68,166,117,231,227,232,77,54,217,97,187,237,85,135,196,206,80,237,202,26,197,
68,163,231,163,20,23,162,144,173,124,132,155,103,159,249,215,241,113,113,196,143,234,212,181,46,131,140,100,214,146,101,83,149,57,46,79,182,219,83,144,151,63,177,162,138,160,245,254,123,238,5,184,109,
205,45,172,153,77,203,219,115,181,134,88,154,143,67,167,214,174,183,49,170,17,35,40,248,249,127,243,39,87,79,84,158,105,24,94,42,244,49,45,194,159,49,38,226,78,210,35,4,31,83,47,224,49,174,63,146,214,
253,248,253,15,234,190,170,17,24,130,63,20,134,98,52,73,126,173,124,222,112,123,134,120,35,233,246,131,247,255,147,40,146,140,50,45,213,238,114,58,139,10,10,225,47,35,37,69,254,34,175,186,205,42,193,78,
196,94,141,124,163,208,204,94,83,144,136,3,161,12,41,186,140,52,71,58,81,115,118,14,227,126,159,79,30,19,244,230,229,19,6,222,120,253,13,20,169,138,22,141,180,90,21,151,81,162,225,208,155,98,51,74,88,
21,181,97,245,181,117,223,125,243,13,139,179,18,202,205,233,72,103,72,185,113,106,137,98,6,34,205,138,198,136,31,49,53,61,59,167,164,208,199,72,64,94,84,14,142,141,218,9,87,22,166,53,84,210,124,28,58,
17,208,49,36,231,37,47,147,135,46,30,126,240,33,232,99,6,44,120,105,132,207,136,63,91,141,137,184,186,188,177,17,84,21,230,123,139,139,252,240,107,243,25,51,128,163,242,34,3,118,202,143,123,84,4,31,161,
128,128,128,64,233,189,183,223,153,50,105,18,49,105,174,241,217,0,156,156,173,168,253,204,202,150,190,153,24,227,152,117,199,70,190,81,92,254,130,66,12,56,58,82,108,73,241,9,89,46,247,212,201,83,40,121,
50,98,206,49,112,141,195,76,28,159,176,239,222,123,127,246,241,39,75,141,175,205,200,249,70,248,40,69,199,159,166,84,73,138,12,122,178,200,150,155,111,193,169,69,206,43,172,147,17,9,192,35,76,16,25,181,
162,169,92,202,54,59,211,253,242,243,47,180,183,180,42,62,26,21,20,174,44,49,173,33,145,230,227,208,73,174,6,54,53,169,30,197,77,198,167,20,14,57,232,32,188,177,175,124,196,207,139,136,225,92,30,117,191,
59,223,139,7,226,144,231,156,125,182,114,33,113,164,158,2,199,176,34,248,136,31,170,78,42,134,227,1,89,146,244,189,246,216,147,149,203,29,27,40,89,89,86,78,120,43,112,180,242,49,234,78,142,76,3,139,233,
54,59,198,200,180,137,147,42,141,46,77,118,155,141,19,140,116,60,228,52,51,99,218,244,59,110,187,157,18,80,9,53,162,144,140,108,122,109,124,68,50,17,181,54,183,112,138,58,239,156,115,199,252,110,52,17,
40,245,194,57,134,50,140,32,163,88,207,124,164,138,109,9,73,135,31,124,104,205,242,21,236,128,108,61,92,89,98,90,67,34,205,199,161,19,65,6,195,218,218,90,134,141,13,13,95,127,241,101,89,113,73,196,123,
3,123,195,71,73,114,137,47,74,124,126,87,134,122,103,15,43,121,234,191,79,24,219,80,105,187,233,201,61,40,130,143,205,171,154,112,111,16,41,23,37,229,145,199,191,93,118,185,68,142,240,151,8,139,205,73,
240,197,214,217,13,65,100,212,157,28,153,198,25,133,188,21,99,196,105,119,228,184,61,28,29,150,154,156,146,155,157,13,203,142,57,234,104,117,245,182,235,62,12,162,52,84,129,72,145,174,139,143,50,219,179,
207,204,97,133,0,183,196,95,12,112,169,157,8,50,138,245,192,71,21,231,26,159,6,99,63,23,254,239,231,206,246,128,50,43,31,181,134,74,154,143,67,42,179,91,34,190,116,235,45,183,100,88,95,58,221,59,62,98,
248,79,153,241,58,9,60,188,32,47,159,192,103,210,132,234,249,243,230,9,233,196,122,35,102,3,136,146,86,155,11,98,16,193,204,230,30,121,232,225,201,213,19,167,77,153,138,195,231,122,178,128,178,108,29,
74,10,31,249,83,70,196,34,118,117,68,25,65,119,150,211,133,49,66,240,8,238,41,127,78,45,85,21,149,179,102,206,124,249,165,151,229,17,117,140,17,211,58,218,219,165,171,35,67,170,79,78,114,107,85,176,243,
155,47,191,154,80,89,69,113,73,88,26,129,69,211,34,248,104,181,92,163,247,2,136,140,219,120,244,51,255,121,162,179,181,61,212,17,84,95,197,208,100,28,114,105,62,14,169,76,62,146,136,29,113,216,225,41,
137,73,17,223,185,238,13,31,193,80,69,177,250,138,191,199,233,34,67,196,201,89,85,125,109,157,149,113,189,145,218,15,35,127,148,148,220,52,117,17,211,80,99,93,61,62,185,104,193,194,173,182,216,50,219,
237,129,143,206,52,7,27,45,46,244,21,121,11,36,209,54,65,57,242,249,56,161,172,60,238,119,99,48,70,228,171,132,164,192,28,218,245,215,94,75,117,128,69,193,31,90,93,62,93,146,231,142,122,134,163,10,241,
66,161,186,154,90,226,80,78,90,64,144,218,193,172,88,52,173,7,62,122,28,25,240,177,170,184,52,97,204,184,43,47,185,44,216,210,22,130,141,237,225,174,90,90,67,41,205,199,33,149,201,71,188,104,230,150,91,
73,124,209,87,62,18,196,85,151,87,2,166,76,71,122,73,145,159,228,247,129,251,238,87,206,105,97,92,111,36,123,194,136,250,204,161,101,89,53,209,232,205,135,73,116,185,114,217,242,125,255,180,55,129,100,
150,203,173,238,246,102,101,155,124,36,22,91,95,248,72,196,93,234,243,99,140,108,52,106,20,165,253,183,203,46,151,94,223,141,13,13,77,198,155,38,32,160,186,129,214,245,32,102,171,33,106,77,208,201,12,
61,136,5,100,68,190,216,69,114,205,201,143,180,221,138,69,211,122,224,99,118,134,43,199,233,46,47,42,206,76,75,223,109,199,157,229,186,176,92,6,213,26,98,105,62,14,169,76,62,46,93,188,100,198,180,233,
210,5,164,175,124,244,100,56,9,127,252,5,133,25,169,105,211,38,79,33,126,252,228,195,143,250,193,199,230,230,240,51,218,140,91,151,85,239,92,144,224,210,136,43,161,164,4,146,123,237,177,103,89,113,9,56,
6,235,138,143,70,127,20,70,70,50,31,205,238,141,24,167,19,138,23,99,228,200,195,255,252,195,119,223,115,116,13,117,245,225,91,49,70,237,168,232,177,75,82,74,34,254,148,121,228,246,90,84,81,5,138,98,193,
206,185,111,190,69,109,146,185,87,150,151,67,73,198,35,224,136,245,192,199,162,60,111,106,66,82,158,59,171,188,184,164,48,223,43,61,31,77,248,106,13,165,52,31,135,78,184,153,234,249,104,92,201,250,241,
251,31,36,179,150,94,32,107,243,153,8,111,23,35,114,36,2,42,41,244,193,35,71,170,29,108,169,140,216,2,56,172,127,146,253,92,155,154,87,53,29,253,151,163,96,186,195,158,70,20,57,161,162,178,32,47,95,189,
139,193,210,127,211,186,255,17,187,61,100,38,41,127,161,209,63,148,189,37,195,245,83,86,217,57,156,72,226,199,142,219,102,171,173,159,121,242,41,14,7,226,116,135,78,184,32,122,84,120,214,110,146,27,205,
114,46,217,110,214,182,73,9,137,84,174,116,168,52,171,216,180,30,248,200,158,203,91,220,147,19,18,183,153,57,243,171,175,190,162,62,59,186,30,133,210,26,74,105,62,14,157,112,45,147,143,203,151,46,171,
170,168,196,99,173,253,227,122,201,71,156,159,36,145,44,219,151,239,77,26,159,112,225,121,231,43,159,68,125,231,35,51,90,231,85,43,89,187,150,252,186,152,88,230,152,163,142,206,204,80,87,238,216,121,121,
220,88,69,190,209,226,223,136,221,30,50,35,229,167,124,210,109,246,212,164,100,121,47,81,226,248,4,134,222,188,252,147,102,159,248,217,199,159,8,194,228,246,75,248,216,186,20,46,136,30,21,158,181,187,
58,213,21,91,137,34,207,59,231,92,121,215,25,27,141,122,9,178,7,62,58,237,14,246,159,90,166,108,167,76,158,178,116,217,178,246,128,113,239,60,188,25,173,161,147,230,227,208,137,22,110,242,177,181,185,
101,214,204,153,182,164,100,191,207,215,131,207,68,120,190,24,193,99,69,113,105,102,90,58,41,54,225,201,155,175,189,222,34,111,51,195,129,186,204,112,228,117,72,224,104,69,164,90,73,15,10,170,47,174,4,
3,193,147,79,58,9,231,47,241,23,167,36,38,245,112,125,32,98,183,135,204,50,82,211,114,221,89,83,170,39,150,251,75,212,117,198,156,156,25,211,166,3,169,219,111,189,237,215,133,191,80,56,65,11,25,37,143,
150,113,36,229,208,179,194,179,70,147,116,12,34,156,127,110,206,179,156,63,168,29,74,169,175,124,164,102,9,33,97,171,51,35,99,214,182,219,182,117,180,183,182,183,5,216,53,163,110,181,134,82,154,143,67,
39,92,203,228,35,160,217,119,239,189,237,54,91,207,62,19,225,249,98,68,22,36,215,170,171,77,190,23,207,87,119,174,187,158,66,51,77,60,185,7,9,22,241,58,204,68,164,177,155,107,21,100,172,175,175,7,40,45,
45,45,199,31,119,220,38,163,54,2,142,248,63,123,110,229,227,106,91,115,183,7,213,172,215,25,157,105,142,226,66,78,59,94,119,134,179,188,164,52,53,57,101,135,237,182,127,233,249,23,228,40,128,151,53,179,
150,135,154,76,25,197,176,14,133,103,141,166,134,186,122,5,223,246,246,197,139,22,205,220,114,43,16,201,249,175,175,124,244,229,121,57,132,234,202,42,91,74,202,49,199,29,203,106,85,252,72,249,27,117,171,
53,148,210,124,28,58,225,90,38,31,25,94,123,245,53,30,151,219,97,79,235,193,103,34,40,32,38,93,14,137,77,240,252,51,79,63,67,5,143,17,207,231,246,206,141,152,171,79,94,39,119,120,97,59,124,108,94,213,
116,220,209,199,56,141,175,45,130,233,48,31,141,11,109,234,40,140,3,81,151,35,135,196,4,139,208,89,108,250,148,169,4,230,142,84,123,186,61,141,61,60,231,236,179,205,135,97,72,126,133,95,252,5,25,5,142,
66,189,222,75,173,170,155,152,174,238,233,72,30,108,108,232,212,147,78,230,252,7,31,205,194,145,242,89,91,93,155,70,216,155,24,23,95,234,47,142,27,55,238,190,251,239,95,213,220,12,31,25,106,62,14,189,
52,31,135,78,120,142,240,81,37,119,193,206,57,79,63,189,249,140,25,120,114,15,62,19,1,2,49,226,11,34,163,2,227,61,172,79,63,241,36,100,148,27,205,97,50,138,245,66,204,213,215,168,164,174,174,14,8,192,
119,16,211,222,210,186,223,62,251,36,37,36,18,69,122,141,119,80,70,248,255,80,242,81,145,177,139,65,99,71,143,145,27,199,21,165,101,247,223,123,159,113,156,10,88,156,72,194,103,17,203,237,96,16,169,152,
215,23,201,130,81,197,175,1,114,119,131,191,143,61,242,40,59,99,150,140,152,181,124,214,198,199,234,242,202,212,164,100,42,183,176,160,224,253,15,62,32,185,238,8,6,155,219,90,53,31,135,94,154,143,67,39,
200,2,31,149,11,25,239,13,92,248,243,130,195,14,57,212,154,98,247,146,143,88,142,219,3,17,102,205,156,185,108,201,210,48,31,251,238,58,138,27,125,225,35,110,207,33,128,72,198,205,199,16,119,220,97,7,220,
158,40,178,187,255,15,23,31,129,99,252,216,113,187,239,182,219,207,255,155,207,78,174,170,111,128,140,178,195,128,146,226,226,207,65,226,35,146,248,154,245,207,159,55,79,186,112,153,59,134,89,203,103,
109,124,228,252,151,235,201,34,55,63,232,192,3,235,27,27,128,163,90,173,145,98,107,62,14,177,52,31,135,78,194,71,134,100,97,252,9,34,79,63,245,84,194,156,176,183,24,64,137,112,149,238,32,192,128,99,113,
161,143,228,241,192,253,15,192,15,85,255,56,121,45,69,31,133,179,153,214,27,41,183,55,34,163,230,230,102,9,33,161,115,83,99,35,33,146,175,48,74,8,41,123,219,123,139,56,216,232,102,188,7,108,245,34,70,
22,143,89,249,72,145,94,118,201,165,225,15,237,119,174,14,21,25,161,148,40,118,21,107,199,58,191,22,241,43,235,92,101,124,180,171,190,182,110,255,125,247,243,184,220,230,142,97,114,59,91,93,145,48,118,
94,170,88,234,90,58,36,97,41,227,19,171,202,202,137,130,111,188,241,198,166,230,102,115,123,189,175,41,173,88,73,243,113,232,4,24,101,24,246,177,206,16,33,164,188,139,127,98,69,149,51,205,161,156,36,39,
47,61,217,54,165,170,58,211,174,254,180,162,193,4,1,14,230,47,244,145,152,63,251,204,28,66,81,229,246,198,35,195,106,157,67,40,131,21,74,75,150,44,153,181,205,172,76,167,51,59,43,11,255,207,241,100,177,
111,4,113,38,247,123,101,6,26,132,20,17,198,177,103,57,213,23,175,42,74,74,11,242,242,179,92,110,233,213,200,82,114,145,129,210,200,76,207,128,68,108,154,233,111,190,246,186,220,167,86,82,133,29,150,241,
247,224,138,228,90,152,203,137,16,74,206,121,102,78,90,90,154,191,200,159,155,147,131,21,251,139,165,124,84,184,157,157,163,62,200,101,188,18,137,161,43,61,131,195,247,23,20,114,80,28,2,136,47,242,249,
26,26,26,100,183,27,86,41,224,106,56,14,189,52,31,135,78,194,71,92,200,248,67,69,124,237,45,173,167,157,124,10,190,225,201,112,22,25,223,159,41,200,202,201,74,119,86,21,151,122,28,25,130,6,211,204,40,
73,146,217,18,127,241,215,95,126,5,22,145,138,73,163,61,53,60,168,146,205,161,198,198,198,159,126,250,105,226,196,137,30,143,167,180,88,189,116,214,239,243,89,251,189,247,198,4,145,86,44,154,54,109,226,
164,146,66,31,165,148,150,98,131,29,24,76,44,43,46,97,41,198,97,37,208,41,42,40,4,145,7,236,183,255,130,249,63,3,71,233,240,68,168,24,222,69,67,178,219,131,42,169,8,70,136,181,209,199,31,127,92,93,93,
157,159,159,159,99,200,139,56,214,174,248,145,10,205,206,116,83,179,128,82,58,60,130,126,169,217,244,52,199,133,23,92,64,193,178,42,106,183,165,77,93,182,214,26,122,105,62,14,157,196,115,36,69,13,191,
46,63,216,249,209,251,31,16,22,145,82,225,33,254,252,130,156,76,183,63,215,91,68,146,234,242,128,134,168,124,132,62,105,169,246,195,15,61,172,177,161,97,36,240,145,241,250,250,250,5,11,22,16,40,145,21,
66,46,121,117,13,44,192,172,16,236,193,214,198,71,14,156,161,79,62,38,97,124,239,27,35,188,178,219,108,128,152,5,97,77,106,114,74,70,154,227,150,27,111,90,227,82,172,241,234,13,117,169,183,75,198,212,
193,146,117,19,212,5,112,100,132,98,57,240,192,3,221,110,183,240,145,248,58,39,91,193,17,68,18,249,174,141,143,28,93,161,183,224,127,243,230,201,169,148,80,84,46,65,106,13,189,52,31,135,78,184,13,67,225,
35,62,188,114,217,114,245,103,75,235,241,71,31,147,110,179,227,42,249,158,108,130,199,202,162,146,92,167,219,235,137,124,181,162,201,71,28,44,126,236,184,59,110,187,157,248,8,89,249,168,214,60,84,18,34,
32,9,115,96,193,23,95,124,81,86,90,154,145,158,238,43,84,15,5,153,124,100,159,173,38,64,140,176,30,226,199,212,164,100,14,191,220,95,2,71,92,25,78,14,159,104,17,74,186,51,93,172,13,34,207,220,114,171,
183,223,154,219,188,170,105,249,210,101,225,125,163,72,140,87,147,193,71,41,25,36,63,13,158,194,53,107,140,72,153,128,182,107,174,185,198,225,112,0,199,188,188,60,74,6,62,178,243,236,57,112,231,112,128,
126,142,203,195,209,17,29,251,140,227,162,40,108,73,201,39,158,48,155,197,37,85,111,106,110,230,0,212,122,181,134,92,154,143,67,39,113,81,211,81,195,55,85,3,193,247,230,190,189,229,166,51,178,156,46,87,
90,122,105,129,15,75,30,23,223,253,251,133,38,31,61,46,119,65,190,119,222,79,63,201,122,26,26,26,132,143,242,231,176,72,34,29,246,161,174,174,174,164,164,196,150,146,2,40,217,73,248,200,14,75,82,44,112,
140,176,222,240,81,61,73,153,231,245,195,14,227,218,43,193,41,33,170,160,36,113,124,194,209,127,57,74,97,49,216,89,91,83,11,16,219,219,218,84,76,109,129,35,50,240,24,150,236,112,108,37,107,166,16,100,
68,64,73,8,201,20,206,25,46,151,43,35,35,163,160,160,0,56,130,72,246,220,233,72,247,23,250,56,156,146,66,31,199,101,75,72,242,24,95,63,231,39,226,238,138,210,178,47,62,251,60,24,8,174,48,158,198,81,241,
163,126,248,122,152,164,249,56,116,194,115,194,99,200,232,104,34,124,108,170,111,184,224,255,206,37,148,192,79,138,189,133,37,222,194,244,100,155,47,55,127,109,124,36,151,220,115,247,61,154,155,154,37,
137,107,110,110,198,33,215,88,249,208,138,173,179,39,18,236,0,107,180,213,86,91,37,38,38,146,36,10,31,37,41,22,74,70,128,178,55,124,36,114,228,240,161,36,25,40,4,33,126,36,254,74,78,76,242,251,124,207,
60,245,84,237,202,154,6,227,169,30,115,103,160,146,169,161,228,163,108,75,182,203,68,243,245,72,59,236,176,67,90,90,26,124,204,207,207,119,216,211,216,109,50,104,226,71,213,137,85,122,243,184,179,224,
35,135,79,41,165,36,38,93,114,209,197,44,181,170,177,81,234,215,92,161,214,208,75,243,113,24,164,110,55,19,98,200,155,104,131,157,109,205,45,159,124,248,209,54,91,109,157,24,23,95,148,95,224,55,94,115,
45,105,151,213,76,62,218,109,182,219,254,113,43,235,33,137,195,45,33,130,233,138,195,162,166,166,38,246,1,17,233,224,201,48,2,199,174,172,168,36,203,134,101,236,240,0,249,8,22,213,197,135,236,28,194,70,
128,155,237,246,16,97,237,188,227,78,111,190,241,198,194,133,70,39,30,35,187,103,211,108,151,50,17,78,137,132,92,34,153,115,48,36,235,15,111,210,144,148,134,252,122,213,85,87,165,167,167,147,95,231,230,
228,168,200,186,184,132,67,224,120,115,61,10,139,212,53,137,54,213,13,46,129,230,244,169,211,126,252,254,7,89,80,202,83,198,53,34,135,69,154,143,195,163,166,85,77,225,142,120,184,173,241,198,132,19,79,
152,157,101,124,206,201,71,90,154,147,135,183,244,192,199,143,63,252,72,101,145,6,140,240,76,66,182,240,122,135,67,38,157,129,2,67,32,245,211,79,63,113,14,24,56,31,153,130,113,224,228,158,172,202,227,
114,19,94,129,200,139,206,191,160,217,120,216,17,9,134,40,7,134,82,14,6,160,194,18,114,137,212,220,131,35,89,127,120,147,134,164,23,36,133,64,69,191,250,234,171,153,78,167,219,237,206,203,205,75,74,72,
172,44,47,151,114,168,44,45,203,76,75,119,164,216,74,73,178,115,242,28,54,251,140,105,211,207,59,231,92,90,197,162,95,126,145,53,75,145,90,71,180,134,82,154,143,195,35,229,78,70,47,113,36,29,152,219,91,
90,183,220,124,139,170,138,74,87,134,19,154,20,23,250,200,184,83,198,39,18,58,65,7,28,9,98,194,8,0,177,195,118,219,183,181,180,178,20,36,194,21,5,79,146,222,14,187,132,20,162,101,75,150,238,191,239,126,
236,48,135,83,226,47,118,58,210,137,155,48,162,36,166,100,164,57,228,39,82,102,82,206,130,188,124,242,104,91,66,18,188,152,82,61,177,162,184,20,44,202,7,36,64,39,49,23,139,143,29,61,102,183,157,119,121,
243,181,215,213,117,9,163,143,183,85,108,209,28,137,42,249,117,240,36,91,17,62,114,246,82,123,104,216,242,165,203,166,77,153,90,86,82,154,146,148,92,96,124,143,55,53,57,165,178,172,156,248,17,68,18,29,
75,23,72,162,200,240,219,70,140,83,166,136,85,69,140,104,13,165,52,31,135,71,226,75,34,188,157,88,114,201,175,139,63,124,255,131,209,155,108,34,111,196,129,146,233,246,52,152,104,126,149,31,255,145,175,
41,156,117,198,153,196,155,42,54,105,106,194,109,70,20,31,173,170,171,169,109,105,106,190,228,162,139,225,32,152,131,113,14,123,26,39,0,40,143,201,173,109,183,241,85,85,134,64,48,211,145,190,229,166,51,
102,76,153,198,89,97,227,81,163,132,23,208,147,48,115,212,168,81,25,142,244,203,46,185,84,30,25,84,157,120,214,197,71,235,184,72,166,12,158,100,43,6,29,215,120,151,59,63,157,112,236,113,241,99,199,113,
248,242,161,109,10,196,145,106,7,142,73,113,241,170,211,146,203,83,148,95,144,227,246,124,240,238,123,198,138,12,211,26,1,210,124,28,30,137,47,137,204,41,248,213,97,135,28,10,34,43,74,203,64,6,129,198,
196,170,9,0,66,133,81,198,231,249,129,38,57,230,219,111,205,101,126,102,30,129,241,227,26,234,84,159,249,94,85,223,112,255,189,247,65,195,223,109,188,49,145,35,161,19,152,128,137,76,145,59,209,210,153,
28,128,86,149,149,219,147,83,128,35,176,80,125,194,125,126,79,166,139,243,1,57,233,1,251,237,255,206,219,111,19,50,119,180,183,203,211,123,221,101,150,228,112,201,168,204,176,214,224,99,103,104,206,211,
79,19,47,147,89,115,122,224,192,57,5,150,250,139,229,186,42,195,73,149,19,198,110,188,201,225,7,31,26,104,107,231,164,162,249,56,114,164,249,56,60,10,187,145,33,254,148,171,239,181,53,181,205,171,154,
128,133,45,41,153,64,3,136,16,107,216,109,54,82,75,162,72,40,201,200,86,91,108,169,46,189,117,170,183,69,176,236,72,230,163,186,110,96,184,122,205,138,21,207,60,249,212,182,219,204,74,136,143,135,251,
155,77,223,148,163,35,42,228,112,192,31,196,151,187,210,16,132,152,17,74,170,51,129,241,137,27,245,240,101,110,222,85,127,187,146,176,145,140,181,177,177,177,166,38,252,173,24,115,196,148,148,228,48,202,
168,76,165,53,224,24,84,175,14,90,248,243,2,82,108,42,148,202,37,120,228,60,97,79,177,49,194,57,64,245,91,72,76,218,110,230,172,186,21,53,13,198,171,60,53,31,71,142,52,31,135,95,114,135,129,97,99,67,67,
91,75,235,195,15,62,68,144,133,11,73,47,144,9,149,85,83,38,77,34,206,2,46,132,30,231,157,115,110,192,248,206,201,200,231,163,60,35,164,30,98,105,87,47,67,91,188,104,209,197,23,94,200,225,192,65,66,72,
142,133,120,10,44,102,187,61,28,41,177,100,101,89,57,39,6,2,201,233,83,166,18,57,198,141,25,187,223,62,251,204,251,225,71,181,174,160,122,53,156,188,93,141,191,56,112,86,41,227,242,167,85,50,113,120,36,
104,91,211,168,172,198,186,250,75,47,190,132,243,1,71,205,33,147,31,112,86,128,254,114,117,149,212,251,233,39,158,84,51,27,193,102,216,180,70,128,52,31,135,95,77,77,77,194,56,144,39,15,14,159,52,251,68,
194,171,204,244,12,140,128,11,95,194,133,54,30,53,234,47,127,62,98,233,226,37,234,226,163,124,201,222,232,109,7,25,129,194,200,188,191,89,95,91,7,29,48,233,207,196,20,114,237,237,102,109,11,35,198,142,
30,3,13,57,58,40,201,105,128,44,27,80,18,87,66,207,77,70,109,52,99,218,244,71,30,122,216,92,92,89,87,160,77,89,201,193,26,48,140,34,181,225,97,145,112,173,155,81,101,252,184,114,217,242,63,238,178,43,
7,78,66,128,65,70,142,55,113,124,2,53,123,197,165,151,113,164,242,165,217,101,75,150,134,23,212,26,1,210,124,28,126,1,184,250,250,122,113,108,137,182,150,252,186,248,140,211,78,7,28,192,2,255,193,145,
38,87,79,156,125,252,241,159,125,252,9,243,0,11,248,200,252,96,2,49,194,26,204,96,106,228,104,249,210,101,236,42,158,47,152,107,109,110,81,164,224,40,131,157,207,62,51,231,144,131,14,34,119,30,31,23,71,
154,73,188,76,226,73,104,9,47,56,216,83,79,58,249,243,79,63,37,228,100,41,78,24,29,173,109,140,200,58,77,252,53,24,239,182,137,42,153,97,24,196,150,163,153,236,63,246,234,203,175,16,17,147,13,200,21,88,
16,201,248,193,7,28,104,246,85,98,102,117,164,18,69,106,141,0,105,62,142,8,17,22,213,214,214,74,167,16,245,141,39,210,201,230,150,15,222,123,239,206,219,239,184,250,202,171,136,185,222,124,253,117,102,
107,111,107,3,157,226,108,34,137,164,8,169,134,147,11,107,151,10,27,101,191,12,207,103,255,57,46,144,199,8,136,255,244,147,79,206,58,243,175,68,142,41,201,201,217,158,44,162,170,153,91,110,245,248,163,
255,82,221,230,67,234,91,128,230,151,169,41,16,14,150,82,66,156,12,24,202,100,1,98,132,228,167,225,145,1,196,72,11,118,114,200,64,144,163,94,177,124,249,215,95,126,245,232,195,143,92,118,201,165,119,223,
113,39,85,204,175,156,9,40,22,142,90,93,177,149,149,104,141,12,105,62,174,39,18,79,147,81,3,1,194,2,36,19,215,23,201,62,171,139,3,134,53,55,53,207,157,59,119,246,9,179,253,69,254,139,47,188,112,238,155,
111,113,152,42,58,150,115,128,97,178,136,185,184,140,108,8,226,80,34,76,107,132,73,243,113,61,209,134,226,63,2,59,9,126,17,83,228,18,65,205,202,154,5,243,127,38,146,98,138,116,8,13,243,177,235,25,24,99,
233,13,75,82,167,86,211,26,97,210,124,92,79,180,161,248,143,192,206,96,163,82,43,153,101,115,51,249,114,135,229,254,18,169,168,230,163,214,72,144,230,163,214,144,74,96,103,176,81,137,41,114,123,74,221,
161,34,221,94,213,164,238,224,27,23,43,213,3,230,67,248,246,198,225,145,134,227,200,150,230,163,214,80,75,120,103,149,176,50,252,135,33,102,19,62,70,204,111,172,64,75,107,136,164,249,168,53,212,10,163,
174,75,237,237,237,77,77,77,42,126,92,83,221,161,137,194,171,208,210,26,18,105,62,106,13,181,194,168,91,19,118,225,73,134,132,140,50,93,198,195,63,104,62,106,13,173,52,31,181,134,90,97,212,25,170,171,
171,51,59,111,202,20,145,244,235,68,114,119,219,148,76,212,210,26,26,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,
105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,
86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,
69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,
116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,
151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,
105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,230,163,150,150,150,86,116,105,62,106,105,105,105,69,151,
230,163,150,150,150,86,52,133,66,255,15,36,53,169,123,251,187,26,101,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PitchEditor::muteoff_png = (const char*) resource_PitchEditor_muteoff_png;
const int PitchEditor::muteoff_pngSize = 46397;

// JUCER_RESOURCE: save_png, 829, "../SAVE.png"
static const unsigned char resource_PitchEditor_save_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,100,0,0,0,100,8,6,0,0,0,112,226,149,84,0,0,0,6,98,75,71,68,0,255,0,255,0,255,160,189,
167,147,0,0,2,242,73,68,65,84,120,156,237,221,63,107,20,81,20,134,241,231,136,54,198,68,16,11,193,54,70,131,160,160,157,165,127,170,116,18,210,248,9,36,149,126,25,91,75,253,2,118,166,23,84,72,64,140,105,
181,176,80,17,76,176,9,28,139,172,176,134,204,236,220,189,119,238,156,117,223,95,153,217,204,220,217,39,119,102,118,51,217,128,136,136,136,136,136,72,93,150,250,13,238,190,0,108,2,27,192,53,96,161,244,
160,2,59,4,182,128,71,102,246,173,143,13,36,5,113,247,101,224,21,112,165,143,193,204,144,29,224,94,31,81,58,7,25,205,140,247,192,74,233,65,204,168,94,162,156,74,120,236,38,138,49,238,6,240,218,221,47,
14,178,117,119,127,235,25,6,25,116,65,45,187,182,93,50,74,202,33,107,159,140,19,184,153,37,95,64,68,50,225,135,234,35,112,215,204,190,230,110,39,229,144,53,79,87,83,169,86,129,45,119,191,148,187,162,148,
32,210,174,72,20,5,41,43,59,138,130,148,151,21,37,229,164,158,117,165,52,244,73,125,210,248,39,141,111,138,253,159,234,68,175,25,210,159,169,102,138,130,244,43,57,138,130,244,47,41,138,130,212,209,57,
138,130,212,211,41,138,130,212,53,49,138,130,212,183,10,60,111,90,168,215,33,35,61,188,14,105,115,104,102,103,78,90,160,25,50,140,211,77,11,20,36,24,5,9,70,65,130,81,144,96,20,36,24,5,9,166,241,242,235,
127,51,244,235,160,174,52,67,130,169,22,196,221,151,106,109,171,52,119,63,95,107,91,53,103,200,253,138,219,42,237,65,173,13,85,123,47,11,216,3,238,152,217,247,204,245,84,229,238,23,128,55,192,114,201,
245,54,157,211,106,206,144,21,96,219,221,55,102,225,240,229,238,75,238,190,78,15,49,218,212,156,33,50,38,194,12,145,14,20,36,24,5,9,70,65,130,81,144,96,20,36,24,5,9,70,65,130,81,144,96,20,36,24,5,9,70,
65,130,81,144,89,149,243,41,14,99,62,187,251,186,187,47,14,189,63,169,220,125,209,221,31,186,251,94,137,39,162,105,59,53,223,126,255,2,220,52,179,31,153,235,25,148,31,253,194,106,7,184,156,179,158,8,111,
191,63,153,245,24,0,163,125,120,218,219,250,187,62,176,192,12,89,50,179,95,153,235,8,193,143,110,122,248,153,179,142,166,25,50,55,127,31,82,90,95,207,135,174,178,130,81,144,96,20,36,24,5,9,70,65,130,81,
144,96,20,36,24,5,9,70,65,130,81,144,96,20,36,24,5,9,70,65,130,81,144,96,20,36,24,5,9,70,65,130,81,144,96,20,36,24,5,9,70,65,130,81,144,96,20,36,152,236,207,203,58,126,127,81,129,27,234,102,90,238,243,
161,25,18,140,130,4,163,32,193,164,156,67,246,129,115,199,191,56,239,231,140,227,58,62,31,141,55,157,167,204,144,79,9,143,149,118,187,77,11,82,102,200,75,224,246,180,35,208,76,250,199,139,166,5,169,255,
190,251,29,112,181,196,136,230,216,46,112,203,204,126,159,180,176,243,33,203,204,14,128,53,116,232,202,177,11,172,53,197,128,132,25,242,151,187,159,5,30,3,27,192,117,244,79,139,39,57,0,62,112,116,200,
127,214,22,67,68,68,68,68,68,100,8,127,0,159,36,204,127,50,251,163,221,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PitchEditor::save_png = (const char*) resource_PitchEditor_save_png;
const int PitchEditor::save_pngSize = 829;

// JUCER_RESOURCE: load_png, 814, "../LOAD.png"
static const unsigned char resource_PitchEditor_load_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,64,0,0,0,64,8,6,0,0,0,170,105,113,222,0,0,0,6,98,75,71,68,0,255,0,255,0,255,160,189,167,
147,0,0,2,227,73,68,65,84,120,156,237,154,191,107,20,65,20,199,63,47,9,209,132,24,149,16,139,52,33,181,104,157,68,208,70,8,136,32,138,254,13,130,133,98,165,224,63,144,66,68,172,172,172,44,36,86,254,224,
48,166,53,167,69,64,9,130,157,160,72,48,72,68,18,49,18,53,95,139,155,211,24,239,246,102,247,246,118,114,201,124,186,125,243,222,204,247,189,157,217,153,59,6,34,59,27,11,53,176,36,3,142,184,199,89,51,83,
40,45,133,35,169,71,82,73,127,41,73,234,9,173,171,16,92,242,51,250,159,153,109,95,4,73,187,36,61,174,145,124,149,167,219,182,8,146,186,27,36,95,101,90,210,238,208,122,115,197,37,255,200,35,249,237,87,
4,151,252,195,20,201,87,121,210,246,69,144,212,145,49,249,42,15,84,217,46,219,19,73,167,234,36,246,213,211,38,73,39,91,169,177,163,149,157,3,251,106,216,174,3,165,26,246,146,107,219,204,254,92,21,21,137,
164,126,73,111,220,155,92,151,52,233,236,83,53,222,244,148,107,155,116,190,114,177,123,194,102,209,36,146,122,37,157,144,116,104,131,173,110,1,92,251,97,23,211,219,106,125,93,173,30,192,204,190,81,123,
202,39,197,204,3,243,173,81,244,47,173,254,6,108,121,154,158,1,146,6,128,189,13,220,190,155,217,66,202,126,135,128,70,231,128,47,102,246,57,77,191,185,32,105,76,210,125,73,43,117,182,174,205,148,55,197,
39,126,3,156,79,217,179,239,21,215,223,104,150,92,82,45,1,73,157,146,110,2,101,224,44,208,151,101,208,156,233,3,206,1,101,73,55,36,117,166,9,78,187,4,110,1,23,82,198,20,133,1,151,129,78,224,146,111,144,
247,12,144,52,193,214,77,126,35,23,37,29,247,117,78,179,4,174,100,16,19,138,171,190,142,94,5,144,212,15,28,205,44,167,120,142,201,243,4,233,59,3,134,169,172,173,118,161,139,138,102,47,71,31,146,190,246,
75,192,144,153,173,121,246,229,133,153,141,39,181,75,234,6,22,128,129,58,46,185,206,128,36,86,243,78,222,7,55,230,106,179,253,236,248,163,112,44,64,104,1,161,137,5,8,45,32,52,177,0,129,198,93,172,97,251,
88,184,10,194,21,224,14,240,99,195,243,154,179,21,78,203,255,19,172,133,153,189,148,52,14,156,119,166,219,102,246,42,132,150,32,5,0,48,179,57,96,46,212,248,85,226,71,48,180,128,208,196,2,132,22,16,154,
88,128,208,2,66,179,227,11,224,123,14,248,149,208,54,40,233,26,240,51,7,61,105,232,2,6,19,218,147,52,255,193,235,250,137,164,17,224,173,143,239,22,98,216,204,222,55,114,242,93,2,239,8,244,99,37,35,139,
192,7,31,71,175,2,152,217,58,112,175,25,69,5,115,215,105,110,136,247,13,44,73,131,192,107,224,64,86,85,5,177,8,28,52,179,37,31,103,239,93,192,204,62,1,103,128,229,140,194,138,96,25,56,237,155,60,164,220,
6,205,108,22,24,3,102,83,10,43,130,103,192,168,153,61,79,19,148,249,18,162,164,49,96,2,24,1,66,93,112,94,165,178,59,77,155,217,139,64,26,34,145,72,36,18,137,68,34,145,72,164,253,248,13,86,81,217,153,85,
98,117,13,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PitchEditor::load_png = (const char*) resource_PitchEditor_load_png;
const int PitchEditor::load_pngSize = 814;


//[EndFile] You can add extra defines here...
//[/EndFile]

