#include <stdio.h>
#include <string.h>

/*Crear un programa que pida al usuario los nombres, edades y alturas de los jugadores
de un equipo de baloncesto (5 jugadores)

Posteriormente le presentara un menu que permita:
1. Listar los nombres y alturas de los jugadores
2. Buscar un jugador por su nombre y presentar su altura y su edad
3. Indicar el nombre y la edad del jugador mas alto del equipo*/

int main (int argc, char *argv[]) {

    struct jugador{
        char nombre[50];
        int edad;
        float altura;
    };

    struct jugador jugadores[5];

    for (int i = 0; i < 5; i++){
        printf("Introduce el nombre del jugador %d: ", i+1);
        gets(jugadores[i].nombre);
        printf("Introduce la edad del jugador %d: ", i+1);
        scanf("%d", &jugadores[i].edad);
        printf("Introduce la altura del jugador %d: ", i+1);
        scanf("%f", &jugadores[i].altura);
        fflush(stdin);
    }
    
    int opcion = -1;

    while (opcion != 0){
        printf("\nIntroduce la opcion que deseas realizar:\n");
        printf("1. Listar jugador\n");
        printf("2. Buscar jugador\n");
        printf("3. Jugador mas alto\n");
        scanf("%d", &opcion);
        fflush(stdin);

        if (opcion == 1){
            for (int i = 0; i < 5; i++){
                printf("Jugador de nombre %s y altura %.2f\n", jugadores[i].nombre, jugadores[i].altura);
            }
        }
        if (opcion == 2){
            char nombreJugador[50];
            printf("Introduce el nombre del jugador que deseas buscar: ");
            gets(nombreJugador);

            int encontrado = 0;

            for (int i = 0; i < 5; i++){
                if (strcmp(jugadores[i].nombre, nombreJugador) == 0){
                    encontrado = 1;
                    printf("La edad del jugador es %d y su altura es %.2f\n", jugadores[i].edad, jugadores[i].altura);
                }
            }
            if (encontrado == 0)
            {
                printf("Jugador no encontrado");
            }
        }
        if (opcion == 3){
            float mayorAltura = jugadores[0].altura;
            char nombreMayorAltura[50];
            int edadMayorAltura = jugadores[0].edad;

            strcpy(nombreMayorAltura, jugadores[0].nombre);

            for (int i = 0; i < 5; i++){
                if (jugadores[i].altura > mayorAltura)
                {
                    strcpy(nombreMayorAltura, jugadores[i].nombre);
                    edadMayorAltura = jugadores[i].edad;
                    mayorAltura = jugadores[i].altura;
                }
            }
            printf("El nombre del jugador de mayor altura es %s y su edad es: %d", nombreMayorAltura, edadMayorAltura);
        } 
        if (opcion != 0 && opcion == 1 && opcion !=2 && opcion !=3)
        {
          printf("Opcion no valida");
        }
    }
    return 0;
}