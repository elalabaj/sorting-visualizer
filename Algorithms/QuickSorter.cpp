#include "QuickSorter.h"

void QuickSorter::sort(SortableArray& items) {
	this->items = &items;
	comparisions = 0;
	swaps = 0;
	sort(0, items.size() - 1);
}

int QuickSorter::partition(int low, int high) {
	Bar& pivot = (*items)[high];
	int i = (low - 1);

	for (int j = low; j < high; j++) {
		comparisions++;
		if ((*items)[j] < pivot) {
			i++;
			swaps++;
			items->swap(i, j);
		}
	}
	swaps++;
	items->swap(i + 1, high);
	return i + 1;
}

void QuickSorter::sort(int low, int high) {
	if (low < high) {
		int pi = partition(low, high);
		sort(low, pi - 1);
		sort(pi + 1, high);
	}
}
