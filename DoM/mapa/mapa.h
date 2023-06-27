#pragma once
#ifndef MAPA_H
#define MAPA_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "../torres/torre.h"

class tile {
public:
    int id;
    bool isPath;
    bool hasTower;

    tile(int id, bool isPath);
};

class mapa {
public:
    int width;
    int height;
    std::vector<std::vector<tile>> tiles;
    std::vector<torre*> torres;

    mapa(int width, int height);

    void setPath(int x, int y);
    void setTower(int x, int y);
    void draw(sf::RenderWindow& window);
};
#endif
