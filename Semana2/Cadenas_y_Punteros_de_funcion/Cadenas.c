// CADENAS 

/*

Una cadena de texto en C es un array de caracteres que termina con un carácter NULL '\0'. 

*/

/*

char str_name[str_len] = "string"; 

*/

#include <stdio.h>

int main() {
    char name[20]; // Declaración de un arreglo de caracteres

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Leer una línea de entrada

    printf("Hello, %s", name); // Imprimir el nombre ingresado

    return 0;
}