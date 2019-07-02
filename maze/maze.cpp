#include "maze.h"

// ----------------------- Maze -----------------------------------
Maze::Maze(uint32 width, uint32 height):width(width), height(height) {
	data = std::vector<int32>(width * height, 0);
}

void Maze::print() {
	for(size_t i = 0; i < this->height; i++) {
		for(size_t j = 0; j < this->width; j++) {
			if(this->at(j, i) == 0) std::cout << ".";
			else std::cout << " ";
		}
		std::cout << std::endl;
	}
}
// ----------------------------------------------------------------