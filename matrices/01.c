#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont2, cont;
    printf("Nombres \n");
    int nombres[20][5];
    for( cont2 = 0; cont2 < 5; cont2++){
        printf("Nombre numero %d: ", cont2+1);
        scanf("%s", &nombres[cont2]);
    }
    printf("\n");
    for( cont2 = 0; cont2 < 5; cont2++){
        printf("Nombre numero %d: ", cont2+1);
        printf("%s", nombres[cont2]);
        printf("\n");
    }

}
