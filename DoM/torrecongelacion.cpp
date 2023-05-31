using namespace std;
#include "torrecongelacion.h"

TorreCongelacion::TorreCongelacion(string t, short a, int p, float vr, float dc)
    : torre(t, a, p), velocidadReducida(vr), duracionCongelacion(dc) {}

float TorreCongelacion::getVelocidadReducida() const {
    return velocidadReducida;
}

float TorreCongelacion::getDuracionCongelacion() const {
    return duracionCongelacion;
}

void TorreCongelacion::ralentizarEnemigos() {
    // Implementación para reducir la velocidad de movimiento de los enemigos
}

void TorreCongelacion::aumentarDuracionCongelacion(float factor) {
    duracionCongelacion *= factor;
}

