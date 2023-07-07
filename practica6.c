#include <stdio.h>

/*Escribir un programa que se utilice para calcular el precio final
de venta de carros de segunda mano de un concesionario. Para ello, el programa
debe pedir al usuario que introduzca el precio base del vehiculo, el numero de 
kilometros y su consumo.*/

int main (int argc, char *argv[]) {

    int precioBase, km;
    float consumo, precioFinal;

    printf("Introduce el precio base del vehiculo: ");
    scanf("%d", &precioBase);
    printf("Introduce el kilometraje: ");
    scanf("%d", &km);
    printf("Introduce el consumo del vehiculo: ");
    scanf("%f", &consumo);

    if (km < 20000 && consumo <= 5){
        precioFinal = precioBase * 1.2;
    }
    else if (km > 20000 && consumo <= 5){
        precioFinal = precioBase * 1.1;
    }
    else if (consumo > 5){
        precioFinal = precioBase * 1.05;
    }

    printf("El precio final del vehiculo es: %.2f", precioFinal);

    return 0;
}