// Ethan Furman
//
// numericArray.hpp
//
// Header file for templated NumericArray<T>, which inherits from Array<T> via generic inheritence
//
#pragma once

#include "array.hpp"

namespace Ethan::Containers {
	// thrown by opreator+ AKA dot product when two operands dont match in size 
	
	class SizeMismatchException : public ArrayException{
		private:
			size_t m_size1;
			size_t m_size2;
		public: 
			SizeMismatchException(size_t size1, size_t size2) : m_size1(size1), m_size2(size2) {}
			std::string GetMessage() const override {
				std::stringstream ss;
				ss << "Error: array sizes do not match " << m_size1 << " vs " << m_size2 << ")" << "\n";
				return ss.str();
			}
	};

	template <class T>
	class NumericArray : public Array<T> {
		public:
			NumericArray();
			NumericArray(size_t size);
			NumericArray(const NumericArray<T>& other);
			~NumericArray();


			NumericArray<T> operator*(const T& factor) const; // scale by factor
			NumericArray<T> operator+(const NumericArray<T>& other) const; //elementwise add
			NumericArray<T>& operator=(const NumericArray<T>& other);
			T DotProduct(const NumericArray<T>& other) const;
	};

} // ns Ethan::Containers 

#ifndef NumericArray_cpp
#include "numericArray.cpp"
#endif
