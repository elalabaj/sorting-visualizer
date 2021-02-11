#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(960, 540), "Sorting Visualizer");

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {
			case sf::Event::Closed:
				window.close();
				break;
			}
		}
	}

	return 0;
}