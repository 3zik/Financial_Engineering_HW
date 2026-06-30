#pragma once

#include "point.hpp"

class Array{
private:
	size_t m_size; // private data member to store current size 
				 // Choose size_t because it is basically a u_int, but scales with differetn arch
	Point* m_data; // C-style dynamic array of Point objects
	
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

	void SetElement(size_t idx, const Point& point);

	Point& GetElement(size_t idx, const Point& point);
	Point& operator[](size_t idx);

	
};
