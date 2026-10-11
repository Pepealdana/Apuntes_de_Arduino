int buzzerPin = 11;

void setup() {
 }

//descargar tono midi y luego convertir
//recomendado descargar MIdi: https://www.khinsider.com/
//midi to arduino en: 
//https://arduinomidi.netlify.app/ o en:
//https://extramaster.net/tools/midiToArduino/

//dependiendo la página usada para convertir la melodía,
//se usa de variable con nombre buzzerPin o tonePin,
// evitando cambiar el nombre a la variable de toda la melodía.

void loop() {
  melodia();
}

void melodia() {
  tone(buzzerPin, 262);
  delay(86);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(120);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(98);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(117);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(98);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(109);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(109);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(109);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(135);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(117);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(105);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(105);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(105);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(113);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(105);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(128);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(113);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(128);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(109);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(102);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(143);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(135);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(132);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(113);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(143);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(109);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(83);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(113);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(132);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(117);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(86);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(143);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(113);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(105);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(105);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(120);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(102);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(132);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(117);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(132);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(139);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(86);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(105);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(94);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(90);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(38);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(872);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(868);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(891);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(883);
  noTone(buzzerPin);
}
