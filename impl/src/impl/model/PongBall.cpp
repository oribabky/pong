//
// Created by Tobias Axelsson on 2019-08-06.
//

#include "PongBall.h"
#include "../util/RandomUtil/RandomUtil.h"
#include <cmath>
#include <iostream>

PongBall::PongBall(const float &gameWindowWidth, const float& xPos, const float& yPos) :
        sf::CircleShape{determineBallDiameter(gameWindowWidth)},
        direction{AngleDegrees{static_cast<float>(randomNumberBetween(0, 359))}}
        {
    setFillColor(sf::Color::White);
    setOrigin(getRadius(), getRadius());
    setPosition(xPos, yPos);
}

void PongBall::moveBall() {
    float xDistance = cos(direction.asRadians()) * MOVING_DISTANCE;
    float yDistance = sin(direction.asRadians()) * MOVING_DISTANCE;
    yDistance = -yDistance; // match the coordinates system in the window object

    move(xDistance, yDistance);
}

void PongBall::bounceVerticalWall() {
    auto newAngle = 0;
    if (direction.getAngle() > 180) {
        newAngle = 360 - direction.getAngle() + 180;
    } else {
        newAngle = 180 - direction.getAngle();
    }
    bounce(newAngle);
}

void PongBall::bounceHorizontalWall() {
    auto newAngle = 360 - direction.getAngle();
    bounce(newAngle);
}

void PongBall::bounce(const float &newAngle) {
    std::cout << "Bounce! new angle: " << newAngle << std::endl;
    direction.setAngle(newAngle);
}

float PongBall::determineBallDiameter(const float& gameWindowWidth) {
    return gameWindowWidth * BALL_SIZE_PERCENTAGE_WINDOW;
}
