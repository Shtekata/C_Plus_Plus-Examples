#include <iostream>
using namespace std;
void twoLines();
void positive_negative_number();
void right_sum_answer();
void convert_meters_feet();
void divide_two_numbers();
void code_block();
void convert_meters_feet2();
void right_sum_answer2();

int main() {

	//positive_negative_number();
	//right_sum_answer();
	//convert_meters_feet();
	//divide_two_numbers();
	//code_block();
	//convert_meters_feet2();
	right_sum_answer2();

	return 0;
}

void twoLines() {
	cout << "\n\n";
}

void positive_negative_number() {
	int num;
	cout << "Enter an integer: ";
	cin >> num;
	if (num < 0)cout << "Number is negative.";
	//if (num >= 0)cout << "Number is non-negative.";
	cout << "Number is non-negative.";
	twoLines();
}

void right_sum_answer() {
	int answer;
	cout << "What is 10 + 14? ";
	cin >> answer;
	if (answer == 10 + 14)cout << "Right!";
	if (answer != 10 + 14)cout << "Wrong!";
	twoLines();
}

void convert_meters_feet() {
	float num;
	int choice;
	cout << "Enter value: ";
	cin >> num;
	cout << "1: Feet to Meters, 2: Meters to Feet." << endl << "Enter choice: ";
	cin >> choice;
	if (choice == 1)cout << (num / 3.28);
	if (choice == 2)cout << (num * 3.28);
	twoLines();
}

void divide_two_numbers() {
	float a, b;
	cout << "Enter first number(a): ";
	cin >> a;
	cout << "Enter second number(b): ";
	cin >> b;
	if (b != 0) cout << a << " / " << b << " = " << (a / b);
	else cout << "Cannot divide by zero.";
	twoLines();
}

void code_block() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (num > 0) {
		cout << "This is ";
		cout << "an example of ";
		cout << "a code block";
	}
	twoLines();
}

void convert_meters_feet2() {
	float num;
	int choice;
	cout << "1: Feet to Meters, 2: Meters to Feet." << endl << "Enter choice: ";
	cin >> choice;
	if (choice == 1) {
		cout << "Enter number of feet: ";
		cin >> num;
		cout << "Meters: " << (num / 3.28);
	}
	else {
		cout << "Enter number of meters: ";
		cin >> num;
		cout << "Feet: " << (num * 3.28);
	}
	twoLines();
}

void right_sum_answer2() {
	int answer;
	cout << "What is 10 + 14? ";
	cin >> answer;
	if (answer == 10 + 14)cout << "Right!";
	else {
		cout << "Sorry, you're wrong. ";
		cout << "The answer is 24.";
	}
	twoLines();
}