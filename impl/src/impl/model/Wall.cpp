//
// Created by Tobias Axelsson on 2019-08-12.
//

#include "Wall.h"

Wall::Wall(const float &xPos, const float &yPos, const float &width, const float &height) :
sf::RectangleShape{sf::Vector2f{width, height}} {
    setFillColor(sf::Color::Red);
    setOrigin(width / 2, height / 2);
    setPosition(xPos + width / 2, yPos + height / 2);
}
