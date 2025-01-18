#include<iostream>
using namespace std;

int main() {
	//int a, b, c;
	//cout << "a = ";
	//cin >> a;
	//cout << "b = ";
	//cin >> b;
	//c = a;
	//a = b;
	//b = c;
	//cout << endl << "a = " << a << endl;
	//cout << "b = " << b;

	int x, y, A;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	A = 12 * pow(x, 2) + y * (x + 5) + 3 * x - 1;
	cout << "A = " << A;
}