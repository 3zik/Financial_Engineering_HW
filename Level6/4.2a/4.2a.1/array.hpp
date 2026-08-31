// header file for templated array class
// we will use array.hpp (this file) and array.cpp (so no inlining)
// array.hpp

#pragma once

#include "point.hpp"
#include <string>
#include <sstream>

namespace Ethan::Containers {
	// execeptions don't depend on T, so no templating
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


	template <typename T>
	class Array{
	private:
		size_t m_size; // private data member to store current size 
					// Choose size_t because it is basically a u_int, but scales with differetn arch
		T* m_data; // C style array of objects of type T

	public:
		// default ctor allocates 10 elements 
		Array();
		// ctor with size argument
		Array(size_t size);
		// copy ctor 
		Array(const Array<T>& other); // update input param to be a templated Array object now
		~Array(); // default dtor
		
		Array<T>& operator=(const Array<T>& other);

		size_t Size() const;

		void SetElement(size_t idx, const T& element); // now use const T& element instead of a const  point&

		T& GetElement(size_t idx, const T& element); // const T& element instead of const  point& again
		T& operator[](size_t idx);
		T& operator[](size_t index) const; // WE NEED TO have a const operator[] to complete this array class 
		// the const [] overload allows us to safely read the array using [], while the non const version allows us to edit 
		// This is useful in cases when we have a const Array we want to read only
		
	};

}// namespace Ethan::Containers

#ifndef Array_cpp
#include "array.cpp"
#endif
