#include "Visualizer.h"

#include <thread>

Visualizer::Visualizer(int count, sf::FloatRect panel, sf::RenderWindow& window, sf::Text& text)
	: count(count), panel(panel), items(count, window), shuffler(items), window(window), text(text), sorter(nullptr) {

	float width = panel.width / count;
	float deltaHeight = panel.height / count;
	for (int i = 0; i < count; i++) {
		float height = (i + 1) * deltaHeight;
		items[i].setSize(sf::Vector2f(width, height));
		items[i].setOrigin(0, height);
		items[i].setPosition(panel.left + i * width, panel.top + panel.height);
	}
}

void Visualizer::draw() {
	if (sorter != nullptr) {
		text.setString(sorter->getName() + "\n"
			+ std::to_string(sorter->getComparisions()) + " comparisions\n"
			+ std::to_string(sorter->getSwaps()) + " swaps");
	}
	window.draw(text);
	for (int i = 0; i < items.size(); i++) {
		window.draw(items[i]);
	}
}

void Visualizer::shuffle() {
	std::thread(&Shuffler::shuffle, &shuffler).detach();
}

void Visualizer::sort(Sorter& sorter) {
	this->sorter = &sorter;
	auto f = [this, &sorter]() -> void {
		sorter.sort(items);
	};
	std::thread(f).detach();
}
