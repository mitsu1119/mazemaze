#include "util.h"

// --------------------------- Union Find ----------------------------
UF::UF(uint_fast32_t size) {
	data = std::vector<int_fast32_t>(size);
	rank = std::vector<int_fast32_t>(size, 0);
	for(size_t i = 0; i < size; i++) data[i] = i;
}

int_fast32_t UF::root(int_fast32_t x) {
	return data[x] == x ? x : data[x] = root(data[x]);
}

bool UF::same(int_fast32_t x, int_fast32_t y) {
	return root(x) == root(y);
}

void UF::unit(int_fast32_t x, int_fast32_t y) {
	x = root(x);
	y = root(y);
	if(x == y) return;

	if(rank[x] < rank[y]) data[x] = y;
	else {
		data[y] = x;
		if(rank[x] == rank[y]) rank[x]++;
	}
}
// -------------------------------------------------------------------
