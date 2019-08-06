//
// Created by Tobias Axelsson on 2019-08-05.
//

#ifndef IMPL_PONGBALL_H
#define IMPL_PONGBALL_H

#include <SFML/Graphics/CircleShape.hpp>

class PongBall : public sf::CircleShape {
    static constexpr float BALL_SIZE_PERCENTAGE_WINDOW = 0.05;
    static constexpr float determineBallDiameter(const float gameWindowWidth) {
        return gameWindowWidth * BALL_SIZE_PERCENTAGE_WINDOW;
    }
public:
    const float diameter;
    explicit PongBall(const float gameWindowWidth) :
            diameter{determineBallDiameter(gameWindowWidth)},
            sf::CircleShape{determineBallDiameter(gameWindowWidth)} {
        const sf::Color whiteColor{0xFF, 0xFF, 0xFF};
        this->setFillColor(whiteColor);
    }
    void moveBall() {
        this->move(0.05, 0);
    }
};

#endif //IMPL_PONGBALL_H
