#pragma once

#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "SortableArray.h"
#include "Algorithms/Shuffler.h"
#include "Algorithms/Sorter.h"

class Visualizer {
	int count;
	sf::FloatRect panel;
	SortableArray items;
	Shuffler shuffler;
	sf::RenderWindow& window;
	sf::Text& text;
	Sorter* sorter;

public:
	Visualizer(int count, sf::FloatRect panel, sf::RenderWindow& window, sf::Text& text);

	void draw();
	void shuffle();
	void sort(Sorter& sorter);
};

