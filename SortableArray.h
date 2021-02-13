#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include <vector>
#include "Bar.h"

class SortableArray {
	const sf::Color defaultColor = sf::Color::White;
	const sf::Color highlightColor = sf::Color::Red;
	int count;
	std::vector<Bar> items;
	sf::RenderWindow& window;

public:
	SortableArray(int count, sf::RenderWindow& window) : count(count), items(count), window(window) {};

	int size() { return items.size(); }

	Bar& operator[](unsigned int i);
	void displayItems();
	void swap(int i, int j);
};

