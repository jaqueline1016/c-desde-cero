// TIPOS DE DATOS 

#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

//Declaracion de contante con #define 
#define PI 3.14159 // No ocupa memoria, no usar ;  

int main() { 

    //Tamaños de los tipos de datos
    printf("int: %ld\n", sizeof(int)); 
    printf("float: %ld\n", sizeof(float)); 
    printf("double: %ld\n", sizeof(double)); 
    printf("char: %ld\n", sizeof(char)); 

    //int, float, double, char
    int entero = 10; 
    float flotante = 3.14f; 
    double doble = 2.718281828459;
    char caracter = 'A'; 

    // Imprimir los valores de las variables
    printf("Valor entero: %d\n", entero);
    printf("Valor flotante: %.2f\n", flotante);
    printf("Valor doble: %.15lf\n", doble);
    printf("Valor carácter: %c\n", caracter);

    //VARIABLES o IDENTIFICADORES
    int my_var;
    my_var = 5; 

    int myVar = 10; // Declaración y asignación en una línea

    int a,b;
    a = 1; 
    b = 2; 

    float myFloat = 3.14f; // Declaración y asignación de un float con f para indicar que es un float
    float myFloat2 = 1.61803398875; // no es necesario el sufijo f
    double myDouble = 2.718281828459; 
    char myChar = 'C'; 

    int suma = a+b;

    printf("%d \n", suma);  
    printf("%f \n", myFloat);
    printf("%c \n", my_var); 

    // CONSTANTES 

    const int CONSTANTE = 100; // Declaración de una constante recomendado utilizar mayúsculas para  nombres de constantes
    printf("Constante: %d\n", CONSTANTE); 



    return 0; // Finaliza la función main

    
}

// El tamaño corresponde a la cantidad de memoria que ocupa cada tipo de dato en bytes.
// int: 4 bytes, float: 4 bytes, double: 8 bytes,
// char: 1 byte. Estos tamaños pueden variar según la arquitectura del sistema y el compilador utilizado.

// especificadores de formato: %ld

// C no tiene tipo booleano, pero se puede simular con int (0 para falso, 1 para verdadero).

// C es sensible a mayúsculas y minúsculas, por lo que `my_var` y `myVar` son diferentes variables.

// especificadores de formato:
// %d para enteros
// %f para flotantes, 
//%lf para dobles,
// %c para caracteres. 
// %s para strings (cadenas de caracteres).
// %.2f para flotantes con dos decimales,
// %u para enteros sin signo (unsigned int),
// %x para enteros en hexadecimal,
//Estos especificadores se utilizan en la función printf para imprimir los valores
// de las variables en la salida estándar.