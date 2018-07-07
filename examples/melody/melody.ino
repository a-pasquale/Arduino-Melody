/*
  Uses Melody Library.
  This library was based on code from
  https://www.arduino.cc/en/Tutorial/ToneMelody
*/
#include "Melody.h"

int buzzerPin = 9;

// Set the number of notes here:
int melodyLength = 8;

// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
  // put your setup code here, to run once:
  Melody(melody, melodyLength, noteDurations, buzzerPin);
}

void loop() {
  // Or put your code here to play it again and again:
  // Melody(melody, melodyLength, noteDurations, buzzerPin);
}

