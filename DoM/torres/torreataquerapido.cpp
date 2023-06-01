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

void torreataquerapido::construir() {
    // Pendiente implementación de construcción de torre de ataque rápido
    cout << "Construyendo torre de ataque rápido..." << endl;
}

void torreataquerapido::mejorar() {
    // Pendiente implementación de mejora de torre de ataque rápido
    cout << "Mejorando torre de ataque rápido..." << endl;
}
