#include <Servo.h>
const byte TRIG = 5, ECHO = 6, PIN_SERVO = 7;
const float UMBRAL_CM = 15.0f;
Servo servo;

float medirDistanciaCm() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  unsigned long duracion = pulseIn(ECHO, HIGH, 30000UL);
  if (duracion == 0) return -1.0f;
  return duracion * 0.0343f / 2.0f;
}

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  servo.attach(PIN_SERVO);
  servo.write(90);
  Serial.begin(9600);
}

void loop() {
  float distancia = medirDistanciaCm();
  if (distancia < 0) {
    Serial.println("Sin eco");
  } else {
    Serial.print("Distancia: ");
    Serial.println(distancia);
    servo.write(distancia < UMBRAL_CM ? 0 : 90);
  }
  delay(100);
}
