using namespace std;
#include "torre.h"

#ifndef TORRECONGELACION_H
#define TORRECONGELACION_H



class TorreCongelacion : public torre {
private:
    float velocidadReducida;
    float duracionCongelacion;
public:
    TorreCongelacion(string t, short a, int p, float vr, float dc);
    float getVelocidadReducida() const;
    float getDuracionCongelacion() const;
    void ralentizarEnemigos();
    void aumentarDuracionCongelacion(float factor);
};


#endif
