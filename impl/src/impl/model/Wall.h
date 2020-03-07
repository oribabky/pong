//
// Created by Tobias Axelsson on 2019-08-12.
//

#ifndef IMPL_WALL_H
#define IMPL_WALL_H

#include <SFML/Graphics/RectangleShape.hpp>

class Wall : public sf::RectangleShape {
public:
    Wall(const float& xPos, const float& yPos, const float& width, const float& height);
};


#endif //IMPL_WALL_H
