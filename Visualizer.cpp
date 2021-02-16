#include "Visualizer.h"

#include <SFML/Graphics/RenderWindow.hpp>
#include <thread>

Visualizer::Visualizer(int count, sf::FloatRect panel, sf::RenderWindow& window) 
	: count(count), panel(panel), items(count, window), shuffler(items) {

	float width = panel.width / count;
	float deltaHeight = panel.height / count;
	for (int i = 0; i < count; i++) {
		float height = (i + 1) * deltaHeight;
		items[i].setSize(sf::Vector2f(width, height));
		items[i].setOrigin(0, height);
		items[i].setPosition(panel.left + i * width, panel.top + panel.height);
	}
}

void Visualizer::displayItems() {
	items.displayItems();
}

void Visualizer::shuffle() {
	std::thread(&Shuffler::shuffle, &shuffler).detach();
}

void Visualizer::sort(Sorter& sorter) {
	auto f = [this, &sorter]() -> void {
		sorter.sort(items);
	};
	std::thread(f).detach();
}
