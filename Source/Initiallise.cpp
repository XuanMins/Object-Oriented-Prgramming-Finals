/*
  ==============================================================================

    Initiallise.cpp
    Created: 9 Mar 2022 12:25:39pm
    Author:  Xuan Min

  ==============================================================================
*/

#include <JuceHeader.h>
#include "Initiallise.h"

//==============================================================================
Initiallise::Initiallise()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

// Initialise slider settings
void Initiallise::sliderOptions(Component* component, Slider* slider, Slider::Listener* listener,
                                Slider::SliderStyle style, Slider::TextEntryBoxPosition textPos,
                                bool readOnly, int textBoxW, int textBoxH, double rangeStart,
                                double rangeEnd, double increment, LookAndFeel* LookandFeels,
                                Slider::ColourIds colourid, Colour colour)
{
    // addAndMakeVisible
    component->addAndMakeVisible(slider);
    // addListener
    slider->addListener(listener);
    // setSliderStyle
    slider->setSliderStyle(style);
    // setTextBoxStyle
    slider->setTextBoxStyle(textPos, readOnly, textBoxW, textBoxH);
    // setColour
    slider->setColour(slider->textBoxOutlineColourId, Colours::transparentWhite);
    // setRange
    slider->setRange(rangeStart, rangeEnd, increment);
    // setLookAndFeel
    slider->setLookAndFeel(LookandFeels);
    slider->setColour(colourid, colour);
}

// Initialise label settings
void Initiallise::labelOptions(Component* component, Label* label, String title,
                               NotificationType notiType, Justification justification,
                               float fontSize, Label::ColourIds colourid, Colour colour)
{
    // addAndMakeVisible
    component->addAndMakeVisible(label);
    //  setText
    label->setText(title, notiType);
    //  setJustificationType
    label->setJustificationType(justification);
    //  setFont
    label->setFont(fontSize);
    //  setColour
    label->setColour(colourid, colour);
}

// Initialise button settings
void Initiallise::buttonOptions(Component* component, Button* button, 
                                Button::Listener* listener, bool toggleOn, 
                                String tooltip, float alpha)
{
    // addAndMakeVisible
    component->addAndMakeVisible(button);
    //  addListener
    button->addListener(listener);
    //  setClickingTogglesState
    button->setClickingTogglesState(toggleOn);
    //  setTooltip
    button->setTooltip(tooltip);
    //  setAlpha
    button->setAlpha(alpha);
}
