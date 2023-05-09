#include <stdio.h>
#include <stdlib.h>

void todosPositivos(int arreglo[], int tamaño);

int main()
{
    int tamaño;
    printf("Numeros del arreglo \n");
    scanf("%d", &tamaño);
    int num[tamaño];
    for(int cont = 0; cont < tamaño; cont++){
        printf("Numero: ");
        scanf("%d", &num[cont]);
    }
    
    todosPositivos(num, tamaño);

}

void todosPositivos(int arreglo[], int tamaño){
    int todosPositivos_bandera = 1;
    for(int cont = 0; cont<tamaño; cont++){
        if(arreglo[cont] < 0){
            todosPositivos_bandera = 0;
        }
    }

    if(todosPositivos_bandera != 1){
        printf("No todos son postivos \n");
    }else{
        printf("Todos son positivos \n");
    }
}
