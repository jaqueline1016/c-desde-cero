// CONDICIONALES 
#include <stdio.h> 

int main() {
    int numero;

    // Solicitar al usuario un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Condicionales
    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }

    // Condicional anidado
    if (numero % 2 == 0) {
        printf("El número es par.\n");
    } else {
        printf("El número es impar.\n");
    }

    // OPERADORES RELACIONALES
    int a = 10, b = 20;

    // Comparaciones
    if (a == b) {
        printf("a es igual a b.\n");
    } else if (a != b) {
        printf("a es diferente de b.\n");
    }

    // Comparaciones mayores y menores
    if (a < b) {
        printf("a es menor que b.\n");
    } else if (a > b) {
        printf("a es mayor que b.\n");
    }

    if (a <= b) {
        printf("a es menor o igual que b.\n");
    } else if (a >= b) {
        printf("a es mayor o igual que b.\n");
    }

    int score = 89;
    if(score >= 90){
        printf("Excelente\n");
    }else{
        printf("Sigue practicando\n");
    }

    // otra forma del if-else ?
    int y;
    int x = 5;
    y = (x > 10) ? 1 : 0;
    //  (condición) ? valor_si_verdadero : valor_si_falso;
    // Si la condición se cumple, devuelve el primer valor; si no, devuelve el segundo.

    printf("El valor de y es: %d\n", y);
    

    return 0; // Finaliza la función main
}

// if se ejecuta si la condición es verdadera

//OPERADORES RELACIONALES 

/*

    <    menor que
    <=  menor que o igual a
    >    mayor que
    >=  mayor que o igual a
    ==  igual a
    !=   no igual a

*/