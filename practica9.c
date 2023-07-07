#include <stdio.h>

/*Desarrolla un programa que solicite la carga de un numero al usuario. A continuacion, debera
pedir las notas de ese numero de alumnos y mostrar por pantalla el numero de alumnos aprobados y suspensos*/

int main (int argc, char *argv[]) {

    int n, contadorAprobados = 0, contadorSuspensos = 0;
    float nota;

    printf("Introduce el numero de alumnos: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("Introduce la nota del alumno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 5){
            contadorAprobados++;
        }
        else{
            contadorSuspensos++;
        }
    }
    
    printf("El numero de alumnos aprobados es: %d y el de alumnos suspensos es: %d", contadorAprobados, contadorSuspensos);

    return 0;
}