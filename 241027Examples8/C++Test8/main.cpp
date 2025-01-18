#include<iostream>
using namespace std;

int main() {

	/*int a, b, c;
	cout << "Enter two numbers to add:" << endl;
	cin >> a >> b;
	c = a + b;
	cout << "Sum of entered numbers = " << c << endl;*/

	/*int a = 21;
	int b = 10;
	int c;
	c = a + b;
	cout << "Line 1 - Value of c is " << c << endl;
	c = a - b;
	cout << "Line 2 - Value of c is " << c << endl;
	c = a * b;
	cout << "Line 3 - Value of c is " << c << endl;
	c = a / b;
	cout << "Line 4 - Value of c is " << c << endl;
	c = a % b;
	cout << "Line 5 - Value of c is " << c << endl;
	c = a++;
	cout << "Line 6 - Value of c is " << c << endl;
	c = a--;
	cout << "Line 7 - Value of c is " << c << endl;*/

	/*int a, c1, c2, c3;
	cin >> a;
	c1 = a / 100;
	c2 = a / 10 % 10;
	c3 = a % 10;
	cout << c3 << c2 << c1 << endl;*/

	/*int a;
	cin >> a;
	cout << (a % 10);
	cout << (a / 10 % 10);
	cout << a / 100;*/

	/*int a;
	cin >> a;
	cout << (a % 10);
	cout << (a / 10 % 10);
	cout << (a / 100 % 10);
	cout << (a / 1000);*/

	/*unsigned int a, c1, c2, c3, c4;
	cin >> a;
	c1 = a / 1000;
	c2 = a / 100 % 10;
	c3 = a / 10 % 10;
	c4 = a % 10;
	cout << c1 + c2 + c3 + c4 << " ";
	cout << c1 * c2 * c3 * c4;*/

	/*unsigned long a;
	int c1, c2, c3, c4, c5;
	cin >> a;
	c1 = a / 10000;
	c2 = a / 1000 % 10;
	c3 = a / 100 % 10;
	c4 = a / 10 % 10;
	c5 = a % 10;
	cout << c1 % 2 + c2 % 2 + c3 % 2 + c4 % 2 + c5 % 2 << endl;
	int sum = c1 + c2 + c3 + c4 + c5;
	cout << sum - (c1 % 2 * c1 + c2 % 2 * c2 + c3 % 2 * c3 + c4 % 2 * c4 + c5 % 2 * c5) << endl;*/

	/*float Earth_days;
	float Jupiter_yars;
	cout << "Enter Number of Earth days: ";
	cin >> Earth_days;
	Jupiter_yars = Earth_days / (365 * 12);
	cout << "Equivalent Jupiter years: " << Jupiter_yars << endl;*/

	/*double answer;
	answer = sqrt(10.0);
	cout << answer << endl;*/

	/*double a, b, c, d, x1, x2, x;
	cout << "Namira korenite na uravneniq ot tipa: ax^2 +- bx +- c = 0\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	d = b * b - 4 * a * c;
	cout << "D = " << d << "\n";
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "x1 = " << x1 << "\n";
		cout << "x2 = " << x2 << "\n";
	}
	if (d == 0) {
		x = -b / (2 * a);
		cout << "x = " << x << "\n";
	}
	if (d < 0) { cout << "Uravnenieto nqma reshenie" << "\n"; }
	cout << "\n" << "Calling the pause command";
	cin.ignore();
	cin.get();
	cout << "pause program terminated. Resuming...\n";*/

	/*cout << "Numbers of seconds in a year is: ";
	cout << 60 * 60 * 24 * 365 << endl;*/

	/*int a, b, r;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	r = a;
	a = b;
	b = r;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;*/

	/*int k;
	cin >> k;
	cout << (!((k + 325) % 2 == 1)) << endl;*/

	/*unsigned long int a;
	double sum;
	cout << "Vavedete cqlo osemcifreno chislo: ";
	cin >> a;
	sum = a / 10000000;
	sum += a / 1000000 % 10;
	sum += a / 100000 % 10;
	sum += a / 10000 % 10;
	sum += a / 1000 % 10;
	sum += a / 100 % 10;
	sum += a / 10 % 10;
	sum += a % 10;
	cout << sum / 8 << endl;*/

	//cout << 19 / 10 << endl; // 1 x 10 = 10
	//cout << 19 % 10 << endl; // 19 - 10 = 9
	//cout << 5 / 9; // 0 x 9 = 0
	//cout << 5 % 9; // 5 - 0 = 5
	//cout << 567 / 100 << end;// 5 * 100 = 500
	//cout << 567 % 100 << end; // 567 - 500 = 67
	//cout << 567 / 10 << end;// 56 * 10 = 560
	//cout << 567 % 10 << end; // 567 - 560 = 7

	//double a = 8.78;
	//cout << a;

	/*int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	a = 56789;
	b = a / 10000;
	c = a / 1000 % 10;
	d = a / 100 % 10;
	e = a / 10 % 10;
	f = a % 10;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	cout << "e = " << e << endl;
	cout << "f = " << f << endl;

	cout << "Ала Бала";*/

	int k, z, m, n, p;
	bool s = true;
	cout << "Enter number: ";
	cin >> k;
	z = ~((k + 325) % 2) == 1;
	m = !((k + 325) % 2) == 1;
	cout << z << endl;
	cout << m << endl;
	cout << (((k + 325) % 2) == 1) << endl;
	cout << "~-2:  " << ~- 2 << endl;
	cout << "~-1:  " << ~- 1 << endl;
	cout << " ~0: " << ~0 << endl;
	m = !s;
	n = !k;
	p = ~k;

	return 0;
}