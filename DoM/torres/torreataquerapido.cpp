#include "torreataquerapido.h"

torreataquerapido::torreataquerapido(int p, int a, int aa, int va, int x, int y, int velocidad) : torre(p, a, aa, va, x, y) {
    velocidadAtaqueExtra = velocidad;
}

int torreataquerapido::getVelocidadAtaqueExtra() const {
    return velocidadAtaqueExtra;
}

void torreataquerapido::setVelocidadAtaqueExtra(int velocidad) {
    velocidadAtaqueExtra = velocidad;
}

int torre::getX() const {
    return posX;
}

int torre::getY() const {
    return posY;
}

void torreataquerapido::mejorar() {
    
    cout << "Mejorando torre de ataque rapido..." << endl;
}