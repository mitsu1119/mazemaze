#include "util.h"

int32 D4DX(DirectionFour dir) {
	switch(dir) {
	case D4UP:
	case D4DOWN:
		return 0;
	case D4RIGHT:
		return 1;
	case D4LEFT:
		return -1;
	};
}

int32 D4DY(DirectionFour dir) {
	switch(dir) {
	case D4UP:
		return -1;
	case D4DOWN:
		return 1;
	case D4RIGHT:
	case D4LEFT:
		return 0;
	};
}

DirectionFour oppositeDir(DirectionFour dir) {
	switch(dir) {
	case D4UP:
		return D4DOWN;
	case D4DOWN:
		return D4UP;
	case D4RIGHT:
		return D4LEFT;
	case D4LEFT:
		return D4RIGHT;
	};
}
