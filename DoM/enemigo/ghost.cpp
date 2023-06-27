#include "ghost.h"

using namespace std;

ghost::ghost(string t, short v, float ve, float r, float ti, float cd)
 : enemigo(t, v, ve, r), tiempoInvisible(ti), cooldown(cd) {}

void ghost::setCooldown(float factor){
    cooldown = factor;
}

float ghost::getCooldown() {
    return cooldown;
}

float ghost::getTiempoInvisible() {
    return tiempoInvisible;
}

void ghost::velocidadReducida(float factor) {
    velocidad -= factor;
}

void ghost::healingEffect() {
    while(vida > 1)
        vida -= 1;
}