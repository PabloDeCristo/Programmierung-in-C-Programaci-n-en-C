#include <stdio.h>

int main(){
    int a, b;
    printf("Ingrese el numero a y b: ");
    scanf("%i %i", &a, &b);

    printf("El resultado de la suma es = %i\n", a+b);
    printf("El resultado de la resta es = %i\n", a-b);
    printf("El resultado de la multiplicacion es = %i\n", a*b);
    printf("El resultado de la division es = %i\n", a/b);
    return 0;
}