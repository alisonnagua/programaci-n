#include <stdio.h> 
    int main () {
        float NF = 60.00, c1 = 0.0, c2 = 0.0, nl = 0.0, c3 = 0.0, nc = 0.0;

        printf("Ingrese el valor del primer certamen: ");
        scanf("%f", &c1);
        printf("Ingrese el valor del segundo certamen: ");
        scanf("%f", &c2);
        printf("Ingrese la nota de el laboratorio: ");
        scanf("%f", &nl);

        nc = (NF - (nl * 0.3)) / 0.7;
        c3 = 3 * nc - c1 - c2;
if (c3 <= 0) {
    printf("El estudiante ya aprobo\n");
    } else if (c3 > 100) {
    printf("El estudiante no puede aprobar\n");
    } else {
    printf("En el tercer certamen debe tener minimo:%.2f\n", c3);
    }
    }
