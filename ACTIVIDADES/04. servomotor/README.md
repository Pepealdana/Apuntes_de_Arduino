# Actividad 4. Control básico de un servomotor

## Propósito
Mover un servo a 0°, 90° y 180° con pausas de dos segundos.

## Materiales
Arduino Uno, servo de posición, cables y fuente regulada adecuada si el servo lo requiere.

## Conexiones
Consulta [el esquema original](./04.%20servomotor%20solo.png). La señal está en el pin 3. Identifica los cables según la ficha del modelo: los colores no son universales. No alimentes el servo desde un pin digital. Si usas una fuente externa, une su GND con el de Arduino. Desconecta antes de cambiar cables.

Fotografía real del montaje: **pendiente**.

## Código
Abre [04_servomotor.ino](./04_servomotor.ino) en Arduino IDE. Usa la biblioteca Servo incluida habitualmente en el entorno Arduino.

~~~cpp
#include <Servo.h>
const byte PIN_SERVO = 3;
Servo servo;

void setup() {
  servo.attach(PIN_SERVO);
}

void loop() {
  servo.write(0);
  delay(2000);
  servo.write(90);
  delay(2000);
  servo.write(180);
  delay(2000);
}
~~~

## Procedimiento
1. Identifica señal, alimentación y GND del servo.
2. Monta el circuito según el esquema y confirma el pinout.
3. Selecciona placa y puerto, verifica y carga el sketch.
4. Observa las tres posiciones. Detén la prueba si el servo zumba, se calienta o fuerza un mecanismo.

## Registro
| Ángulo | ¿Llegó a la posición? | ¿Vibración o bloqueo? |
|---:|---|---|
| 0° | | |
| 90° | | |
| 180° | | |

## Retos
- Prueba 45° y 135°.
- Cambia el tiempo de espera.
- Explica por qué no se debe forzar el eje más allá de sus límites.

## Cierre
¿Qué hacen attach() y write()? ¿Por qué puede ser necesaria una fuente externa?

**Validación:** el sketch compiló para Arduino Uno en GitHub Actions. El montaje físico y la alimentación aún deben comprobarse.