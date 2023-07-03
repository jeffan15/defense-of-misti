#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include <vector>

using namespace std;

class jugador {
private:
    string apodo;
    int puntuacion;
    int soles;
    short vida;

public:
    jugador(const string& a, int p, int s, short v);
    vector<string> nick;
    vector<int> score;
    void setApodo(const string& a);
    void setPuntuacion(int p);
    void setSoles(int s);
    void setVida(short v);
    string getApodo(int n) const;
    int getPuntuacion(string a) const;
    int getSoles() const;
    short getVida() const;
};

#endif
