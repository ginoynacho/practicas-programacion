#include <stdio.h>
#include <stdlib.h>
void constMatrizUnidad(int matriz[][100], int tamaño);
void verificadorMatrizUnidad(int matriz[][100], int tamaño);
int main()
{
    int tamaño;
    printf("Tamaño? \n");
    scanf(" %d", &tamaño);
    float arreglo_numeros[tamaño][100];
    constMatrizUnidad(arreglo_numeros, tamaño);
    verificadorMatrizUnidad(arreglo_numeros, tamaño);
}

void verificadorMatrizUnidad(int matriz[][100], int tamaño){
    int es_unidad = 1;
    for(int cont_columnas = 0; cont_columnas < tamaño; cont_columnas++){
        for( int cont_filas = 0; cont_filas < tamaño; cont_filas++){
            if(cont_columnas == cont_filas && matriz[cont_columnas][cont_filas] != 1){
                es_unidad = 0;
            }
            if(cont_columnas != cont_filas && matriz[cont_columnas][cont_filas]){
                es_unidad = 0;
            }
        }
    }
    if(es_unidad == 1){
        printf("La matriz es unidad");
    }else{
        printf("La matriz no es unidad");
    }
}

void constMatrizUnidad(int matriz[][100], int tamaño){
    for(int cont_columnas = 0; cont_columnas < tamaño; cont_columnas++){
        for( int cont_filas = 0; cont_filas < tamaño; cont_filas++){
            if(cont_columnas == cont_filas){
                matriz[cont_columnas][cont_filas] = 1;
            }
            if(cont_columnas != cont_filas){
                matriz[cont_columnas][cont_filas] = 0;
            }
        }
    }
}
