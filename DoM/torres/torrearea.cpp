#include "torrearea.h"

torrearea::torrearea(int p, int a, int aa, int va, int area) : torre(p, a, aa, va) {
    areaAtaque = area;
}

int torrearea::getAreaAtaque() const {
    return areaAtaque;
}

void torrearea::setAreaAtaque(int area) {
    areaAtaque = area;
}

void torrearea::construir() {
    // Pendiente implementación de construcción de torre en área
    cout << "Construyendo torre en área..." << endl;
}

void torrearea::mejorar() {
    // Pendiente implementación de mejora de torre en área
    cout << "Mejorando torre en área..." << endl;
}
