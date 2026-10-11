#include <Servo.h>

const byte PIN_SERVO = 3;
Servo servo;

void setup() {
  servo.attach(PIN_SERVO);
}

void loop() {
  servo.write(0);
  delay(2000);
  servo.write(90);
  delay(2000);
  servo.write(180);
  delay(2000);
}
