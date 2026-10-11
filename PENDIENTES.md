# Lista de verificación y mejoras pendientes

Este documento separa lo que ya está documentado de lo que requiere una comprobación adicional. Una guía o un archivo `.ino` publicado no equivale a una práctica probada.

## A. Documentación publicada

- [x] Guía para las actividades 1 a 10.
- [x] Conservar los archivos originales `.txt` y los esquemas existentes.
- [x] Crear sketches `.ino` para las actividades 2 a 10.
- [x] Explicar errores conocidos y cambios aplicados en los códigos revisados.
- [x] Enlazar las guías desde el README principal.

## B. Verificación técnica pendiente

- [x] Compilar todos los sketches para Arduino Uno mediante GitHub Actions.
- [ ] Probar cada circuito con los componentes reales del laboratorio.
- [ ] Confirmar que los pines de cada sketch coinciden con su esquema.
- [ ] Registrar las versiones de Arduino IDE, placa y bibliotecas utilizadas.
- [ ] Probar casos de sensor sin eco y lecturas inestables.
- [ ] Calibrar los valores analógicos del teclado musical.
- [ ] Verificar los límites mecánicos y la alimentación del servo.
- [ ] Confirmar si cada buzzer es activo o pasivo y ajustar las instrucciones.

## C. Evidencia visual pendiente

- [ ] Fotografía real del circuito en serie.
- [ ] Fotografía real del circuito en paralelo.
- [ ] Fotografías de los montajes de las actividades 2 a 10.
- [ ] Revisar que cada fotografía muestre el mismo cableado que la guía.
- [ ] Añadir, si es útil, un esquema de conexiones limpio con etiquetas de pines.

Los PNG actuales se describen como esquemas, no como fotografías reales.

## D. Mejoras de calidad recomendadas

- [ ] Normalizar nombres y ortografía en nombres de carpetas y archivos sin romper enlaces existentes.
- [ ] Añadir una lista de materiales exacta por actividad, incluyendo valores de resistencias y modelos de componentes cuando se conozcan.
- [ ] Incorporar una sección de solución de problemas para cada montaje.
- [ ] Añadir resultados esperados y criterios de evaluación observables.
- [ ] Revisar atribución y permisos de las transcripciones de melodías de la actividad 10 antes de redistribuirlas.
- [ ] Añadir una práctica final integradora con sensor, indicador y actuador.
- [ ] Probar el contenido desde un equipo de estudiante que no tenga el entorno configurado previamente.

## E. Criterio para declarar una actividad terminada

Una actividad solo se debe marcar como **validada** cuando:
1. El sketch compila.
2. El montaje coincide con el esquema.
3. El circuito funciona con los componentes indicados.
4. La guía describe el comportamiento observado y las limitaciones.
5. La evidencia visual corresponde al montaje real.

Estado actual: las guías y sketches están publicados y la compilación automática de los sketches para Arduino Uno pasó. Las pruebas físicas y las fotografías siguen pendientes.
