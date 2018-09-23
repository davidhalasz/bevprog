#include "std_lib_facilities.h"

int main() {
	int a = 7;
	int b = 1;

	a = a+b;  //a = 8
	b = a-b;  // b = 8-1
	a = a-b;  // a = 8 - 7

	cout << "b = "<< b << "\na = " << a << "\n";
}