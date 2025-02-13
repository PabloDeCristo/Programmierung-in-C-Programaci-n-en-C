#include <stdio.h>

int main(){
    int total=0, horas, minutos, segundos, t1, t2, t3;
    printf("Ingrese el numero de horas: "); scanf("%i", &horas);
    printf("Ingrese el numero de minutos: "); scanf("%i", &minutos);
    printf("Ingrese el numero de segundos: "); scanf("%i", &segundos);
    t1 = horas*3600;
    t2 = minutos*60;
    t3 = segundos*1;
    total = t1+t2+t3;
    printf("La cantidad total de segundos calculada entre las horas, minutos y segundos dados es = %i\n", total);
    return 0;
}