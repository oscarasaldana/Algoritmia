#include <iostream>

using namespace std;

#include "biblioteca/funciones.h"

int main() {

    int informacionDientes[8][4] ={
        {1, 1, 1, 3},
        {2, 1, 1, 1},
        {3, 1, 2, 0},
        {4, 1, 3, 1},
        {5, 1, 3, 2},
        {6, 1, 4, 1},
        {7, 1, 4, 2},
        {8, 1, 4, 3}
    };
    int informacionCitas[4][3] = {
        {1, 5, 20},
        {2, 7, 30},
        {3, 10, 35},
        {4, 12, 42}
    };
    int duracionCitas[3] = {60, 45, 50};

    solucion(informacionDientes,informacionCitas,duracionCitas,3,8);

    return 0;
}
