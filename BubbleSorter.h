#pragma once

#include "SortableArray.h"

class BubbleSorter {
	SortableArray& items;

public:
	BubbleSorter(SortableArray& items) : items(items) {};

	void sort();
};

