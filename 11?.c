#include <stdio.h>
#include <stdlib.h>
float PorcentajePares(int array[], int narreglos);
int main()
{
      int narreglos;
      printf("Numeros del arreglo \n");
      scanf("%d", &narreglos);
      int num[narreglos];
      for(cont = 0; cont < narreglos; cont++){
            printf("Numero: ");
            scanf("%d", &num[cont]);
      }
      printf("porcentaje de numeros pares: %.2f", PorcentajePares(num, narreglos));
}

float PorcentajePares(int array[], int narreglos){
    int cont_pares = 0;
    for(int cont = 0; cont < narreglos ; cont++){
        if(array[cont] %2 == 0 ){
            cont_pares = cont_pares+1;
        }
    }
    return (cont_pares/narreglos)*100;
}
