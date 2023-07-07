#include <stdio.h>

/*Escribir un programa que lea un fichero llamado numeros.txt que contiene
una lista de numeros (uno en cada fila) y devuelva la suma de dichos numeros*/

int main (int argc, char *argv[]) {

    FILE *f;
    f = fopen("numeros.txt", "r");

    int suma = 0, numero;

    while (feof(f) == 0){
        fscanf(f, "%d", &numero);
        suma += numero;
    }

    printf("La suma de todos los numeros del fichero es %d", suma);
    fclose(f);

    return 0;
}