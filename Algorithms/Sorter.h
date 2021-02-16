#pragma once

#include "..\SortableArray.h"

class Sorter {
protected:
	int comparisions;
	int swaps;
public:
	virtual void sort(SortableArray& items) = 0;
	virtual std::string getName() = 0;
	int getComparisions() { return comparisions; }
	int getSwaps() { return swaps; }
};

