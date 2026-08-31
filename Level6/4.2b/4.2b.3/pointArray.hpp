// Ethan
//
// pointArray.hpp
//
// Header file for PointArray
//
#pragma once
#include "array.hpp"
#include "point.hpp"

namespace Ethan::Containers {

	class PointArray : public Array<Ethan::CAD::Point> {
	public:

		PointArray();
		PointArray(size_t size);
		PointArray(const PointArray& other);
		~PointArray();

		PointArray& operator=(const PointArray& other);

		// total path length along consecutive points in the array
		// (sum of the distances between point[i] and point[i+1])
		double Length() const;
	};

} // namespace Ethan::Containers
