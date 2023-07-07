#include <stdio.h>

/*Se desea realizar un programa que permita controlar la entrada de los asistentes a un museo. Para ello, el 
programa ira solicitando por cada grupo de asistentes, informacion de la hora de acceso, el numero de personas
que forman el grupo y las edades de cada una de ellas. Una vez introducida la info, el programa mostrara el precio total de la entrada grupal...*/

int main (int argc, char *argv[]) {

    struct horaEntrada{
        int hora, minutos;
    };

    struct entrada{
        struct horaEntrada hora1;
        int asistentes;
        float precio;
    };
    
    struct entrada e1;

    char continuar = 'S';

    while (continuar == 'S'){
        printf("Introduce la hora de entrada: ");
        scanf("%d", &e1.hora1.hora);
        printf("Introduce el minuto de entrada: ");
        scanf("%d", &e1.hora1.minutos);
        printf("Introduce el numero de asistentes: ");
        scanf("%d", &e1.asistentes);
    
        int total = 0;

        for (int i = 0; i < e1.asistentes; i++){
            int edad;
            printf("Introduce la edad del asistente %d: ", (i+1));
            scanf("%d", &edad);
            if (edad < 6){
            total += 0;
            }
            else if (edad >= 6 && edad <= 15){
            total += 5;
            }
            else if (edad >= 16 && edad <= 26 || edad > 65){
            total += 8;
            }
            else{
            total += 10;
            } 
        }

        if (e1.asistentes >= 5){
        e1.precio = total - total * 0.1;
        }
        else{
        e1.precio = total;
        }
    
        printf("Hora de entrada del grupo %d\n", e1.hora1.hora);
        printf("Minuto de entrada del grupo %d\n", e1.hora1.minutos);
        printf("Precio de las entradas del grupo %.2f\n", e1.precio);
        printf("Quiere continuar con otro grupo? (S/N)\n");
        scanf("%c", &continuar);

        while (continuar == '\n'){
            scanf("%c", &continuar);
        }
    }
    printf("Hasta la proxima");
    return 0;
}