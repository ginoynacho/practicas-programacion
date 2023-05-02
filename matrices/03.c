#include <stdio.h>
#include <stdlib.h>
void BusacarMayor(float arreglo_numeros[][5],  int filas);
int main()
{
    int filas, columnas;
    printf("filas \n");
    scanf(" %d", &filas);
    float arreglo_numeros[filas][5];
    for(int cont_columnas = 0; cont_columnas < 5; cont_columnas++){
        for( int cont_filas = 0; cont_filas < filas; cont_filas++){
            printf("Numero ");
            scanf("%f", &arreglo_numeros[cont_filas][cont_columnas]);
        }
    }
    BusacarMayor( arreglo_numeros, filas);
}

void BusacarMayor(float arreglo_numeros[][5], int filas){
    float num_mayor;
    for(int cont_columnas = 0; cont_columnas < 5; cont_columnas++){
        for(int cont_filas = 0; cont_filas<filas; cont_filas++){
          if(cont_columnas == 0  && cont_filas == 0){
            num_mayor = arreglo_numeros[cont_filas][cont_columnas];
          }
          if(arreglo_numeros[cont_filas][cont_columnas] > num_mayor){
                num_mayor = arreglo_numeros[cont_filas][cont_columnas];
            }
        }
}
    printf("Numero mayor %.2f", num_mayor);


}
