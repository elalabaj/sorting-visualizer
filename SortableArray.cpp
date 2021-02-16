#include "SortableArray.h"
#include <thread>

Bar& SortableArray::operator[](unsigned int i) {
	return items[i];
}

void SortableArray::displayItems() {
	window.clear();
	for (auto& item : items) {
		window.draw(item);
	}
	window.display();
}

void SortableArray::swap(int i, int j) {
	sf::Vector2f size1 = items[i].getSize();
	sf::Vector2f size2 = items[j].getSize();
	items[i].setSize(size2);
	items[j].setSize(size1);
	items[i].setOrigin(0, size2.y);
	items[j].setOrigin(0, size1.y);
	items[i].setFillColor(sf::Color::Red);
	items[j].setFillColor(sf::Color::Red);
	std::this_thread::sleep_for(std::chrono::microseconds(1));
	items[i].setFillColor(sf::Color::White);
	items[j].setFillColor(sf::Color::White);
}
