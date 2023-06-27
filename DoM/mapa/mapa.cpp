#include "mapa.h"

tile::tile(int id, bool isPath) : id(id), isPath(isPath), hasTower(false) {/*agregar enemigos*/ }

mapa::mapa(int width, int height) : width(width), height(height) {
    tiles.resize(height, std::vector<tile>(width, tile(0, false)));
}

void mapa::setPath(int x, int y) {
    tiles[y][x].isPath = true;
}

void mapa::setTower(int x, int y) {
    tiles[y][x].hasTower = true;
}

void mapa::draw(sf::RenderWindow& window) {
    sf::RectangleShape tileShape(sf::Vector2f(70.f, 70.f));

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            tileShape.setPosition(x * 70.f, y * 70.f);

            if (tiles[y][x].isPath)
                tileShape.setFillColor(sf::Color::Green);
            else if (tiles[y][x].hasTower)
                tileShape.setFillColor(sf::Color::Red);
            else
                tileShape.setFillColor(sf::Color::Black);

            window.draw(tileShape);
        }
    }
    for (const auto& t : torres) {
        int x = t->getX(); 
        int y = t->getY(); 

        
        float posX = x * 70.f;
        float posY = y * 70.f;

        
        tileShape.setPosition(posX, posY);
        tileShape.setSize(sf::Vector2f(70.f, 70.f));

       
        tileShape.setFillColor(sf::Color::Blue);

        window.draw(tileShape);
    }
}