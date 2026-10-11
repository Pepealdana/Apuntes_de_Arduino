# Actividad 8. Teclado musical analógico

## Propósito
Leer pulsadores mediante una red de resistencias conectada a una entrada analógica y reproducir tonos distintos en un buzzer.

## Materiales y conexiones
Arduino Uno, buzzer pasivo, pulsadores, resistencias de la red divisora, protoboard y cables. Consulta [el esquema original](./08.%20teclado%20musical.png). La red de teclas debe llegar a A0 y el buzzer al pin 8. Fotografía real: **pendiente**.

## Conceptos
En Arduino Uno, analogRead(A0) devuelve valores entre 0 y 1023. Cada tecla puede generar un valor distinto por el divisor de tensión. tone() produce un tono y noTone() lo detiene.

## Código
Abre [08_teclado_musical.ino](./08_teclado_musical.ino).

~~~cpp
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
~~~

Los rangos se basan en el código original; no son universales. Mide cada tecla en el Monitor serie y ajusta los intervalos a los valores reales de tu montaje.

## Procedimiento
1. Revisa el divisor de tensión del esquema.
2. Carga el sketch y abre Monitor serie a 9600 baudios.
3. Presiona una tecla a la vez y registra el valor.
4. Comprueba que cada tecla produce una nota y que al soltar se detiene.

## Retos
- Añade una quinta tecla.
- Cambia las frecuencias.
- Ajusta los rangos para evitar solapamientos.

## Cierre
¿Qué diferencia hay entre una entrada analógica y una digital? ¿Por qué hay que calibrar los umbrales?

**Validación:** el sketch compiló para Arduino Uno en GitHub Actions; falta verificar el circuito y calibrar los valores analógicos reales.