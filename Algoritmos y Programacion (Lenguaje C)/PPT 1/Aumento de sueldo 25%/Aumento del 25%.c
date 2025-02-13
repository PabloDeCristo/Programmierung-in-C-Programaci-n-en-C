#include <stdio.h>

int main(){
    float aumento, salario_anterior;
    printf("Ingrese su salario a aumentar: ");
    scanf("%f", &salario_anterior);
    aumento = (salario_anterior)*25/100;
    printf("El Salario con el aumento es = %.f\n", salario_anterior+aumento);
    return 0;
}