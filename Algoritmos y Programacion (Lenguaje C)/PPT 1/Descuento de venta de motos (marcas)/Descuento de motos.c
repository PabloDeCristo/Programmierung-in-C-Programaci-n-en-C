#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    float precio, total;
    char marca [20];
    printf("Programa de descuentos de moto");
    printf("\n----------------------------");
    printf("\n----------------------------");
    printf("\nIngrese la marca del vehiculo (honda, yamaha, suzuki o otra): "); gets(marca);
    printf("\nIngrese el precio del vehiculo: "); scanf("%f", &precio);
    system("cls");
    if (stricmp(marca,"honda") == 0)
    {
      total = precio - (precio*0.05);
      printf("El precio del vehiculo con el descuento aplicado es: %.f", total);
    }
    if (stricmp(marca,"yamaha") == 0)
    {
      total = precio - (precio*0.08);
      printf("El precio del vehiculo con el descuento aplicado es: %.f", total);
    }
    if (stricmp(marca,"suzuki") == 0)
    {
      total = precio - (precio*0.1);
      printf("El precio del vehiculo con el descuento aplicado es: %.f", total);
    }
    if (stricmp(marca,"otra") == 0)
    {
      total = precio - (precio*0.02);
      printf("El precio del vehiculo con el descuento aplicado es: %.f", total);
    }
    printf("\n----------------------------");
    system("PAUSE");
    return 0;
    }