# include <stdio.h>
int main () {
    float FACTOR = 1.60934, kmh = 0.0, mph = 0.0, maximo = 0.0;
    printf("Ingrese la velocidad en mph: ");
    scanf("%f", &mph);
    kmh = mph * FACTOR;
    if (kmh > 0) {
        printf("Los %.2fmp/h equivalen a: %.2fkm/h\n",mph, kmh);

        if (kmh > mph) {
        maximo = kmh;
    } else {
        maximo = mph;
        }
        printf("El valor maximo de las variables es: %.2f\n", maximo);
        } else {
        printf("El valor maximo de las variables es: %.2f\n", maximo);
        printf("Velocidad no valida\n");
    }
}