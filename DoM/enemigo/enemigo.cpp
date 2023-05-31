#include "enemigo.h"

using namespace std;

enemigo::enemigo(string t, int d, short v, float ve, float r, float va, float di, bool at)
    : tipo(t), danio(d), vida(v), velocidad(ve), resistencia(r), velataque(va), distancia(di), ataque(at){}

void enemigo::setTipo(string t) {tipo = t;}
void enemigo::setDanio(int d) {danio = d;}
void enemigo::setVida(short v) {vida = v;}
void enemigo::setVelocidad(float ve) {velocidad = ve;}
void enemigo::setResistencia(float r) {resistencia = r;}
void enemigo::setVelAtaque(float va) {velataque = va;}
void enemigo::setDistancia(float di) {distancia = di;}
void enemigo::setAtaque(bool at) {ataque = at;}

string enemigo::getTipo() const {return tipo;}
int enemigo::getDanio() const {return danio;}
short enemigo::getVida() {return vida;}
float enemigo::getVelocidad() {return velocidad;}
float enemigo::getResistencia() {return resistencia;}
float enemigo::getVelAtaque() {return velataque;}
float enemigo::getDistancia() {return distancia;}
void enemigo::spawn(){}