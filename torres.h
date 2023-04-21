#include <iostream>
#include <array>
using namespace std;

class torre{
private:
    string tipo;
    short ataque{0};
    int precio{0};
public:
    torre(string t, short a, int p){
        string tipo = t;
        short ataque = a;
        int precio = p;
    }
    void setTipo(string t){
        tipo = t;
    }
    void setAtaque(short a){
        ataque = a;
    }
    void setPrecio(int p){
        precio = p;
    }
    string getTipo() const {
        return tipo;
    }
    short getAtaque() const {
        return ataque;
    }
    int getPrecio() const {
        return precio;
    }
    void build(){}
    void upgrade(){}
};