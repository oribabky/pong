//
// Created by Tobias Axelsson on 2020-03-08.
//

#include "PlayerBar.h"

PlayerBar::PlayerBar(const float &xPos, const float &yPos, const float &width, const float &height) :
    sf::RectangleShape{sf::Vector2f{width, height}} {
        setFillColor(sf::Color::White);
        setOrigin(width / 2, height / 2);
        setPosition(xPos, yPos);
    }

void PlayerBar::moveDown() {
    const auto currentPosition = getPosition();
    setPosition(currentPosition.x, currentPosition.y + MOVEMENT_DISTANCE);
}

void PlayerBar::moveUp() {
    const auto currentPosition = getPosition();
    setPosition(currentPosition.x, currentPosition.y - MOVEMENT_DISTANCE);
}