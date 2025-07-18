//ENTRADA Y SALIDA
#include <stdio.h> 

int main() {
    
    // ENTRADA
    
    char a = getchar(); // es para leer un solo carácter de la entrada estándar
    printf("You entered: %c", a);

    char b[100]; // Declarar un arreglo de caracteres para almacenar una cadena
    printf("\nIntroduce una cadena: ");
    gets(b); // Lee una línea completa de entrada hasta un salto de línea
    printf("You entered: %s\n", b); 

    int numero;
    printf("Introduce un número: ");
    scanf("%d", &numero); // Lee un número entero de la entrada estándar
    printf("You entered: %d\n", numero);
    
    char nombre[50];
    printf("Introduce tu nombre: ");
    scanf("%s", nombre); // Lee una cadena de caracteres (nombre) de la entrada estándar
    printf("Hola, %s!\n", nombre);

    int edad, altura;
    printf("Introduce tu edad y altura: ");
    scanf("%d %d", &edad, &altura); // scanf deja de leer cuando encuentra un espacio en blanco
    printf("\nTienes %d años y mides %d cm.\n", edad, altura);
    printf("\nSuma de edad y altura: %d\n", edad + altura);

    // SALIDA
    putchar(a);// imprime un solo caracter 
    puts(b); // imprime una cadena de caracteres seguida de un salto de línea

    int entero;
    float flotante;
    char palabra[50];
    printf("Introduce un entero, un flotante y una palabra: ");
    scanf("%d %f %s", &entero, &flotante, palabra); // Lee un entero, un flotante y una cadena de caracteres

    printf("Entero: %d\n", entero);
    printf("Flotante: %f\n", flotante); 
    printf("Palabra: %s\n", palabra);

    //imprime el simbolo de porcentaje
    printf("Porcentaje: 50%%\n"); // Para imprimir el símbolo %, se usa %%
    
    printf("%3.2f\n", flotante); // Imprime el flotante con 3 dígitos antes del punto y 2 después del punto decimal

    return 0; 
}

// Nota: La función gets() es insegura y se recomienda evitar su uso en código moderno.
// En su lugar, se puede usar fgets() para leer cadenas de manera más segura.

// scanf se agrega & antes de la variable para pasar la dirección de memoria donde se almacenará el valor leído.
// se usan identifiacores en  scanf para especificar el tipo de dato que se espera leer, como %d para enteros y %s para cadenas de caracteres.
// No es necesari o usar & antes de las variables de arreglo de char, ya que el nombre del arreglo ya representa la dirección de memoria del primer elemento.
// int, float, chat si se usa & 

/* ENTRADAS RECOMENDADAS*/
// - getchar() para leer un solo carácter.
// - scanf() para leer diferentes tipos de datos, como enteros, flotantes y cadenas de caracteres.
// - fgets() para leer líneas completas de texto de manera segura.

/* SALIDAS RECOMENDADAS*/
// - printf() para imprimir diferentes tipos de datos, incluyendo enteros, flotantes y cadenas

// SECUENCIAS DE ESCAPE

/* 

    \n nueva línea
    \t tabulación horizontal
    \\ barra invertida
    \b retroceso
    \' comilla simple
    \" comilla doble

*/

