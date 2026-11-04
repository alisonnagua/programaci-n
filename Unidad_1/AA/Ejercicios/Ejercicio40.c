#include <stdio.h>
int main () {
float base_mayor = 0.0, base_menor = 0.0, altura = 0.0;
float area = 0.0, area_cubo = 0.0;

printf("Ingrese el valor de la base mayor:");
scanf("%f", &base_mayor);

printf("Ingrese el valor de la base menor:");
scanf("%f", &base_menor);

printf("Ingrese la altura:");
scanf("%f", &altura);

area = (base_mayor + base_menor) * altura / 2;

if (base_mayor > base_menor && altura > 0) {
printf("El area es:%.2f\n", area);
area_cubo = area * area * area;
printf("El area al cubo es:%.2f\n", area_cubo);
} else {
printf("La base mayor debe ser mayor a la base menor y la altura debe ser mayor a 0\n");
}
}