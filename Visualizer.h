#pragma once

#include <SFML/Graphics/Rect.hpp>
#include "SortableArray.h"
#include "Algorithms/Shuffler.h"
#include "Algorithms/Sorter.h"

class Visualizer {
	int count;
	sf::FloatRect panel;
	SortableArray items;
	Shuffler shuffler;

public:
	Visualizer(int count, sf::FloatRect panel, sf::RenderWindow& window);

	void displayItems();
	void shuffle();
	void sort(Sorter& sorter);
};

