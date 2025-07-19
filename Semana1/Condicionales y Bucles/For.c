// BUCLE FOR 

// ejecuta un bloque de código un número específico de veces

/*
    for (initvalue; condition; increment) {
    statements;
    }
*/
#include <stdio.h>

int main() {
    // Bucle for que imprime los números del 1 al 5
    for (int i = 1; i <= 5; i++) {
        printf("Número: %d\n", i);
    }

    // Bucle for con un paso de 2
    printf("Números pares del 1 al 10:\n");
    for (int j = 2; j <= 10; j += 2) {
        printf("%d ", j);
    }
    printf("\n");

    // Bucle for con decremento
    printf("Contando hacia atrás del 5 al 1:\n");
    for (int k = 5; k >= 1; k--) {
        printf("%d ", k);
    }
    printf("\n");

    int numero1 =0;
    int maximo = 10;
    for(; numero1 < maximo; numero1++) {
        printf("Número actual: %d\n", numero1);
    }

    for(numero1 =0, maximo = 10; numero1 < maximo; numero1++,maximo--) {
        printf("Número actual: %d, Máximo: %d\n", numero1, maximo);
    }


    return 0;
}

// initvalue: es un contador configurado a un valor inicial. Esta parte del bucle for se realiza solo una vez.
// condition: es una expresión booleana que compara el contador con un valor antes de cada iteración del bucle, deteniendo el bucle cuando se devuelve false.
// increment:  aumenta (o disminuye) el contador en un valor establecido.
// statements: el bloque de código que se ejecuta en cada iteración

//También, puedes omitir el initvalue, condition y/o increment.
//los bucles for tambien pueden ser anidados


