#include<iostream>
using namespace std;

template<class Z>void swapargs(Z& a, Z& b) {
	Z temp;
	temp = a;
	a = b;
	b = temp;
}


int main() {
	int i = 10, j = 20;
	double x = 10.1, y = 23.3;
	cout << "Original i, j: " << i << ' ' << j << endl;
	cout << "Original x, y: " << x << ' ' << y << endl;
	swapargs(i, j);
	swapargs(x, y);
	cout << "Swapped i, j: " << i << ' ' << j << endl;
	cout << "Swapped x, y: " << x << ' ' << y << endl;
	return 0;
}