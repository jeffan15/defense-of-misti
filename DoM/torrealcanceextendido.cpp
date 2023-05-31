using namespace std;

#include "torrealcanceextendido.h"

TorreAlcanceExtendido::TorreAlcanceExtendido(string t, short a, int p, float al, string tm)
    : torre(t, a, p), alcance(al), tipoMunicion(tm) {}

float TorreAlcanceExtendido::getAlcance() const {
    return alcance;
}

string TorreAlcanceExtendido::getTipoMunicion() const {
    return tipoMunicion;
}

void TorreAlcanceExtendido::cambiarTipoMunicion(string nuevoTipo) {
    tipoMunicion = nuevoTipo;
}