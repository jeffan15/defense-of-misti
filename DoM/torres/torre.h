#ifndef TORRE_H
#define TORRE_H

#include <iostream>
using namespace std;

class torre {
protected:
    int precio;
    int ataqueBase;
    int alcanceAtaque;
    int velocidadAtaque;

public:
    torre(int p, int a, int aa, int va);
    virtual ~torre() = default;

    int getPrecio() const;
    int getAtaqueBase() const;
    int getAlcanceAtaque() const;
    int getVelocidadAtaque() const;

    void setPrecio(int p);
    void setAtaqueBase(int a);
    void setAlcanceAtaque(int aa);
    void setVelocidadAtaque(int va);

    virtual void construir() = 0;
    virtual void mejorar() = 0;

    virtual void setPosition(int x, int y) = 0;
    virtual void mover(int x, int y) = 0;
    virtual void aplicarMejoraEspecial() = 0;
    virtual void interactuarConEnemigo() = 0;
};

#endif
