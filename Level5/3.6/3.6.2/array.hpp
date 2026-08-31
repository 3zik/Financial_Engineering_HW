#pragma once

#include "point.hpp"
#include <string>
#include <sstream>

namespace Ethan::Containers {
	// ADDING EXCEPTION CALSSES!
	class ArrayException{
		public:
			virtual ~ArrayException() {} // virtual dtor
			virtual std::string GetMessage() const = 0; // pure virtual 

	};

	class OutOfBoundsException : public ArrayException {
		private:
			int m_index;
		public:
			OutOfBoundsException(int index) : m_index(index) {}
			std::string GetMessage() const override { // override pure virtual fn
				std::stringstream ss;
				ss << "Error: index " << m_index << " is out of bounds!" << "\n";
				return ss.str();
			}
	};



	class Array{
	private:
		size_t m_size; // private data member to store current size 
					// Choose size_t because it is basically a u_int, but scales with differetn arch
		Ethan::CAD::Point* m_data; // C-style dynamic array of Point objects
		
	public:
		// default ctor allocates 10 elements 
		Array();
		// ctor with size argument
		Array(size_t size);
		// copy ctor 
		Array(const Array& other);
		~Array(); // default dtor
		
		Array& operator=(const Array& other);

		size_t Size() const;

		void SetElement(size_t idx, const Ethan::CAD::Point& point);

		Ethan::CAD::Point& GetElement(size_t idx, const Ethan::CAD::Point& point);
		Ethan::CAD::Point& operator[](size_t idx);
		Ethan::CAD::Point& operator[](size_t index) const; // WE NEED TO have a const operator[] to complete this array class 
		// the const [] overload allows us to safely read the array using [], while the non const version allows us to edit 
		// This is useful in cases when we have a const Array we want to read only
		
	};

}
