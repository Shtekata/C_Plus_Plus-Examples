#include<iostream>
using namespace std;
void twoLines();
void chooseOperation();
void codeCharacter();
void predictAnswer();
void perimeterCircle();
void biggerNumber();
void maxNumber();
void sortNumbers();
void axb0();
void xaYa();
void area();
void abs();
void number();
void even();
void minmax();
void sqrt();
void converter();
void test();
void rightAnswer();

int main() {
	//chooseOperation();
	//codeCharacter();
	//predictAnswer();
	//perimeterCircle();
	//biggerNumber();
	//maxNumber();
	//sortNumbers();
	//axb0();
	//xaYa();
	//area();
	//abs();
	//number();
	//even();
	//minmax();
	//sqrt();
	//converter();
	test();
	//rightAnswer();

	twoLines();
	return 0;
}

void twoLines() {
	cout << "\n\n";
}

void chooseOperation() {
	int a, b;
	char ch;
	cout << "Do you want to:" << endl << "Add('A'), Subtract('S'), Multiply('M') or Divide('D')?" << endl << "Enter first letter: ";
	cin >> ch;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	if (ch == 'A' || ch == 'a')cout << a + b;
	if (ch == 'S' || ch == 's')cout << a - b;
	if (ch == 'M' || ch == 'm')cout << a * b;
	if (ch == 'D' || ch == 'd')cout << a / b;
}

void codeCharacter() {
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	cout << "It's ASCII code is " << (int)ch;
}

void predictAnswer() {
	int answer, count1, count2;
	cout << "Enter 2 numbers - count1 and count2:" << endl;
	cin >> count1;
	cin >> count2;
	cout << "What is count1 + count2? ";
	cin >> answer;
	if (answer == count1 + count2)cout << "Right!";
	else
	{
		cout << "Sorry, you're wrong" << endl << "Try again." << endl << "What is count1 + count2? ";
		cin >> answer;
		if (answer == count1 + count2)cout << "Right!";
		else cout << "Wrong, the answer is " << count1 + count2;
	}
}

void perimeterCircle() {
	int r, P, S;
	const float PI = 3.14;
	cout << "Enter radius r = ";
	cin >> r;
	if (r > 0) {
		P = 2 * PI * r;
		S = PI * r * r;
		cout << "P = " << P << endl;
		cout << "S = " << S;
	}
	else cout << "Incorrect data!";
}

void biggerNumber() {
	float a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	if (a > b)cout << a;
	else cout << b;
}

void maxNumber() {
	double x, max;
	cin >> x;
	max = x;
	cin >> x;
	if (x > max)max = x;
	cin >> x;
	if (x > max)max = x;
	cout << max;
}

void sortNumbers() {
	double x, y, z, a;
	cin >> x >> y >> z;
	if (x > y) { a = x; x = y; y = a; }
	if (x > z) { a = x; x = z; z = a; }
	if (y > z) { a = y; y = z; z = a; }
	cout << x << " " << y << " " << z;
}

void axb0() {
	double a, b, x;
	cout << "Enter number a: ";
	cin >> a;
	cout << endl << "Enter number b: ";
	cin >> b;
	if (a == 0) {
		if (b == 0)cout << endl << "Each x is solution";
		else cout << endl << "No solution";
	}
	else cout << -b / a;
}

void xaYa() {
	double Xa, Ya;
	cin >> Xa >> Ya;
	if (Xa > 0) {
		if (Ya > 0)cout << "quadrant I";
		else cout << "quadrant IV";
	}
	else {
		if (Ya > 0)cout << "quadrant II";
		else cout << "quadrant III";
	}
}

void area() {
	char ch;
	int s1, s2;
	float radius;

	cout << "Compute area of circle, square ot triangle? ";
	ch = getchar();
	cout << " ";
	if (ch == 'C') {
		cout << "Enter radius of circle: ";
		cin >> radius;
		cout << 3.14 * radius * radius;
	}
	else if (ch == 'S') {
		cout << "Enter length of first side: ";
		cin >> s1;
		cout << "Enter length of second side: ";
		cin >> s2;
		cout << s1 * s2;
	}
	else if (ch == 'T') {
		cout << "Enter length of base: ";
		cin >> s1;
		cout << "Enter height: ";
		cin >> s2;
		cout << s1 * s2 / 2;
	}
}

