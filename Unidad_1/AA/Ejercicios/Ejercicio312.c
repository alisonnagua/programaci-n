#include <stdio.h>
int main () {
    char c = ' ';
    int DIVISOR = 2, es_vocal_minuscula = 0;
    float resultado = 0.0;
    printf("Ingrese un caracter:");
    scanf("%c", &c);
    es_vocal_minuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    if (es_vocal_minuscula == 1) {
        printf("'%c' si es vocal minuscula\n", c);
        resultado = (float) es_vocal_minuscula / DIVISOR;
        printf("El resultado dividio para %d es:%.2f\n", DIVISOR, resultado);
    } else {
        printf("No es vocal minuscula\n");
    }

}