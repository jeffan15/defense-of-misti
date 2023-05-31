using namespace std;
#include "torre.h"

#ifndef TORREALCANCEEXTENDIDO_H
#define TORREALCANCEEXTENDIDO_H


class TorreAlcanceExtendido : public torre {
private:
    float alcance;
    string tipoMunicion;
public:
    TorreAlcanceExtendido(string t, short a, int p, float al, string tm);
    float getAlcance() const;
    string getTipoMunicion() const;
    void cambiarTipoMunicion(string nuevoTipo);
};

#endif
