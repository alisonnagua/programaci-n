# include <stdio.h>
int main () {
float x = 0.0, num1 = 0.0, resultado = 0.0;
char operador = ' ';

printf("Ingrese el valor de x:");
scanf("%f", &x);

printf("Ingrese el valor de num1:");
scanf("%f", &num1);

printf("Ingrese el valor de operador:");
scanf(" %c", &operador);

if (operador == '/' && num1 == 0.0) {
printf("Division erronea\n");
} else {

    resultado = (operador == '+' ) ? (x + num1) :
    (operador == '-' ) ? (x - num1) :
    (operador == '*' ) ? (x * num1) :
    (operador == '/') ? (x / num1) : 0.0;
    printf("La %s es %2.2f\n",
    (operador == '+' ) ? "suma" :
    (operador == '-' ) ? "resta" :
    (operador == '*' ) ? "multiplicacion" :
    (operador == '/') ? "division" : "operacion invalida", resultado);
}
}