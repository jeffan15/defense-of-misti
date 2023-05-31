using namespace std;
#include "torrearea.h"

TorreArea::TorreArea(string t, short a, int p, float r, float da)
    : torre(t, a, p), radio(r), danoArea(da) {}

float TorreArea::getRadio() const {
    return radio;
}

float TorreArea::getDanoArea() const {
    return danoArea;
}

void TorreArea::atacarEnemigosArea() {
    // Implementación para atacar a los enemigos dentro del radio de ataque
}

void TorreArea::aumentarRadio(float factor) {
    radio *= factor;
}