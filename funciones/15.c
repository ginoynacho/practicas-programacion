#include <stdio.h>
#include <stdlib.h>

void Factorial(int array[], int narreglos);
int main()
{
      int narreglos = 4, cont;
      int num[4] = {1, 2, 0, 4};
      Factorial(num, narreglos);
      printf("Arreglo de Factoriales:");
      for(cont = 0; cont<narreglos; cont++){
      printf(" %d",num[cont]);
      }
}

void Factorial(int array[], int narreglos){
    int factorial_temp = 1;
    for(int cont =0; cont<narreglos; cont++){
        factorial_temp = 1;
        if(array[cont]==0){
            array[cont] = 0;
        }else{
            for(int cont2 = array[cont]; cont2>0; cont2--){
                factorial_temp = factorial_temp*cont2;
            }
            array[cont] = factorial_temp;
        }
    }
}


