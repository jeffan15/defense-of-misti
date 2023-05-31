#ifndef MAPABASE_H
#define MAPABASE_H

#include <array>
using namespace std;

class mapaBase{
    protected:
        string name;
        int weather{};       // No confundir corchetes con llaves, especialmente en la linea 8 y 9

    public:
        mapaBase(string n, int w){           // De esta linea hasta la 14 inicializa los
            string name = n;                    // atributos de "nombre del mapa", su ancho y altura
            int weather = w;                          
        }                                   
        void setName(string n){         
            name = n;               
        }                               
        void setWeather(int w){
        if (weather > 3 || weather < 1) {               // los niveles de dificultades varian desde el valor 1 hasta el 3
                throw invalid_argument("Valor no permitido, ingrese un numero entre 1-3");          // el 4 es el modo hardcore
        }
            weather = w;
        }

        string getName() const{
            return name;
        }
        int getWeather() const{
            return weather;
        }

        void start(){}
        
};

#endif