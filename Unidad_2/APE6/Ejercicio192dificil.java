package APE6;
import java.util.Scanner;

public class Ejercicio192dificil {
public static void main(String[] args) {
    final int UMBRAL = 10;
    double q, c, dato2, mayorQC, mayor, menorQC, menor, medio;
    Scanner sc = new Scanner(System.in);

    System.out.print("Ingrese el valor de q: ");
    q = sc.nextDouble();
    System.out.print("Ingrese el valor de c: ");
    c = sc.nextDouble();
    System.out.print("Ingrese el valor de dato2: ");
    dato2 = sc.nextDouble();

    mayorQC = (q > c) ? q : c;
    mayor = (mayorQC > dato2) ? mayorQC : dato2;
    menorQC = (q < c) ? q : c;
    menor = (menorQC < dato2) ? menorQC : dato2;

    medio = (q + c + dato2) - mayor - menor;
    if (mayor > UMBRAL) {
    System.out.println("El mayor supera al UMBRAL");
    } else {
    System.out.println("El mayor no supera al UMBRAL");
    }

    System.out.printf("El número mayor es: %.2f%n", mayor);
    System.out.printf("El número menor es: %.2f%n", menor);
    System.out.printf("El número medio es: %.2f%n", medio);
    sc.close();
    }
}

