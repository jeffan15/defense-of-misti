#pragma once
#ifndef TORREAREA_H
#define TORREAREA_H

#include "torre.h"

class torrearea : public torre {
private:
    int areaAtaque;

public:
    torrearea(int p, int a, int aa, int va, int x, int y, int area);
    virtual ~torrearea() = default;

    int getAreaAtaque() const;
    void setAreaAtaque(int area);

    virtual int getX() const override;
    virtual int getY() const override;
    virtual void mejorar() override;
};

#endif
