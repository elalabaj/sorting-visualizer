#include "BubbleSorter.h"

void BubbleSorter::sort(SortableArray& items) {
	comparisions = 0;
	swaps = 0;
	int n = items.size();
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			comparisions++;
			if (items[j] > items[j + 1]) {
				swaps++;
				items.swap(j, j + 1);
			}
		}
	}
}