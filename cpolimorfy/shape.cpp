#include "shape.h"

double square::pole() const
{
    return dlugosc_bloku * dlugosc_bloku;
}

std::string square::opis() const
{
    return "Kwadrat o boku " + std::to_string(dlugosc_bloku);
}

void square::draw(sf::RenderWindow& window) const
{
    window.draw(rectangle);
}

double Circle::pole() const
{
    return PI * promien * promien;
}

std::string Circle::opis() const
{
    return "Ko³o o promieniu " + std::to_string(promien);
}

void Circle::draw(sf::RenderWindow& window) const
{
    window.draw(circle);
}
