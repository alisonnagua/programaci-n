#include <stdio.h>
int main () {

    int UMBRAL = 10;
    float q = 0.0, c = 0.0, dato2 = 0.0, mayor_qc = 0.0, mayor = 0.0, menor = 0.0, menor_qc = 0.0, medio = 0.0, limite = 0.0;
    printf("Ingrese el valor de q:");
    scanf("%f", &q);

    printf("Ingrese el valor de c:");
    scanf("%f", &c);

    printf("Ingrese el valor de dato2:");
    scanf("%f", &dato2);
mayor_qc = (q > c)? q : c;
mayor = (mayor_qc > dato2)? mayor_qc : dato2;
menor_qc = (q < c)? q : c;
menor = (menor_qc < dato2)? menor_qc : dato2;
medio = (q + c + dato2) - mayor - menor;
if (limite = (mayor > UMBRAL)) {
printf("El mayor supera al UMBRAL\n");
} else {
    printf("El mayor no supera al UMBRAL\n");
}

 printf("El numero mayor es: %.2f\n", mayor);
 printf("El numero menor es: %.2f\n", menor);
 printf("El numero medio es: %.2f\n", medio);

}
