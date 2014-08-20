/*
Minimum Viable Library - Example
Written by Ryan Petroff.
Released into the public domain.
Enjoy!
*/

/*
We have to include the Minimum Viable Library so we can use it
*/
#include <MVL.h>

/*
Any PMW pin with an LED on it
*/
int pin = 13;


/*
We use the MVL constructor function to create this MVL instance called mvl
*/
MVL mvl(pin);

void setup() {
  /*
  All the setup has already been done during the construction of mvl
  */
}

void loop() {
  /*
  Now we put MVL's fade function to use!
  We call mvl's fade method
  */
  mvl.fade();
}

/*
Pretty cool, eh?
You can make your own library too!
*/
