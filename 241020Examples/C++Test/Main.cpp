#include<iostream>
#include<math.h>
using namespace std;
string pesho = "qqq";

int main() {
	/*int r, P, S;
	const double p = 3.14;
	cout << "Napishi radius r = ";
	cin >> r;
	P = 2 * p * r;
	S = p * r * r;
	cout << S << " " << P;*/
	/*int a = (5 + 6) * 3;
	cout << a;*/
	/*cout << (4 != 16);*/
	//cout << abs(-12);
	//cout << ceil(3.4);
	/*bool a1, a2 = true;
	a1 = !0;
	cout << "a1 = " << a1 << endl;
	cout << "a2 = "<<a2 << endl;*/
	/*cout << pesho << "\n";
	pesho = "mmm";
	cout << pesho;*/
	bool a = true;
	bool b = true;
	cout << "a = true; b = true | " << "a && b = " << (a && b) << endl;
	b = false;
	cout << "a = true; b = false | " << "a && b = " << (a && b) << endl;
	a = false;
	b = true;
	cout << "a = false; b = true | " << "a && b = " << (a && b) << endl;
	b = false;
	cout << "a = false; b = false | " << "a && b = " << (a && b) << endl;

	a = true;
	b = true;
	cout <<"\n" << "a = true; b = true | " << "a || b = " << (a || b) << endl;
	b = false;
	cout << "a = true; b = false | " << "a || b = " << (a || b) << endl;
	a = false;
	b = true;
	cout << "a = false; b = true | " << "a || b = " << (a || b) << endl;
	b = false;
	cout << "a = false; b = false | " << "a || b = " << (a || b) << endl;

	cout << "\n" << "1 || 1 && 0 = " << (1 || 1 && 0) << endl;
	cout << "!1 || 0 && 1 = " << (!1 || 0 && 1) << endl;
	cout << "false && true || false = " << (false && true || false) << endl;
	cout << "!(1 || 0 && 1) = " << !(1 || 0 && 1) << endl;
	cout << "false && (true || false) = " << (false && (true || false)) << endl;
	cout << "(!1 || 0 && 1)||(false && true || false) = " << ((!1 || 0 && 1) || (false && true || false)) << endl;
	cout << "!(!1 || 0 && 1)||(false && true || false) = " << (!(!1 || 0 && 1) || (false && true || false)) << endl;
	return 0;
}