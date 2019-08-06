//
// Created by Tobias Axelsson on 2019-08-06.
//

#include "DegreeAngle.h"

bool DegreeAngle::isValidAngle(const float& angle) {
    return angle >= 0 && angle <= 360;
}

DegreeAngle::DegreeAngle(const float& initialAngle) : angle{0} {
    setAngle(initialAngle);
}

void DegreeAngle::setAngle(const float& inputAngle) {
    if (!isValidAngle(inputAngle)) {
        throw std::invalid_argument("Invalid angle!");
    }
    if (inputAngle == 360) {
        this->angle = 0;
    } else {
        this->angle = inputAngle;
    }
}

float DegreeAngle::getAngle() {
    return angle;
}
