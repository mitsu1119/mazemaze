#pragma once
#include <iostream>
#include <vector>
#include "util.h"

class Maze {
private:
	uint32 width, height;
	std::vector<int32> data;

	inline int32 at(uint32 x, uint32 y) {
		return data[width * y + x];
	}

public:
	Maze(uint32 width, uint32 height);

	void print();
};