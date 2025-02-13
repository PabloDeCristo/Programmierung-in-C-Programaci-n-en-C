#include <stdio.h>

int main(){
    int n1, n2;
    printf("Ingrese 2 numeros: "); scanf("%i %i", &n1, &n2);
    if (n1 % n2 == 0){
        printf("El numero %i es divisible por %i", n1, n2);
    }
    else{
        printf("El numero %i no es divisible por %i", n1, n2);
    }
    return 0;
}