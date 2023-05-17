#include <stdio.h>
#include <stdlib.h>
typedef struct alumno{
    char nombre[30];
    char sexo;
    float nota;
} alumno;

void porcentajeSexo(alumno curso[], int tamaño_curso);
void porcetajeNotas(alumno curso[], int tamaño_curso);

void main()
{
    printf("Cuantos alumnos tiene tu zoologico? ");
    int tamaño_curso;
    scanf("%d",&tamaño_curso);
    alumno grupo[tamaño_curso];
    for(int cont = 0; cont<tamaño_curso; cont++){
        printf("Nombre del alumno n%d ", cont+1);
        scanf("%s", &grupo[cont].nombre);
        getchar();
        printf("SEXO (f o m) del alumno  n%d ", cont+1);
        scanf("%c", &grupo[cont].sexo);
        getchar();
        printf("Nota del alumno  n%d ", cont+1);
        scanf("%f", &grupo[cont].nota);
        printf("\n");
    }
    porcentajeSexo(grupo, tamaño_curso);
    porcetajeNotas(grupo, tamaño_curso);

}

void porcentajeSexo(alumno curso[], int tamaño_curso){
    float porcentajeM = 0, porcentajeF = 0;
    for(int cont = 0; cont<tamaño_curso; cont++){
        if(curso[cont].sexo == 'f'){
            porcentajeF++;
        }
        if(curso[cont].sexo == 'm'){
            porcentajeM++;
        }
    }
    porcentajeF = porcentajeF/tamaño_curso *100;
    porcentajeM = porcentajeM/tamaño_curso *100;
    printf("Porcentaje de Feminas %.2f, porcentaje de Masculinos %.2f \n", porcentajeF, porcentajeM);
}

void porcetajeNotas(alumno curso[], int tamaño_curso){
    float aprobados = 0, reprobados = 0;
    for(int cont = 0; cont<tamaño_curso; cont++){
        if(curso[cont].nota < 6 ){
            reprobados++;
        }
        if(curso[cont].nota >= 6 ){
            aprobados++;
        }
    }
    reprobados = reprobados/tamaño_curso *100;
    aprobados = aprobados/tamaño_curso *100;
    printf("Porcentaje de Reprobados %.2f, porcentaje de Aprobados %.2f \n", reprobados, aprobados);
}
