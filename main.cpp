#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "Visualizer.h"
#include "Algorithms/BubbleSorter.h"
#include "Algorithms/QuickSorter.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(960, 540), "Sorting Visualizer");

	sf::Font font;
	font.loadFromFile("arial.ttf");
	sf::Text text("", font, 15);

	Visualizer visualizer(2000, sf::FloatRect(0, 60, 960, 480), window, text);
	BubbleSorter bubbleSorter;
	QuickSorter quickSorter;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::S) visualizer.shuffle();
				else if (event.key.code == sf::Keyboard::Num1) visualizer.sort(bubbleSorter);
				else if (event.key.code == sf::Keyboard::Num2) visualizer.sort(quickSorter);
			}
		}
		window.clear();
		visualizer.draw();
		window.display();
	}

	return 0;
}