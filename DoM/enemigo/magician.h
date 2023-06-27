#ifndef MAGICIAN_H
#define GOLEM_H
#include <string>
#include "enemigo.h"
using namespace std;

class magician : public enemigo {
    friend class ghost;
    friend class goblin;
    private:
        bool heal{0};
        int healingDistance{0};
        float cooldown{0};

    public:
        magician(string t, short v, float ve, float r, int hd, float cd, bool hl);
        virtual ~magician() = default;
        virtual void healingEffect() = 0;
        void setHealingDistance(int num);
        void healing();
        void setCooldown(float factor);
        int getHealingDistance();
        float getCooldown();
};

#endif