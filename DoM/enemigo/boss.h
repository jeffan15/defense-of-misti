#ifndef BOSS_H
#define BOSS_H
#include "enemigo.h"
using namespace std;

class boss : public enemigo {
    private:
        float cooldown{0};
    public:
        boss(string t, int d, short v, float ve, float r, float va, float di, bool at, float cd);
        float getCooldown();
        void regeneracion(short factor);
};

#endif