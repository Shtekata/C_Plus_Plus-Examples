#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	cout << 215;
	cout << setw(5) << 215;
	cout << setw(6) << 430;

	cout << "\n\n" << setprecision(2) << 3.123456789 << endl;
	cout << setprecision(3) << 562.01 << endl;
	cout << 32.47 << endl;
	cout << 8;

	return 0;
}