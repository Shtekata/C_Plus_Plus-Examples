#include<iostream>
using namespace std;

int main() {
	cout << "start\n";
	try
	{
		cout << "inside try block\n";
		throw 10;
		cout << "This will not execute";
	}
	catch (int i)
	{
		cout << "Caught One! Number is: ";
		cout << i << "\n";
	}
	cout << "end";
	return 0;
}