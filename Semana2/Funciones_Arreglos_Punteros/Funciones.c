// FUNCIONES
/*
    return_type function_name(parameters);
*/

#include <stdio.h>


// prototipos de funciones
int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0) {
        printf("Error: División por cero.\n");
        return 0; // Manejo de error
    }
    return a / b;
}

// variable global 
int variableGlobal = 10;
// variable statica 
static int variableEstatica = 20;

int prueba() {
    // variable local
    int variableLocal = 30;
    printf("Variable Local: %d\n", variableLocal);
    printf("Variable Global: %d\n", variableGlobal);
    printf("Variable Estática: %d\n", variableEstatica);
    return 0;
}

int main() {
    int num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("Suma: %d\n", suma(num1, num2));
    printf("Resta: %d\n", resta(num1, num2));
    printf("Multiplicación: %d\n", multiplicacion(num1, num2));
    printf("División: %d\n", division(num1, num2));

    return 0;
}