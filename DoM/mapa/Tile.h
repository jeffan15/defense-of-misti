#include <SFML/Graphics.hpp>
class Tile {
public:
    sf::RectangleShape shape;
    bool isPath;
    bool hasTower;
    const int TILE_SIZE = 40;

    Tile(bool isPath) : isPath(isPath), hasTower(false) {
        shape.setSize(sf::Vector2f(TILE_SIZE, TILE_SIZE));
        shape.setOutlineThickness(1.f);
        shape.setOutlineColor(sf::Color::Black);
        if (isPath)
            shape.setFillColor(sf::Color::Green);
        else
            shape.setFillColor(sf::Color::White);
    }
};
