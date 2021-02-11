#include "Bar.h"

void Bar::swap(Bar& other) {
	sf::Vector2f thisSize = getSize();
	sf::Vector2f otherSize = other.getSize();
	setSize(otherSize);
	setOrigin(0, otherSize.y);
	other.setSize(thisSize);
	other.setOrigin(0, thisSize.y);
}
