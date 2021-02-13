#pragma once

#include <SFML/Graphics/RectangleShape.hpp>

class Bar : public sf::RectangleShape {
public:
	bool operator>(Bar& other);
	bool operator<(Bar& other);
};

