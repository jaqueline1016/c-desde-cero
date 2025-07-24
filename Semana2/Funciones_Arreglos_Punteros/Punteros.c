// PUNTEROS

/*

    pointer_type *identifier

    el asterisco (*) indica que es un puntero

*/

#include <stdio.h>

int main() {


    int a = 10; // Variable
    int *p; // Puntero
    int *b = NULL; // Puntero inicializado a NULL (vacio)

    p = &a; // Asignar la dirección de 'a' al puntero 'p'

    // %x muestra la direccion de memoria en valor hexadecimal
    printf("Dirección de a: %x\n", &a);
    printf("Valor de a: %d\n", a);
    printf("Valor apuntado por p: %d\n", *p);

    *p = 20; // Cambiar el valor de 'a' usando el puntero

    printf("Nuevo valor de a: %d\n", a);
    printf("Nuevo valor apuntado por p: %d\n", *p);

    //apuntador a un apuntador 
    int **pp = &p; // Puntero a puntero
    printf("Dirección de p: %x\n", &p);
    printf("Valor de p: %x\n", p);
    printf("Valor apuntado por pp: %x\n", *pp);
    printf("Valor apuntado por pp (valor de a): %d\n", **pp);

    // Punteros en Expresiones 

    int x = 5;
    int *ptr = &x;
    int y = *ptr + 10; // Usando el valor apuntado por ptr
    int z = *ptr * 2; // Usando el valor apuntado por ptr
    (*ptr)++; // Incrementando el valor apuntado por ptr

    printf("Valor de x: %d\n", x);
    printf("Valor de y: %d\n", y);
    printf("Valor de z: %d\n", z);



    return 0;
}

//se requieren paréntesis para el operador ++ para incrementar el valor al que se apunta.
// Lo mismo ocurre cuando se utiliza el operador --.