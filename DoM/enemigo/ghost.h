#ifndef GHOST_H
#define GHOST_H
#include <string>
#include "enemigo.h"
using namespace std;

class ghost : public enemigo {
    private:
        float tiempoInvisible{0};
        float cooldown{0};
        
    public:
        ghost(string t, short v, float ve, float r, float ti, float cd);
        virtual ~ghost() = default;
        void setCooldown(float factor);
        void velocidadReducida(float factor);
        void healingEffect();
        float getCooldown();
        float getTiempoInvisible();
};

#endif