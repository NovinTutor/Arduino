#include "joystick.h"
joyscick::joystick(byte x, byte y) {
  _y = y;
  _x = x;
}
int joystick::readY(int size) {
  return map(analogRead(_y), 0, 1023, size/2, 0-(size/2));
}
int joystick::readX(int size) {
  return map(analogRead(_x), 0, 1023, size/2, 0-(size/2));
}
