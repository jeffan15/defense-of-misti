#include "ghost.h"

using namespace std;

ghost::ghost(string t, int d, short v, float ve, float r, float va, float di, float ti, float cd)
 : enemigo(t, d, v, ve, r, va, di), tiempoInvisible(ti), cooldown (cd) {}
float ghost::getCooldown() {
    return cooldown;
}
float ghost::getTiempoInvisible() {
    return tiempoInvisible;
}
void ghost::velocidadReducida(float factor) {
    velocidad -= factor;
}