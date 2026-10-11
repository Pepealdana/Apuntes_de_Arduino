const byte TRIG = 7, ECHO = 11, LED = 3;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  unsigned long duracion = pulseIn(ECHO, HIGH, 30000UL);
  if (duracion == 0) {
    Serial.println("Sin eco");
    digitalWrite(LED, LOW);
    delay(100);
    return;
  }

  float distanciaCm = duracion * 0.0343f / 2.0f;
  Serial.print("Distancia: ");
  Serial.print(distanciaCm, 1);
  Serial.println(" cm");
  digitalWrite(LED, distanciaCm <= 20.0f ? HIGH : LOW);
  delay(100);
}
