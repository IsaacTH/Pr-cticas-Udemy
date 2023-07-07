#include <stdio.h>

/*Escribe un programa que puda un numero al usuario y muestre el dia de la semana al que equivale. Si
se introduce un numero fuera del rango valido (1-7), se debe mostrar un mensaje de error*/

int main (int argc, char *argv[]) {

    int dia;
    
    printf("Introduce un numero en el rango 1-7: ");
    scanf("%d", &dia);

    switch (dia){
    case 1:
        printf("Lunes");
        break;
    case 2:
        printf("Martes");
        break;
    case 3:
        printf("Miercoles");
        break;
    case 4:
        printf("Jueves");
        break;
    case 5:
        printf("Viernes");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    default:
        printf("Error. Dia no valido");
        break;
    }

    return 0;
}