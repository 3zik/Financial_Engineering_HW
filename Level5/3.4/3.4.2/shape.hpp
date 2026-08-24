// Shape.hpp
// Shape base class
// EZF

#pragma once

#include <string>

namespace Ethan::CAD {

	class Shape{
	private:
		int m_id;
	public:
		Shape(); // default ctor -- should also assign a random id using rand()
		Shape(const Shape& s); // copy ctor - copies id from other shape
		Shape& operator=(const Shape& s); // assignment operator, copies id
		~Shape(); // default dtor

		std::string ToString() const; // returns ID: <id>
	
		int ID() const; // id getter
	};
}
