#include <SFML/Graphics.hpp>
#include "Visualizer.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(960, 540), "Sorting Visualizer");

	Visualizer visualizer(1000, sf::FloatRect(0, 0, 960, 540), window);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {
			case sf::Event::Closed:
				window.close();
				break;
			}
		}

		window.clear();
		visualizer.drawItems();
		window.display();
	}

	return 0;
}