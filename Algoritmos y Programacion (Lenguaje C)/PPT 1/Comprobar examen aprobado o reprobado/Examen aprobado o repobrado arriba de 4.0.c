#include <stdio.h>

int main(){
    float ne;
    printf("Ingrese su nota en el examen: "); scanf("%f", &ne);
    if (ne >= 4.0)
    {
        printf("Usted se encuentra aprobado");
    } else{
        printf("Usted se encuentra reprobado");
    }
    return 0;
}