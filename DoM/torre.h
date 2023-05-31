#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

#ifndef TORRE_H
#define TORRE_H


class torre{
private:
    string tipo;
    short ataque{0};
    int precio{0};
public:
    torre(string t, short a, int p);
    void setTipo(string t);
    void setAtaque(short a);
    void setPrecio(int p);
    string getTipo() const;
    short getAtaque() const;
    int getPrecio() const;
    void build();
    void upgrade();
};

#endif