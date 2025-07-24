// FUNCINOS RECURSIVAS 

#include <stdio.h>


//function declaration
int factorial(int num);

int main() {    
  int x = 5;

  printf("The factorial of %d is %d\n", x, factorial(x));
 
  return 0;
}

//function definition
int factorial(int num) {
  
  if (num == 1)  /* base case */
    return (1);
  else
    return (num * factorial(num - 1));
} 


int fact(int n){
    if(n == 1)
        return 1; // caso base
    return n * fact(n - 1); // llamada recursiva
}