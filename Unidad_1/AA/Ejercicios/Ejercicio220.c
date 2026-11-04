#include <stdio.h>
#include <stdlib.h>
int main () {
int minutos = 0, horas = 0, valor_abs = 0, min_restantes = 0;

printf("Ingrese minutos:");
scanf("%d", &minutos);

horas = minutos / 60 ;
min_restantes = minutos % 60;

if (minutos >= 0) {
printf("El tiempo es de: %d:%02d\n", horas, min_restantes);
valor_abs = abs(horas - min_restantes);
printf("El valor absoluto es: %d\n", valor_abs);
} else {
printf("Minutos no validos\n");
}

}