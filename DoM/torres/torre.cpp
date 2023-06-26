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

void torre::construir(const int x,const int y) {
    //
    cout << "Construyendo torre..." << endl;
}

void torre::mejorar() {
    ataqueBase += 3;
    alcanceAtaque += 1;
    velocidadAtaque += 2;
    cout << "Mejorando torre..." << endl;
}


