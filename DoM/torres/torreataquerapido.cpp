using namespace std;
#include "torreataquerapido.h"

TorreAtaqueRapido::TorreAtaqueRapido(string t, short a, int p, float va, float ra)
    : torre(t, a, p), velocidadAtaque(va), rangoAtaque(ra) {}

float TorreAtaqueRapido::getVelocidadAtaque() const {
    return velocidadAtaque;
}

float TorreAtaqueRapido::getRangoAtaque() const {
    return rangoAtaque;
}

void TorreAtaqueRapido::dispararEnemigo() {
    // Implementación para disparar a los enemigos dentro del rango de ataque
}

void TorreAtaqueRapido::aumentarVelocidadAtaque(float factor) {
    velocidadAtaque *= factor;
}