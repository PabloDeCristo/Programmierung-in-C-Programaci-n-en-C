#include <stdio.h>

int main (){
    float ca_final=0, c1, c2, c3, ca_examen, ca_tra;
    printf("Ingrese sus calificaciones parciales: "); scanf("%f %f %f", &c1, &c2, &c3);
    printf("Ingrese la calificacion del examen: "); scanf("%f", &ca_examen);
    printf("Ingrese la calificacion del trabajo final: "); scanf("%f", &ca_tra);
    ca_final = ((c1+c2+c3)/3)*55/100 + ca_examen*30/100 + ca_tra/15*100;
    printf("Su calificacion en el curso de algoritmos fue: %.2f\n", ca_final);
    return 0; 
}