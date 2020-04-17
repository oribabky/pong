//
// Created by Tobias Axelsson on 2020-03-08.
//

#ifndef IMPL_PLAYERBAR_H
#define IMPL_PLAYERBAR_H


#include <SFML/Graphics/RectangleShape.hpp>

class PlayerBar : public sf::RectangleShape {
    constexpr static float MOVEMENT_DISTANCE = 1;
public:
    PlayerBar(const float &xPos, const float &yPos, const float &width, const float &height);
    void moveUp();
    void moveDown();
};


#endif //IMPL_PLAYERBAR_H
