/*
Minimum Viable Library - Constructor
Written by Ryan Petroff.
Released into the public domain.
MVL.cpp and MVL.h should be in your ...Arduino/libraries/MVL/ folder.
*/

#include "MVL.h"

MVL::MVL(int Pin)
{
	pinMode(Pin, OUTPUT);
	_pin = Pin;
}

void MVL::fade()
{

  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(_pin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(_pin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

}
