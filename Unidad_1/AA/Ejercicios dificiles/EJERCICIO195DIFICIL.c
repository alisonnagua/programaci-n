# include <stdio.h>
int main () {
int DIA_MAX = 31;
int MES_MAX = 12;
int ANIO_MIN = 1900;
int ANIO_MAX = 2025;
int dia = 0;
int mes = 0;
int anio = 0;
int fecha_valida = 0;
int edad_aproximada = 0;

printf("Porfavor ingrese el dia:");
scanf("%d", &dia);

printf("Porfavor ingrese el mes:");
scanf("%d", &mes);

printf("Porfavor ingrese el anio:");
scanf("%d", &anio);

fecha_valida = (dia >= 1 && dia<= DIA_MAX && mes >= 1 && mes <= MES_MAX && anio >= ANIO_MIN && anio <= ANIO_MAX);
edad_aproximada = 2025 - anio;

if (fecha_valida == 1) {
    printf("La fecha es valida\n");
} else {
    printf("La fecha no es valida\n");
}
printf("Edad aproximada: %d\n", edad_aproximada);

}