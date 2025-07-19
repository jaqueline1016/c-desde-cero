// BUCLE WHILE
#include <stdio.h>

int main() {
    int contador = 1; // Inicializar el contador

    // Bucle while que se ejecuta mientras el contador sea menor o igual a 5
    while (contador <= 5) {
        printf("Contador: %d\n", contador);
        contador++; // Incrementar el contador
    }

    printf("Bucle terminado.\n");

    // BUCLE DO WHILE
    int numero = 1; // Inicializar el número

    // Bucle do while que se ejecuta al menos una vez
    do {
        printf("Número: %d\n", numero);
        numero++; // Incrementar el número
    } while (numero <= 5); // Condición que debe que cumplir para continuar el bucle sino termina


    // BREAK Y CONTINUE
    int i = 5;
    while (i > 0) {
        if (i == 3) {
            printf("Se encontró el número 3, saliendo del bucle.\n");
            break; // Sale del bucle si i es igual a 3
        }
        printf("Número: %d\n", i);
        i--;
    }

    return 0;
}

// El bucle while se utiliza para repetir un bloque de código mientras una condición sea verdadera.
// se evalua como verdadera o falsa antes de cada iteración.

//Un break en un bucle interno sale de ese bucle y la ejecución continúa con el bucle externo.
// Una instrucción de continue funciona de manera similar en bucles anidados.
