#include<iostream>
using namespace std;

int main() {
	string arr[5];

	cout << "Enter the elements:" << endl;

	for (int x = 0; x < 5; x++) { cin >> arr[x]; }
	
	cout << "\nString array:\n";
	
	for (int x = 0; x < 5; x++) { cout << arr[x] << "\n"; }
}