# 🔢 Factorial y Sucesión de Fibonacci en C++

**Autor:** Pablo Garro  
**Carné:** 2022150932  
**Curso:** Estructuras de Datos / Programación en C++  

---

## 📌 Descripción General

Este programa implementa dos funciones clásicas en C++ utilizando recursividad:

1. **Factorial de un número (n!)**  
   Calcula el producto de todos los números enteros positivos hasta `n`.

2. **Serie de Fibonacci**  
   Calcula el término `n` de la sucesión de Fibonacci, donde cada número es la suma de los dos anteriores.

---

## 🧠 ¿Qué hace este programa?

El usuario debe ingresar dos números:

- Primero, el número del cual quiere calcular el **factorial**.
- Luego, el número que representa la **posición en la sucesión de Fibonacci**.

El programa devolverá los resultados de ambas operaciones.

---

## 📦 Estructura del Código

- `factorial(n)`  
  Función recursiva que retorna `n!`.

- `fib(n)`  
  Función recursiva que retorna el término `n` de la sucesión de Fibonacci.

---

## 💡 Fórmulas Matemáticas

- **Factorial:**  
  \( n! = n \cdot (n-1) \cdot (n-2) \cdot ... \cdot 1 \)

- **Fibonacci:**  
  \[
  F(n) = \begin{cases}
      0 & \text{si } n = 0 \\
      1 & \text{si } n = 1 \\
      F(n-1) + F(n-2) & \text{si } n > 1
  \end{cases}
  \]

---

## 🛠️ Compilación y Ejecución

### Compilar:

```bash
g++ factorial_fibonacci.cpp -o factorial_fib
