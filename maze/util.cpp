#include "util.h"

// --------------------------- Union Find ----------------------------
UF::UF(uint32 size) {
	data = std::vector<uint32>(size);
	rank = std::vector<uint32>(size, 0);
	for(size_t i = 0; i < size; i++) data[i] = i;
}

int32 UF::root(int32 x) {
	return data[x] == x ? x : data[x] = root(data[x]);
}

bool UF::same(int32 x, int32 y) {
	return root(x) == root(y);
}

void UF::unite(int32 x, int32 y) {
	x = root(x);
	y = root(y);
	if(x == y) return;

	if(rank[x] < rank[y]) data[x] = y;
	else {
		data[y] = x;
		if(rank[x] == rank[y]) rank[x]++;
	}
}

bool UF::isAllSame() const {
	for(size_t i = 1; i < data.size(); i++) {
		if(data[i] != data[0]) return false;
	}
	return true;
}
// -------------------------------------------------------------------