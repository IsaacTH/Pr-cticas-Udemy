#include <stdio.h>

/*Escribir un programa que dado un vector de enteros de 10 elementos, muestre el valor maximo y el minimo*/

int main (int argc, char *argv[]) {

    int vector[10] = {4,7,9,75,-5,6,12,-18,0,1};
    int max = vector[0], min = vector[0];

    for (int i = 0; i < 10; i++)
    {
        if (vector[i] > max)
        {
            max = vector[i];
        }
        if (vector[i] < min)
        {
            min = vector[i];
        }
    }

    printf("Valor maximo: %d\n", max);
    printf("Valor minimo: %d\n", min);

    return 0;
}