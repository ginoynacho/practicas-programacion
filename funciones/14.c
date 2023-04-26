#include <stdio.h>
#include <stdlib.h>
int ContadorNumNegativos(int array[], int narreglos);
int main()
      
      /*Amigazo la proxima no te dejes la cuenta abierta en el NAC porque alguien te va a robar todo el codigo como yo recien me ayudaste a pasar 6to info
      te lo agradezco muchisimo.
      Con cariño:
                  Alguien que para nada te borro todos los repositorios.*/ 
      
{
      int narreglos, cont;
      printf("Numeros del arreglo \n");
      scanf("%d", &narreglos);
      int num[narreglos];
      for(cont = 0; cont < narreglos; cont++){
            printf("Numero: ");
            scanf("%d", &num[cont]);
      }
      printf("Cantidad de numeros negativos: %d", ContadorNumNegativos(num, narreglos));
}

int ContadorNumNegativos(int array[], int narreglos){
    int cont_num_neg = 0;
    for(int cont =0; cont<narreglos; cont++){
        if(array[cont] < 0){
            cont_num_neg++;
        }
    }
    return cont_num_neg;
}


