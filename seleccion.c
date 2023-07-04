#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  TAM 23
#include "seleccion.h"
#include "jugador.h"


struct SeleccionE
{
    char nombre[30];
    int rank;

    JugadorP plantel[TAM];
};


 //------------------------------------


SeleccionP crearSeleccion()
{
    SeleccionP s = malloc(sizeof(struct SeleccionE));

    printf ("Ingrese el nombre de la seleccion: \n");
    fflush(stdin);
    gets(s->nombre);

    printf("Ingrese el rank: \n");
    scanf("%d", &(s->rank));

    for (int i=0; i<TAM; i++)
    {
        s->plantel[i] = crearJugadorVacio();
    }

    return s;
}


 //------------------------------------


int buscarJugador1 (SeleccionP s, int buscar)
{
    int pos = -1;

    for (int i=0; i<TAM; i++)
    {
        if( getNum (s->plantel[i]) == buscar)
        {
            pos = i;
            i = TAM+1;
        }
    }

    return pos;
}


int buscarJugador2 (SeleccionP s)
{
    int pos = -1;

    for (int i=0; i<TAM; i++)
    {
        if( getNum (s->plantel[i]) == -1)
        {
            pos = i;
            i = TAM+1;
        }
    }

    return pos;
}


//------------------------


void agregarJugador (SeleccionP s)
{
    int posVacia = buscarJugador2(s);

    if (posVacia != -1)
    {
        s->plantel[posVacia] = crearJugador();
    }
}


//----------------------


void eliminarJugador (SeleccionP s, int camiseta)
{
    int posicionAborrar = buscarJugador1(s, camiseta);

    if(posicionAborrar != -1)
    {
        setNombre(s->plantel[posicionAborrar], "VACIO");
        setNum(s->plantel[posicionAborrar], -1);
    }
}


//------------------------------------


void ordenarJugadores (SeleccionP s)
{
    JugadorP aux;

    for (int i=0; i<TAM; i++)
    {
        for (int j=0; j<TAM-1; j++)
        {
            if (getNum(s->plantel[j]) > getNum(s->plantel[j+1]))
            {
                aux = s->plantel[j];
                s->plantel[j] = s->plantel[j+1];
                s->plantel[j+1] = aux;
            }
        }
    }
}


 //------------------------------------


void mostrarSeleccion(SeleccionP s)
{
    printf ("\n---------SELECCION-----------\n");
    printf("\n RANK: %d - SELECCION: %s \n", s->rank, s->nombre);

    printf("\n---------JUGADORES-----------\n");
    for (int i=0; i<TAM; i++)
    {
        mostrarJugador(s->plantel[i]);
    }
}


