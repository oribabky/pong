//
// Created by Tobias Axelsson on 2019-08-12.
//

#ifndef IMPL_PONGWORLD_H
#define IMPL_PONGWORLD_H


#include "PongBall.h"
#include "Wall.h"

class PongWorld {
    static constexpr auto WALL_THICKNESS = 15;
public:
    PongBall pongBall;
    const Wall leftWall;
    const Wall topWall;
    const Wall rightWall;
    const Wall bottomWall;

    PongWorld(const float& gameWindowWidth, const float& gameWindowHeight);

    void moveBall();
};


#endif //IMPL_PONGWORLD_H
