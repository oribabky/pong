//
// Created by Tobias Axelsson on 2019-07-13.
//

#include <string>
#include "sfml.h"
#include "../../../impl/util/OsUtil/OsUtil.h"
#include "../../../impl/util/StringUtil/StringUtil.h"
#include "../../../impl/util/OsUtil/OsUtil.h"
#include "../../../impl/util/StringUtil/StringUtil.h"
#include <SFML/Graphics.hpp>

using namespace std;
using namespace util::strings;
using namespace util::os;

namespace testing::sfml {

    void sfmlHelloWorld() {
        sf::RenderWindow window(sf::VideoMode(640, 480, 32), "Hello SFML");
        sf::Font font;

        string path = "../assets/fonts/OpenSans-Bold.ttf";
        if (isWindowsSystem()) {
            path = replaceForwardSlashes(path);
        }
        font.loadFromFile("../assets/fonts/OpenSans-Bold.ttf");

        sf::Text text("Hello World", font, 11);
        text.setCharacterSize(32);
        text.setPosition(window.getSize().x / 2 - text.getGlobalBounds().width / 2,
                         window.getSize().y / 2 - text.getGlobalBounds().height / 2);

        while (window.isOpen()) {
            sf::Event event{};
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
                window.clear(sf::Color::Black);
                window.draw(text);
                window.display();
            }
        }
    }
}
