#include <stdio.h>
#include <math.h>

/*Realizar un programa que almacene la informacion de un motor de combustion interna y posteriormente
muestre la cilindrada de dicho motor en CV. La info del motor se almacenara en una estructura...*/

int main (int argc, char *argv[]) {

    struct cilindro{
        float diametro;
        float carrera;
    };

    struct motor{
        int identificador;
        struct cilindro cilindro1;
        int numCilindros;
        float cilindrada;
    };

    struct motor motor1;

    printf("Introduce el identificador: ");
    scanf("%d", &motor1.identificador);
    printf("Introduce el diametro del cilindro(mm): ");
    scanf("%f", &motor1.cilindro1.diametro);
    printf("Introduce la carrera del cilindro(mm): ");
    scanf("%f", &motor1.cilindro1.carrera);
    printf("Introduce el numero de cilindros: ");
    scanf("%d", &motor1.numCilindros);

    motor1.cilindrada = motor1.numCilindros * (motor1.cilindro1.carrera/10) * 3.14 * pow((motor1.cilindro1.diametro/10),2) / 4 ;

    printf("Identificador: %d\n", motor1.identificador);
    printf("Diametro(mm): %.2f\n", motor1.cilindro1.diametro);
    printf("Carrera(mm): %.2f\n", motor1.cilindro1.carrera);
    printf("Numero de cilindros: %d\n", motor1.numCilindros);
    printf("Cilindrada: %.2f\n", motor1.cilindrada);
    
    return 0;
}