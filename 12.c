#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
float PorcentajeImpares(int array[], int narreglos);
int main()
{
      int narreglos, cont;
      printf("Numeros del arreglo \n");
      scanf("%d", &narreglos);
      int num[narreglos];
      for(cont = 0; cont < narreglos; cont++){
            printf("Numero: ");
            scanf("%d", &num[cont]);
      }
      printf("porcentaje de numeros impares: %.2f%s", PorcentajeImpares(num, narreglos), "%");
}

float PorcentajeImpares(int array[], int narreglos){
    int cont_impares = 0;
    for(int cont = 0; cont < narreglos ; cont++){
        if(array[cont] %2 != 0 ){
            cont_impares = cont_impares+1;
        }
    }
    return ((float)cont_impares/(float)narreglos)*100;
}
