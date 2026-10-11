// Actividad 2: LED parpadeante
// Pin digital 6; 1500 ms encendido y 1000 ms apagado.

const byte LED_PIN = 6;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1500);

  digitalWrite(LED_PIN, LOW);
  delay(1000);
}
