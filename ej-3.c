#include <stdio.h>
#include <stdlib.h>
int suma_func(int arreglo[], int narreglos);
int multiplicacion(int arreglo[], int narreglos);
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
        printf("%d\n", suma_func(num, narreglos));
        printf("%d\n", multiplicacion(num, narreglos));
}
int suma_func(int arreglo[], int narreglos){
    suma = 0;
    for(cont =0; cont<narreglos; cont++){
        suma = suma+arreglo[cont];
    }
    return suma;
}
int multiplicacion(int arreglo[], int narreglos){
    int multiplicacion_total = 1;
    for(cont =0; cont<narreglos; cont++){
        multiplicacion_total = multiplicacion_total * arreglo[cont];
    }
    return multiplicacion_total;
}
