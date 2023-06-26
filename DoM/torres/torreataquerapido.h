#pragma once
#ifndef TORREATAQUERAPIDO_H
#define TORREATAQUERAPIDO_H

#include "torre.h"

class torreataquerapido : public torre {
private:
    int velocidadAtaqueExtra;

public:
    torreataquerapido(int p, int a, int aa, int va, int velocidad);
    virtual ~torreataquerapido() = default;

    int getVelocidadAtaqueExtra() const;
    void setVelocidadAtaqueExtra(int velocidad);

    virtual void construir(const int x, const int y) override;
    virtual void mejorar() override;
};

#endif