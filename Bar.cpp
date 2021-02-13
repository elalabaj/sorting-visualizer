#include "Bar.h"

void Bar::swapWith(Bar& other) {
	sf::Vector2f thisSize = getSize();
	sf::Vector2f otherSize = other.getSize();
	setSize(otherSize);
	setOrigin(0, otherSize.y);
	other.setSize(thisSize);
	other.setOrigin(0, thisSize.y);
}

bool Bar::operator>(Bar& other) {
	return getSize().y > other.getSize().y;
}

bool Bar::operator<(Bar& other) {
	return getSize().y < other.getSize().y;
}
