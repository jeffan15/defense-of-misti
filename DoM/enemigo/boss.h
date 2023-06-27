#ifndef BOSS_H
#define BOSS_H
#include <string>
#include "enemigo.h"
using namespace std;

class boss : public enemigo {
    private:
        float cooldown{0};
        
    public:
        boss(string t, short v, float ve, float r, float cd);
        virtual ~boss() = default;
        void setCooldown(float factor);
        void regeneracion(short factor);
        float getCooldown();
};

#endif