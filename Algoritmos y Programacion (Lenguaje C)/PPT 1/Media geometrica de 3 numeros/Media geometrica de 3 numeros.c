#include <stdio.h>
#include <math.h>

int main(){
    float MD_Geo=0, n1, n2, n3;
    printf("Ingrese 3 numeros para calcular su respectiva media geometrica: "); scanf("%f %f %f", &n1, &n2, &n3);
    MD_Geo = cbrt(n1*n2*n3);
    printf("La media geometrica de los 3 numeros dados es = %.2f\n", MD_Geo);
    return 0;
}