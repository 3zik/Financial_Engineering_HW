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
		
		// UPDATED: added virutal keyword
		virtual ~Shape(); // default dtor

		// UPDATED: with virtual keyword
		virtual std::string ToString() const; // returns ID: <id>
	
		int ID() const; // id getter
		

		// virtual void Draw() const; // ordinary virtual, no fn in .cpp
		virtual void Draw() const = 0; // pure virtual, no body


		// UPDATED: print () fn added
		void Print() const; // NOTE: not virtual, print() does not vary between derived classes
	};
}
