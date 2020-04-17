#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include "view/GameWindow.h"
#include "PongWorld.h"

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

        world.moveBall();
        window.drawWorld(world);
    }
}
