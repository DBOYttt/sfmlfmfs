#include "shape.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "Figury");

	shape* shape1 = new square(100, sf::Vector2f(100, 100));
	shape* shape2 = new Circle(50, sf::Vector2f(400, 300));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		shape1->draw(window);
		shape2->draw(window);

		window.display();
	}

	std::cout << shape1->opis() << "\n";
	std::cout << "pole: " << shape1->pole() << "\n";

	std::cout << shape2->opis() << "\n";
	std::cout << "pole: " << shape2->pole() << "\n";

	delete shape1;
	delete shape2;

	return 0;
}