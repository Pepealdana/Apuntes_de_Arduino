# Actividad 2. LED parpadeante

## Propósito

Programar un LED para que se encienda durante 1,5 segundos y se apague durante 1 segundo, repitiendo el ciclo continuamente.

## Conceptos clave

- **Salida digital:** un pin configurado como salida puede establecerse en nivel alto (HIGH) o bajo (LOW).
- **pinMode():** configura la función de un pin.
- **digitalWrite():** cambia el estado de una salida digital.
- **delay():** pausa el programa durante una cantidad de milisegundos.
- **setup() y loop():** setup() se ejecuta una vez al iniciar; loop() se repite mientras la placa está encendida.

## Materiales

- Arduino Uno o placa compatible.
- Protoboard.
- 1 LED.
- 1 resistencia de 220 Ω a 330 Ω.
- Cables jumper.
- Cable USB para programar la placa.

## Esquema de conexión

Consulta el esquema original: [02. LED parpadea (PNG)](./02.%20Led%20pardadea.png).

Como referencia para montar el circuito: conecta el **pin digital 6** a una resistencia en serie y luego al ánodo (pata larga) del LED. Conecta el cátodo (pata corta, lado plano del encapsulado) a GND. La resistencia limita la corriente que atraviesa el LED.

> Desconecta el USB antes de cambiar conexiones. Comprueba la orientación del LED y compara el montaje con el esquema antes de alimentar el circuito.

**Fotografía del montaje real:** pendiente de incorporar. El PNG disponible es un esquema, no una fotografía.

## Código

El código original se conserva en [02. led parpadea.txt](./02.%20led%20parpadea.txt). Para cargarlo desde el IDE de Arduino, también se incluye una versión con extensión .ino: [02_led_parpadea.ino](./02_led_parpadea.ino).

~~~cpp
const byte LED_PIN = 6;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Enciende el LED
  delay(1500);                 // Espera 1500 ms = 1,5 s

  digitalWrite(LED_PIN, LOW);  // Apaga el LED
  delay(1000);                 // Espera 1000 ms = 1 s
}
~~~

## Comprensión del programa

1. const byte LED_PIN = 6; guarda el número del pin utilizado. Al ser una constante, el programa no pretende cambiarlo durante la ejecución.
2. pinMode(LED_PIN, OUTPUT); configura ese pin como salida.
3. digitalWrite(LED_PIN, HIGH); activa la salida y enciende el LED en este circuito.
4. delay(1500); mantiene ese estado durante 1,5 segundos.
5. digitalWrite(LED_PIN, LOW); desactiva la salida.
6. delay(1000); mantiene el LED apagado durante 1 segundo.
7. Al llegar al final de loop(), Arduino vuelve al principio y repite la secuencia.

## Procedimiento

1. Identifica ánodo, cátodo y resistencia.
2. Con la placa desconectada, arma el circuito según el esquema.
3. Abre el archivo .ino en Arduino IDE.
4. Selecciona la placa y el puerto correctos.
5. Verifica el código y cárgalo.
6. Observa varios ciclos y registra cuánto tiempo permanece encendido y apagado.
7. Si no funciona, desconecta la placa y revisa pin, polaridad, resistencia y conexión a GND.

## Registro de observaciones

| Prueba | Tiempo encendido (esperado) | Tiempo apagado (esperado) | ¿Coincide? | Observaciones |
|---|---:|---:|---|---|
| 1 | 1,5 s | 1 s | | |
| 2 | 1,5 s | 1 s | | |
| 3 | 1,5 s | 1 s | | |

## Retos de ampliación

1. Cambia ambos valores de delay() a 500 ms. Describe el cambio.
2. Haz que el LED permanezca encendido 3 segundos y apagado 500 ms.
3. Declara constantes separadas para los tiempos de encendido y apagado.
4. Sin cambiar el circuito, explica qué pasaría si el número del pin en el código no coincide con la conexión física.
5. Investiga por qué no debe conectarse un LED directamente sin limitar la corriente.

## Cierre

- ¿Qué diferencia hay entre setup() y loop()?
- ¿Qué unidad utiliza delay()?
- ¿Qué función cumple la resistencia?
- ¿Qué parte del código modificarías para cambiar el ritmo del parpadeo?

## Comprobación

El resultado esperado es un LED conectado al pin digital 6 que se enciende durante 1,5 segundos y se apaga durante 1 segundo, repitiendo el patrón. El contenido de esta guía se ha preparado a partir del código y del esquema disponibles en el repositorio; el montaje físico y el comportamiento en una placa real deben comprobarse durante la práctica.
