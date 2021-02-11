#include "Shuffler.h"

Shuffler::Shuffler(Visualizer& visualizer) : visualizer(visualizer) {
	srand(time(NULL));
}

void Shuffler::shuffle() {
	std::vector<Bar>& items = visualizer.getItems();
	for (int i = items.size() - 1; i >= 1; i--) {
		int j = rand() % i;
		items[i].swap(items[j]);
		visualizer.displayItems();
	}
}
