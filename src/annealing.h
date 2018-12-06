#ifndef ANNEALING_H_
#define ANNEALING_H_

#include "vector"
#include "point.h"
#include "truck.h"
#include "auxiliares.h"

namespace annealing {

	vector<Truck> solveCvrp(Point& warehouse, vector<Point> &points, int capacity);
}

#endif