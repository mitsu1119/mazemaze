#include "KruskalMaze.h"

// --------------------------- KruskalMaze ----------------------------
KruskalMaze::KruskalMaze(uint32 width, uint32 height): width(width), height(height), size(width *height) {
	std::random_device seed;
	randomEngine = std::mt19937(seed());
}

KruskalMaze::~KruskalMaze() {
}

std::vector<CellType> KruskalMaze::create() {
	MazeUF sets(width, height);
	uint32 randCellX, randCellY;

	/*
	while(!sets.isAllSame()) {
		randCellX = randomEngine() % width;
		randCellY = randomEngine() % height;
	}
	*/

	return sets.makeCellTypes();
}
// -------------------------------------------------------------------
