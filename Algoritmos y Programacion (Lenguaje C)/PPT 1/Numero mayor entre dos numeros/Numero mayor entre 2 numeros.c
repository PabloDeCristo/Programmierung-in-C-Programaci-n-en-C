#include <stdio.h>

int main(){
    int n1, n2;
    printf("Ingrese ambos numeros: "); scanf("%i %i", &n1, &n2);
    if (n1 > n2)
    {
        printf("%i es mayor a %i", n1, n2);
    }
    else if (n1 < n2)
    {
        printf("%i es menor a %i", n1, n2);

    } else{
        printf("ambos numeros son iguales ");
    }

    return 0;
}