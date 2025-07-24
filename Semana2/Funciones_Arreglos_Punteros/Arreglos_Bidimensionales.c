// ARREGLOS BIDIMENSIONALES 


#include <stdio.h>


int main() {

    int c[2][3]; /* A 2 x 3 array */

    int a[2][3] = {
        {3, 2, 6},
        {4, 5, 20}
    };

    int arr[2][5] =
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };

    int b[2][3] = { {3, 2, 6}, {4, 5, 20} }; 

    //recorrer el arreglo bidimensional
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }




    return 0;
}