# Actividad 10. Buzzer y melodías

## Propósito
Reproducir secuencias de tonos en un buzzer pasivo y comprender cómo las frecuencias y duraciones forman una melodía.

## Materiales y conexión
Arduino Uno o compatible, buzzer pasivo y cables. Consulta [el esquema original](./10.%20buzzer%20-%20melodia.png). En los sketches se usan los pines definidos por cada archivo:
- Arcade: pin 11.
- Himno: pin 8.
- Despacito: pin 8.

Confirma el pin de señal y la polaridad del buzzer según el modelo. No conectes un altavoz de baja impedancia directamente al pin. Fotografía real del montaje: **pendiente**.

## Archivos disponibles
- [Melodía arcade (.ino)](./10_buzzer_arcade.ino)
- [Himno de Colombia (.ino)](./10_buzzer_himno_colombia.ino)
- [Despacito (.ino)](./10_buzzer_despacito.ino)

Los archivos .txt originales se conservan como referencia. Las versiones .ino se prepararon a partir de ellos para abrirlas en Arduino IDE. Son transcripciones extensas y deben considerarse ejemplos heredados: revisa su compilación y el resultado sonoro antes de utilizarlas en clase.

## Conceptos clave
- tone(pin, frecuencia) genera un tono de la frecuencia indicada en hercios.
- tone(pin, frecuencia, duración) puede limitar la duración del tono.
- noTone(pin) detiene la generación del tono en ese pin.
- delay() determina cuánto tiempo espera el programa entre eventos.
- Un buzzer pasivo permite variar la frecuencia; uno activo suele tener un oscilador interno y puede no reproducir notas como se espera.

## Procedimiento
1. Comprueba el tipo de buzzer y la conexión del esquema.
2. Abre una de las versiones .ino en Arduino IDE.
3. Selecciona placa y puerto, verifica y carga.
4. Escucha el resultado a volumen moderado y registra si la melodía se reconoce.
5. Si no hay sonido, desconecta la alimentación y revisa el pin y el componente.

## Retos
- Cambia el pin de señal y actualiza el código de forma coherente.
- Reduce el tempo aumentando o disminuyendo las duraciones.
- Escribe una melodía breve propia usando un arreglo de frecuencias y otro de duraciones.
- Investiga cómo añadir pausas entre notas y cómo evitar que el programa se repita indefinidamente.

## Cierre
¿Qué representa la frecuencia? ¿Qué controla la duración? ¿Qué diferencias hay entre un buzzer activo y uno pasivo?

## Pendiente de validación y atribución
- [ ] Compilar cada sketch en la versión de Arduino IDE usada en el laboratorio.
- [ ] Probar las tres melodías en el buzzer físico.
- [ ] Confirmar el pinout del esquema.
- [ ] Registrar la fuente de cada transcripción musical y revisar permisos/licencia antes de redistribuir arreglos de canciones comerciales.
- [ ] Incorporar fotografía real del montaje.

No se afirma que las melodías hayan sido compiladas o escuchadas correctamente en hardware.
