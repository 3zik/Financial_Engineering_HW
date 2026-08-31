// Ethan
//
// stack.cpp
//
// Source file containing bodies of functions for templated Stack<T>

#ifndef Stack_cpp
#define Stack_cpp

#include "stack.hpp"

namespace Ethan::Containers {

template <class T>
Stack<T>::Stack() : m_data(), m_current(0) {}

template <class T>
Stack<T>::Stack(size_t capacity) : m_data(capacity), m_current(0) {}

template <class T>
Stack<T>::Stack(const Stack<T>& other) : m_data(other.m_data), m_current(other.m_current) {}

template <class T>
Stack<T>::~Stack() {}

template <class T>
Stack<T>& Stack<T>::operator=(const Stack<T>& other) {
	if (this != &other) {
		m_data = other.m_data;
		m_current = other.m_current;
	}
	return *this;
}

template <class T>
void Stack<T>::Push(const T& element) {
	// SetElement throws OutOfBoundsException when m_current >= the array's
	// size (stack full).
	try {
		m_data.SetElement(m_current, element);
	} catch (const ArrayException&) {
		throw StackFullException();
	}
	++m_current;
}

template <class T>
T Stack<T>::Pop() {
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
