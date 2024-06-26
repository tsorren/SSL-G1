#include <stdio.h>
#include <assert.h>
#include "tabla.h"
#include "conversion.h"

int cantidadFilas(float inicio, float fin, float incremento)
{
    int filas = 0;

    // Iterador para contar la cantidad de filas
    while (inicio <= fin)
    {
        filas++;
        inicio += incremento;
    }
    return filas;
}

void mostrarInicio()
{
    // Mostrar principio de la tabla
    printf("\n > Tabla de Conversiones <\n");
    printf("   --------------------- \n");
    printf("   |  Nudos  |  Km/h   |\n");
    printf("   |-------------------|\n");
    return;
}

void mostrarConFormato(float nudos, float kmh)
{
    // Formato de salida de punto flotante
    printf("   | %7g | %7g |\n", nudos, kmh);
    return;
}

void mostrarTabla(float inicio, float fin, float incremento)
{
    // Precondiciones
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