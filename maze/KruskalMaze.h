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
	// for Union Find
	std::vector<uint32> data;
	std::vector<uint32> rank;

	// for Maze
	uint32 width, height, size;

	// for Union Find
	int32 root(int32 x);
	bool same(int32 x, int32 y);
	void unite(int32 x, int32 y);

	// find a different tag cell adjacent to a tag that contains a cell with coordinates (x, y)
	int32 findDifNeighbor(uint32 x, uint32 y, uint32 &outX, uint32 &outY, DirectionFour &outDir);

public:
	MazeUF(uint32 width, uint32 height);

	// findDifNeighbor() and unite
	void uniteDifNeighbor(uint32 x, uint32 y, uint32 &outX, uint32 &outY, DirectionFour &outDir);

	bool isAllSame();
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
