//
// Created by Tobias Axelsson on 2019-08-12.
//

#include "Wall.h"

Wall::Wall(const float &xPos, const float &yPos, const float &width, const float &height) :
sf::RectangleShape{sf::Vector2f{width, height}} {
    const sf::Color whiteColor{0xFF, 0xFF, 0xFF};
    setFillColor(whiteColor);
    setPosition(xPos, yPos);
}
