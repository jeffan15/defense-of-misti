#include <iostream>
#include <array>
#include <vector>
#include "Tile.h"
using namespace std;

class mapa{
private:
    string name;
    int width{60};       // No confundir corchetes con llaves, especialmente en la linea 8 y 9.
    int height{180};
    vector<vector<Tile>> tiles;
public:
    mapa(string n, int w, int h){           // De esta linea hasta la 14 inicializa los
        string name = n;                    // atributos de "nombre del mapa", su ancho y altura.
        int width = w;                          
        int height = h;
        tiles.resize(height, std::vector<Tile>(width, Tile(false)));
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
    void setPath(int x, int y) {
        tiles[y][x].isPath = true;
        tiles[y][x].shape.setFillColor(sf::Color::Green);
    }
    void setTower(int x, int y) {
        tiles[y][x].hasTower = true;
        tiles[y][x].shape.setFillColor(sf::Color::Red);
    }
    void draw(sf::RenderWindow& window) {
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                window.draw(tiles[y][x].shape);
            }
        }
    }
};