#include "torrealcanceextendido.h"

torrealcanceextendido::torrealcanceextendido(int p, int a, int aa, int va, int x, int y, int r) : torre(p, a, aa, va, x, y) {
    rangoExtra = r;
}

int torrealcanceextendido::getRangoExtra() const {
    return rangoExtra;
}

void torrealcanceextendido::setRangoExtra(int r) {
    rangoExtra = r;
}

int torre::getX() const {
    return posX;
}

int torre::getY() const {
    return posY;
}

void torrealcanceextendido::mejorar() {
    
    cout << "Mejorando torre con alcance extendido..." << endl;
}
