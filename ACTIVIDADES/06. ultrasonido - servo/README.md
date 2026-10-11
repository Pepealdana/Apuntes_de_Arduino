# Actividad 6. Sensor ultrasónico y servomotor

## Propósito
Mover el servo a 0° cuando un objeto esté a menos de 15 cm y devolverlo a 90° cuando se aleje.

## Materiales
Arduino Uno, sensor ultrasónico, servo de posición, cables y fuente adecuada para el servo.

## Conexiones
Consulta [el esquema original](./06.%20ultrasonido%20-%20servo%20-%20diagrama.png).

| Elemento | Pin |
|---|---:|
| TRIG | 5 |
| ECHO | 6 |
| Señal servo | 7 |

No alimentes el servo desde un pin digital. Si usas fuente externa, une los GND. Confirma los pines del esquema antes de alimentar. Fotografía real: **pendiente**.

## Correcciones del original
El archivo original escribía en el pin 10 sin declarar su función, usaba una fórmula de distancia no estándar y separaba el servo de la señal. La versión actualizada elimina la instrucción inexplicada y limita la espera del eco.

## Código
Consulta [06_ultrasonido_servo.ino](./06_ultrasonido_servo.ino).

~~~cpp
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
~~~

## Procedimiento
Carga el sketch, abre Monitor serie a 9600 baudios y acerca/aleja un objeto respecto a 15 cm. Observa la posición del servo y la lectura.

## Retos
- Cambia el umbral a 10 cm.
- Prueba un ángulo de 45°.
- Investiga cómo añadir histéresis para evitar oscilaciones en el umbral.

## Cierre
¿Qué ocurre cuando no hay eco? ¿Por qué un servo puede requerir alimentación externa?

**Validación:** revisado sobre el archivo original; falta prueba física.