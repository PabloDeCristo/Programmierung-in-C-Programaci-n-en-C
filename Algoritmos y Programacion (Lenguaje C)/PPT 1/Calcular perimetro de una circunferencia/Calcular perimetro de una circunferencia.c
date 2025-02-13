#include <stdio.h>

#define Pi 3.1416

int main(){
    float r=0;
    printf("Ingrese el radio: ");
    scanf("%f", &r);
    printf("El perimetro de la circunferencia es= %f\n", 2*Pi*r);
    return 0;
}