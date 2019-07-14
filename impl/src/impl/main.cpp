#include <string>
#include <SFML/Window/Event.hpp>
#include "view/GameWindow.h"

int main() {
    GameWindow window{"my game"};

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            window.clear(sf::Color::Black);
            window.display();
        }
    }
}
