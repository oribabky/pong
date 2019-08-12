//
// Created by Tobias Axelsson on 2019-08-05.
//

#ifndef IMPL_PONGBALL_H
#define IMPL_PONGBALL_H

#include <SFML/Graphics/CircleShape.hpp>
#include "domainprimitives/AngleDegrees.h"

class PongBall : public sf::CircleShape {
    constexpr static float BALL_SIZE_PERCENTAGE_WINDOW = 0.05;
    const AngleDegrees direction;
    static float determineBallDiameter(const float& gameWindowWidth);
public:
    explicit PongBall(const float& gameWindowWidth);
    void moveBall();
};

#endif //IMPL_PONGBALL_H
