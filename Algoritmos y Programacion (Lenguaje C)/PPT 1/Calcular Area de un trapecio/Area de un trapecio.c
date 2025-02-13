#include <stdio.h>

int main(){
    float B=0, b=0, h=0;
    printf("Ingrese el largo de la base mayor y luego la longitud de la base menor: ");
    scanf("%f %f", &B, &b);
    printf("Ingrese la altura del trapecio: ");
    scanf("%f", &h);
    printf("El Area del trapecio es = %f\n", 0.5*(B+b)*h);
return 0;
}