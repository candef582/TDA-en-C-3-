#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED

struct JugadorE;

typedef struct JugadorE * JugadorP;

JugadorP crearJugador();

JugadorP crearJugadorVacio();

void mostrarJugador (JugadorP j);

int getNum (JugadorP j);

void setNum (JugadorP j, int nuevoNum);
void setNombre (JugadorP j, char nuevoNombre[50]);

#endif // JUGADOR_H_INCLUDED
