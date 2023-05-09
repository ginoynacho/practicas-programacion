#include <stdio.h>
#include <stdlib.h>
int main()
{
    int filas, columnas;
    printf("Cant filas? ");
    scanf("%d", &filas);
    printf("Cant columnas? <100 ");
    scanf("%d", &columnas);
    float matriz[filas][100];
    for(int cont_columnas = 0; cont_columnas<columnas; cont_columnas ++){
        for (int cont_filas = 0; cont_filas < filas; cont_filas++)
        {
            printf("Numero? ");
            scanf("%f", &matriz[cont_filas][cont_columnas]);
        }
        
    }

    int cont_negativos = 0;
    for(int cont_columnas = 0; cont_columnas<columnas; cont_columnas++){
        for (int cont_filas = 0; cont_filas < filas; cont_filas++)
        {
            if(matriz[cont_filas][cont_columnas] < 0){
                cont_negativos++;
            }
        }
        
    }    
    
    printf("La cantidad de negativos es %d \n", cont_negativos);

}
