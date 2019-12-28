#include "Arduino.h"
#include "BlinkIt.h"

Blink::Blink(int pin, long int Period, float Duty)
{
  pinMode(pin,OUTPUT);
  //digitalWrite(_pin,LOW);
  _pin = pin;
  _period = Period;
  _duty = Duty;

  _on = (_period)*(_duty);
  _off = 1 - (_on);
}

void Blink::duty(float Duty)
{
  if(Duty > 1 || Duty < 0)
  {
    _duty = 0.5;
  }
  else
  {
    _duty = Duty;
  }
}

void Blink::period(long int Period)
{
  _period = Period;
}
long int Blink::timeOn()
{
  return _period*_duty;
}

long int Blink::timeOff()
{
  return _period- (_period*_duty);
}
long int Blink::whatPeriod()
{
  return _period;
}

float Blink::whatDuty()
{
  return _duty;
}
void Blink::run(void)
{
  _on = _period*_duty;
  _off = _period - (_period*_duty);
  
  digitalWrite(_pin,HIGH);
  delay(_on);
  digitalWrite(_pin,LOW);
  delay(_off);
}
