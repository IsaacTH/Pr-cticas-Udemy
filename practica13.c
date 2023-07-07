#include <stdio.h>

/*En un hotel la informacion de las habitaciones se guarda en un vector bidimensional. Cada posicion
del vector es a su vez otro vector en el que la primera posicion indica el numero de habitacion y las
tres siguentes posiciones el precio de la habitacion en temporada baja, media y alta.

Ejemplo: {{1,120,150,220}, {2,130,160,230}, {3,100,120,200}}

Escribe un programa en el que se defina una matriz como la anterior y muestre el promedio de cada una de las temporadas*/

int main (int argc, char *argv[]) {

    int informacion[3][4] = {{1,120,150,220}, {2,130,160,230}, {3,100,120,200}};
    int sumaTempBaja = 0, sumaTempMedia = 0, sumaTempAlta = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == 1)
            {
                sumaTempBaja += informacion[i][j];
            }
            if (j == 2)
            {
                sumaTempMedia += informacion[i][j];
            }
            if (j == 3)
            {
                sumaTempAlta += informacion[i][j];
            }
        }
        
    }
    
    float promedioTempBaja = sumaTempBaja/3;
    float promedioTempMedia = sumaTempMedia/3;
    float promedioTempAlta = sumaTempAlta/3;

    printf("Promedio en temporada baja: %.2f\n", promedioTempBaja);
    printf("Promedio en temporada media: %.2f\n", promedioTempMedia);
    printf("Promedio en temporada alta: %.2f\n", promedioTempAlta);

    return 0;
}