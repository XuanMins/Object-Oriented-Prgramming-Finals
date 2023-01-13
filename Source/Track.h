/*
  ==============================================================================

    Track.h
    Created: 9 Mar 2022 12:23:48pm
    Author:  Xuan Min

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

// ==============================================================================
/*
*/
#pragma once

#include "JuceHeader.h"
#include <string>

class Track
{
public:
   
    Track(String _title,
          String _length,
          String _path);

    String title;
    String length;
    String path;
};
