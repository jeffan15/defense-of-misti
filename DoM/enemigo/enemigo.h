#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <array>

using namespace std;

class enemigo {
protected:
    string tipo;
    int danio{0};
    short vida{0};
    float velocidad{0};
    float resistencia{0};
    float velataque{0};
    float distancia;
    bool ataque{0};
public:
    enemigo(string t, int d, short v, float ve, float r, float va, float di, bool at);

    void setTipo(string t);
    void setDanio(int d);
    void setVida(short v);
    void setVelocidad(float ve);
    void setResistencia(float r);
    void setVelAtaque(float va);
    void setDistancia(float di);
    void setAtaque(bool at);

    string getTipo() const;
    int getDanio() const;
    short getVida();
    float getVelocidad();
    float getResistencia();
    float getVelAtaque();
    float getDistancia();
    bool getAtaque();
    void spawn();
};

#endif