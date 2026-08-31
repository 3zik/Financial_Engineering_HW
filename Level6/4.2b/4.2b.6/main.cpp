#include <iostream>
#include "stack.hpp"
using namespace std;
using Ethan::Containers::Stack;
using Ethan::Containers::StackException;

int main() {
	Stack<int, 3> s;

	s.Push(10);
	s.Push(20);
	s.Push(30);

	try {
		s.Push(40);
	} catch (const StackException& e) {
		cout << "Push on full stack: " << e.GetMessage();
	}

	cout << "Pop order: ";
	cout << s.Pop() << " ";
	cout << s.Pop() << " ";
	cout << s.Pop() << " ";
	cout << endl;

	try {
		s.Pop();
	} catch (const StackException& e) {
		cout << "Pop on empty stack: " << e.GetMessage();
	}

	s.Push(1);
	s.Push(2);
	s.Push(3);
	cout << "After recovery, pop order: " << s.Pop() << " " << s.Pop() << " " << s.Pop() << endl;

	s.Push(100);
	Stack<int, 3> copy(s);
	cout << "Copy ctor, same size: " << copy.Pop() << endl;

	Stack<int, 3> assigned;
	assigned = s;
	cout << "operator=, same size: " << assigned.Pop() << endl;

	return 0;
}
