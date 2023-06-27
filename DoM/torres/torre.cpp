#include "torre.h"

torre::torre(int p, int a, int aa, int va, int x, int y) {
    precio = p;
    ataqueBase = a;
    alcanceAtaque = aa;
    velocidadAtaque = va;
    posX = x;
    posY = y;
}

int torre::getPrecio() const {
    return precio;
}

int torre::getAtaqueBase() const {
    return ataqueBase;
}

int torre::getAlcanceAtaque() const {
    return alcanceAtaque;
}

int torre::getVelocidadAtaque() const {
    return velocidadAtaque;
}

void torre::setPrecio(int p) {
    precio = p;
}

void torre::setAtaqueBase(int a) {
    ataqueBase = a;
}

void torre::setAlcanceAtaque(int aa) {
    alcanceAtaque = aa;
}

void torre::setVelocidadAtaque(int va) {
    velocidadAtaque = va;
}

int torre::getX() const {
    return posX;
}

int torre::getY() const {
    return posY;
}

void torre::mejorar() {
    ataqueBase += 3;
    alcanceAtaque += 1;
    velocidadAtaque += 2;
    cout << "Mejorando torre..." << endl;
}


