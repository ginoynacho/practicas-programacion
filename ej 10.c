#include <stdio.h>
#include <stdlib.h>
int contarVocales(char frase[]);
int main()
{
      printf("Frase a examinar: ");
        char frase[999];
        scanf("%999[^\n]s", frase);
        printf("en la frase hay %d vocales.", contarVocales(frase));
}
int contarVocales(char frase[]){
    int long_frase = strlen(frase);
    int cont_vocales = 0;
    for(int cont = 0; cont < long_frase ; cont++){
        if(frase[cont] == 'a'|| frase[cont] == 'e' || frase[cont] == 'i' || frase[cont] == 'o' || frase[cont] == 'u' || frase[cont] == 'A'|| frase[cont] == 'E' || frase[cont] == 'I' || frase[cont] == 'O' || frase[cont] == 'U' ){
            cont_vocales = cont_vocales+1;
        }
    }
    return cont_vocales;
}
