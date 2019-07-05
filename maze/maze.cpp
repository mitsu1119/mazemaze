#include "maze.h"

// ----------------------- Maze -----------------------------------
Maze::Maze(uint32 width, uint32 height):width(width), height(height) {
	for(size_t i = 0; i < height; i++) {
		for(size_t j = 0; j < width; j++) {
			data.emplace_back(j, i, CELLTYPE_WALL);
		}
	}
}

void Maze::print() const {
	for(size_t i = 0; i < this->height; i++) {
		for(size_t j = 0; j < this->width; j++) {
			at(j, i)->print();
		}
		std::cout << std::endl;
	}
}
// ----------------------------------------------------------------