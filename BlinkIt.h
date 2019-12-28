#ifndef BlinkIt_h
#define BlinkIt_h 

#include "Arduino.h"

class Blink
{
  public:
    Blink(int pin, long int Period, float Duty);
    void duty(float Duty);
    void period(long int Period);
    void run(void);
    long int timeOn();
    long int timeOff();
    long int whatPeriod();
    float whatDuty();

  private:
    int _pin;
    long int _period;
    float _duty;
    long int _on;
    long int _off;
};

#endif
