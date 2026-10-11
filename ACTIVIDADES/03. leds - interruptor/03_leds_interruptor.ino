// Actividad 3: LED controlados por un pulsador.
// Se asume LOW cuando está libre y HIGH cuando está presionado,
// mediante una resistencia pull-down externa.

const byte LED_VERDE = 3;
const byte LED_ROJO_1 = 4;
const byte LED_ROJO_2 = 5;
const byte PULSADOR = 2;

void setup() {
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_ROJO_1, OUTPUT);
  pinMode(LED_ROJO_2, OUTPUT);
  pinMode(PULSADOR, INPUT);
}

void loop() {
  const int estadoPulsador = digitalRead(PULSADOR);

  if (estadoPulsador == LOW) {
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_ROJO_1, LOW);
    digitalWrite(LED_ROJO_2, LOW);
  } else {
    digitalWrite(LED_VERDE, LOW);

    digitalWrite(LED_ROJO_1, LOW);
    digitalWrite(LED_ROJO_2, HIGH);
    delay(300);

    digitalWrite(LED_ROJO_1, HIGH);
    digitalWrite(LED_ROJO_2, LOW);
    delay(2000);
  }
}
