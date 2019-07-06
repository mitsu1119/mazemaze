#pragma once
#include <iostream>
#include <vector>
#include "util.h"
#include "graph.h"

enum CellType: uint32 {
	CELLTYPE_ROAD, CELLTYPE_WALL
};

class Cell {
private:
	CellType type;
	int32 x, y;

public:
	Cell(int32 x, int32 y, CellType type): x(x), y(y), type(type) {
	}

	void print() const {
		if(type == CELLTYPE_ROAD) std::cout << "@";
		if(type == CELLTYPE_WALL) std::cout << "¡";
	}
};

class Maze {
private:
	uint32 width, height;
	std::vector<Cell> data;

	inline const Cell *at(uint32 x, uint32 y) const {
		return &data[width * y + x];
	}

public:
	Maze(uint32 width, uint32 height);
	Maze(uint32 width, uint32 height, std::vector<CellType> cellTypes);

	void print() const;
};