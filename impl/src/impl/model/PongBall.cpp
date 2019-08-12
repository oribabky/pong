//
// Created by Tobias Axelsson on 2019-08-06.
//

#include "PongBall.h"
#include <cmath>

PongBall::PongBall(const float &gameWindowWidth) :
        sf::CircleShape{determineBallDiameter(gameWindowWidth)},
        direction{AngleDegrees{340}}
        {
    const sf::Color whiteColor{0xFF, 0xFF, 0xFF};
    setFillColor(whiteColor);
}

void PongBall::moveBall() {
    float xDistance = cos(direction.asRadians()) * MOVING_DISTANCE;
    float yDistance = sin(direction.asRadians()) * MOVING_DISTANCE;
    yDistance = -yDistance; // match the coordinates system in the window object

    move(xDistance, yDistance);
}

float PongBall::determineBallDiameter(const float& gameWindowWidth) {
    return gameWindowWidth * BALL_SIZE_PERCENTAGE_WINDOW;
}
