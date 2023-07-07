#include <stdio.h>

/*Escribir un programa que pida 4 cadenas por teclado y las muestre por la salida
separadas por un "-"*/

int main (int argc, char *argv[]) {

    char cadena1[50], cadena2[50], cadena3[50], cadena4[50];
    printf("Introduce la cadena 1: ");
    gets(cadena1);
    printf("Introduce la cadena 2: ");
    gets(cadena2);
    printf("Introduce la cadena 3: ");
    gets(cadena3);
    printf("Introduce la cadena 4: ");
    gets(cadena4);

    printf("%s-%s-%s-%s", cadena1, cadena2, cadena3, cadena4);

    return 0;
}