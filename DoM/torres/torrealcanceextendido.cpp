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

void torrealcanceextendido::construir(const int x,const int y) {
    
    cout << "Construyendo torre con alcance extendido..." << endl;
}

void torrealcanceextendido::mejorar() {
    
    cout << "Mejorando torre con alcance extendido..." << endl;
}
