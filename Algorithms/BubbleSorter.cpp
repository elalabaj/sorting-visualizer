#include "BubbleSorter.h"

void BubbleSorter::sort(SortableArray& items) {
	int n = items.size();
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (items[j] > items[j + 1]) {
				items.swap(j, j + 1);
			}
		}
	}
}