#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <SFML/Graphics.hpp>

class shape
{
public:
    virtual double pole() const = 0;
    virtual std::string opis() const = 0;
    virtual void draw(sf::RenderWindow& window)const = 0;
};

class square : public shape
{
private:
    double dlugosc_bloku;
    sf::RectangleShape rectangle;
    sf::Vector2f position;
public:
    square(double dlugosc, const sf::Vector2f& pozycja) : dlugosc_bloku(dlugosc), position(pozycja) {
        rectangle.setSize(sf::Vector2f(dlugosc_bloku, dlugosc_bloku));
        rectangle.setFillColor(sf::Color::Red);
        rectangle.setPosition(position);
    }
    // nie wiem czemu ale jak chce to przenieœæ do .cpp to wyœwietla mi b³¹d :<
    
    double pole() const override;
    std::string opis() const override;
    void draw(sf::RenderWindow& window) const override;
};

class Circle : public shape {
private:
    double promien;
    static constexpr double PI = 3.14; // wartoœæ liczby pi
    sf::CircleShape circle;
    sf::Vector2f position;
public:
    Circle(double r, const sf::Vector2f& pozycja) : promien(r), position(pozycja) {
        circle.setRadius(promien);
        circle.setFillColor(sf::Color::Blue);
        circle.setPosition(position);
    }

    double pole() const override;
    std::string opis() const override;
    void draw(sf::RenderWindow& window) const override;
};