This library is my first ever! It is very simple, and emulates the blink sketch. 
The difference is the few added functions, and the entire blink sketch can be programmed in two lines and altered based on inputs.

The functions/constructor: 

Blink(int pin, long int Period, float Duty)
The blink constructor excepts the pin to toggle, the period, and the duty cyle.

duty(float Duty)
The duty functions excepty a duty cyle from 0 to 1. If a value is given outside of that range it defaults to 0.5.

period(long int Period)
The period function excpets integer values and is type long int. The value is in milliseconds. 

run(void)
the run function takes the given parameters and creates a pwm signal.

timeOn(void)
The timeOn function returns the time the signal is high in milliseconds.

timeOff(void)
The timeOff function returns the time the signal is low in milliseconds.

whatPeriod(void)
The whatPeriod function returns the current set period in milliseconds.

whatDuty(void)
The whatDuty function returns the current set duty cycle.



Created By: Eric Busch
