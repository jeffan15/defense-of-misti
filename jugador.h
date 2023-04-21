#include <iostream>
#include <array>
using namespace std;

class jugador{
private:
    string apodo;
    int puntuacion{0};
    int soles{0};
    short vida{0};
public:
    jugador(string a, int p, int s, short v){
        apodo = a;
        puntuacion = p;
        soles = s;
        vida = v;
    }
    void setApodo(string a){
        apodo = a;
    }
    void setPuntuacion(int p){
        puntuacion = p;
    }
    void setSoles(int s){
        soles = s;
    }
    void setVida(short v){
        vida = v;
    }
    string getApodo(){
        return apodo;
    }
    int getPuntuacion(){
        return puntuacion;
    }
    int getSoles(){
        return soles;
    }
    short getVida(){
        return vida;
    }
    void start(){}
};
