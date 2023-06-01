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

void torrecongelacion::construir() {
    // Pendiente mplementación de construcción de torre de congelación
    cout << "Construyendo torre de congelación..." << endl;
}

void torrecongelacion::mejorar() {
    // Pendiente implementación de mejora de torre de congelación
    cout << "Mejorando torre de congelación..." << endl;
}
