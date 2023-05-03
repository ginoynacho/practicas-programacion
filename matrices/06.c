#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void promedioArreglo(float arreglo[][100], float arreglo_promedios[], int columnas, int filas);
int main()
{
    int columnas, filas;
    printf("Columnas? \n");
    scanf(" %d", &columnas);
    printf("Filas? \n");
    scanf(" %d", &filas);
    float arreglo_numeros[filas][100];
    for(int cont_columnas = 0; cont_columnas < columnas; cont_columnas++){
        for( int cont_filas = 0; cont_filas < filas; cont_filas++){
            printf("Numero ");
            scanf("%f", &arreglo_numeros[cont_filas][cont_columnas]);
        }
    }
    float arreglo_promedios[columnas];
    promedioArreglo(arreglo_numeros, arreglo_promedios, columnas, filas);
    printf("array promedios: ");
    for( int cont_filas = 0; cont_filas < columnas; cont_filas++){
        printf("%.2f ", arreglo_promedios[cont_filas]);
    }
}

void promedioArreglo(float arreglo[][100], float arreglo_promedios[], int columnas, int filas){
    float promedio_temp = 0;
    for(int cont_columnas = 0; cont_columnas < columnas; cont_columnas++){
        for( int cont_filas = 0; cont_filas < filas; cont_filas++){
            promedio_temp = arreglo[cont_filas][cont_columnas] + promedio_temp;
        }
        arreglo_promedios[cont_columnas] = (promedio_temp/filas);
        promedio_temp = 0;
    }
}


