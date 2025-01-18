#include<iostream>
using namespace std;
void myFunc();
void func1();
void func2();
int func();
int get_sqr();
void sum(int, int);
void outchar(char);
void one();
void two();
void newLine();
void newTwoLines();

int main(int argc, char** argv) {
	myFunc();

	func2();
	cout << "3" << endl;

	int num = func();
	cout << num << endl;

	cout << "Square: " << get_sqr() << endl;

	int a, b;
	cout << "Enter numbers to sum:" << endl;
	cin >> a >> b;
	sum(a - 2, b - 2);

	outchar('A');
	outchar('B');
	newLine();

	one();
	two();
	newTwoLines();
	return 0;
}

void myFunc() {
	cout << "This is a test." << endl;
	return;
	cout << "This is a test 2." << endl;
}

void func1() {
	cout << "1";
}

void func2() {
	func1();
	cout << "2";
}

int func() {
	return 10;
}

int get_sqr() {
	int num;
	cout << "Enter a number to square: ";
	cin >> num;
	return num * num;
}

void sum(int x, int y) {
	cout << "Sum is: " << (x + y) << endl;
}

void outchar(char ch) {
	cout << ch;
}

void one() {
	cout << "I study in PGEA and";
}

void two() {
	cout << "I live in Sofia";
}

void newLine() {
	cout << endl;
}

void newTwoLines() {
	cout << "\n\n";
}