#pragma once
#ifndef TORREALCANCEEXTENDIDO_H
#define TORREALCANCEEXTENDIDO_H

#include "torre.h"

class torrealcanceextendido : public torre {
private:
    int rangoExtra;

public:
    torrealcanceextendido(int p, int a, int aa, int va, int x, int y, int r);
    virtual ~torrealcanceextendido() = default;

    int getRangoExtra() const;
    void setRangoExtra(int r);

    virtual int getX() const override;
    virtual int getY() const override;
    virtual void mejorar() override;
};

#endif
