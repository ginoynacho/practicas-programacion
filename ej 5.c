#include <stdio.h>
#include <stdlib.h>
void seEncuestra(char frase[], char caracter);
int cont =0;
int main()
{
        printf("Frase a examinar: ");
        char frase[999];
        scanf("%999[^\n]s", frase);
        printf("Caracter a buscar en la frase: ");
        char k;
        scanf(" %c", &k);
        seEncuestra(frase, k);

}
void seEncuestra(char frase[], char caracter){
    int long_frase = strlen(frase), veces_caracter= 0;
    for(cont = 0; cont<long_frase; cont++){
        if(frase[cont] == caracter){
            veces_caracter = veces_caracter+1;
        }
    }
    printf("El caracter a examinar se encuentra %d veces en la frase.", veces_caracter);
}
