#include "QuickSorter.h"

void QuickSorter::sort(SortableArray& items) {
	this->items = &items;
	sort(0, items.size() - 1);
}

int QuickSorter::partition(int low, int high) {
	Bar& pivot = (*items)[high];
	int i = (low - 1);

	for (int j = low; j < high; j++) {
		if ((*items)[j] < pivot) {
			i++;
			items->swap(i, j);
		}
	}
	items->swap(i + 1, high);
	return i + 1;
}

//https://www.geeksforgeeks.org/quick-sort/
void QuickSorter::sort(int low, int high) {
	if (low < high) {
		int pi = partition(low, high);
		sort(low, pi - 1);
		sort(pi + 1, high);
	}
}
