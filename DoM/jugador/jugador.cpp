#include "jugador.h"

jugador::jugador(const string& a, int p, int s, short v) {
    apodo = a;
    puntuacion = p;
    soles = s;
    vida = v;
}

void jugador::setApodo(const string& a) {
    apodo = a;
}

void jugador::setPuntuacion(int p) {
    puntuacion = p;
}

void jugador::setSoles(int s) {
    soles = s;
}

void jugador::setVida(short v) {
    vida = v;
}

string jugador::getApodo() const {
    return apodo;
}

int jugador::getPuntuacion() const {
    return puntuacion;
}

int jugador::getSoles() const {
    return soles;
}

short jugador::getVida() const {
    return vida;
}

void jugador::start() {
    // Implementación del método start del jugador
    // ...
}
