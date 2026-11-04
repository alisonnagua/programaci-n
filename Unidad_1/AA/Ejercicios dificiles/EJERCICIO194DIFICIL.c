#include <stdio.h>

int main () {;
    int UMBRAL = 5, dato1 = 0, num2 = 0, c = 0, z = 0, resultado = 0;

    printf("Porfavor ingrese valor de tres cifras:");
    scanf("%d", &dato1);

    num2 = dato1 / 100;
    c = (dato1 / 10) % 10; 
    z = dato1 % 10;
    resultado= (z > UMBRAL || c > UMBRAL || num2 > UMBRAL);
printf("Numero original: %d \n", dato1);
printf("Centenas: %d \n", num2);
printf("Decenas: %d \n", c);
printf("Unidades: %d \n", z);
printf("Resultado de la expresion logica: %d \n", resultado);

}


