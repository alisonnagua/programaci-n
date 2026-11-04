#include <stdio.h>
#include <math.h>
int main () {
    float lado1 = 0.0, lado2 = 0.0, lado3 = 0.0;
    int es_triangulo_valido = 0, cuadrado_resuelto = 0;

    printf("Ingrese el valor del lado1:");
    scanf("%f", &lado1);
    printf("Ingrese el valor del lado2:");
    scanf("%f", &lado2);
    printf("Ingrese el valor del lado3:");
    scanf("%f", &lado3);
    es_triangulo_valido =  (lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1);
    if (es_triangulo_valido == 1) {
        printf("El triangulo es valido\n");

    } else {
        printf("El triangulo no es valido\n");
    }
    cuadrado_resuelto = pow(es_triangulo_valido, 2);
    // Tabla con datos y resultados
    
    printf("\n+--------+----------+---------+------------------+----------+\n");
    printf("| lado1  | lado2    | lado3   | triangulo_valido | cuadrado |\n");  
    printf("+--------+----------+---------+------------------+----------+\n");
    printf("| %-6.2f | %-6.2f   | %-6.2f  | %-16d | %-8d |\n", lado1, lado2, lado3, es_triangulo_valido, cuadrado_resuelto);
    printf("+--------+----------+---------+------------------+----------+\n");
}
