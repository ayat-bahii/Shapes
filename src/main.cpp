#include<iostream>
#include "shapes.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}),"Shapes");

    shape *ptr[4]={new square(),new circle(), new rectangle(),new triangle()};

    while (window.isOpen()) {

        sf::Event event;
        
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // Clear
        window.clear(); 
        
        for (int i = 0; i < 4; i++) {
            if (ptr[i] != NULL) {
                ptr[i]->draw(window);
            }
        }

        window.display();
    }

    for (int i = 0; i < 4; i++) {
        delete ptr[i];
    }
    return 0;
}