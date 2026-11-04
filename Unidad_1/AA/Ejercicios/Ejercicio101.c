#include <stdio.h>
int main () {
float num1 = 0.0, num2 = 0.0, promedio = 0.0, prom_4 = 0.0;

printf("Ingrese el valor de num1:");
scanf("%f", &num1);
printf("Ingrese el valor de num2:");
scanf("%f", &num2);

promedio = ((num1 + num2) / 2);

if (promedio > 0) {
printf("El promedio es:%.2f\n", promedio);

prom_4 = promedio * promedio * promedio * promedio;
printf("El promedio a la cuarta es:%.2f\n", prom_4);
} else {
printf("El promedio no es mayor a 0\n");
} 
}
