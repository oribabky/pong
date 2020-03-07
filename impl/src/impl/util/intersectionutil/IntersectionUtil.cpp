//
// Created by Tobias Axelsson on 2019-08-12.
//

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <cmath>
#include "IntersectionUtil.h"

using namespace sf;

bool intersects(const CircleShape &circle, const RectangleShape &rect) {
    const auto xCircleDistance = abs(rect.getPosition().x - circle.getPosition().x);
    const auto yCircleDistance = abs(rect.getPosition().y - circle.getPosition().y);
    const auto rectWidth = rect.getSize().x;
    const auto rectHeight = rect.getSize().y;
    const auto circleRadius = circle.getRadius();

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

bool intersects2(const CircleShape &circle, const RectangleShape &rectangle) {
    if (rectangle.getLocalBounds().contains(circle.getOrigin())) {
        return true;
    }
    return false;
}