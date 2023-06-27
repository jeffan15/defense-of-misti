#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <string>
#include <array>

using namespace std;

class enemigo {
protected:
    string tipo;
    short vida{0};
    float velocidad{0};
    float resistencia{0};

public:
    enemigo(string t, short v, float ve, float r);
    virtual ~enemigo() = default;
    
    void setTipo(string t);
    void setVida(short v);
    void setVelocidad(float ve);
    void setResistencia(float r);

    string getTipo() const;
    short getVida();
    float getVelocidad();
    float getResistencia();
    void spawn();
};

#endif