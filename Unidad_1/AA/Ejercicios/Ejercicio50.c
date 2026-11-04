#include <stdio.h>
int main () {
int parte_entera = 0;
float PIE_METRO = 0.3048, pies = 0.0, metros = 0;
printf("Ingrese la altura en pies:");
scanf("%f", &pies);

metros = pies * PIE_METRO;
// metros > 0
if (metros > 0) {
printf("%.2f pies equivalen a %.2f metros\n", pies, metros);

// cambiar a entero
parte_entera = (int) metros;
printf("La parte entera del resultado (%d)\n", parte_entera);

if (parte_entera % 2 == 0) {
     printf("El numero es par\n");
} else {
     printf("El numero es impar\n");

    }
} else {
     printf("La altura debe ser mayor a 0\n");
}
}
