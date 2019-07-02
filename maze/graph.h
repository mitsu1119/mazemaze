#pragma once
#include "util.h"

// ------------------------------ Edge ----------------------------
class Edge {
private:
	int_fast32_t a, b;		// node
	double cost;

public:
	Edge(int_fast32_t a, int_fast32_t b, double cost);

	// define order
	bool operator <(const Edge &e) const {
		return cost < e.cost;
	}
};
// ----------------------------------------------------------------

// -------------------------------- Graph -------------------------
class Graph {
private:
	uint_fast32_t n;		// number of node
	std::vector<Edge> es;		// edges
};
// ----------------------------------------------------------------
