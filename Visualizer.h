#pragma once

#include <SFML/Graphics/Rect.hpp>
#include "SortableArray.h"
#include "Shuffler.h"
#include "BubbleSorter.h"

class Visualizer {
	int count;
	sf::FloatRect panel;
	SortableArray items;
	Shuffler shuffler;
	BubbleSorter bubbleSorter;

public:
	Visualizer(int count, sf::FloatRect panel, sf::RenderWindow& window);

	void displayItems();
	void shuffle();
	void bubbleSort();
};

