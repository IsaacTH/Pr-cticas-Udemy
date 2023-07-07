#include <stdio.h>
#include <stdlib.h>

/*Declarar un registro llamado producto con lo siguientes campos:
Codigo, de tipo entero
Descripcion, de tipo char[]
Precio, de tipo float
Definir un puntero de tipo producto y luego reservar espacio en la memoria para almacenar una variable de tipo producto
Inicializar los campos del registo creado dinamicamente
Imprimir los campos del registro
Liberar el espacio dinamico reservado*/

struct producto{
    int codigo;
    char descripcion[50];
    float precio;
};

int main (int argc, char *argv[]) {

    struct producto *prod; 
    
    prod = malloc(sizeof(struct producto));

    printf("Introduce el codigo: ");
    scanf("%d", &prod->codigo);
    printf("Introduce la descripcion: ");
    scanf("%s", prod->descripcion);
    printf("Introduce el precio: ");
    scanf("%f", &prod->precio);

    printf("Codigo del articulo: %d\n", prod->codigo);
    printf("Descripcion: %s\n", prod->descripcion);
    printf("Precio: %.2f\n", prod->precio);

    free(prod);
    prod = NULL;
    
    return 0;
}