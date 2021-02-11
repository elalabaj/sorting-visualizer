#include "SortableArray.h"

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
