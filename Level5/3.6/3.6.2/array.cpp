// EThan 6/30/2026
//
// array.cpp 
//
// Source file for Array Object
// Put into NS Ethan::CAD

#include <iostream>
#include "array.hpp"

namespace Ethan::Containers{


// default ctor allocates 10 elements 
Array::Array() : m_size(10) {
	m_data = new Ethan::CAD::Point[10];
}

// ctor with size argument
// Take in size_t, helpful for safety here + matches the member var
Array::Array(size_t size) : m_size(size) {
	m_data = new Ethan::CAD::Point[m_size];
}

// copy ctor 
Array::Array(const Array& other) {
	m_size = other.m_size;
	m_data = new Ethan::CAD::Point[m_size];				// allocates new arr on the heap with otherSize 
	for (int i = 0; i < m_size; ++i){	// iterates through each val on the other array
		m_data[i] = other.m_data[i]; // uses GetElement(). 
	}
}

Array::~Array() {
	delete[] m_data;
	m_data = nullptr; // reset m_data for no dangling ptr 
}

Array& Array::operator=(const Array& other){
	if (this != &other){					// if equal, just return *this
		
		delete[] m_data;
		m_size = other.m_size;
		
		m_data = new Ethan::CAD::Point[m_size];

		for (int i = 0; i < m_size; ++i){
			m_data[i] = other.m_data[i];
		}

	}
	return *this;		// must return ref to Array, because a = b = c; case 
}
// getters/setters:
size_t Array::Size() const{
	return m_size;
}

void Array::SetElement(size_t idx, const Ethan::CAD::Point& point) {
	if (idx >= m_size){ // opposite condition (failure)
		throw OutOfBoundsException(static_cast<int>(idx)); // -1 becomes OutOfBoundsException
	}
//	if (idx < m_size){			// will only work with a valid index 
	m_data[idx] = point; // goes if no throw
	
}

Ethan::CAD::Point& Array::GetElement(size_t idx, const Ethan::CAD::Point& point){
	if (idx >=m_size){
		throw OutOfBoundsException(static_cast<int>(idx)); // -1 becomes OutOfBoundsException
	
	}
	//if (idx < m_size){
	return m_data[idx]; // default return otherwise
	//}
	//return m_data[0];
}

// [] operator 
Ethan::CAD::Point& Array::operator[](size_t idx){
	if (idx >= m_size){
		throw OutOfBoundsException(static_cast<int>(idx)); // -1 becomes OutOfBoundsException
	

	}
	//if (idx < m_size){
	return m_data[idx]; // default behavoiur if no throw
	//}

	return m_data[0];
}

Ethan::CAD::Point& Array::operator[](size_t idx) const {
	if (idx >= m_size){
	
		throw OutOfBoundsException(static_cast<int>(idx)); // -1 becomes OutOfBoundsException

	}
	//if(idx < m_size){
	return m_data[idx];
	//}
}


}
