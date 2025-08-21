#include "SmartDuino.h"

analogPin::analogPin(byte pin) {
  _pin = pin;
  pinMode(_pin, INPUT);
}

int analogPin::read() {
  if(_pin > 13){
    return analogRead(_pin);
  }
  throw std::runtime_error("Pin " + String(pin) " is not an analog pin");
}

digitalPin:digitalPin(byte pin) {
  _pin = pin;
}

boolean digitalPin::read(boolean pullup) {
  if(pullup) {
    pinMode(_pin, INPUT_PULLUP);
  } else {
    pinMode(_pin, INPUT);
  }
  return digitalRead(_pin);
}

digitalPin::write(boolean value) {
  pinMode(_pin, OUTPUT);
  digitalWrite(_pin, value);
}

PWMpin::PWM(byte value) {
  pinMode(_pin, OUTPUT);
  if(_pin == 3 || _pin == 5 || _pin == 6 || _pin == 9 || _pin == 10 || _pin == 11){
    analogWrite(_pin, value);
  } else {
    throw std::runtime_error("Pin " + String(_pin) + " cannot be used for PWM.");
  }
}