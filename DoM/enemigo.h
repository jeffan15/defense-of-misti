#include <iostream>
#include <array>
using namespace std;

class enemigo{
private:
    string tipo;
    int danio{0};
    short vida{0};
    int velocidad{0};
public:
    enemigo(string t, int d, short v, int ve){
        tipo = t;
        danio = d;
        vida = v;
        velocidad = ve;
    }

    void setTipo(string t){
        tipo = t;
    }
    void setDanio(int d){
        danio = d;
    }
    void setVida(short v){
        vida = v;
    }
    void setVelocidad(int ve){
        velocidad = ve;
    }


    string getTipo() const{
        return tipo;
    }
    int getDanio() const{
        return danio;
    }
    short getVida() const{
        return vida;
    }
    int getVelocidad() const{
        return velocidad;
    }
    void start(){}
};