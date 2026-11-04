#include <stdio.h>
int main () {
    float PI  = 3.14159, radio = 0.0, altura = 0.0, area_lateral = 0.0;
    printf("Ingrese el radio:");
    scanf("%f", &radio);
    printf("Ingrese la altura:");
    scanf("%f", &altura);
    if (radio > 0 && altura > 0) {
        area_lateral = 2 * PI * radio * altura;
        printf("El area lateral del cilindro es:%.2f\n", area_lateral);
    } else {
        printf("El radio y la altura deben ser mayor a 0\n");
    }

}
