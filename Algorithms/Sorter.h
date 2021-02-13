#pragma once

#include "..\SortableArray.h"

class Sorter {
public:
	virtual void sort(SortableArray& items) = 0;
};

