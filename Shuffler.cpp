#include "Shuffler.h"
#include <random>
#include <ctime>

Shuffler::Shuffler(SortableArray& items) : items(items) {
	srand(time(NULL));
}

void Shuffler::shuffle() {
	for (int i = items.size() - 1; i >= 1; i--) {
		int j = rand() % i;
		items[i].swap(items[j]);
		items.displayItems();
	}
}
