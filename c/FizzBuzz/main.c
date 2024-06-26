/** 
  * Ejercicio 1: El famoso "Fizz Buzz"
  * Escribe un programa que muestre por consola (con un print) los
  * números de 1 a 100 (ambos incluidos y con un salto de línea entre
  * cada impresión), sustituyendo los siguientes:
  * - Múltiplos de 3 por la palabra "fizz".
  * - Múltiplos de 5 por la palabra "buzz".
  * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
  **/

#include <stdio.h>

void fizzbuzz();

int main () {
  fizzbuzz();
  return 0;
}

/** Función encargada de dar la solución al 
  * ejercicio conocido como el famoso "Fizz Buzz".
  **/
void fizzbuzz() {
  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0 && i % 5 != 0) printf("fizz\n");
    if (i % 5 == 0 && i % 3 != 0) printf("buzz\n");
    if (i % 3 == 0 && i % 5 == 0) printf("fizzbuzz\n");
    if ((i % 3 != 0) && (i % 5 != 0)) printf("%d\n", i);
  }
}
