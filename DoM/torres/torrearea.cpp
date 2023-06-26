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

void torrearea::construir(const int x,const int y) {
    
    cout << "Construyendo torre en área..." << endl;
}

void torrearea::mejorar() {
   
    cout << "Mejorando torre en área..." << endl;
}
