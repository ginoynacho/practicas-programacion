#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
// 1 2 0 4
void Invertir(float array[], int narreglos);
int main()
{
      int narreglos, cont;
      printf("Numeros del arreglo \n");
      scanf("%d", &narreglos);
      float num[narreglos];
      for(cont = 0; cont < narreglos; cont++){
            printf("Numero: ");
            scanf("%f", &num[cont]);
      }
      Invertir(num, narreglos);

}

void Invertir(float array[], int narreglos){
    float temp;
    int ultimo = narreglos-1;
    float array_invertido[narreglos];
    for(int cont = 0; cont<narreglos; cont++){
        temp = array[ultimo];
        array_invertido[cont] = temp;
        ultimo = ultimo-1;;
    }
    printf("Arreglo invertido:");
    for(int cont = 0; cont<narreglos; cont++){
        printf(" %.2f", array_invertido[cont]);
    }
}


