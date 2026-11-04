#include <stdio.h>
int main () {
int MAYORIA_EDAD = 18;
int anio_nacimiento = 0, anio_actual = 0;
int edad = 0;
char nombre[30];

printf ("Ingrese su nombre:");
scanf (" %29[^\n]", nombre);
printf ("Ingrese su anio de nacimiento:");
scanf ("%d", &anio_nacimiento);
printf ("Ingrese anio actual:");
scanf ("%d", &anio_actual);

edad = anio_actual - anio_nacimiento;
// Mayor de edad o no
if (edad >= MAYORIA_EDAD) {
printf("%s tiene %d anios y es mayor de edad\n", nombre, edad);
} else {
  printf("%s tiene %d anios y es menor de edad\n", nombre, edad);
    }

}
