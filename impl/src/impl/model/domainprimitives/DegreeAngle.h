//
// Created by Tobias Axelsson on 2019-08-06.
//

#ifndef IMPL_DEGREEANGLE_H
#define IMPL_DEGREEANGLE_H


#include <stdexcept>

class DegreeAngle {
    float angle;
    static bool isValidAngle(const float& angle);
public:
    explicit DegreeAngle(const float& initialAngle);
    void setAngle(const float& inputAngle);
    float getAngle();
};


#endif //IMPL_DEGREEANGLE_H
