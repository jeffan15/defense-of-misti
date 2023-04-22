#include <iostream>
#include <array>
using namespace std;

class mapa{
private:
    string name;
    int width{60};       // No confundir corchetes con llaves, especialmente en la linea 8 y 9.
    int height{180};
public:
    mapa(string n, int w, int h){           // De esta linea hasta la 14 inicializa los
        string name = n;                    // atributos de "nombre del mapa", su ancho y altura.
        int width = w;                          
        int height = h;
    }                                   
    void setName(string n){         
        name = n;               
    }                               
    void setWidth(int w){
        width = w;
    }
    void setHeight(int h){
        height = h;
    }
    string getName() const{
        return name;
    }
    int getWidth() const{
        return width;
    }
    int getHeight() const{
        return height;
    }

    void start(){}
    void weather(){}
    void spawn(){}
    void colision(){}
    void wave(){}
};