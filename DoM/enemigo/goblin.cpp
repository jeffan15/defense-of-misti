#include "goblin.h"

using namespace std;

goblin::goblin(string t, short v, float ve, float r) : enemigo(t, v, ve, r) {}

void goblin::velocidadAumentada(float factor) {
    velocidad += factor;
}

void goblin::resistenciaReducida(float factor) {
    resistencia -= factor;
}

void goblin::healingEffect() {
    vida += 2;
}