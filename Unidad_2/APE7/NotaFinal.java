import java.util.Scanner;

public class NotaFinal {
public static void main(String[] args) {
// Definir variables
float evaluacion_in = 0.0f, trabajo_grup = 0.0f, evaluacion_fin = 0.0f;
float nota = 0.0f;
Scanner sc = new Scanner(System.in);   
// El usuario ingresa las calificaciones de las evaluaciones
System.out.println("Ingrese la calificación de la evaluación individual 0-10:");
    evaluacion_in = sc.nextFloat();
    System.out.println("Ingrese la calificación del trabajo grupal 0-10:");
    trabajo_grup = sc.nextFloat();
    System.out.println("Ingrese la calificación de la evaluación final 0-10:");
    evaluacion_fin = sc.nextFloat();
// Validar que las calificaciones estén en el rango de 0 a 10
    if (evaluacion_in < 0 || evaluacion_in > 10 || trabajo_grup < 0 || trabajo_grup > 10 || evaluacion_fin < 0 || evaluacion_fin > 10) {
    System.out.println("Las calificaciones deben estar entre 0 y 10");
    } else {
    nota = evaluacion_in * 0.30f + trabajo_grup * 0.30f + evaluacion_fin * 0.40f;
// Determinar el nivel de desempeño 
    if (nota >= 9) {
    System.out.println("Nivel de desempeño: Excelente");
    } else if (nota >= 8) {
    System.out.println("Nivel de desempeño: Muy bueno");
    } else if (nota >= 7) {
    System.out.println("Nivel de desempeño: Bueno");
    } else if (nota >= 5) {
    System.out.println("Nivel de desempeño: Regular");
    } else {
    System.out.println("Nivel de desempeño: Deficiente");
    }
// Determinar si el estudiante aprobo o reprobado
    String estado = (nota >= 7) ? "Aprobado" : "Reprobado";
    System.out.printf("Promedio ponderado: %.2f%n", nota);
    System.out.println("El estado es: " + estado);
// Determinar si el estudiante requiere refuerzo académico o tiene rendimiento sobresaliente
    if (nota < 7) {
    System.out.println("El estudiante requiere refuerzo académico");
    }
    if (nota >= 9) {
    System.out.println("Rendimiento sobresaliente");
    }
}
sc.close();
}
}