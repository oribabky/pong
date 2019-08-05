#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include "view/GameWindow.h"
#include "view/game-objects/PongBall.h"

int main() {
    GameWindow window{"my game"};

    while (window.isOpen()) {
        sf::Event event{};

        PongBall ball{static_cast<float>(window.getSize().x)};

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            window.clear(sf::Color::Black);
            window.draw(ball);
            window.display();
        }
    }
}
