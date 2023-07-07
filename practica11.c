#include <stdio.h>

/*Cargar por teclado y almacenar en un vector el peso de 5 personas. Obtener el promedio de
los mismos. Contar cuantas personas pesan mas que el promedio y cuantas pesan menos*/

int main (int argc, char *argv[]) {

    float pesos[5];
    float suma = 0;

    for (int i = 0; i < 5; i++){
        printf("Introduce un peso para almacenarlo: ");
        scanf("%f", &pesos[i]);
        suma += pesos[i];
    }
    
    float promedio = suma/5;
    int contMayorIgual = 0, contMenor = 0;

    for (int i = 0; i < 5; i++){
        if (pesos[i] >= promedio){
            contMayorIgual++;
        } 
        else{
            contMenor++;
        }  
    }
    
    printf("El promedio de pesos es: %.2f\n", promedio);
    printf("Numero pesos mayores o iguales que el promedio: %d\n", contMayorIgual);
    printf("Numero pesos menores que el promedio: %d\n", contMenor);

    return 0;
}