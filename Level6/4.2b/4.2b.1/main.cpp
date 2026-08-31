// 8/30/26
// Test static keyword on tempalting


#include <iostream>
#include "array.hpp"
using namespace std;
using Ethan::Containers::Array;

int main() {
	Array<int> intArray1;
	Array<int> intArray2;
	Array<double> doubleArray;

	cout << intArray1.DefaultSize() << endl;
	cout << intArray2.DefaultSize() << endl;
	cout << doubleArray.DefaultSize() << endl;

	intArray1.DefaultSize(15);

	cout << intArray1.DefaultSize() << endl;
	cout << intArray2.DefaultSize() << endl;
	cout << doubleArray.DefaultSize() << endl;

	return 0;
}
