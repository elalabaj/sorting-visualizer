#pragma once

#include <SFML/Graphics/RectangleShape.hpp>

class Bar : public sf::RectangleShape {
public:
	void swapWith(Bar& other);
	bool operator>(Bar& other);
	bool operator<(Bar& other);
};

