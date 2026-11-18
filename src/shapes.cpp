#include <iostream>
#include "shapes.h"

using namespace std;

void shape::draw(sf::RenderWindow& window) {
    cout << "Draw Shapes\n";
}

void square::draw(sf::RenderWindow& window) {
    sf::RectangleShape square({100, 100});
    square.setPosition({100, 100});
    window.draw(square);
}

void circle::draw(sf::RenderWindow& window) {
    sf::CircleShape circle(50);
    circle.setPosition({250, 100});
    window.draw(circle);
}

void rectangle::draw(sf::RenderWindow& window) {
    sf::RectangleShape rectangle({150, 80});
    rectangle.setPosition({400, 100});
    window.draw(rectangle);
}

void triangle::draw(sf::RenderWindow& window) {
    sf::ConvexShape triangle;

    triangle.setPointCount(3);
    triangle.setPoint(0, {50, 0});
    triangle.setPoint(1, {100, 100});
    triangle.setPoint(2, {0, 100});

    triangle.setPosition({600, 100});
    window.draw(triangle);
}