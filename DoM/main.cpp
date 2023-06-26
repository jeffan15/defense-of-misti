#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "mapa/mapa.h"
#include "torres/torre.h"
#include "torres/torrealcanceextendido.h"
#include "torres/torreataquerapido.h"
#include "torres/torrecongelacion.h"
#include "torres/torrearea.h"
#include "enemigo/enemigo.h"
#include "enemigo/boss.h"
#include "enemigo/ghost.h"
#include "enemigo/goblin.h"
#include "enemigo/golem.h"
#include "jugador/jugador.h"
#include "game_settings/gamesets.h"

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

enum class MenuOption {
    Start,
    Exit
};

MenuOption showMenu(sf::RenderWindow& window) {
    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {
        std::cerr << "Failed to load font" << std::endl;
        return MenuOption::Exit;
    }

    sf::Text title;
    title.setFont(font);
    title.setString("Defense of Misty");
    title.setCharacterSize(40);
    title.setPosition((WINDOW_WIDTH - title.getLocalBounds().width) / 2, 100);

    sf::Text startText;
    startText.setFont(font);
    startText.setString("Iniciar juego");
    startText.setCharacterSize(30);
    startText.setPosition((WINDOW_WIDTH - startText.getLocalBounds().width) / 2, 200);

    sf::Text exitText;
    exitText.setFont(font);
    exitText.setString("Salir");
    exitText.setCharacterSize(30);
    exitText.setPosition((WINDOW_WIDTH - exitText.getLocalBounds().width) / 2, 250);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                return MenuOption::Exit;
            }

            if (event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

                if (startText.getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
                    return MenuOption::Start;
                }

                if (exitText.getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
                    window.close();
                    return MenuOption::Exit;
                }
            }
        }

        window.clear(sf::Color::Black);
        window.draw(title);
        window.draw(startText);
        window.draw(exitText);
        window.display();
    }

    return MenuOption::Exit;
}

int main() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Defense of Misty");
    window.setFramerateLimit(60);



    mapa map(WINDOW_WIDTH, WINDOW_HEIGHT);

    map.setPath(1, 1);
    map.setPath(1, 2);
    map.setPath(2, 2);
    map.setPath(2, 3);
    map.setPath(3, 3);
    map.setPath(3, 2);
    map.setPath(4, 2);
    map.setPath(4, 1);
    map.setPath(5, 1);
    map.setPath(6, 1);
    map.setPath(6, 2);
    map.setPath(6, 3);
    map.setPath(7, 3);
    map.setPath(8, 3);
    map.setPath(8, 2);
    map.setPath(8, 1);
    map.setPath(9, 1);
    map.setPath(9, 2);

    map.setTower(3, 4);
    map.setTower(7, 2);
    map.setTower(5, 2);
    map.setTower(8, 4);

    while (true) {
        MenuOption option = showMenu(window);

        if (option == MenuOption::Start) {
            while (window.isOpen()) {
                sf::Event event;
                while (window.pollEvent(event)) {
                    if (event.type == sf::Event::Closed)
                        window.close();
                }

                window.clear(sf::Color::Black);

                map.draw(window);

                window.display();
            }
        }
        else if (option == MenuOption::Exit) {
            break;
        }
    }

    return 0;
}