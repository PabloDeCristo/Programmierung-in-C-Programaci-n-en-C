#include <stdio.h>

int main(){
    float pt, d;
    printf("Ingrese el precio total: ");
    scanf("%f", pt);
    d=pt*15/100;
    printf("El precio con el descuento aplicado es = %f\n", pt-d);
return 0;
}