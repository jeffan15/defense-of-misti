#include "jugador.h"
#include <iostream>

jugador::jugador(const string& a, int p, int s, short v) {
    apodo = a;
    puntuacion = p;
    soles = s;
    vida = v;
}

void jugador::setApodo(const string& a) {
    nick.push_back(a);
}

void jugador::setPuntuacion(int p) {
    score.push_back(p);
}

void jugador::setSoles(int s) {
    soles = s;
}

void jugador::setVida(short v) {
    vida = v;
}

string jugador::getApodo(int n) const {
    return nick[n-1];
}

int jugador::getPuntuacion(string a) const {
    for(int i{0}; i < nick.size(); i++)
        if(nick[i] == a)
            return score[i];
}

int jugador::getSoles() const {
    return soles;
}

short jugador::getVida() const {
    return vida;
}
