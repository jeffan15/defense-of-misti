#ifndef GHOST_H
#define GHOST_H
#include "enemigo.h"
using namespace std;

class ghost : public enemigo {
    private:
        float tiempoInvisible{0};
        float cooldown{0};
    public:
        ghost(string t, int d, short v, float ve, float r, float va, float di, float ti, float cd);
        float getCooldown();
        float getTiempoInvisible();
        void velocidadReducida(float factor);
};

#endif