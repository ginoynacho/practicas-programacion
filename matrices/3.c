#include <stdio.h>
#include <stdlib.h>

int main()
{
    int filas, columnas;
    printf("filas \n");
    scanf(" %d", &filas);
    printf("columnas \n");
    scanf(" %d", &columnas);
    float num[filas][columnas];
    for(int cont_columnas = 0; cont_columnas < columnas; cont_columnas++){
        for( int cont_filas = 0; cont_filas < filas; cont_filas++){
            printf("Numero ");
            scanf("%f", &num[cont_filas][cont_columnas]);
        }
    }
    float num_mayor;
    for(int cont_columnas = 0; cont_columnas < columnas; cont_columnas++){
        for(int cont_filas = 0; cont_filas<filas; cont_filas++){
          if(cont_columnas == 0  && cont_filas == 0){
            num_mayor = num[cont_filas][cont_columnas];
          }
          if(num[cont_filas][cont_columnas] > num_mayor){
                num_mayor = num[cont_filas][cont_columnas];
            }
        }
}
    printf("Numero mayor %.2f", num_mayor);
}
