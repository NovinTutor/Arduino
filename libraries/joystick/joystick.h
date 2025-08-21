#ifndef joystick_h
#include <"Arduino.h">
#define joystick_h
class joystick {
  public:
    joystick(byte x, byte y);
    readY(int size);
    readX(int size);
  private:
    int _x;
    int _y;
}
#endif
