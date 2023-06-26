#include "torrecongelacion.h"

torrecongelacion::torrecongelacion(int p, int a, int aa, int va, int factor) : torre(p, a, aa, va) {
    factorCong = factor;
}

int torrecongelacion::getFactorCong() const {
    return factorCong;
}

void torrecongelacion::setFactorCong(int factor) {
    factorCong = factor;
}

void torrecongelacion::construir(const int x,const int y) {
   
    cout << "Construyendo torre de congelación..." << endl;
}

void torrecongelacion::mejorar() {
   
    cout << "Mejorando torre de congelación..." << endl;
}
