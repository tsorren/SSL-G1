#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "tabla.h"

int main(int argc, char *argv[]) 
{
    //Se verifica que haya entre 3 y 4 argumentos antes de pasarlos a float
    assert(argc == 3 || argc == 4);

    // Se pasan los argumentos del main a float
    float val1 = strtof(argv[1], NULL);
    float val2 = strtof(argv[2], NULL);
    float val3 = 1.0f;

    // Se toma el incremento en caso de que haya 
    if (argc == 4)
    {
        val3 = strtof(argv[3], NULL);
    }

    // Imprimir tabla
    mostrarTabla(val1, val2, val3);

    return 0;
}