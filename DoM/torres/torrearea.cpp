#include "torrearea.h"

torrearea::torrearea(int p, int a, int aa, int va, int x, int y, int area) : torre(p, a, aa, va, x, y) {
    areaAtaque = area;
}

int torrearea::getAreaAtaque() const {
    return areaAtaque;
}

void torrearea::setAreaAtaque(int area) {
    areaAtaque = area;
}

int torre::getX() const {
    return posX;
}

int torre::getY() const {
    return posY;
}

void torrearea::mejorar() {
   
    cout << "Mejorando torre en área..." << endl;
}
