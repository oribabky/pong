//
// Created by Tobias Axelsson on 2019-08-12.
//

#ifndef IMPL_PONGWORLD_H
#define IMPL_PONGWORLD_H


#include "PongBall.h"
#include "Wall.h"
#include "PlayerBar.h"

class PongWorld {
    static constexpr auto WALL_THICKNESS = 10;
    static constexpr auto PLAYER_BAR_THICKNESS = 30;
    static constexpr auto DISTANCE_VERTICAL_WALL_TO_PLAYER_BAR = 200;
public:
    PongBall pongBall;
    const Wall leftWall;
    const Wall topWall;
    const Wall rightWall;
    const Wall bottomWall;
    const PlayerBar leftPlayerBar;
    const PlayerBar rightPlayerBar;

    PongWorld(const float& gameWindowWidth, const float& gameWindowHeight);

    void moveBall();
};


#endif //IMPL_PONGWORLD_H
