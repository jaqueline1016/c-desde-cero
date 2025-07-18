// SENTENCIAS IF ANIDADAS
#include <stdio.h>

int main() {
    int numero;
    
    numero = 158;

    // Solicitar al usuario un número
    /*  
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    */

    // Condicionales anidados
    if (numero > 0) {
        printf("El número es positivo.\n");
        if (numero % 2 == 0) {
            printf("El número es par.\n");
        } else {
            printf("El número es impar.\n");
        }
    } else if (numero < 0) {
        printf("El número es negativo.\n");
        if (numero % 2 == 0) {
            printf("El número es par.\n");
        } else {
            printf("El número es impar.\n");
        }
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}


// se puede usar {} para agrupar sentencias o solo Identar adecuadamente las declaraciones anidadas 


// se prefiere una declaracion if-else if sobre 
// las declaraciones if anidadas para mejorar la legibilidad del código


