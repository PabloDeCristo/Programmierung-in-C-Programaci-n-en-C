#include <stdio.h>

int main(){
    float celsius=0;
    printf("Ingrese grados celsius: ");
    scanf("%f", &celsius);
    printf("Los grados celsius convertidos a fahrenheit son= %f\n", (1.8 * celsius)+32);
    return 0;
}