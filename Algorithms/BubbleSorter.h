#pragma once

#include "Sorter.h"

class BubbleSorter : public Sorter {
public:
	void sort(SortableArray& items);
	std::string getName() { return "bubble sort"; }
};

