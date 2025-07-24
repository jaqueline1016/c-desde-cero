// ARRAYS

#include <stdio.h>

int main() {

    int test_score[25];
    float prices[10] = {10.99, 20.50, 5.75, 15.00, 30.25, 12.00, 8.99, 22.50, 18.75, 25.00};
    // parcialmente inicializado
    char letters[5] = {'A', 'B'};

    // Declaración e inicialización de un arreglo
    int numeros[5] = {10, 20, 30, 40, 50};

    // Acceso a los elementos del arreglo
    printf("Primer elemento: %d\n", numeros[0]);
    printf("Segundo elemento: %d\n", numeros[1]);

    // Modificación de un elemento del arreglo
    numeros[2] = 100;
    printf("Tercer elemento modificado: %d\n", numeros[2]);

    // Recorrido del arreglo usando un bucle for
    printf("Elementos del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i + 1, numeros[i]);
    }

    //BUCLES CON ARREGLOS
    int i;
    int arreglo[5] = {1, 2, 3, 4, 5};
    printf("Elementos del arreglo:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i + 1, arreglo[i]);
    }
    

    return 0;
}