void abs() {
	double a;
	cin >> a;
	if (a < 0)cout << -a;
	else cout << a;
}

void number() {
	char s;
	cin >> s;
	if (s >= '0' && s <= '9')cout << "yes";
	else cout << "no";
}

void even() {
	int a, sum = 0;
	cin >> a;
	sum += a / 100;
	sum += a / 10 % 10;
	sum += a % 10;
	if (sum % 2 == 0)cout << "yes";
	else cout << "no";
}

void minmax() {
	long int n1, n2, n3, min = 2147483647, max = -2147483648;
	cin >> n1 >> n2 >> n3;

	if (n1 % 2 != 0 && min > n1)min = n1;
	if (n2 % 2 != 0 && min > n2)min = n2;
	if (n3 % 2 != 0 && min > n3)min = n3;

	if (n1 % 2 == 0 && max < n1)max = n1;
	if (n2 % 2 == 0 && max < n2)max = n2;
	if (n3 % 2 == 0 && max < n3)max = n3;

	if (n1 % 2 != 0 && n2 % 2 != 0 && n3 % 2 != 0)cout << "min " << min;
	else if (n1 % 2 == 0 && n2 % 2 == 0 && n3 % 2 == 0)cout << "max " << max;
	else cout << "min: " << min << " - max: " << max << " = " << max - min;
}

void sqrt() {
	long n;
	cout << "n = "; cin >> n;
	cout << "sqrt(n): " << sqrt(n) << endl;
	cout << "float(sqrt(n)): " << float(sqrt(n)) << endl;
	cout << "sqrt(n) - float(sqrt(n)): " << sqrt(n) - float(sqrt(n)) << endl;
	if (n < 0)cout << "Error";
	else if ((sqrt(n) - float(sqrt(n))) == 0)cout << "yes";
	else cout << "no";
}

void converter() {
	double a, v;
	cout << "1 = Fahrenheit; 2 = Celsius; 3 = Kelvin" << endl;
	cout << "Choose number: "; cin >> a;
	cout << "Choose value: "; cin >> v;
	if (a == 1)cout << v << " Fahrenheit = " << (v - 32) * 5 / 9 << " Celsius, " << (v + 459.67) * 5 / 9 << " Kelvin";
	else if (a == 2)cout << v << " Celsius = " << (v * 9 / 5) + 32 << " Fahrenheit, " << v + 273.15 << " Kelvin";
	else if (a == 3)cout << v << " Kelvin = " << v - 273.15 << " Celsius, " << (v * 9 / 5) - 459.67 << " Fahrenheit";
	else cout << "No such function";
}

void test() {
	//cout << "test(!0) = " << (!0) << endl;
	//cout << "test(!1) = " << (!1) << endl;
	//cout << "test(!- 15) " << (!- 15) << endl;
	//cout << "test!(- 15) " << !(-15) << endl;
	//cout << "test(!+ 15) " << (!+ 15) << endl;
	//cout << "test!(15) " << !(15) << endl;
	//cout << "test(15) " << (15) << endl;
	//cout << "test(-15) " << (-15) << endl;
	//cout << "test('k') " << ('k') << endl;
	//cout << "test(!'k') " << (!'k') << endl;
	//cout << "test(!-'k') " << (!- 'k') << endl;
	if (true)cout << "True" << endl;
	if (false)cout << "False" << endl;
	if (1)cout << "True" << endl;
	if (0)cout << "False" << endl;
	cout << "Good bay!";

}

void rightAnswer() {
	int answer, count, chances, right;
	for (count = 1; count < 11; count++) {
		cout << "What is? " << count << " + " << count << " ";
		cin >> answer;
		if (answer == count + count)cout << "Right!" << endl;
		else {
			cout << "Sorry, you're wrong." << endl << "Try again." << endl;
			right = 0;
			for (chances = 0; chances < 3 && !right; chances++) {
				cout << "What is " << count << " + " << count << " "; cin >> answer;
				if (answer == count + count) {
					cout << "Right!";
					right = 1;
				}
			}
			if (!right)cout << "The answer is " << count + count << endl;
		}
	}
}