# Criba de Eratóstenes

Programa en C++ que calcula todos los números primos hasta un número dado usando el algoritmo de la [Criba de Eratóstenes](https://es.wikipedia.org/wiki/Criba_de_Erat%C3%B3stenes).

## Requisitos

- Compilador de C++ (g++, clang++...)

## Compilar y ejecutar

```
g++ main.cc -o main.exe
./main.exe
```

## Uso

El programa pide un número entero mayor que 1 y muestra todos los números primos hasta ese número.

**Importante:** introduce únicamente números. El programa no valida el tipo de entrada, así que escribir texto puede provocar un comportamiento inesperado (bucle infinito).

### Ejemplo

```
Bienvenido a la Criba de Eratostenes!
Introduce un numero aleatorio (mas grande que 1), y veremos cuantos primos hay: 30

Los numeros primos son: 
2 3 5 7 11 13 17 19 23 29
```

## Cómo funciona

1. Se crea una lista con todos los números del 0 al número indicado.
2. Se descartan el 0 y el 1 (no son primos).
3. Empezando por el 2, se marcan como no primos todos sus múltiplos. Se repite con el siguiente número no marcado, hasta llegar a la raíz cuadrada del límite.
4. Los números que quedan sin marcar son los primos.

