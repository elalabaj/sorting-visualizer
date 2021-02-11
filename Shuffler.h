#pragma once

#include <random>
#include <ctime>
#include "Visualizer.h"

class Shuffler {
	Visualizer& visualizer;

public:
	Shuffler(Visualizer& visualizer);

	void shuffle();
};

