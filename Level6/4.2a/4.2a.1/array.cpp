// EThan 8/28/2026
//
// array.cpp 
// TEMPLATE ARRAY CLASS 

// Source file containing bodies of functions for the templated Array<T>

// need preprocessor guards here!
//
#ifndef Array_cpp
#define Array_cpp
#include <iostream>
#include "array.hpp"

namespace Ethan::Containers{

template <class T>
// default ctor allocates 10 elements 
Array<T>::Array() : m_size(10) {
	m_data = new T[10];
}

template <class T>
// ctor with size argument
// Take in size_t, helpful for safety here + matches the member var
Array<T>::Array(size_t size) : m_size(size) {
	m_data = new T[m_size];
}

// copy ctor 
template <class T>
Array<T>::Array(const Array<T>& other) {
	m_size = other.m_size;
	m_data = new T[m_size];				// allocates new arr on the heap with otherSize 
	for (int i = 0; i < m_size; ++i){	// iterates through each val on the other array
		m_data[i] = other.m_data[i]; // uses GetElement(). 
	}
}

template <class T>
Array<T>::~Array() {
	delete[] m_data;
	m_data = nullptr; // reset m_data for no dangling ptr 
}

template <class T>
Array<T>& Array<T>::operator=(const Array<T>& other){
	if (this != &other){					// if equal, just return *this
		
		delete[] m_data;
		m_size = other.m_size;
		
		m_data = new T[m_size];

		for (int i = 0; i < m_size; ++i){
			m_data[i] = other.m_data[i];
		}

	}
	return *this;		// must return ref to Array, because a = b = c; case 
}

template <class T>
// getters/setters:
size_t Array<T>::Size() const{
	return m_size;
}

template <class T>
void Array<T>::SetElement(size_t idx, const T& element) {
	if (idx >= m_size){ // opposite condition (failure)
		throw OutOfBoundsException(static_cast<int>(idx)); // -1 becomes OutOfBoundsException
	}
//	if (idx < m_size){			// will only work with a valid index 
	m_data[idx] = element; // goes if no throw
	
}
template <class T>
T& Array<T>::GetElement(size_t idx, const T& point){
	if (idx >=m_size){
		throw OutOfBoundsException(static_cast<int>(idx)); // -1 becomes OutOfBoundsException
	
	}
	//if (idx < m_size){
	return m_data[idx]; // default return otherwise
	//}
	//return m_data[0];
}

template <class T>
// [] operator 
T& Array<T>::operator[](size_t idx){
	if (idx >= m_size){
		throw OutOfBoundsException(static_cast<int>(idx)); // -1 becomes OutOfBoundsException
	

	}
	//if (idx < m_size){
	return m_data[idx]; // default behavoiur if no throw
	//}

	return m_data[0];
}

template <class T>
T& Array<T>::operator[](size_t idx) const {
	if (idx >= m_size){
	
		throw OutOfBoundsException(static_cast<int>(idx)); // -1 becomes OutOfBoundsException

	}
	//if(idx < m_size){
	return m_data[idx];
	//}
}


} // ns Ethan::Containers

#endif // Array_cpp
