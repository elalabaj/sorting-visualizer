#pragma once

#include <SFML/Graphics/Rect.hpp>
#include "SortableArray.h"
#include "Shuffler.h"

class Visualizer {
	int count;
	sf::FloatRect panel;
	SortableArray items;
	Shuffler shuffler;

public:
	Visualizer(int count, sf::FloatRect panel, sf::RenderWindow& window);

	void displayItems();
	void shuffle();
};

