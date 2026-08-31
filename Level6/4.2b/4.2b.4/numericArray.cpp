// Ethan Furm
//
// numericArray.cpp 
//
// Source file for NumericArray<T>

#ifndef NumericArray_cpp
#define NumericArray_cpp

#include "numericArray.hpp"

namespace Ethan::Containers {

template <class T>
NumericArray<T>::NumericArray() : Array<T>() {}

template <class T>
NumericArray<T>::NumericArray(size_t size) : Array<T>(size) {}

template <class T>
NumericArray<T>::NumericArray(const NumericArray<T>& other) : Array<T>(other) {};

template <class T>
NumericArray<T>::~NumericArray() {}
 
template <class T>
NumericArray<T>& NumericArray<T>::operator=(const NumericArray<T>& other) {
	Array<T>::operator=(other);
	return *this;
}
 
template <class T>
NumericArray<T> NumericArray<T>::operator*(const T& factor) const {
	NumericArray<T> result(this->Size());
	for (size_t i = 0; i < this->Size(); ++i) {
		result[i] = (*this)[i] * factor;
	}
	return result;
}
 
template <class T>
NumericArray<T> NumericArray<T>::operator+(const NumericArray<T>& other) const {
	if (this->Size() != other.Size()) {
		throw SizeMismatchException(this->Size(), other.Size());
	}
	NumericArray<T> result(this->Size());
	for (size_t i = 0; i < this->Size(); ++i) {
		result[i] = (*this)[i] + other[i];
	}
	return result;
}
 
template <class T>
T NumericArray<T>::DotProduct(const NumericArray<T>& other) const {
	if (this->Size() != other.Size()) {
		throw SizeMismatchException(this->Size(), other.Size());
	}
	T sum = T();
	for (size_t i = 0; i < this->Size(); ++i) {
		sum = sum + (*this)[i] * other[i];
	}
	return sum;
}

} // namespace Ethan::Containers
 
#endif
