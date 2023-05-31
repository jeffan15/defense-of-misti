using namespace std;

#include "torre.h"

torre::torre(string t, short a, int p) {
    tipo = t;
    ataque = a;
    precio = p;
}

void torre::setTipo(string t) {
    tipo = t;
}

void torre::setAtaque(short a) {
    ataque = a;
}

void torre::setPrecio(int p) {
    precio = p;
}

string torre::getTipo() const {
    return tipo;
}

short torre::getAtaque() const {
    return ataque;
}

int torre::getPrecio() const {
    return precio;
}

void torre::build() {
    //acá deberiamos implementar la construcción de la torre en el mapa.
}

void torre::upgrade() {
    //implementación de alguna mejora en las torres.
}
