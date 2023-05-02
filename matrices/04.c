#include <stdio.h>
#include <stdlib.h>
int BusacarMayor(float arreglo_numeros[][100],  int filas, int columnas);
int main()
{
    int filas, columnas;
    printf("filas \n");
    scanf(" %d", &filas);
    printf("columnas \n");
    scanf(" %d", &columnas);
    float arreglo_numeros[filas][100];
    for(int cont_columnas = 0; cont_columnas < columnas; cont_columnas++){
        for( int cont_filas = 0; cont_filas < filas; cont_filas++){
            printf("Numero ");
            scanf("%f", &arreglo_numeros[cont_filas][cont_columnas]);
        }
    }
    printf("%d", BusacarMayor( arreglo_numeros, filas, columnas));
}

int BusacarMayor(float arreglo_numeros[][100], int filas, int columnas){
    float num_mayor;
    for(int cont_columnas = 0; cont_columnas < columnas; cont_columnas++){
        for(int cont_filas = 0; cont_filas<filas; cont_filas++){
          if(arreglo_numeros[cont_filas][cont_columnas] != arreglo_numeros[cont_columnas][cont_filas]){
            return 0;
            }
          }
        }
    return 1;

}


