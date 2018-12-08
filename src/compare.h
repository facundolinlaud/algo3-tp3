#ifndef COMPARE_H
#define COMPARE_H

#include <utility>
#include "auxiliares.h"

struct DistanceToPointComparator{
	DistanceToPointComparator(const Point& _p) : p(_p) {}

	bool operator()(const Point& lhs, const Point& rhs) const{
		// uso > y no < para que los mas cercanos a p queden al final del vector y poder hacerles pop()
		return p.DistanceTo(lhs) > p.DistanceTo(rhs);
	}

	Point p;
};

struct AngleComparator{
	AngleComparator(float offset) : offset(offset) {}

	AngleComparator(){}

	bool operator()(const Point& lhs, const Point& rhs) const{
		return aux::mod(lhs.angle - offset, 2) < aux::mod(rhs.angle - offset, 2);
	}

	float offset = 0.0;
};
#endif