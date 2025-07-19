// OPERADORES LOGICOS

/*

    AND (&&), OR (||) y NOT (!)
    se evalua de izquierda a derecha
    se pueden combinar con operadores de comparacion

*/

#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 15;

    // Usando operadores lógicos AND (&&) y OR (||)
    if (a < b && b < c) {
        printf("a es menor que b y b es menor que c.\n");
    } else {
        printf("La condición no se cumple.\n");
    }

    // Usando operador lógico NOT (!)
    if (!(a > c)) {
        printf("a no es mayor que c.\n");
    } else {
        printf("a es mayor que c.\n");
    }

    // Combinando operadores lógicos
    if ((a < b || b < c) && !(c < a)) {
        printf("Se cumple la combinación de condiciones.\n");
    } else {
        printf("No se cumple la combinación de condiciones.\n");
    }

    return 0;
}