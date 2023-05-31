#include "boss.h"

using namespace std;

boss::boss(string t, int d, short v, float ve, float r, float va, float di, bool at, float cd)
 : enemigo(t, d, v, ve, r, va, di, at), cooldown(cd){}

float boss::getCooldown() {
    return cooldown;
}

void boss::regeneracion(short factor) {
    vida += factor;
}