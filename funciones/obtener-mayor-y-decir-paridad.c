//dado un arreglo de  n° numeros, encontrar el mayor y decir si es par o impar

#include <stdio.h>
#include <stdlib.h>

int obtener_mayor(int numeros[], int narreglos);
void par_impar(int numero);
int num_mayor = 0, cont, narreglos;
int main()
{
    printf("Numeros del arreglo \n");
    scanf("%d", &narreglos);
    int num[narreglos];
    for(cont = 0; cont < narreglos; cont++){
        printf("Numero: ");
        scanf("%d", &num[cont]);

    }
    num_mayor = obtener_mayor(num, narreglos);
    par_impar(num_mayor);
}

int obtener_mayor(int num[], int narreglos){
    for(cont = 0; cont<narreglos; cont++){
        if(num[cont] > num_mayor){
            num_mayor = num[cont];
        }
    }
    return num_mayor;

}
void par_impar(int num){

    if(num%2 == 0){
        printf("Es par \n");
    }else{
        printf("Es impar \n");
    }
}
