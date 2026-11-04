#include <stdio.h>
#include <stdlib.h>
int main () {
int e1 = 0, e2 = 0, e3 = 0, e4 = 0, e5 = 0;
float promedio = 0.0;
printf("Ingrese el valor de e1:");
scanf("%d", &e1);
printf("Ingrese el valor de e2:");
scanf("%d", &e2);
printf("Ingrese el valor de e3:");
scanf("%d", &e3);
printf("Ingrese el valor de e4:");
scanf("%d", &e4);
printf("Ingrese el valor de e5:");
scanf("%d", &e5);

promedio = (float)((e1 + e2 + e3 + e4 + e5 ) / 5);
printf("El promedio es:%.2f\n", promedio);

if (promedio > 0) {
printf("El promedio es postivo\n");
} else {
printf("El promedio es negativo\n");
}
}
