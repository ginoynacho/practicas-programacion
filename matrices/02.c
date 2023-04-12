#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont2, cont;
    printf("nº Nombres: ");
    int nº_nombres = scanf("%d \n");
    int nombres[20][nº_nombres],longitud_nombres[nº_nombres];
    for( cont2 = 0; cont2 < 5; cont2++){
        printf("Nombre numero %d: ", cont2+1);
        scanf("%s", &nombres[cont2]);
    }
    printf("\n");
    for( cont2 = 0; cont2 < nº_nombres; cont2++){

        longitud_nombres[cont2] = strlen(nombres[cont2]);
    }

}
