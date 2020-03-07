//
// Created by Tobias Axelsson on 2019-08-05.
//

#ifndef IMPL_PONGBALL_H
#define IMPL_PONGBALL_H

#include <SFML/Graphics/CircleShape.hpp>
#include "domainprimitives/AngleDegrees.h"

class PongBall : public sf::CircleShape {
    constexpr static float BALL_SIZE_PERCENTAGE_WINDOW = 0.05;
    constexpr static float MOVING_DISTANCE = 0.08;
    AngleDegrees direction;
    static float determineBallDiameter(const float& gameWindowWidth);
public:
    explicit PongBall(const float& gameWindowWidth);
    void moveBall();
    void bounceVerticalWall();
    void bounceHorizontalWall();
private:
    void bounce(const float &newAngle);
};

#endif //IMPL_PONGBALL_H
