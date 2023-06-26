#include <iostream>
#include <array>
using namespace std;

class gamesets{
    protected:
        int wave{5};       
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
            if (difficulty > 4 || difficulty < 1) {               
                throw invalid_argument("Valor no permitido, ingrese un numero entre 1-4");          
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