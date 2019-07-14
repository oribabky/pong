//
// Created by Tobias Axelsson on 2019-07-14.
//

#ifndef IMPL_GAMEWINDOW_H
#define IMPL_GAMEWINDOW_H

#include <SFML/Graphics/RenderWindow.hpp>

using namespace std;

class GameWindow: public sf::RenderWindow {
    static const unsigned SCREEN_WIDTH = 640;
    static const unsigned SCREEN_HEIGHT = 480;
    static const unsigned BITS_PER_PIXEL = 32;
public:
    explicit GameWindow(const string& title);
};


#endif //IMPL_GAMEWINDOW_H
