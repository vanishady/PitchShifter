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
//[/Headers]

#include "GUIEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GUIEditor::GUIEditor ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    panSlider.reset (new juce::Slider ("Panpot"));
    addAndMakeVisible (panSlider.get());
    panSlider->setRange (0, 10, 0);
    panSlider->setSliderStyle (juce::Slider::LinearHorizontal);
    panSlider->setTextBoxStyle (juce::Slider::TextBoxAbove, false, 80, 20);

    panSlider->setBounds (344, 120, 104, 48);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (120, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GUIEditor::~GUIEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    panSlider = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GUIEditor::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GUIEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GUIEditor" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="120" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <SLIDER name="Panpot" id="5244c09d0c435fe1" memberName="panSlider" virtualName=""
          explicitFocusOrder="0" pos="344 120 104 48" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="TextBoxAbove"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

