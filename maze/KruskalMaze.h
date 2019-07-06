#pragma once
#include <iostream>
#include <random>
#include "util.h"
#include "maze.h"

// ------------------------------- Maze UF -------------------------------
class MazeUF: public UF {
private:
	std::vector<CellType> data;
	uint32 width, height, size;

public:
	MazeUF(uint32 width, uint32 height): width(width), height(height), size(width *height), UF(size) {
		data = std::vector<CellType>(size);
		for(size_t i = 0; i < size; i++) data[i] = CELLTYPE_WALL;
		for(size_t i = 0; i < width / 2;  i++) {
			for(size_t j = 0; j < height / 2 ; j++) {
				data[width * (2 * j + 1)+ (2 * i + 1)] = CELLTYPE_ROAD;
			}
		}
	}

	std::vector<CellType> makeCellTypes() {
		return data;
	}
};
// ------------------------------------------------------------------------

// ------------------------------- Kruskal Set ----------------------------
class KruskalMaze {
private:
	std::mt19937 randomEngine;
	uint32 width, height, size;

	std::vector<CellType> create();

public:
	KruskalMaze(uint32 width, uint32 height);
	~KruskalMaze();

	Maze operator()() {
		return Maze(width, height, create());
	}
};
// ------------------------------------------------------------------------
