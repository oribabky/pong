//
// Created by Tobias Axelsson on 2019-08-06.
//

#include "PongBall.h"
#include "../util/RandomUtil/RandomUtil.h"
#include "../util/intersectionutil/IntersectionUtil.h"
#include <cmath>
#include <iostream>

PongBall::PongBall(const float &gameWindowArea, const float& xPos, const float& yPos) :
        sf::CircleShape{determineBallDiameter(gameWindowArea)},
        direction{AngleDegrees{static_cast<float>(randomNumberBetween(0, 359))}},
        movementSpeed(MOVEMENT_SPEED_COEFFICIENT * (getRadius() * 2) * gameWindowArea) {
    setFillColor(sf::Color::White);
    setOrigin(getRadius(), getRadius());
    setPosition(xPos, yPos);
}

void PongBall::moveBall() {
    float xDistance = cos(direction.asRadians()) * movementSpeed;
    float yDistance = sin(direction.asRadians()) * movementSpeed;
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
    const auto newAngle = 360 - direction.getAngle();
    bounce(newAngle);
}

void PongBall::bouncePlayerBar(const PlayerBar& bar) {
    const auto newAngle = IMPL_INTERSECTIONUTIL_H::calculateAngleTwoPoints(bar.getPosition(), this->getPosition());
    std::cout << "Bounce Player bar! new angle: " << newAngle.getAngle() << std::endl;
    bounce(newAngle.getAngle());
}

void PongBall::bounce(const float &newAngle) {
    std::cout << "Bounce! new angle: " << newAngle << std::endl;
    direction.setAngle(newAngle);
}

float PongBall::determineBallDiameter(const float& gameWindowArea) {
    return gameWindowArea * BALL_SIZE_PERCENTAGE_WINDOW_AREA;
}

