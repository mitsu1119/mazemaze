#pragma once
#include <vector>

// ------------------------------- typedefs ------------------------------
typedef int_fast32_t int32;
typedef uint_fast32_t  uint32;
// ------------------------------------------------------------------------

// ------------------------------- Union Find ----------------------------
class UF {
protected:
	std::vector<uint32> data;
	std::vector<uint32> rank;

	int32 root(int32 x);
public:
	UF(uint32 size);

	bool same(int32 x, int32 y);
	void unite(int32 x, int32 y);

	bool isAllSame() const;
};
// ------------------------------------------------------------------------