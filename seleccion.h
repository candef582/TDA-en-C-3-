#ifndef SELECCION_H_INCLUDED
#define SELECCION_H_INCLUDED

struct SeleccionE;

typedef struct SeleccionE * SeleccionP;

void mostrarSeleccion (SeleccionP s);

SeleccionP crearSeleccion();

void agregarJugador (SeleccionP s);
void eliminarJugador (SeleccionP s, int camiseta);

void ordenarJugadores (SeleccionP s);

#endif // SELECCION_H_INCLUDED
