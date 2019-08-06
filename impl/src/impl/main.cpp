#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include "view/GameWindow.h"
#include "view/game-objects/PongBall.h"

int main() {
    GameWindow window{"my game"};
    PongBall ball{static_cast<float>(window.getSize().x)};

    while (window.isOpen()) {
        window.display();
        window.clear(sf::Color::Black);

        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.draw(ball);
        ball.moveBall();
    }
}
