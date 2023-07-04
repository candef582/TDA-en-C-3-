#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jugador.h"
#include "seleccion.h"

struct JugadorE
{
    char nombreCompleto[50];
    int num;

};


//------------------------------------


JugadorP crearJugador()
{
    JugadorP j = malloc(sizeof(struct JugadorE));

    printf ("\n Ingresar Nombre y Apellido del Jugador: \n");
    fflush(stdin);
    gets(j->nombreCompleto);

    printf ("Ingresar Numero de Jugador: \n ");
    scanf("%d", &(j->num));

    return j;
}

//------------------------------------


JugadorP crearJugadorVacio()
{
    JugadorP j = malloc(sizeof(struct JugadorE));

    j->num = -1;
    strcpy(j->nombreCompleto, "VACIO");

    return j;
}


//------------------------------------


void mostrarJugador (JugadorP j)
{


    if (j->num != -1) // se muestra solo si hay jugadores no solo los vacios
    {
        printf ("\n NOMBRE: %s - NUMERO: %d \n", j->nombreCompleto, j->num );
    }
}


//------------------------------------


int getNum (JugadorP j)
{
    return j->num;
}


//------------------------------------


void setNum (JugadorP j, int nuevoNum)
{
    j->num = nuevoNum;
}

void setNombre (JugadorP j, char nuevoNombre[50])
{
    strcpy(j->nombreCompleto, nuevoNombre);
}
