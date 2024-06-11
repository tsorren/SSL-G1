#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "tabla.h"
#include "conversion.h"

int cantidadFilas(float inicio, float fin, float incremento)
{
    return round((fin - inicio) / incremento);
}

void mostrarInicio()
{
    printf("\n > Tabla de Conversiones <\n");
    printf("   --------------------- \n");
    printf("   |  Nudos  |  Km/h   |\n");
    printf("   |-------------------|\n");
    return;
}

void mostrarConFormato(float nudos, float kmh)
{
    printf("   | %7g | %7g |\n", nudos, kmh);
    return;
}

void mostrarTabla(float inicio, float fin, float incremento)
{
    assert(inicio >= 0);
    assert(incremento > 0);
    assert(fin >= inicio + incremento);
    int i;
    float nudos, kmh;
    int cantidad_filas = cantidadFilas(inicio, fin, incremento);

    mostrarInicio();

    for (i = 0; i < cantidad_filas; i++)
    {
        nudos = inicio + incremento * i;
        kmh = convertirNudosKmH(nudos);
        mostrarConFormato(nudos, kmh);
    }
    printf("   ---------------------\n");
    return;
}