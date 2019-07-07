#pragma once
#include <vector>
#include <iostream>

// ------------------------------- typedefs ------------------------------
typedef int_fast32_t int32;
typedef uint_fast32_t  uint32;

enum DirectionFour {
	D4UP, D4RIGHT, D4DOWN, D4LEFT
};

int32 D4DX(DirectionFour dir);
int32 D4DY(DirectionFour dir);
DirectionFour oppositeDir(DirectionFour dir);
// ------------------------------------------------------------------------
