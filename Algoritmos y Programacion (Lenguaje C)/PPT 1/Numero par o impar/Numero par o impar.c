#include <stdio.h>

int main(){
    int numero;
    printf("Ingrese el numero: "); scanf("%i", &numero);
    if (numero %2 == 0)
    {
        puts("El numero es par");
    }
    if (numero %2 == 1)
    {
        puts("El numero es impar");
    }
    return 0;
}