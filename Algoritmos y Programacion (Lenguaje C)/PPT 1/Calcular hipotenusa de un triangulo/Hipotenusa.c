#include <stdio.h>
#include <math.h>

int main(){
    float ca=0, co=0;
    printf("Ingrese el cateto adyacente y el cateto opuesto: ");
    scanf("%f %f", &ca, &co);
    printf("La hipotenusa del triangulo rectangulo es= %.2f\n", sqrt(pow(ca,2)+pow(co,2)));
    return 0;
}