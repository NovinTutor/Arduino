#include <SmartDuino.h>
digitalPin light(LED_BUILTIN)
void setup(){
  //ничего не делаем, библиотека устанавливает режимы пинов сама
}
void loop(){
  light.write(HIGH);
  delay(1000);
  light.write(LOW);
  delay(1000);
}