//
// Created by Tobias Axelsson on 2019-07-14.
//

#include <SFML/Graphics/RenderWindow.hpp>
#include "GameWindow.h"
#include <string>

using namespace std;

GameWindow::GameWindow(const string &windowTitle) :
        sf::RenderWindow{sf::VideoMode{SCREEN_WIDTH, SCREEN_HEIGHT, BITS_PER_PIXEL}, windowTitle} {}
