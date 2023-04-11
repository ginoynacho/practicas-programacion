#include <stdio.h>
#include <stdlib.h>
int ContadorNumNegativos(int array[], int narreglos);
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
      printf("Cantidad de numeros negativos: %d", ContadorNumNegativos(num, narreglos));
}

int ContadorNumNegativos(int array[], int narreglos){
    int cont_num_neg = 0;
    for(int cont =0; cont<narreglos; cont++){
        if(array[cont] < 0){
            cont_num_neg++;
        }
    }
    return cont_num_neg;
}


