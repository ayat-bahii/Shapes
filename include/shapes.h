#ifndef SHAPES_H
#define SHAPES_H
#include <SFML/Graphics.hpp>

class shape {
    public:
        virtual void draw(sf::RenderWindow& window);
        virtual ~shape() = default;
};

class square : public shape {
    public:
        void draw(sf::RenderWindow& window) override;
};

class circle : public shape {
    public:
        void draw(sf::RenderWindow& window) override;
};

class rectangle : public shape {
    public:
        void draw(sf::RenderWindow& window) override;
};

class triangle : public shape {
    public:
        void draw(sf::RenderWindow& window) override;
};


#endif