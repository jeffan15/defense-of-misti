#ifndef GOLEM_H
#define GOLEM_H
#include "enemigo.h"
using namespace std;

class golem : public enemigo {
    public:
        golem(string t, int d, short v, float ve, float r, float va, float di, bool at);
        void ataqueCercano();
};

#endif