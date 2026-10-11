const byte PIN_BUZZER = 8, PIN_TECLAS = A0;
const int notas[] = {222, 275, 350, 500};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(PIN_TECLAS);
  Serial.println(valor);

  if (valor >= 1020) tone(PIN_BUZZER, notas[0]);
  else if (valor >= 990 && valor <= 1010) tone(PIN_BUZZER, notas[1]);
  else if (valor >= 505 && valor <= 515) tone(PIN_BUZZER, notas[2]);
  else if (valor >= 5 && valor <= 10) tone(PIN_BUZZER, notas[3]);
  else noTone(PIN_BUZZER);
}
