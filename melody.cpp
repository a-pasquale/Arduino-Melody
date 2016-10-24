/*
  Melody Library based on code from
  https://www.arduino.cc/en/Tutorial/ToneMelody
*/
#include "Arduino.h"
#include "Melody.h"

Melody::Melody( int melody[], int melodyLength, int noteDurations[], int pin ) {
    
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < melodyLength; thisNote++) {
  
      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(pin, melody[thisNote], noteDuration);
  
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(pin);
  }
}
