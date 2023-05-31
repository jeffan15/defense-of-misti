#include "goblin.h"

using namespace std;

goblin::goblin(string t, int d, short v, float ve, float r, float va, float di) : enemigo(t, d, v, ve, r, va, di) {}

void goblin::velocidadAumentada(float factor) {
    velocidad += factor;
}

void goblin::resistenciaReducida(float factor) {
    resistencia -= factor;
}