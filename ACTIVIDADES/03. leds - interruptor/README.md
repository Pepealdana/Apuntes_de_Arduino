# Actividad 3. LED controlados por un pulsador

## Propósito

Usar un pulsador como entrada digital para cambiar el comportamiento de tres LED: cuando el pulsador está libre, permanece encendido el LED verde; cuando se presiona, el verde se apaga y los dos LED rojos se alternan.

## Conceptos clave

- **Entrada digital:** lee un estado lógico mediante digitalRead().
- **Salida digital:** controla los LED mediante digitalWrite().
- **Condicional if/else:** ejecuta una acción u otra según la condición.
- **Pulsador:** cambia temporalmente el estado eléctrico del circuito mientras se presiona.
- **Retardo bloqueante:** delay() detiene la ejecución del programa durante el tiempo indicado, por lo que la lectura del pulsador puede demorarse.

## Materiales

- Arduino Uno o placa compatible.
- Protoboard y cables jumper.
- 1 LED verde y 2 LED rojos.
- 3 resistencias limitadoras para los LED (220 Ω a 330 Ω).
- 1 pulsador.
- Resistencia de 10 kΩ para fijar el nivel de la entrada si se utiliza INPUT con una conexión de pull-down.
- Cable USB.

## Esquema de conexión

Consulta el esquema original: [03. LED que cambian por interruptor (PNG)](./03.%20Leds%20que%20cambian%20por%20interruptor.png).

La asignación de pines del programa es:

| Elemento | Pin Arduino |
|---|---:|
| LED verde | 3 |
| LED rojo 1 | 4 |
| LED rojo 2 | 5 |
| Pulsador | 2 |

Cada LED debe tener una resistencia en serie. El programa original configura el pulsador como INPUT, por lo que el circuito debe mantener el pin 2 en un nivel definido tanto cuando el pulsador está libre como cuando se presiona. Verifica en el esquema la resistencia de pull-down y la conexión del pulsador antes de energizar la placa.

**Fotografía del montaje real:** pendiente de incorporar. El PNG existente es un esquema.

## Observación sobre el archivo original

El archivo de texto original tiene dos problemas que impiden que funcione correctamente tal como está escrito:

1. Lee el pin 2 y asigna el valor a la variable nave, pero esa variable no está declarada.
2. La condición consulta parpadeo, una variable que nunca recibe la lectura del pulsador.

La versión .ino incluida corrige estos puntos con nombres explícitos. Se conservan los pines y los tiempos que aparecen en el código original.

## Código corregido

~~~cpp
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
    // Pulsador libre: solo queda encendido el LED verde.
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_ROJO_1, LOW);
    digitalWrite(LED_ROJO_2, LOW);
  } else {
    // Pulsador presionado: el verde se apaga y alternan los rojos.
    digitalWrite(LED_VERDE, LOW);

    digitalWrite(LED_ROJO_1, LOW);
    digitalWrite(LED_ROJO_2, HIGH);
    delay(300);

    digitalWrite(LED_ROJO_1, HIGH);
    digitalWrite(LED_ROJO_2, LOW);
    delay(2000);
  }
}
~~~

**Importante:** esta lógica asume que el circuito entrega LOW cuando el pulsador está libre y HIGH cuando está presionado (por ejemplo, con una resistencia pull-down externa). Si el esquema utiliza otra configuración, ajusta el cableado o la condición de acuerdo con él; no conectes la entrada sin una referencia lógica definida.

## Procedimiento

1. Desconecta la placa y revisa el esquema.
2. Conecta los tres LED con sus resistencias limitadoras.
3. Conecta el pulsador al pin 2 y verifica que exista una resistencia de pull-down para la configuración INPUT.
4. Abre el archivo .ino en Arduino IDE.
5. Selecciona la placa y el puerto correctos; verifica y carga el programa.
6. Comprueba primero el estado con el pulsador libre y después presiónalo.
7. Registra si los LED rojos alternan con los tiempos esperados.

## Registro de observaciones

| Estado | LED verde | LED rojo en pin 4 | LED rojo en pin 5 | Observaciones |
|---|---|---|---|---|
| Pulsador libre | Encendido | Apagado | Apagado | |
| Pulsador presionado, primer tramo | Apagado | Apagado | Encendido durante 300 ms | |
| Pulsador presionado, segundo tramo | Apagado | Encendido durante 2000 ms | Apagado | |

## Retos de ampliación

1. Cambia los tiempos de los LED rojos y compara el resultado.
2. Haz que ambos LED rojos tengan la misma duración.
3. Explica por qué la lectura del pulsador no se actualiza mientras se ejecuta delay().
4. Investiga INPUT_PULLUP y describe cómo cambiarían el cableado y la condición si el pulsador conectara el pin 2 a GND.
5. Diseña una versión que responda más rápido al soltar el pulsador, sin usar retardos largos.

## Cierre

- ¿Qué información devuelve digitalRead()?
- ¿Por qué se necesita un nivel definido cuando el pulsador está libre?
- ¿Qué errores tenía el código original?
- ¿Qué limitación introduce delay() en esta actividad?

## Comprobación

La guía y el código se basan en el archivo de texto y el esquema disponibles en el repositorio. El montaje físico debe verificarse antes de probarlo, especialmente la conexión eléctrica del pulsador.
