#pragma once

#include <SFML/Graphics.hpp>

class Bar : public sf::RectangleShape {
public:
	void swap(Bar& other);
};

