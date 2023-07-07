#include <stdio.h>

/*Escribe un programa que realice la conversion euros a pesetas. Para ello, pedira al urusario que introduzca 
los euros a convertir y mostrara por consola la equivalencia en pesetas de dicha cantidad*/

int main (int argc, char *argv[]) {

    float euros;

    printf("Introduce los euros que quieres convertir: ");
    scanf("%f", &euros);

    printf("%.2f euros equivalen a %.2f pesetas", euros, euros*166.386);
    
    return 0;
}