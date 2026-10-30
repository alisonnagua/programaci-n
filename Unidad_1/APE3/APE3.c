# include <stdio.h>

int main () {
    int CONVERSIO_GB_MB = 1024;
    float GB = 0.0;
    int cant_doc = 0;
    float tam_doc = 0.0;
    int cant_ima = 0;
    float tam_ima = 0.0;
    int cant_vid = 0;
    float tam_vid = 0.0; 
    int cant_prog = 0;
    float tam_prog = 0.0;
    float espacio_doc = 0.0;
    float espacio_ima = 0.0;
    float espacio_vid = 0.0;
    float espacio_prog = 0.0;
    float espacio_total = 0.0;
    float espacio_total_gb = 0.0;
    float porcentaje = 0.0;

    printf("Porfavor ingrese la cantidad de GB:");
    scanf("%f", &GB);

    printf("Porfavor ingrese la cantidad de documentos:");
    scanf("%d", &cant_doc);

    printf("Porfavor ingrese el tamano de documentos:");
    scanf("%f", &tam_doc);

    printf("Porfavor ingrese la cantidad de imagenes:");
    scanf("%d", &cant_ima);

    printf("Porfavor ingrese el tamano de imagenes:");
    scanf("%f", &tam_ima);

    printf("Porfavor ingrese la cantidad de videos:");
    scanf("%d", &cant_vid);

    printf("Porfavor ingrese el tamano de videos:");
    scanf("%f", &tam_vid);

    printf("Porfavor ingrese la cantidad de programas:");
    scanf("%d", &cant_prog);

    printf("Porfavor ingrese el tamano de los programas:");
    scanf("%f", &tam_prog);

    espacio_doc = cant_doc * tam_doc;
    espacio_ima = cant_ima * tam_ima;
    espacio_vid = cant_vid * tam_vid;
    espacio_prog = cant_prog * tam_prog;
    espacio_total = espacio_doc + espacio_ima + espacio_vid + espacio_prog;
    espacio_total_gb = espacio_total / CONVERSIO_GB_MB;
    porcentaje = (espacio_total_gb / GB) * 100;

    printf("Espacio ocupado por documentos %2.f \n", espacio_doc);
    printf("Espacio ocupado por imagenes %2.f \n", espacio_ima);
    printf("Espacio ocupado por videos %2.f \n", espacio_vid);
    printf("Espacio ocupado por programas %2.f \n", espacio_prog);
    printf("Espacio total ocupado %2.f \n", espacio_total);
    printf("Espacio total en GB %2.f \n", espacio_total_gb);
    printf("Porcentaje de almacenamiento utilizado %2.f \n", porcentaje);

    
}