// Ethan
//
// stack.hpp
//
// Header file for templated Stack -- composition, NOT inheritance 
// Stack HAS-A Array<T> and delegates storage to it
#pragma once
#include <string>
#include "array.hpp"

namespace Ethan::Containers {

	// Stack-specific exceptions are not derived from ArrayException.
	// A Stack user shouldn't have to know (or catch)
	// anything about the Array working inside it; 
	class StackException {
	public:
		virtual ~StackException() {}
		virtual std::string GetMessage() const = 0;
	};

	class StackFullException : public StackException {
	public:
		std::string GetMessage() const override {
			return "Error: stack is full!\n";
		}
	};

	class StackEmptyException : public StackException {
	public:
		std::string GetMessage() const override {
			return "Error: stack is empty!\n";
		}
	};

	template <class T, int size>
	class Stack {
	private:
		Array<T> m_data;	// Array<T> lives inside every Stack<T, size>
		size_t m_current;	
	public:
		Stack();
		Stack(size_t capacity);
		Stack(const Stack<T, size>& other);
		~Stack();

		Stack<T, size>& operator=(const Stack<T, size>& other);

		// Stores at the current position, then advances it
		// only advances if the underlying Array didn't throw (so if  stack wasn't full).
		void Push(const T& element);

		T Pop();
	};

} // namespace Ethan::Containers

#ifndef Stack_cpp
#include "stack.cpp"
#endif
