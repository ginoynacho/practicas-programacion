#include <stdio.h>
#include <stdlib.h>
int narreglos, cont, num_k;
void obtener_mayor(int numeros[], int narreglos, int num_k);
int main()
{
        printf("Numeros del arreglo \n");
        scanf("%d", &narreglos);
        int num[narreglos];
        for(cont = 0; cont < narreglos; cont++){
            printf("Numero: ");
            scanf("%d", &num[cont]);
        }
        printf("Que numero quiere usar para evaluar: ");
        scanf("%d", &num_k);
        obtener_mayor(num, narreglos, num_k);
}
void obtener_mayor(int num[], int narreglos, int num_k){
    printf("Los numeros mayores son: ");
    for(cont = 0; cont<narreglos; cont++){
      if(num[cont] > num_k){
                printf("%d ", num[cont]);
        }
    }


}
