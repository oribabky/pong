//
// Created by Tobias Axelsson on 2019-08-05.
//

#ifndef IMPL_PONGBALL_H
#define IMPL_PONGBALL_H

#include <SFML/Graphics/CircleShape.hpp>
#include "AngleDegrees.h"
#include "RandomUtil.h"
#include "PlayerBar.h"

class PongBall : public sf::CircleShape {

    constexpr static float BALL_SIZE_PERCENTAGE_WINDOW_AREA = 0.000015;
    constexpr static float MOVEMENT_SPEED_COEFFICIENT = 0.000000009;
    const float movementSpeed;
    AngleDegrees direction;
    static float determineBallDiameter(const float& gameWindowWidth);
public:
    explicit PongBall(const float &gameWindowArea, const float &xPos, const float &yPos);
    void moveBall();
    void bounceVerticalWall();
    void bounceHorizontalWall();
    void bouncePlayerBar(const PlayerBar& bar);

private:
    void bounce(const float &newAngle);
};

#endif //IMPL_PONGBALL_H
