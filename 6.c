#include <stdio.h>
#include <stdlib.h>
void seEncuestra(int array[], int len_arreglos, int digito_buscar);
int narreglos, digito_buscar, cont;
int main()
{
    printf("Numeros del arreglo \n");
    scanf("%d", &narreglos);
    int num[narreglos];
    for(cont = 0; cont < narreglos; cont++){
        printf("Numero: ");
        scanf("%d", &num[cont]);
    }
    printf("Numero a buscar en el arreglo \n");
    scanf("%d", &digito_buscar);
    seEncuestra(num, narreglos,digito_buscar);
}
void seEncuestra(int array[], int len_arreglos, int digito_buscar){
    int veces_num = 0;
    for(cont = 0; cont<len_arreglos; cont++){
        if(array[cont] == digito_buscar){
            veces_num = veces_num+1;
        }
    }
    printf("El digito a examinar se encuentra %d veces en el arreglo.", veces_num);
}
