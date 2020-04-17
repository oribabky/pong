#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include "view/GameWindow.h"
#include "PongWorld.h"
#include "MoveDirection.h"

int main() {
    GameWindow window{"my game"};
    PongWorld world{window.getSize().x, window.getSize().y};

    while (window.isOpen()) {
        window.display();
        window.clear(sf::Color::Black);

        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            world.moveRightPlayerBar(MoveDirection::UP);
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            world.moveRightPlayerBar(MoveDirection::DOWN);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            world.moveLeftPlayerBar(MoveDirection::UP);
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            world.moveLeftPlayerBar(MoveDirection::DOWN);
        }

        world.moveBall();
        window.drawWorld(world);
    }
}
