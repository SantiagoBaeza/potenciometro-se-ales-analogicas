# 💡 Control de Brillo de LED con Potenciómetro – Arduino UNO

Este proyecto, aunque sencillo, es una excelente introducción al mundo de los valores analógicos y la conversión PWM en Arduino.  
Permite visualizar de forma clara cómo una lectura analógica puede traducirse en una variación de brillo en un LED, simulando una luz regulable mediante potenciómetro.

Fue realizado y probado con éxito en [Tinkercad](https://www.tinkercad.com/), y más tarde replicado en hardware físico.

---

## 📷 Captura del circuito en Tinkercad

![Circuito en Tinkercad](ruta/a/tu/imagen.png)  
> *(Implementar captura del circuito simulado)*

---

## ⚙️ Objetivo del Proyecto

Simular una **luz con brillo variable** en función del valor entregado por un potenciómetro.  
Se utilizó una lógica por tramos, dividiendo la escala del ADC (0–1023) en cinco niveles de intensidad:

| Lectura del ADC | Brillo Aproximado | PWM aplicado al LED |
|------------------|--------------------|----------------------|
| 0                | 0%                 | 0                    |
| 1–255            | 25%                | 64                   |
| 256–511          | 50%                | 128                  |
| 512–766          | 75%                | 191                  |
| 767–1023         | 100%               | 255                  |

---

## 🧠 Proceso de Desarrollo

### 🔸 Paso 1: Lógica del circuito

Se definieron 5 rangos de intensidad a partir de la lectura analógica del pin A0.  
Para calcular los niveles se aplicó una regla de tres simple que mapea el valor del ADC (0–1023) al PWM (0–255).

> *Nota:* Se podrían establecer más niveles, pero para simplificar el análisis, se eligieron solo cinco.

---

### 🔸 Paso 2: Primer algoritmo

Se desarrolló un primer código funcional, que establece condiciones para cada rango de lectura.  
El objetivo fue **asentar la lógica básica** y empezar a practicar con estructuras `if(...) && (...)`.

📄 [Ver código inicial](ruta/a/codigo_1.ino)

---

### 🔸 Paso 3: Optimización

En esta versión, el código fue optimizado tanto en **legibilidad** como en **eficiencia lógica**.  
Se utilizó estructura `if / else if` para evitar múltiples evaluaciones redundantes y se dejó listo para futuros refinamientos.

📄 [Ver código optimizado](ruta/a/codigo_2.ino)

> 🔍 También se puede considerar en futuras versiones el uso de `map()` para una transición progresiva y continua del brillo.

---

### 🔸 Paso 4: Circuito físico funcionando

Una vez validado el comportamiento en simulador, se replicó el circuito en hardware real.  
A continuación, se puede ver un gif del funcionamiento del circuito con una placa Arduino UNO:

🎞️ [Ver demostración en la vida real](ruta/a/gif_o_video.mp4)

---

## 🛠️ Tecnologías utilizadas

- Arduino Uno
- IDE Arduino
- Tinkercad para simulación
- C++ (aplicado a sistemas embebidos)
- Electrónica básica (resistencias, potenciómetro, LED)

---
