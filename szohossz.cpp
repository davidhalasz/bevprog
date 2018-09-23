#include "std_lib_facilities.h"

int main() {
	int a=1;
	int length = 0;

	while (a != 0) {
		a<<=1;
		++length;
	}

	cout << length << '\n';
}