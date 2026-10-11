# Actividad 5. Sensor ultrasónico y LED

## Propósito
Medir distancia y encender un LED cuando un objeto está a 20 cm o menos.

## Materiales
Arduino Uno, sensor ultrasónico compatible (por ejemplo HC-SR04), LED, resistencia de 220–330 Ω, protoboard y jumpers.

## Conexiones
Consulta [el esquema original](./05.%20Ultrasonido%20enciende%20led%20-%20diagrama.png).

| Elemento | Pin |
|---|---:|
| TRIG | 7 |
| ECHO | 11 |
| LED | 3 |

El LED lleva resistencia en serie. Confirma la tensión del sensor antes de conectarlo. Fotografía real: **pendiente**.

## Corrección aplicada
El código original calculaba distancia con DURACION / 40.5. La versión corregida usa el cálculo habitual para un HC-SR04: duración × 0,0343 / 2, con duración en microsegundos. También incluye timeout para evitar esperar indefinidamente si no llega eco.

## Código
Consulta [05_ultrasonido_led.ino](./05_ultrasonido_led.ino).

~~~cpp
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
~~~

## Procedimiento
1. Monta con la alimentación desconectada.
2. Carga el sketch y abre Monitor serie a 9600 baudios.
3. Acerca y aleja una superficie plana.
4. Registra cuándo se enciende el LED.

## Retos
- Cambia el umbral a 10 cm.
- Explica el mensaje “Sin eco”.
- Compara la lectura con una regla.

## Cierre
¿Por qué se divide el tiempo entre dos? ¿Para qué sirve el timeout de pulseIn()?

**Validación:** el sketch compiló para Arduino Uno en GitHub Actions; falta probar el sensor físico y confirmar el cableado.