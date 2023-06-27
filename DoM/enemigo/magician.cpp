#include "magician.h"

using namespace std;

magician::magician(string t, short v, float ve, float r, int hd, float cd, bool hl)
 : enemigo(t, v, ve, r), healingDistance(hd), cooldown(cd), heal(hl) {}

void magician::setHealingDistance(int num) {
    healingDistance = num;
}

void magician::setCooldown(float factor){
    cooldown = factor;
}

void magician::healing() {
    heal = true;
}

float magician::getCooldown() {
    return cooldown;
}

int magician::getHealingDistance() {
    return healingDistance;
}