#include <stdio.h>
#include <string.h>

int main(){
    char nombre[40], signo[20];
    printf("Ingrese el nombre: ");
    gets(nombre);
    printf("Ingrese el signo: ");
    gets(signo);
    if (strcmp(signo,"Aries")==0 || strcmp(signo,"aries")==0 || strcmp(signo,"ARIES")==0)
    {
        printf("El usuario %s es signo Aries", nombre);
    } 
    else
    {
        printf("El usuario %s no es signo Aries", nombre);
    }
    return 0;
}