# Apuntes de Arduino

Ruta práctica para aprender electrónica básica, programación con Arduino y creación de prototipos.

El repositorio reúne actividades progresivas. Cada práctica debe ayudar a comprender el circuito, el código, el resultado esperado y las posibilidades de mejora.

## Cómo trabajar cada actividad

1. Revisa el objetivo y los conceptos clave.
2. Identifica los componentes y verifica sus valores.
3. Estudia el esquema antes de conectar la alimentación.
4. Monta el circuito y comprueba las conexiones.
5. Ejecuta el código cuando corresponda.
6. Registra los resultados, errores y cambios realizados.
7. Resuelve el reto de ampliación.

## Ruta inicial

| Sesión | Tema |
|---|---|
| 1 | [Circuitos eléctricos en serie y en paralelo](./ACTIVIDADES/01.%20circuito%20en%20serie%20y%20en%20paralelo/README.md) |
| 2 | [LED parpadeante](./ACTIVIDADES/02.%20led%20parpadea/README.md) |
| 3 | [LED controlados por pulsador](./ACTIVIDADES/03.%20leds%20-%20interruptor/README.md) |
| 4 | [Servomotor](./ACTIVIDADES/04.%20servomotor/README.md) |
| 5 | [Sensor ultrasónico y LED](./ACTIVIDADES/05.%20ultrasonido%20-%20led/README.md) |
| 6 | [Sensor ultrasónico y servomotor](./ACTIVIDADES/06.%20ultrasonido%20-%20servo/README.md) |
| 7 | [Sensor ultrasónico, servomotor y dos LED](./ACTIVIDADES/07.%20ultrasonido%20-%20servo%20-%202%20leds/README.md) |
| 8 | [Teclado musical](./ACTIVIDADES/08.%20teclado%20musical/README.md) |
| 9 | [Alarma con sensor ultrasónico y buzzer](./ACTIVIDADES/09.%20ultrasonido%20-%20buzzer%20alarma/README.md) |
| 10 | [Buzzer y melodías](./ACTIVIDADES/10.%20buzeer%20-%20melodia/README.md) |

## Estructura de una actividad

Cada actividad se irá documentando con:

- **Conceptos clave**
- **Materiales**
- **Esquema de conexión**
- **Fotografía del montaje real**, cuando esté disponible
- **Código y explicación**
- **Prueba de funcionamiento**
- **Retos de ampliación**
- **Cierre y preguntas de reflexión**
- **Fuentes**, cuando se adapte contenido externo

Los esquemas existentes se conservarán. Cuando no exista fotografía del montaje real, se indicará explícitamente como pendiente; no se sustituirá una fotografía real por una imagen que pueda inducir a error.

## Seguridad básica

- Trabaja con baja tensión en las prácticas educativas.
- Desconecta la alimentación antes de cambiar conexiones.
- Comprueba polaridad y valores de los componentes.
- No conectes motores, servos u otras cargas directamente a un pin si superan los límites eléctricos de la placa.
- Verifica el esquema de cada práctica antes de alimentar el circuito.

## Autoría y referencias

Este repositorio contiene apuntes y ejercicios de aprendizaje. Cuando una práctica se base en material de otra persona, se procurará citar la fuente original y diferenciar las adaptaciones realizadas.


## Lista de comprobación

Consulta [PENDIENTES.md](./PENDIENTES.md) para distinguir las guías publicadas de las pruebas técnicas, fotografías y mejoras que aún faltan.

## Estado de documentación

Las diez actividades tienen una guía de trabajo enlazada desde esta página. En las actividades de programación se conservan los archivos originales y se incluyen sketches `.ino` para abrir en Arduino IDE. La compilación automática de los sketches para Arduino Uno pasó en GitHub Actions. Aún deben probarse con los componentes físicos antes de considerarlos validados. [Ver ejecución](https://github.com/Pepealdana/Apuntes_de_Arduino/actions/runs/38106744485).

| Actividad | Guía | Sketch actualizado | Foto real |
|---|---|---|---|
| 1. Serie/paralelo | Sí | No aplica | Pendiente |
| 2. LED parpadeante | Sí | Sí | Pendiente |
| 3. LED y pulsador | Sí | Sí | Pendiente |
| 4. Servomotor | Sí | Sí | Pendiente |
| 5. Ultrasonido y LED | Sí | Sí | Pendiente |
| 6. Ultrasonido y servo | Sí | Sí | Pendiente |
| 7. Ultrasonido, servo y LED | Sí | Sí | Pendiente |
| 8. Teclado musical | Sí | Sí | Pendiente |
| 9. Alarma ultrasónica | Sí | Sí | Pendiente |
| 10. Buzzer y melodías | Sí | Sí (tres melodías) | Pendiente |

La marca “Sketch actualizado” significa que existe una versión `.ino` publicada; no significa que ya se haya compilado ni probado en hardware.
