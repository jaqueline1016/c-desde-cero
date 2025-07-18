// OPERADORES ARITMÉTICOS

#include <stdio.h>

int main() {
    int a = 10, b = 5;
    
    // Suma
    int suma = a + b;
    printf("Suma: %d + %d = %d\n", a, b, suma);
    
    // Resta
    int resta = a - b;
    printf("Resta: %d - %d = %d\n", a, b, resta);
    
    // Multiplicación
    int multiplicacion = a * b;
    printf("Multiplicación: %d * %d = %d\n", a, b, multiplicacion);
    
    // División
    if (b != 0) {
        float division = (float)a / b; // Convertir a float para obtener resultado decimal
        printf("División: %d / %d = %.2f\n", a, b, division);
    } else {
        printf("Error: División por cero no permitida.\n");
    }
    
    // Módulo
    int modulo = a % b;
    printf("Módulo: %d %% %d = %d\n", a, b, modulo);

    // CONVERSION DE TIPOS

    // float -> int
    float c = 7.5;
    int entero = (int)c; // Convertir float a int (truncamiento)
    printf("Conversión de float a int: %.2f a %d\n", c, entero);

    // int -> float
    int d = 3;
    float flotante = (float)d; // Convertir int a float
    printf("Conversión de int a float: %d a %.2f\n", d, flotante);

    // OPERADORES DE ASIGNACIÓN
    int x = 10;
    x += 5; // Equivalente a x = x + 5
    x -= 3; // Equivalente a x = x - 3
    x *= 2; // Equivalente a x = x * 2
    x /= 4; // Equivalente a x = x / 4
    x %= 3; // Equivalente a x = x % 3
    x += 3*2; // Equivalente a x = x + 6 o x = x + (3*2)

    // INCREMENTO Y DECREMENTO
    int y = 5;
    // postfijo  usa el valor de la variable primero, antes de incrementarlo/decrementarlo
    y++; // Incremento (postfijo) 
    y--; // Decremento (postfijo)

    int z = 10;
    // prefijo incrementa/decrementa la variable y luego la usa en la declaración de asignación.
    --z; // Decremento (prefijo)
    ++z; // Incremento (prefijo)

    int t = 8;
    int f = 7;
    t++; 
    t += f--; 

    printf("Valor de t: %d", t);

    return 0;
}

// la division de modulo no se puede hacer con float o double , solo con enteros.

/* PRECEDNECIA DE OPERADORES*/
// 1. Paréntesis
// 2. Multiplicación, División y Módulo
// 3. Suma y Resta
// 4. Asignación
// 5. Operadores lógicos y de comparación

// se puede convertir un float a int automaticamente, pero no al revés sin perder información.