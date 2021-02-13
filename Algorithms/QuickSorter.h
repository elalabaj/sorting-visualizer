#pragma once

#include "Sorter.h"

class QuickSorter : public Sorter {
	SortableArray* items;

public:
	void sort(SortableArray& items);

private:
	int partition(int low, int high);
	void sort(int low, int high);
};

