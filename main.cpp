#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "Visualizer.h"
#include "Algorithms/BubbleSorter.h"
#include "Algorithms/QuickSorter.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(960, 540), "Sorting Visualizer");

	Visualizer visualizer(1000, sf::FloatRect(0, 0, 960, 540), window);
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
		  
		visualizer.displayItems();
	}

	return 0;
}