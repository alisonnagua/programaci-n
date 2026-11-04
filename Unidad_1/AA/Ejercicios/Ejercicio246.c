#include <stdio.h>
int main () {
int aux = 0;
float B = 0.0, b = 0.0, h = 0.0, area_trap = 0.0, bono = 0.0;
printf("Ingrese el valor de B:");
scanf("%f", &B);

printf("Ingrese el valor de b:");
scanf("%f", &b);

printf("Ingrese el valor de h:");
scanf("%f", &h);

area_trap = ((B + b) * h / 2);
aux = aux + 1;

if(B > b && h > 0) {
printf("El area del trapecio es: %.2f\n", area_trap);
bono = (area_trap * 1.5);
aux = aux + 1;
printf("El area del trapecio mas el bono es: %.2f\n", bono);
} else {
printf("El valor de B debe ser mayor a b y h debe ser mayor a 0\n");
}
printf("Operaciones realizadas: %d\n", aux);
}

