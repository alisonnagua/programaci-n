#include <stdio.h>
#include <math.h>
int main () {
float GALON_LITRO = 3.78541;
float litros = 0.0, galones = 0.0, resultado = 0.0;

printf("Ingrese el valor de el volumen en galones:");
scanf("%f", &galones);

litros = (galones * GALON_LITRO);

if (litros > 0) {
printf("%.2f galones equivalen a %.2f litros\n", galones, litros);
} else {
printf("Los litros deben ser mayores a 0\n");
} 

resultado = litros * M_PI;
printf("El resultado de los litros por PI es:%.2f\n", resultado);
}