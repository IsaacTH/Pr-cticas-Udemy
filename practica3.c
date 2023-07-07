#include <stdio.h>

/*Escribe un programa que pida al usuario el valor de la base y la altura de un rectangulo
 y con ellos calcule su area. A = bxh*/

int main (int argc, char *argv[]) {

    float base, altura;
    printf("Introduzca la base del rectangulo: ");
    scanf("%f", &base);
    printf("Introduzca la altura del rectangulo: ");
    scanf("%f", &altura);
    float area = base * altura;

    printf("El area del rectangulo de base %.2f y altura %.2f es: %.2f", base, altura, area);

    return 0;
}