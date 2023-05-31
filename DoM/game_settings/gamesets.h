#include <iostream>
#include <array>
using namespace std;

class gamesets{
    protected:
        int wave{5};       // No confundir corchetes con llaves, especialmente en la linea 8 y 9.
        int difficulty{2};

    public:
        gamesets(int w, int h){           
            int width = w;                          
            int height = h;
        }                                   
        void setWave(int w){         
            wave = w;               
        }                               
        void setDifficulty(int d){
            if (difficulty > 4 || difficulty < 1) {               // los niveles de dificultades varian desde el valor 1 hasta el 4
                throw invalid_argument("Valor no permitido, ingrese un numero entre 1-4");          // el 4 es el modo hardcore
            }
            difficulty = d;
        }

        int getWave() const{
            return wave;
        }
        int getDifficulty() const{
            return difficulty;
        }

        void start(){}
        
};