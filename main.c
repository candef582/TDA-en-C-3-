//Crear una seleccion e ingresar nombre y ranking de la misma.
//Cargarle por arry un plantel que al comienzo debe estar vacio.
//Mostrar los jugadores con nombre y apellido y num de camiseta (sin las posiciones vacias).
//Eliminar un jugador
//Ordenar Jugadores

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "seleccion.h"
#include "jugador.h"

int main()
{
    SeleccionP s1= crearSeleccion(); //Muestra nombre y rank y jugadores vacios


    agregarJugador(s1);// depende cuantos jugadores se quieran agregar se llama a agregar jugador, en este caso se agregan 4
    agregarJugador(s1);
    agregarJugador(s1);
    agregarJugador(s1);


    mostrarSeleccion(s1); //mustra todos los jugadores


    eliminarJugador(s1, 10); //en este caso, elimina el jugador con el numero 10


    mostrarSeleccion (s1); //muestra jugadores sin el eliminado


    ordenarJugadores(s1); //ordena los jugadores de menor a


    mostrarSeleccion (s1); //muestra jugadores ordenados


    return 0;

}


