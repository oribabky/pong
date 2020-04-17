//
// Created by Tobias Axelsson on 2019-08-12.
//

#ifndef IMPL_INTERSECTIONUTIL_H
#define IMPL_INTERSECTIONUTIL_H

#include "PongBall.h"

bool intersects(const sf::CircleShape &circle, const sf::RectangleShape &rect);
bool intersects(const sf::RectangleShape &rect1, const sf::RectangleShape &rect2);
float yDistanceTwoPoints(const sf::Vector2f& point1, const sf::Vector2f& point2);
float xDistanceTwoPoints(const sf::Vector2f& point1, const sf::Vector2f& point2);
AngleDegrees calculateAngleTwoPoints(const sf::Vector2f &vector1, const sf::Vector2f &vector2);
#endif //IMPL_INTERSECTIONUTIL_H
