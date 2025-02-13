#include <stdio.h>
#include <math.h>

int main(){
    float numero, raiz_2;
    printf("Ingrese el numero a determinar: "); scanf("%f", &numero);
    
    if (numero >= 0)
    { raiz_2 = sqrt(numero);
        printf("La raiz de %.f es = %.f\n", numero, raiz_2); 
    }
    else {
         printf("El numero tiene raiz imaginaria");
    }
    
    return 0;
}