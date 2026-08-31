// Ethan
//
// pointArray.cpp
//
// Source file for PointArray
//

#include "pointArray.hpp"
#include <cmath>

namespace Ethan::Containers {

PointArray::PointArray() : Array<Ethan::CAD::Point>() {}

PointArray::PointArray(size_t size) : Array<Ethan::CAD::Point>(size) {}

PointArray::PointArray(const PointArray& other) : Array<Ethan::CAD::Point>(other) {}

PointArray::~PointArray() {}

PointArray& PointArray::operator=(const PointArray& other) {
	Array<Ethan::CAD::Point>::operator=(other);
	return *this;
}

double PointArray::Length() const {
	double total = 0.0;
	for (size_t i = 0; i + 1 < Size(); ++i) {
		double dx = (*this)[i + 1].X() - (*this)[i].X();
		double dy = (*this)[i + 1].Y() - (*this)[i].Y();
		total += std::sqrt(dx * dx + dy * dy);
	}
	return total;
}

} // namespace Ethan::Containers
