#pragma once
#ifndef TORRECONGELACION_H
#define TORRECONGELACION_H

#include "torre.h"

class torrecongelacion : public torre {
private:
    int factorCong;

public:
    torrecongelacion(int p, int a, int aa, int va, int factor);
    virtual ~torrecongelacion() = default;

    int getFactorCong() const;
    void setFactorCong(int factor);

    virtual void construir(const int x,const int y) override;
    virtual void mejorar() override;
};

#endif
