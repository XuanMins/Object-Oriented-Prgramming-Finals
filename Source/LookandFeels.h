/*
  ==============================================================================

    LookandFeels.h
    Created: 9 Mar 2022 12:24:58pm
    Author:  Xuan Min

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class LookandFeels  : public LookAndFeel_V4
{
public:

    LookandFeels();

    // Customise slider thumb appearance
    void drawRoundThumb(Graphics& g, float x, float y, float diameter, Colour colour, float outlineThickness);

    void drawLinearSliderThumb(Graphics& g, int x, int y, int width, int height,
                               float sliderPos, float minSliderPos, float maxSliderPos,
                               const Slider::SliderStyle style, Slider& slider) override;

    // Customise slider appearance
    void drawLinearSlider(Graphics& g, int x, int y, int width, int height,
                          float sliderPos, float minSliderPos, float maxSliderPos,
                          const Slider::SliderStyle style, Slider& slider) override;
     
    // Customise slider background
    void drawLinearSliderBackground(Graphics& g, int x, int y, int width, int height,
                                    float, // sliderPos                                    
                                    float, // minSliderPos
                                    float, // maxSliderPos
                                    const Slider::SliderStyle, //style 
                                    Slider& slider) override;
                            };
