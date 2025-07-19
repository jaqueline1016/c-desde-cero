//  SWITCH

#include <stdio.h>

int main() {
    int opcion;

    // Solicitar al usuario una opción
    printf("Seleccione una opción (1-3):\n");
    printf("1. Opción 1\n");
    printf("2. Opción 2\n");
    printf("3. Opción 3\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);

    // Estructura switch para manejar las opciones
    switch (opcion) {
        case 1:
            printf("Ha seleccionado la Opción 1.\n");
            break;// es importante usar break para evitar la ejecución de casos posteriores
        case 2:
            printf("Ha seleccionado la Opción 2.\n");
            break;
        case 3:
            printf("Ha seleccionado la Opción 3.\n");
            break;
        default: // se ejecuata si ninguna de las opciones anteriores coincide
            printf("Opción no válida. Por favor, seleccione entre 1 y 3.\n");
            break;
    }

    return 0;
}