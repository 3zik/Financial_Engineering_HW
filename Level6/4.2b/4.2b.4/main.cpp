#include <iostream>
#include "stack.hpp"
using namespace std;
using Ethan::Containers::Stack;
using Ethan::Containers::StackException;

int main() {
	Stack<int> s(3);

	s.Push(10);
	s.Push(20);
	s.Push(30);

	// stack is full now
	// only StackException needs to be caught
	try {
		s.Push(40);
	} catch (const StackException& e) {
		cout << "Push on full stack: " << e.GetMessage();
	}

	// LIFO order: expect 30, 20, 10
	cout << "Pop order: ";
	cout << s.Pop() << " ";
	cout << s.Pop() << " ";
	cout << s.Pop() << " ";
	cout << endl;

	// stack is empty now
	try {
		s.Pop();
	} catch (const StackException& e) {
		cout << "Pop on empty stack: " << e.GetMessage();
	}

	s.Push(1);
	s.Push(2);
	s.Push(3);
	cout << "After recovery, pop order: " << s.Pop() << " " << s.Pop() << " " << s.Pop() << endl;

	return 0;
}
