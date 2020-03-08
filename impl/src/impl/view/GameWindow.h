//
// Created by Tobias Axelsson on 2019-07-14.
//

#ifndef IMPL_GAMEWINDOW_H
#define IMPL_GAMEWINDOW_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "../model/PongWorld.h"

using namespace std;

class GameWindow: public sf::RenderWindow {
    static const auto SCREEN_WIDTH = 1920;
    static const auto SCREEN_HEIGHT = 1080;
    static const auto BITS_PER_PIXEL = 32;
public:
    explicit GameWindow(const string& title);
    void drawWorld(const PongWorld& pongWorld);
};


#endif //IMPL_GAMEWINDOW_H
