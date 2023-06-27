#include "enemigo.h"
#include "../mapa/mapa.h"

using namespace std;

enemigo::enemigo(string t, short v, float ve, float r)
    : tipo(t), vida(v), velocidad(ve), resistencia(r){}

void enemigo::setTipo(string t) {tipo = t;}
void enemigo::setVida(short v) {vida = v;}
void enemigo::setVelocidad(float ve) {velocidad = ve;}
void enemigo::setResistencia(float r) {resistencia = r;}

string enemigo::getTipo() const {return tipo;}
short enemigo::getVida() {return vida;}
float enemigo::getVelocidad() {return velocidad;}
float enemigo::getResistencia() {return resistencia;}
void enemigo::spawn(){
    mapa::tiles[y][x].hasEnemy = true;
}