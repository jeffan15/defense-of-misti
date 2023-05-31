#ifndef GOBLIN_H
#define GOBLIN_H
#include "enemigo.h"
using namespace std;

class goblin : public enemigo {
    public:
        goblin(string t, int d, short v, float ve, float r, float va, float di);
        void velocidadAumentada(float factor);
        void resistenciaReducida(float factor);
};

#endif