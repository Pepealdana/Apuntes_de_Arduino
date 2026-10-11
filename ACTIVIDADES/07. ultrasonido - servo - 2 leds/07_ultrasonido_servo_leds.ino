#include <Servo.h>
const byte LED_1 = 2, LED_2 = 3, TRIG = 8, ECHO = 9, PIN_SERVO = 5;
const float UMBRAL_CM = 10.0f;
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

void destellar() {
  for (byte i = 0; i < 2; i++) {
    digitalWrite(LED_1, HIGH);
    digitalWrite(LED_2, HIGH);
    delay(100);
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    delay(100);
  }
}

void moverServo(int desde, int hasta) {
  int paso = (hasta > desde) ? 1 : -1;
  for (int angulo = desde; angulo != hasta; angulo += paso) {
    servo.write(angulo);
    delay(15);
  }
  servo.write(hasta);
}

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  servo.attach(PIN_SERVO);
  servo.write(90);
  Serial.begin(9600);
}

void loop() {
  float distancia = medirDistanciaCm();
  if (distancia >= 0) {
    Serial.print("Distancia cm: ");
    Serial.println(distancia);
  }

  if (distancia >= 0 && distancia < UMBRAL_CM) {
    destellar();
    digitalWrite(LED_1, HIGH);
    digitalWrite(LED_2, LOW);
    moverServo(90, 0);
    delay(2000);
    moverServo(0, 90);
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, HIGH);
    delay(2000);
  } else {
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
  }
}
