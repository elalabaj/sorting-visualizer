#pragma once

#include "..\SortableArray.h"

class Shuffler {
	SortableArray& items;

public:
	Shuffler(SortableArray& items);

	void shuffle();
};

