#include "torrecongelacion.h"

torrecongelacion::torrecongelacion(int p, int a, int aa, int va, int x, int y, int factor) : torre(p, a, aa, va, x, y) {
    factorCong = factor;
}

int torrecongelacion::getFactorCong() const {
    return factorCong;
}

void torrecongelacion::setFactorCong(int factor) {
    factorCong = factor;
}

int torre::getX() const {
    return posX;
}

int torre::getY() const {
    return posY;
}

void torrecongelacion::mejorar() {
   
    cout << "Mejorando torre de congelación..." << endl;
}
