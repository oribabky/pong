//
// Created by Tobias Axelsson on 2019-08-12.
//

#include <list>
#include "PongWorld.h"
#include "../util/intersectionutil/IntersectionUtil.h"

using namespace std;

PongWorld::PongWorld(const float &gameWindowWidth, const float &gameWindowHeight) :
        pongBall{PongBall{gameWindowWidth}},
        leftWall{0, 0, WALL_THICKNESS, gameWindowHeight},
        topWall{0, 0, gameWindowWidth, WALL_THICKNESS},
        rightWall{gameWindowWidth - WALL_THICKNESS, 0, WALL_THICKNESS, gameWindowHeight},
        bottomWall{0, gameWindowHeight - WALL_THICKNESS, gameWindowWidth, WALL_THICKNESS} {}

void PongWorld::moveBall() {
    list<Wall> verticalWalls = {leftWall, rightWall};
    list<Wall> horizontalWalls = {topWall, bottomWall};
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
    pongBall.moveBall();
}