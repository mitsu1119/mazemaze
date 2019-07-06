#include <iostream>
#include "KruskalMaze.h"
#include "util.h"

constexpr uint32 MAZE_WIDTH = 23;
constexpr uint32 MAZE_HEIGHT = 23;

int main() {
	KruskalMaze maze(MAZE_WIDTH, MAZE_HEIGHT);

	maze().print();

	return 0;
}