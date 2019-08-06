//
// Created by Tobias Axelsson on 2019-08-06.
//

#include "PongBall.h"

PongBall::PongBall(const float &gameWindowWidth) :
        sf::CircleShape{determineBallDiameter(gameWindowWidth)} {
    const sf::Color whiteColor{0xFF, 0xFF, 0xFF};
    setFillColor(whiteColor);
}

void PongBall::moveBall() {
    move(0.05, 0);
}

float PongBall::determineBallDiameter(const float& gameWindowWidth) {
    return gameWindowWidth * BALL_SIZE_PERCENTAGE_WINDOW;
}
