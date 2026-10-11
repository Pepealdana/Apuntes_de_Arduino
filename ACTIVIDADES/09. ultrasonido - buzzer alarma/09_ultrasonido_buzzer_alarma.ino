const byte TRIG = 7, ECHO = 6, BUZZER = 13;
const float UMBRAL_CM = 10.0f;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  unsigned long duracion = pulseIn(ECHO, HIGH, 30000UL);
  if (duracion == 0) {
    noTone(BUZZER);
    delay(50);
    return;
  }

  float distanciaCm = duracion * 0.0343f / 2.0f;
  if (distanciaCm < UMBRAL_CM) tone(BUZZER, 1000);
  else noTone(BUZZER);
  delay(50);
}
