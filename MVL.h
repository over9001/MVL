/*
Minimum Viable Library - Header
Written by Ryan Petroff.
Released into the public domain.
MVL.h and MVL.cpp should be in your ...Arduino/libraries/MVL/ folder.
*/

#ifndef MVL_h
#define MVL_h

#include "Arduino.h"

class MVL {
  public:
  	MVL(int Pin);
  	void fade();
  private:
  	int _pin;
};

#endif

