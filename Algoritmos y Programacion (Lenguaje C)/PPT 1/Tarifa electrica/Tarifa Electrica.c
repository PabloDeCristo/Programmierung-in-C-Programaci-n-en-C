#include <stdio.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TAROFA3 0.9

int main(){
    float gasto, tarifa;
    printf("Ingrese su gasto en kwh: "); scanf("%f", &gasto);
    if (gasto <= 1.2)
    {
        tarifa = TARIFA1;
    }
    if (gasto > 1000 && gasto <= 1850)
    {
        tarifa = TARIFA2;
    }
    if (gasto > 1850)
    {
        tarifa = TAROFA3;
    }
    printf("Su tarifa dada segun los gastos ingresados es: %.1f\n", tarifa);
    return 0;
}