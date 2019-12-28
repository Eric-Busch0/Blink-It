/* LetsBlink by Eric Busch
 *  This example creates a PWM signal to turn on and off an LED.  
 *  The sketch operates the same as blink, but is handled by one function.
 *  This is my first every library. 
 *  */
 */
#include <BlinkIt.h>
Blink myBlink(13,10000,0.5); // (Pin to turn on/off, period on in ms, duty cycle)
void setup() {
  // We don't need anything

}
void loop() {
  // Start the signal generation 
  myBlink.run();
}
