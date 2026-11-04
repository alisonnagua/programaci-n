#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
char contrasena[21];
int MIN_LONGITUD = 8, MAX_LONGITUD = 20;
int longitud = 0, mayuscula = 0, digito = 0;
int es_valida;
    printf("Ingrese contrasena: ");
    scanf("%22s", contrasena);
    longitud = strlen(contrasena);
    if (longitud >= MIN_LONGITUD && longitud <= MAX_LONGITUD) {
    printf("Longitud correcta\n");
    } else {
    printf("La longitud debe estar entre 8 y 20 caracteres\n");
    }
    if (strpbrk(contrasena, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") != NULL)
        mayuscula = 1;
    if (mayuscula == 1) {
        printf("Contiene mayuscula\n");
    } else {  
    printf("La contrasena debe contener al menos una mayuscula\n");
    }
    if (strpbrk(contrasena, "0123456789") != NULL)
        digito = 1;
    if (digito == 1) {
        printf("Contiene digito\n");
    } else {
        printf("La contrasena debe contener al menos un digito\n");
    }
    es_valida = (longitud >= MIN_LONGITUD && longitud <= MAX_LONGITUD && mayuscula == 1 && digito == 1);
    if (es_valida == 1)
        printf("Contrasena valida\n");
    if (es_valida == 0)
        printf("Contrasena no valida\n");
}

