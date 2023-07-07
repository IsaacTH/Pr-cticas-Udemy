#include <stdio.h>

/*Escribir un programa que pida un numero entero entre 1 y 10 y guarde en un fichero de texto
de nombre tabla.txt la tabla de ese numero*/

int main (int argc, char *argv[]) {

    int num;
    printf("Introduce un numero: ");
    scanf("%d", &num);

    FILE *f;
    f = fopen("tabla.txt", "w");

    for (int i = 0; i <= 10; i++){
        fprintf(f, "%d\n", i*num);
    }

    fclose(f);

    return 0;
}