#include <stdio.h>

int main(){
    int Horas_trab, Valor_hora;
    printf("Ingrese la cantidad de horas trabajadas: "); scanf("%i", &Horas_trab);
    printf("Ingrese el valor de 1 hora de trabajo: "); scanf("%i", &Valor_hora);
    printf("El salario del trabajador es = %i\n", Horas_trab*Valor_hora);
    return 0;
}
