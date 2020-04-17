//
// Created by Tobias Axelsson on 2020-03-08.
//

#ifndef IMPL_PLAYERBAR_H
#define IMPL_PLAYERBAR_H


#include <SFML/Graphics/RectangleShape.hpp>

class PlayerBar : public sf::RectangleShape {
    constexpr static float movementSpeed = 9;
public:
    PlayerBar(const float &xPos, const float &yPos, const float &width, const float &height);
};


#endif //IMPL_PLAYERBAR_H
