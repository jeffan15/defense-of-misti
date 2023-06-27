#include "boss.h"

using namespace std;

boss::boss(string t, short v, float ve, float r, float cd)
 : enemigo(t, v, ve, r), cooldown(cd){}

void boss::setCooldown(float factor){
    cooldown = factor;
}

float boss::getCooldown() {
    return cooldown;
}

void boss::regeneracion(short factor) {
    vida += factor;
}