# Actividad 7. Barrera automática con sensor ultrasónico, servo y dos LED

## Propósito
Accionar una barrera con servo cuando un objeto esté a menos de 10 cm y usar dos LED como indicadores.

## Conexiones
Consulta [el esquema original](./07.%20ultrasonido%20activa%20servo%20-%202%20leds.png).

| Elemento | Pin |
|---|---:|
| LED indicador 1 | 2 |
| LED indicador 2 | 3 |
| TRIG | 8 |
| ECHO | 9 |
| Señal del servo | 5 |

Cada LED debe llevar resistencia en serie. Confirma en el esquema qué color corresponde a cada pin. El servo puede requerir fuente propia con GND común. Fotografía real: **pendiente**.

## Qué se revisó
El código original no generaba primero un pulso TRIG bajo, no limitaba la espera de ECHO y no documentaba claramente la correspondencia entre los colores de los LED. La versión corregida conserva los pines y el umbral de 10 cm.

## Código
Consulta [07_ultrasonido_servo_leds.ino](./07_ultrasonido_servo_leds.ino). El ejemplo asume que el servo inicia a 90° y se mueve a 0° al detectar el objeto.

~~~cpp
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
~~~

## Procedimiento
Carga el sketch y observa el Monitor serie. Acerca un objeto a menos de 10 cm y registra el movimiento. Ajusta la asignación de los LED si el esquema real indica los colores en orden distinto.

## Retos
- Cambia el umbral a 15 cm.
- Cambia los ángulos de apertura y cierre.
- Evita que la barrera vuelva a activarse mientras el objeto permanece delante del sensor.

## Cierre
¿Qué controla el tiempo de movimiento? ¿Qué error evita el timeout? ¿Qué ocurre si el servo no tiene suficiente alimentación?

**Validación:** el sketch compiló para Arduino Uno en GitHub Actions; falta probar el circuito real y confirmar los colores de los LED.