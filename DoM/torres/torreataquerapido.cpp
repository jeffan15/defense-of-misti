#include "torreataquerapido.h"

torreataquerapido::torreataquerapido(int p, int a, int aa, int va, int velocidad) : torre(p, a, aa, va) {
    velocidadAtaqueExtra = velocidad;
}

int torreataquerapido::getVelocidadAtaqueExtra() const {
    return velocidadAtaqueExtra;
}

void torreataquerapido::setVelocidadAtaqueExtra(int velocidad) {
    velocidadAtaqueExtra = velocidad;
}

void torreataquerapido::construir(const int x, const int y) {
    
    cout << "Construyendo torre de ataque rapido..." << endl;
}

void torreataquerapido::mejorar() {
    
    cout << "Mejorando torre de ataque rapido..." << endl;
}