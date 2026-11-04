#include <stdio.h>
int main () {
    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, p1 = 0.0, p2 = 0.0, p3 = 0.0, promedio_ponerado = 0.0;
    printf ("Ingrese la nota1:");
    scanf("%f", &nota1);
    printf ("Ingrese la nota2:");
    scanf("%f", &nota2);
    printf ("Ingrese la nota3:");
    scanf("%f", &nota3);
    printf ("Ingrese el porcentaje1:");
    scanf("%f", &p1);
    printf ("Ingrese el porcentaje2:");
    scanf("%f", &p2);
    printf ("Ingrese el porcentaje3:");
    scanf("%f", &p3);

    if (p1 + p2 + p3 == 100) {
        promedio_ponerado = (nota1 * p1 + nota2 * p2 + nota3 * p3) / 100;
        printf("El promedio ponerado es:%.2f\n", promedio_ponerado);
    } else {
        printf("Error los porcentajes no suman 100\n");
    }

    if (promedio_ponerado > 0) {
        printf("El resultado es positivo\n");
    } else {
        printf("El resultado es negativo\n");
    }
    }
    