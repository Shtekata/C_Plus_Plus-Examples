#include<iostream>
#include<string>
#include<sstream>
using namespace std;

//struct Time {
//	int hours = 0;
//	int minutes = 0;
//	int seconds = 0;
//};
//int toSeconds(Time);
//
//int main() {
//	Time t;
//	while (cin >> t.hours >> t.minutes >> t.seconds) {
//		cout << "Total seconds: " << toSeconds(t) << endl;
//	}
//
//	return 0;
//}
//
//int toSeconds(Time now) {
//	return 3600 * now.hours + 60 * now.minutes + now.seconds;
//}

//struct Employee {
//	int nID;
//	int nAge;
//	float fWage;
//};
//void PrintInformation(Employee sEmpoyee) {
//	cout << "ID: " << sEmpoyee.nID << endl;
//	cout << "Age: " << sEmpoyee.nAge << endl;
//	cout << "Wage: " << sEmpoyee.fWage << endl << endl;
//}
//
//int main() {
//	Employee sJoe;
//	sJoe.nID = 14;
//	sJoe.nAge = 32;
//	sJoe.fWage = 24.15;
//	Employee sFrank;
//	sFrank.nID = 15;
//	sFrank.nAge = 28;
//	sFrank.fWage = 18.27;
//	PrintInformation(sJoe);
//	PrintInformation(sFrank);
//
//	return 0;
//}

struct Movies_t {
	string title;
	int year = 0;
} mine, yours;

void printmovie(Movies_t movie) {
	cout << movie.title;
	cout << "(" << movie.year << ")\n";
}

int main() {
	//Movies_t a, b;
	string mystr;
	mine.title = "2001 A Space Odyssy";
	mine.year = 1968;
	cout << "Enter title: ";
	getline(cin, yours.title);
	cout << "Enter year: ";
	getline(cin, mystr);
	stringstream(mystr) >> yours.year;

	cout << "My favorite movie is: \n";
	printmovie(mine);
	cout << "And yours is: \n";
	printmovie(yours);
}