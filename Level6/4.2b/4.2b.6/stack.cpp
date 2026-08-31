// Ethan
//
// stack.cpp
//
// Source file containing bodies of functions for templated Stack<T>

#ifndef Stack_cpp
#define Stack_cpp

#include "stack.hpp"

namespace Ethan::Containers {

template <class T, int size>
Stack<T, size>::Stack() : m_data(size), m_current(0) {}


template <class T, int size>
Stack<T, size>::Stack(const Stack<T, size>& other) : m_data(other.m_data), m_current(other.m_current) {}

template <class T, int size>
Stack<T, size>::~Stack() {}

template <class T, int size>
Stack<T, size>& Stack<T, size>::operator=(const Stack<T, size>& other) {
	if (this != &other) {
		m_data = other.m_data;
		m_current = other.m_current;
	}
	return *this;
}

template <class T, int size>
void Stack<T, size>::Push(const T& element) {
	// SetElement throws OutOfBoundsException when m_current >= the array's
	// size (stack full).
	try {
		m_data.SetElement(m_current, element);
	} catch (const ArrayException&) {
		throw StackFullException();
	}
	++m_current;
}

template <class T, int size>
T Stack<T, size>::Pop() {
	// m_current - 1 on an empty stack underflows size_t to
	// a huge value, which operator[] rejects as out of bounds
	// Also reset m_current to 0
	try {
		T top = m_data[m_current - 1];
		--m_current;
		return top;
	} catch (const ArrayException&) {
		m_current = 0;
		throw StackEmptyException();
	}
}

} // namespace Ethan::Containers

#endif // Stack_cpp
