#pragma once
#ifndef TORRE_H
#define TORRE_H

#include "../mapa/mapa.h"
#include <iostream>
using namespace std;

class torre {
protected:
    int precio;
    int ataqueBase;
    int alcanceAtaque;
    int velocidadAtaque;
    int posX;
    int posY;

public:
    torre(int p, int a, int aa, int va, int x, int y);
    virtual ~torre() = default;

    int getPrecio() const;
    int getAtaqueBase() const;
    int getAlcanceAtaque() const;
    int getVelocidadAtaque() const;

    void setPrecio(int p);
    void setAtaqueBase(int a);
    void setAlcanceAtaque(int aa);
    void setVelocidadAtaque(int va);

    virtual int getX() const = 0;
    virtual int getY() const = 0;
    virtual void mejorar() = 0;

};

#endif
