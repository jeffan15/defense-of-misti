#include "torre.h"

torre::torre(int p, int a, int aa, int va) {
    precio = p;
    ataqueBase = a;
    alcanceAtaque = aa;
    velocidadAtaque = va;
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

void torre::construir() {
    // Pendiente implementación de construcción de torre base
    cout << "Construyendo torre base..." << endl;
}

void torre::mejorar() {
    // Pendiente implementación de mejora de torre base
    cout << "Mejorando torre base..." << endl;
}

void torre::setPosition(int x, int y) {
    // Pendiente implementación para establecer la posición de la torre
    cout << "Estableciendo posición de la torre en (" << x << ", " << y << ")" << endl;
}

void torre::mover(int x, int y) {
    // Pendiente implementación para mover la torre a una nueva posición
    cout << "Moviendo torre a la posición (" << x << ", " << y << ")" << endl;
}

void torre::aplicarMejoraEspecial() {
    // Pendiente implementación para aplicar una mejora especial a la torre
    cout << "Aplicando mejora especial a la torre base..." << endl;
}

void torre::interactuarConEnemigo() {
    // Pendiente implementación para interactuar con un enemigo
    cout << "Interactuando con un enemigo..." << endl;
}
