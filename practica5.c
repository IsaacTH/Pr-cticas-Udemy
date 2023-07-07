#include <stdio.h>

/*Escribe un programa que pida al uruario su nota y compruebe si ha suspendido
(<5), si ha sacado un suficiente (5), un bien (6), un notable (7-8) o un sobresaliente (9-10)*/

int main (int argc, char *argv[]) {

    int nota;

    printf("Introduce la nota del alumno: ");
    scanf("%d", &nota);

    if (nota < 5){
        printf("Suspenso");
    }
    else if (nota == 6){
        printf("Bien");
    }
    else if (nota == 7 || nota == 8){
        printf("Notable");
    }
    else if (nota == 9 || nota == 10){
        printf("Sobresaliente");
    }
    else{
        printf("Nota inroducida no valida");
    }
    
    return 0;
}