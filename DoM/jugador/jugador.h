#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>

using namespace std;

class jugador {
private:
    string apodo;
    int puntuacion;
    int soles;
    short vida;

public:
    jugador(const string& a, int p, int s, short v);
    void setApodo(const string& a);
    void setPuntuacion(int p);
    void setSoles(int s);
    void setVida(short v);
    string getApodo() const;
    int getPuntuacion() const;
    int getSoles() const;
    short getVida() const;
    void start();
};

#endif
