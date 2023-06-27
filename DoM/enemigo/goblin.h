#ifndef GOBLIN_H
#define GOBLIN_H
#include <string>
#include "enemigo.h"
using namespace std;

class goblin : public enemigo {
    public:
        goblin(string t, short v, float ve, float r);
        virtual ~goblin() = default;
        void velocidadAumentada(float factor);
        void resistenciaReducida(float factor);
        void healingEffect();
};

#endif