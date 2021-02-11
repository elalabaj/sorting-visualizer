#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Bar.h"

class Visualizer {
	int count;
	sf::FloatRect panel;
	std::vector<Bar> items;
	sf::RenderWindow& window;

public:
	Visualizer(int count, sf::FloatRect panel, sf::RenderWindow& window);

	std::vector<Bar>& getItems() { return items; }

	void displayItems();
};

