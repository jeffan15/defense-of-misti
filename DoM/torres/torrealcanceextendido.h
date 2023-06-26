#pragma once
#ifndef TORREALCANCEEXTENDIDO_H
#define TORREALCANCEEXTENDIDO_H

#include "torre.h"

class torrealcanceextendido : public torre {
private:
    int rangoExtra;

public:
    torrealcanceextendido(int p, int a, int aa, int va, int r);
    virtual ~torrealcanceextendido() = default;

    int getRangoExtra() const;
    void setRangoExtra(int r);

    virtual void construir(const int x,const int y) override;
    virtual void mejorar() override;
};

#endif
