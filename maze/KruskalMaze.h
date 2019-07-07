#pragma once
#include <iostream>
#include <iomanip>
#include <random>
#include <algorithm>
#include "util.h"
#include "maze.h"

// ------------------------------- Maze UF -------------------------------
class MazeUF {
private:
	std::vector<uint32> data;
	std::vector<uint32> rank;
	uint32 width, height, size;

	int32 root(int32 x);
	bool same(int32 x, int32 y);

public:
	MazeUF(uint32 width, uint32 height): width(width), height(height), size(width *height) {
		data = std::vector<uint32>(size);
		rank = std::vector<uint32>(size, 0);
		for(size_t i = 0; i < size; i++) data[i] = i;
	}

	// find a different tag cell adjacent to a tag that contains a cell with coordinates (x, y)
	int32 findDifNeighbor(uint32 x, uint32 y, uint32 &outX, uint32 &outY, DirectionFour &outDir);

	inline uint32 at(uint32 x, uint32 y) const{
		return y * width + x;
	}

	bool isAllSame();
	void unite(int32 x, int32 y);

	void print() {
		for(size_t i = 0; i < height; i++) {
			for(size_t j = 0; j < width; j++) {
				std::cout << std::setw(3) << data[i * width + j] << " ";
			}
			std::cout << std::endl;
		}
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
