#include <iostream>
#include "KruskalMaze.h"
#include "util.h"

constexpr uint32 MAZE_WIDTH = 55;
constexpr uint32 MAZE_HEIGHT = 55;

int main() {
	KruskalMaze maze(MAZE_WIDTH, MAZE_HEIGHT);

	maze().print();

	return 0;
}