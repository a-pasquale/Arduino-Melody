/*
  Melody Library based on code from
  https://www.arduino.cc/en/Tutorial/ToneMelody
*/
#ifndef Melody_h
#define Melody_h

#include "pitches.h"

class Melody {
  public:
    Melody( int melody[], int melodyLength, int noteDurations[], int pin );
};

#endif
