#include <iostream>
#include "maze.h"
#include "util.h"

constexpr uint32 MAZE_WIDTH = 10;
constexpr uint32 MAZE_HEIGHT = 10;

int main() {
	Maze maze(MAZE_WIDTH, MAZE_HEIGHT);

	maze.print();

	return 0;
}