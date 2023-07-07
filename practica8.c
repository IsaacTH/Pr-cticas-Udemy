#include <stdio.h>

/*Escribir un programa que muestre por pantalla todos los multiplos de 3 entre 1 y 100*/

int main (int argc, char *argv[]) {

    for (int i = 0; i <= 100; i++){
        if (i%3 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}