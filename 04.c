
#include <stdio.h>
#include <stdlib.h>
void mayor(int numeros[], int narreglos);
void menor(int arreglo[], int narreglos);
int narreglos, cont, num_mayor;
int main()
{
     printf("Numeros del arreglo \n");
        scanf("%d", &narreglos);
        int num[narreglos];
        for(cont = 0; cont < narreglos; cont++){
            printf("Numero: ");
            scanf("%d", &num[cont]);

        }
        mayor(num, narreglos);
        menor(num, narreglos);
}
void mayor(int num[], int narreglos){
    int pos_mayor = 0;
    for(cont = 0; cont<narreglos; cont++){
        if(num[cont] > num_mayor){
            num_mayor = num[cont];
            pos_mayor = cont+1;
        }
    }
    printf("numero mayor: %d, posicion: %d \n", num_mayor, pos_mayor);
}
void menor(int arreglo[], int narreglos){
    int num_menor, pos;
    for(cont =0; cont<narreglos; cont++){
        if(cont == 0){
            num_menor = arreglo[cont];
            pos = cont+1;
        }else{
            if(num_menor > arreglo[cont]){
                num_menor = arreglo[cont];
                pos = cont+1;
            }
        }

    }
    printf("el numero menor es: %d, esta en la pos: %d", num_menor, pos);
}
