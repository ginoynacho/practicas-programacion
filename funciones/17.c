#include <stdio.h>
#include <stdlib.h>
void ultimoprimo(int num[],int narreglos);
void cuartoparidad(int num[],int narreglos);
void divisor2elem(int num[],int narreglos);
void elem2perfecto(int num[],int narreglos);
void mult3(int num[],int narreglos);
void mostrarhastamitad(int num[],int narreglos);
int main()
{
    int narreglos, cont;
      printf("Numeros del arreglo \n");
      scanf("%d", &narreglos);
      int num[narreglos];
      for(cont = 0; cont < narreglos; cont++){
            printf("Numero: ");
            scanf("%d", &num[cont]);
      }
      ultimoprimo(num, narreglos);
      cuartoparidad(num, narreglos);
      divisor2elem(num, narreglos);
      elem2perfecto(num, narreglos);
      mult3(num, narreglos);
      mostrarhastamitad(num, narreglos);
}
void ultimoprimo(int num[],int narreglos){
    int ultnum = num[narreglos-1], cont_div = 0;
    for(int cont = 1; cont<=ultnum; cont++){
        if(ultnum%cont== 0){
            cont_div = cont_div +1;
        }
    }
    if(cont_div <= 2 || ultnum == 1){
        printf("El ultimo numero es primo\n");
    }else{
        printf("El ultimo numero no es primo\n");
    }
}

void cuartoparidad(int num[],int narreglos){
    if(narreglos<4){
        printf("No existe un cuarto numero en el arreglo\n");
    }else{
         if(num[3]%2 == 0){
        printf("el 4to numero es par \n");
    }else{
        printf("el 4to numero es impar \n");
    }
}
}

void divisor2elem(int num[],int narreglos){
    if(narreglos<2){
            printf("No existe un segundo numero en el arreglo\n");
    }else{
            printf("Los divisores del segundo elemento son: ");
            for(int cont = 1; cont<=num[1];cont++ ){
                if(num[1]%cont == 0){
                    printf("%d ", cont);
                }
            }
            printf("\n");
}
}

void elem2perfecto(int num[],int narreglos){
    if(narreglos<2){
        printf("No existe un segundo numero en el arreglo\n");
    }else{
        int divisores = 0;
        for(int cont = 1; cont<num[1];cont++ ){
            if(num[1]%cont == 0){
                divisores = divisores+cont;
            }
        }
        if(divisores == num[1]){
            printf("El segundo numero es perfecto\n");
        }else{
            printf("El segundo numero no es perfecto\n");
        }
    }
}

void mult3(int num[],int narreglos){
    printf("Los numeros multiplos de 3 son: ");
    for(int cont = 0; cont < narreglos; cont++){
        if(num[cont]%3 == 0){
            printf("%d ", num[cont]);
        }
    }
    printf("\n");
}

void mostrarhastamitad(int num[],int narreglos){
    int mitad = 0;
    if(narreglos%2==0){
        mitad = narreglos/2;
    }else{
        mitad = (narreglos+1)/2;
    }
    printf("Los elementos hasta la mitad son: ");
    for(int cont = 0; cont<mitad; cont++){
        printf("%d ", num[cont]);
    }
}
