//
// Created by Tobias Axelsson on 2019-08-06.
//

#ifndef IMPL_ANGLEDEGREES_H
#define IMPL_ANGLEDEGREES_H


#include <stdexcept>

class AngleDegrees {
    float angle;
    static bool isValidAngle(const float& angle);
public:
    explicit AngleDegrees(const float& initialAngle);
    void setAngle(const float& inputAngle);
    void setAngle(const AngleDegrees& inputAngle);
    float getAngle() const;
    float asRadians() const;
};
float radiansToDegrees(const float& radians);


#endif //IMPL_ANGLEDEGREES_H
