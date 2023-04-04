
#include <stdio.h>
#include <stdlib.h>
void imprimir(int arreglo[], int narreglos);
int narreglos, cont;
int main()
{
     printf("Numeros del arreglo \n");
        scanf("%d", &narreglos);
        int num[narreglos];
        for(cont = 0; cont < narreglos; cont++){
            printf("Numero: ");
            scanf("%d", &num[cont]);

        }
        imprimir(num, narreglos);
}
void imprimir(int arreglo[], int narreglos){
    for(cont = 0; cont < narreglos; cont++){
        printf("%d ", arreglo[cont]);
    }
}
