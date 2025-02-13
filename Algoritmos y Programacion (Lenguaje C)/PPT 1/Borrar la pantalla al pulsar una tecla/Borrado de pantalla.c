#include <stdio.h>
#include <stdlib.h>

int main(){
    char tecla;
    printf("Programa para borrar pantalla");
    printf("\n---------------------------");
    printf("\n---------------------------");
    printf("\nDigite el numero 1: "); scanf("%c", &tecla);
    if (tecla == '1'){
        system("cls");
        printf("Se ha borrado la pantalla satisfactoriamente");
    }
    else{
        fflush(stdin);
        printf("\nLa tecla fue incorrecta");
        printf("\nIntente nuevamente: "); scanf("%c", &tecla);
    } if (tecla == '1'){
        system("cls");
        printf("\nSe ha borrado la pantalla satisfactoriamente");
    } else{
        printf("\nNo ha ingresado la tecla valida");
    }
    system("pause");
    return 0;
}