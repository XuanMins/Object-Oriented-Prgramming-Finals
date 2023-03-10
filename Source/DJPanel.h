 /*
  ==============================================================================

    DJPanel.h
    Created: 9 Mar 2022 12:25:56pm
    Author:  Xuan Min

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "DJAudioPlayer.h"
#include "LookandFeels.h"

//==============================================================================
/*
*/
class DJPanel : public Component,
    public Slider::Listener,
    public Button::Listener,
    public ModifierKeys
{
public:

    DJPanel(DJAudioPlayer* _player, TooltipWindow* _tooltipWindow);
    ~DJPanel() override;

    void paint(Graphics& g) override;
    void resized() override;

    // Implements Slider::Listener, pointer to the slider whose value changed
    void sliderValueChanged(Slider* slider) override;
    // Implement Button::Listener,pointer to the button that is clicked
    void buttonClicked(Button* button) override;
    // Check if CTRL key is pressed
    bool isCommandDown() const noexcept;

private:
    Label volume, speed, loop, hotCue;

    LookandFeels v1;

    Label label;

    // Sliders
    Slider volSlider;
    Slider speedSlider;
    Slider loopSlider;

    //Hot Cue Buttons
    TextButton hcBtn1{ "1" };
    TextButton hcBtn2{ "2" };
    TextButton hcBtn3{ "3" };
    TextButton hcBtn4{ "4" };

    double hcPos1;
    double hcPos2;
    double hcPos3;
    double hcPos4;
    int experienceLevel;

    DJAudioPlayer* player;
    TooltipWindow* tooltipWindow;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(DJPanel)
};