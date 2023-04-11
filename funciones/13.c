#include <stdio.h>
#include <stdlib.h>
int ContadorTermina0(int array[], int narreglos);
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
      printf("Cantidad de numeros terminados en 0: %d", ContadorTermina0(num, narreglos));
}

int ContadorTermina0(int array[], int narreglos){
    int cont_termina_0 = 0;
    for(int cont =0; cont<narreglos; cont++){
        if(array[cont]%10 == 0){
            cont_termina_0++;
        }
    }
    return cont_termina_0;
}


