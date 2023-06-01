#include "torrealcanceextendido.h"

torrealcanceextendido::torrealcanceextendido(int p, int a, int aa, int va, int r) : torre(p, a, aa, va) {
    rangoExtra = r;
}

int torrealcanceextendido::getRangoExtra() const {
    return rangoExtra;
}

void torrealcanceextendido::setRangoExtra(int r) {
    rangoExtra = r;
}

void torrealcanceextendido::construir() {
    // Pendiente implementación de construcción de torre con alcance extendido
    cout << "Construyendo torre con alcance extendido..." << endl;
}

void torrealcanceextendido::mejorar() {
    // Pendiente implementación de mejora de torre con alcance extendido
    cout << "Mejorando torre con alcance extendido..." << endl;
}
