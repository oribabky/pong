//
// Created by Tobias Axelsson on 2019-08-06.
//

#include "AngleDegrees.h"
#include <cmath>

bool AngleDegrees::isValidAngle(const float& angle) {
    return angle >= 0 && angle <= 360;
}

AngleDegrees::AngleDegrees(const float& initialAngle) : angle{0} {
    setAngle(initialAngle);
}

void AngleDegrees::setAngle(const float& inputAngle) {
    if (!isValidAngle(inputAngle)) {
        throw std::invalid_argument("Invalid angle!");
    }
    if (inputAngle == 360) {
        this->angle = 0;
    } else {
        this->angle = inputAngle;
    }
}

void AngleDegrees::setAngle(const AngleDegrees& inputAngle) {
    *this = inputAngle;
}

float AngleDegrees::getAngle() const {
    return angle;
}

float AngleDegrees::asRadians() const {
    return M_PI * angle / 180;
}

float radiansToDegrees(const float& radians) {
    return radians * 180 / M_PI;
}



