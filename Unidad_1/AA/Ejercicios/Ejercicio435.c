#include <stdio.h>
#include<math.h>
int main () {
    float PI = 3.14159, tiempo = 0.0, velocidad_angular = 0.0, coseno_ang = 0.0;
    int revoluciones = 0;
printf("Ingrese el numero de revoluciones:");
scanf("%d", &revoluciones);
printf("Ingrese el tiempo en segundos:");
scanf("%f", &tiempo);

if (tiempo > 0) {
velocidad_angular = ((revoluciones * 2 * PI) / tiempo);
printf("La velocidad angular es: %.2f rad/s\n", velocidad_angular);
coseno_ang = cos(velocidad_angular);
printf("El coseno de la velocidad angular es:%.3f\n", coseno_ang);
} else {
printf("El tiempo debe ser mayor a 0\n");

}
}