#include <stdio.h>
#include <stdlib.h>
float promedio(int arreglo[], int narreglos);
int narreglos, cont, suma;
int main()
{
     printf("Numeros del arreglo \n");
        scanf("%d", &narreglos);
        int num[narreglos];
        for(cont = 0; cont < narreglos; cont++){
            printf("Numero: ");
            scanf("%d", &num[cont]);

        }
        printf("%.2f", promedio(num, narreglos));
}
float promedio(int arreglo[], int narreglos){
    suma = 0;
    for(cont = 0; cont < narreglos; cont++){
       suma = suma + arreglo[cont];
    }
    return suma/narreglos;
}
