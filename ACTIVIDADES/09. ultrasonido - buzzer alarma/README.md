# Actividad 9. Alarma de proximidad con buzzer

## Propósito
Activar una señal sonora cuando un objeto esté a menos de 10 cm del sensor ultrasónico.

## Conexiones
Consulta [el esquema original](./09.%20ultrasonido%20-%20buzzer%20alarma.png).

| Elemento | Pin |
|---|---:|
| TRIG | 7 |
| ECHO | 6 |
| Buzzer | 13 |

Verifica el tipo de buzzer y su conexión. Fotografía real: **pendiente**.

## Correcciones
El archivo original decía “un metro y medio”, aunque la condición del programa era menor de 10; además, usaba retardos en milisegundos para el pulso del sensor. Esta versión deja explícito el umbral de 10 cm y genera un pulso TRIG de 10 microsegundos.

## Código
Abre [09_ultrasonido_buzzer_alarma.ino](./09_ultrasonido_buzzer_alarma.ino).

~~~cpp
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
~~~

## Procedimiento
Carga el programa, acerca lentamente un objeto y comprueba que el buzzer suena dentro del umbral y se detiene fuera de él.

## Retos
- Cambia el umbral a 20 cm.
- Modifica la frecuencia.
- Diseña una alarma con pitidos más frecuentes al acercarse el objeto.

## Cierre
¿Qué mide pulseIn()? ¿Por qué se divide el tiempo por dos? ¿Qué diferencia hay entre 10 cm y 1,5 m?

**Validación:** código corregido, pendiente de compilación y prueba física.