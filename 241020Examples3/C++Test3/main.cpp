#include<iostream>
using namespace std;

int main() {
	int x, y, sum = 0;
	cout << "Let's to ths sum of all the numbers in a range." << endl;
	cout << "Please give me the lower bound: " << endl;
	cin >> x;
	cout << "Please give me the upper bound: " << endl;
	cin >> y;

	while (x > y) {
		cout << "Please enter the numbers in the right order (from small to big)." << endl;
		cout << "Please give me the lower bound: " << endl;
		cin >> x;
		cout << "Please give me the upper bound: " << endl;
		cin >> y;
	}

	if (x <= y) {
		for (int i = x; i <= y; i++) { sum += i; }
		cout << "The sum from " << x << " to " << y << " is " << sum << endl;
	}
	return 0;
}