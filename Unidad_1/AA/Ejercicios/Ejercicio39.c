#include <stdio.h>
int main () {
    float distancia = 0.0, tiempo = 0.0, velocidad = 0.0;

printf("Ingrese la distancia recorrida: ");
scanf("%f", &distancia);
printf("Ingrese el tiempo: ");
scanf("%f", &tiempo);

if (tiempo > 0 && distancia >= 0) {
    velocidad = distancia / tiempo;
    printf("La velocidad en m/s es: %.2fm/s\n", velocidad);

} else {
    printf("La distancia y la velocidad deben ser mayor a 0\n");
}
}
