#ifndef SmartDuino_h
#define SmartDuino_h
#define PULLUP 1
class analogPin {
public:
  analogPin(byte pin);
  int read();
private:
  byte _pin;
};
class digitalPin {
  public: 
    digitalPin(byte pin);
    void write(boolean value);
    boolean read(boolean pullup = false);
  private:
    byte _pin;
}
class PWMpin digitalPin {
  public:
    void PWM(byte value);
}
#endif
