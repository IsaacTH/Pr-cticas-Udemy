#include <stdio.h>

/*Crear un vector de 5 numeros reales introducidos por teclado. A continuacion,
declarar un puntero al vector y calcular la media de sus elementos empleando dicho puntero*/

int main (int argc, char *argv[]) {

    float vector[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Introduce un numero real: ");
        scanf("%f", &vector[i]);
    }
    
    float *puntero = &vector[0], media = 0;

    for (int i = 0; i < 5; i++)
    {
        media += *(puntero+i);
    }

    media /= 5;
    printf("La media de los valores del vector es %.2f", media);

    return 0;
}