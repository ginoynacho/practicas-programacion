#include <stdio.h>
#include <stdlib.h>
typedef struct panda{
    char nombre[30];
    char sexo;
    float peso;
    int nacimiento;
} panda;

int TenerBebes(panda pandas[], int numero);
int edadPanda(panda x[], int numero);

void main()
{
    printf("Cuantos pandas tiene tu zoologico? ");
    int cantidad_de_pandas;
    scanf("%d",&cantidad_de_pandas);
    panda pandas[cantidad_de_pandas];
    for(int cont = 0; cont<cantidad_de_pandas; cont++){
        printf("Nombre del panda n%d ", cont+1);
        scanf("%s", &pandas[cont].nombre);
        getchar();
        printf("SEXO (f o m) del panda n%d ", cont+1);
        scanf("%c", &pandas[cont].sexo);
        getchar();
        printf("Peso del panda n%d ", cont+1);
        scanf("%f", &pandas[cont].peso);
        printf("Año de nacimiento del panda n%d ", cont+1);
        scanf("%d", &pandas[cont].nacimiento);
    }
    while(1){
        printf("Para que panda desea saber si puede o no tener babies \n");
        int il_elegido;
        scanf("%d", &il_elegido);
        il_elegido--;
        if(TenerBebes(pandas, il_elegido)){
            printf("El panda %d puede tener bebes \n", il_elegido+1);
        }else{
            printf("El panda %d no puede tener babies \n", il_elegido+1);
        }
    }
}

int TenerBebes(panda pandas[], int numero){
    if(edadPanda(pandas, numero) >= 5 && pandas[numero].sexo == 'f'){
        return 1;
    }else{
        return 0;
    }
}

int edadPanda(panda x[], int numero){
    return (2023 - x[numero].nacimiento);
}
