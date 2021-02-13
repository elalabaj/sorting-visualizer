#include "Bar.h"

bool Bar::operator>(Bar& other) {
	return getSize().y > other.getSize().y;
}

bool Bar::operator<(Bar& other) {
	return getSize().y < other.getSize().y;
}
