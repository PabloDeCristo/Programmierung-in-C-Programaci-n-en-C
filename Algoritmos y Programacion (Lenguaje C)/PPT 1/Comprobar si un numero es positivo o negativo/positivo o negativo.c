#include <stdio.h>

int main(){
    int numero;
    printf("Ingrese un numero: "); scanf("%i", &numero);
    if (numero > 0)
    {
        puts("El numero es positivo");
    } if (numero < 0)
    {
        puts("El numero es negativo");
    } if (numero == 0)
    {
        puts("El numero es nulo");
    }
    return 0;
}