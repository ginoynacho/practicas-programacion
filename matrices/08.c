#include <stdio.h>
#include <stdlib.h>

int buscarmenor(int matriz[][100], int filas, int columnas, int indice);
int main()
{
    int filas, columnas;

    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);

    int matriz[filas][100];

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            printf("Fila %d Columna %d\n Ingrese el valor: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    int indice;
    printf("Columna en la que desea buscar el menor numero: ");
    scanf("%d", &indice);

    int menor_num = buscarmenor(matriz, filas, columnas, indice);

    printf("El menor numero de la columna %d es el %d", indice, menor_num);

}
int buscarmenor(int matriz[][100], int filas, int columnas, int indice){
    int min;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            if(i == 0 && j == indice)
                min = matriz[i][j];
            else{
                if(matriz[i][j] < min)
                    min = matriz[i][j];
            }
        }
    }
    return min;
}
