using namespace std;
#include "torre.h"

#ifndef TORREAREA_H
#define TORREAREA_H


class TorreArea : public torre {
private:
    float radio;
    float danoArea;
public:
    TorreArea(string t, short a, int p, float r, float da);
    float getRadio() const;
    float getDanoArea() const;
    void atacarEnemigosArea();
    void aumentarRadio(float factor);
};


#endif
