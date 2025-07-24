// Punteros y Arreglos

/*

 + se utiliza para avanzar hacia una ubicación de memoria

 - se utiliza para retroceder hacia una ubicación de memoria

*/


#include <stdio.h>


//funcion swap
void swap(int *a, int *b) {
    int temp = *a; // Guardar el valor apuntado por a
    *a = *b;       // Asignar el valor apuntado por b a a
    *b = temp;    // Asignar el valor guardado a b
}


int main() {

    int arr[5] = {1, 2, 3, 4, 5}; // Arreglo de enteros
    int *p = arr; // Puntero al primer elemento del arreglo

    // Imprimir los valores del arreglo usando el puntero
    for (int i = 0; i < 5; i++) {
        printf("Valor en arr[%d]: %d\n", i, *(p + i));
    }

    // Modificar los valores del arreglo usando el puntero
    for (int i = 0; i < 5; i++) {
        *(p + i) += 10; // Incrementar cada elemento en 10
    }

    printf("Valores modificados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor en arr[%d]: %d\n", i, *(p + i));
    }

    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
        
    ptr = a;  /* point to the first array element */
    printf("%d\n", *ptr);  /* 22 */
    ptr++;
    printf("%d\n", *ptr);  /* 33 */
    ptr += 3;
    printf("%d\n", *ptr);  /* 66 */
    ptr--;
    printf("%d\n", *ptr);  /* 55 */
    ptr -= 2;
    printf("%d\n", *ptr);  /* 33 */ 

    // Punteros y Funciones 
    int x = 5, y = 10;
    printf("Antes del swap: x = %d, y = %d\n", x, y);
    swap(&x, &y); // Pasar direcciones de x e y
    printf("Después del swap: x = %d, y = %d\n", x, y);
    



    return 0;
}



//Tambien se puede usar los operadores ==, <, y > para comparar direcciones de punteros.