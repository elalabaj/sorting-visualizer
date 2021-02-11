#pragma once

#include <SFML/Graphics/RectangleShape.hpp>

class Bar : public sf::RectangleShape {
public:
	void swap(Bar& other);
};

