#include <stdio.h>

/*Escribir una funcion que reciba como parametros un vector de enteros (por referencia)
y la longitud del vector y un numero (por valor). La funcion debe multiplicar cada elemento del vector por el numero*/

void multiplicaVector(int *vector, int nElem, int num);

int main (int argc, char *argv[]) {

    int vector[10] = {1,2,3,4,5,6,7,8,9,10};

    multiplicaVector(&vector[0],10,3);
    for (int i = 0; i < 10; i++){
        printf("%d ", vector[i]);
    }
    return 0;
}

void multiplicaVector(int *vector, int nElem, int num){
    for (int i = 0; i < nElem; i++){
        *(vector + i) *= num;
    }
}