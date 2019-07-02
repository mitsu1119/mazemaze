#pragma once
#include <vector>

// ------------------------------- typedefs ------------------------------
typedef int_fast32_t int32;
typedef uint_fast32_t  uint32;
// ------------------------------------------------------------------------

// ------------------------------- Union Find ----------------------------
class UF {
private:
	std::vector<int_fast32_t> data;
	std::vector<int_fast32_t> rank;

	int_fast32_t root(int_fast32_t x);
public:
	UF(uint_fast32_t size);

	bool same(int_fast32_t x, int_fast32_t y);
	void unit(int_fast32_t x, int_fast32_t y);
};
// ------------------------------------------------------------------------
