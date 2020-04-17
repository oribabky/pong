//
// Created by Tobias Axelsson on 2019-08-12.
//

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <cmath>
#include "IntersectionUtil.h"
#include "AngleDegrees.h"
#include "PongBall.h"

using namespace sf;

bool intersects(const CircleShape &circle, const RectangleShape &rect) {
    const auto rectWidth = rect.getSize().x;
    const auto rectHeight = rect.getSize().y;
    const auto circleRadius = circle.getRadius();

    const auto xCircleDistance = xDistanceTwoPoints(circle.getPosition(), rect.getPosition());
    const auto yCircleDistance = yDistanceTwoPoints(circle.getPosition(), rect.getPosition());

    if (xCircleDistance > (rectWidth/2 + circleRadius)) {
        return false;
    }
    if (yCircleDistance > (rectHeight/2 + circleRadius)) {
        return false;
    }

    if (xCircleDistance <= (rectWidth/2)) {
        return true;
    }
    if (yCircleDistance <= (rectHeight/2)) {
        return true;
    }
    auto cornerDistance_sq = pow((xCircleDistance - rectWidth/2), 2) +
                                                          pow((yCircleDistance - rectHeight/2), 2);

    return (cornerDistance_sq <= (pow(circleRadius, 2)));
}

float yDistanceTwoPoints(const Vector2f& point1, const Vector2f& point2) {
    return abs(-point1.y - -point2.y);
}

float xDistanceTwoPoints(const Vector2f& point1, const Vector2f& point2) {
    return abs(-point1.x - -point2.x);
}

AngleDegrees calculateAngleTwoPoints(const Vector2f &originPoint, const Vector2f &destinationPoint) {
    int quadrant;
    if (destinationPoint.x >= originPoint.x && destinationPoint.y <= originPoint.y) {
        quadrant = 0;
    } else if (destinationPoint.x <= originPoint.x && destinationPoint.y <= originPoint.y) {
        quadrant = 1;
    } else if (destinationPoint.x <= originPoint.x && destinationPoint.y >= originPoint.y) {
        quadrant = 2;
    } else if (destinationPoint.x >= originPoint.x && destinationPoint.y >= originPoint.y) {
        quadrant = 3;
    } else {
        throw std::invalid_argument("Could not determine which quadrant the resulting vector belongs to.");
    }
    auto xDistance = xDistanceTwoPoints(originPoint, destinationPoint);
    auto yDistance = yDistanceTwoPoints(originPoint, destinationPoint);
    const auto angleInRadians = atan(xDistance / yDistance);
    auto angleInDegrees = radiansToDegrees(angleInRadians);
    angleInDegrees = angleInDegrees + static_cast<float>(90) * static_cast<float>(quadrant);
    return AngleDegrees{angleInDegrees};
}