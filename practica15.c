#include <stdio.h>

/*Desarrollar un programa que pida por teclado una cadena y un caracter y devuelva si dicho caracter se encuentra
en la cadena y si es asi, la posicion de la primera aparicion del mismo*/

int main (int argc, char *argv[]) {

    char cadena[50];
    char caracter;

    printf("Introduce una cadena: ");
    gets(cadena);
    printf("Introduce un caracter: ");
    
    caracter = getchar();

    int i = 0, pos = -1;
    
    while (cadena[i] != '\0' && pos == -1){
        if (cadena[i] == caracter)
        {
            pos = i;
        }
        i += 1;
    }
    
    if (pos != -1){
        printf("El caracter %c se encuentra en la cadena %s en la posicion %d", caracter, cadena, pos);
    }
    else{
        printf("El caracter %c no se encuentra en la cadena %s", caracter, cadena);
    }

    return 0;
}