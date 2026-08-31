// Ethan 
//
// main.cpp to test the NumericArray

#include <iostream>
#include "numericArray.hpp"
using namespace std;
using Ethan::Containers::NumericArray;
using Ethan::Containers::ArrayException;

int main() {
	NumericArray<double> a(3);
	NumericArray<double> b(3);
	a[0] = 1; a[1] = 2; a[2] = 3;
	b[0] = 4; b[1] = 5; b[2] = 6;

	NumericArray<double> scaled = a * 2.0;
	cout << "a * 2.0 = ";
	for (size_t i = 0; i < scaled.Size(); ++i) cout << scaled[i] << " ";
	cout << endl;

	NumericArray<double> sum = a + b;
	cout << "a + b   = ";
	for (size_t i = 0; i < sum.Size(); ++i) cout << sum[i] << " ";
	cout << endl;

	cout << "a . b   = " << a.DotProduct(b) << endl;	// expect 1*4+2*5+3*6 = 32

	NumericArray<double> c(2);
	try {
		NumericArray<double> bad = a + c;
	} catch (const ArrayException& e) {
		cout << e.GetMessage();
	}
	try {
		a.DotProduct(c);
	} catch (const ArrayException& e) {
		cout << e.GetMessage();
	}

	return 0;
}
