#pragma once
#ifndef TORRECONGELACION_H
#define TORRECONGELACION_H

#include "torre.h"

class torrecongelacion : public torre {
private:
    int factorCong;

public:
    torrecongelacion(int p, int a, int aa, int va, int x, int y, int factor);
    virtual ~torrecongelacion() = default;

    int getFactorCong() const;
    void setFactorCong(int factor);

    virtual int getX() const override;
    virtual int getY() const override;
    virtual void mejorar() override;
};

#endif
