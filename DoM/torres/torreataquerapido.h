using namespace std;
#include "torre.h"

#ifndef TORREATAQUERAPIDO_H
#define TORREATAQUERAPIDO_H



class TorreAtaqueRapido : public torre {
private:
    float velocidadAtaque;
    float rangoAtaque;
public:
    TorreAtaqueRapido(string t, short a, int p, float va, float ra);
    float getVelocidadAtaque() const;
    float getRangoAtaque() const;
    void dispararEnemigo();
    void aumentarVelocidadAtaque(float factor);
};

#endif
