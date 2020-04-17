//
// Created by Tobias Axelsson on 2019-08-12.
//

#ifndef IMPL_PONGWORLD_H
#define IMPL_PONGWORLD_H


#include <MoveDirection.h>
#include "../pongball/PongBall.h"
#include "../wall/Wall.h"
#include "../playerbar/PlayerBar.h"

class PongWorld {
    static constexpr auto WALL_THICKNESS = 10;
    static constexpr auto PLAYER_BAR_THICKNESS = 30;
    static constexpr auto DISTANCE_VERTICAL_WALL_TO_PLAYER_BAR = 200;

    void movePlayerBar(PlayerBar& playerBar, const MoveDirection& moveDirection);
public:
    PongBall pongBall;
    const Wall leftWall;
    const Wall topWall;
    const Wall rightWall;
    const Wall bottomWall;
    PlayerBar leftPlayerBar;
    PlayerBar rightPlayerBar;

    PongWorld(const float& gameWindowWidth, const float& gameWindowHeight);

    void moveBall();
    void moveRightPlayerBar(const MoveDirection& moveDirection);
    void moveLeftPlayerBar(const MoveDirection& moveDirection);
};


#endif //IMPL_PONGWORLD_H
