#include <stdio.h>
#include <string.h>

int main(){
    char nombre[40], sexo[15];
    int edad;
    printf("Ingrese su Nombre: "); gets(nombre);
    printf("Ingrese su Sexo: "); gets(sexo);
    printf("Ingrese su Edad: "); scanf("%i", &edad);    

    if ((stricmp(sexo,"Masculino")==0) && (edad >= 18)){
     printf("El usuario %s esta permitido", nombre);
    } else{
        printf("El usuario %s no esta permitido", nombre);
    }
    return 0;
}