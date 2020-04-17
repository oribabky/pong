//
// Created by Tobias Axelsson on 2019-08-12.
//

#include <list>
#include "PongWorld.h"
#include "../../../util/intersectionutil/IntersectionUtil.h"

using namespace std;

PongWorld::PongWorld(const float &gameWindowWidth, const float &gameWindowHeight) :
        pongBall{PongBall{gameWindowWidth * gameWindowHeight, gameWindowWidth / 2, gameWindowHeight / 2}},
        leftWall{Wall{0, 0, WALL_THICKNESS, gameWindowHeight}},
        topWall{Wall{0, 0, gameWindowWidth, WALL_THICKNESS}},
        rightWall{Wall{gameWindowWidth - WALL_THICKNESS, 0, WALL_THICKNESS, gameWindowHeight}},
        bottomWall{Wall{0, gameWindowHeight - WALL_THICKNESS, gameWindowWidth, WALL_THICKNESS}},
        leftPlayerBar{PlayerBar{DISTANCE_VERTICAL_WALL_TO_PLAYER_BAR, gameWindowHeight / 2, PLAYER_BAR_THICKNESS, gameWindowHeight / 2}},
        rightPlayerBar{PlayerBar{gameWindowWidth - DISTANCE_VERTICAL_WALL_TO_PLAYER_BAR, gameWindowHeight / 2, PLAYER_BAR_THICKNESS, gameWindowHeight / 2}} {}

void PongWorld::moveBall() {
    list<Wall> verticalWalls = {leftWall, rightWall};
    list<Wall> horizontalWalls = {topWall, bottomWall};
    list<PlayerBar> playerBars = {leftPlayerBar, rightPlayerBar};

    for (const Wall& wall : verticalWalls) {
        if (intersects(pongBall, wall)) {
            pongBall.bounceVerticalWall();
        }
    }

    for (const Wall& wall : horizontalWalls) {
        if (intersects(pongBall, wall)) {
            pongBall.bounceHorizontalWall();
        }
    }

    for (const PlayerBar& playerBar : playerBars) {
        if (intersects(pongBall, playerBar)) {
            pongBall.bouncePlayerBar(playerBar);
        }
    }
    pongBall.moveBall();
}
