#include <iostream>
using namespace std;
void tL();
void numbers1_100();
void i_5();
void reverse();
void oneToTen();
void sumAndProduct();
void binary();
void binary2();
void isPrime();
void charQ();
void charQ2();
void revNum();
void endless();
void incOut();
void letters();
void fahCel();
void factorial();
void sum3dig();

int main() {
	//numbers1_100();
	//i_5();
	//reverse();
	//oneToTen();
	//sumAndProduct();
	//binary();
	binary2();
	//isPrime();
	//charQ();
	//charQ2();
	//revNum();
	//endless();
	//incOut();
	//letters();
	//fahCel();
	//factorial();
	//sum3dig();

	tL();
	return 0;
}

void tL() {
	cout << "\n\n";
}

void numbers1_100() {
	int x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	for (int i = 0; i <= y; i++) {
		cout << x + i << ' ';
	}
}

void i_5() {
	unsigned int n;
	cout << "n = "; cin >> n;
	for (int i = 1; i < n; i++) {
		if (i % 5 == 0)cout << i << endl;
	}
}

void reverse() {
	int n;
	cout << "n = "; cin >> n;
	for (int i = 1; i < 6; i++) {
		cout << n % 10; n = n / 10;
	}
}

void oneToTen() {
	int i;
	for (i = 1; i < 11; i += 2) {
		cout << i << ' ';
	}
}

void sumAndProduct() {
	int i, sum = 0, prod = 1;
	for (i = 1; i < 6; i++) {
		sum += i; prod *= i;
	}
	cout << "Sum and Product: " << sum << ' ' << prod;
}

void binary() {
	int n, c, k;
	cout << "Enter an integer: "; cin >> n;
	cout << "In binary is: ";
	for (c = 31; c >= 0; c--) {
		k = n >> c;
		if (k & 1)cout << '1';
		else cout << '0';
	}
}

void binary2() {
	int n, c, k;
	cout << "Enter an integer: "; cin >> n;
	cout << "In binary is: ";
	for (c = 7; c >= 0; c--) {
		k = n >> c;
		if (k & 1)cout << '1';
		else cout << '0';
	}
}

void isPrime() {
	int num, i, is_prime = 1;
	cout << "Enter the number to test: "; cin >> num;
	for (i = 2; i <= num / 2; i++) if (num % i == 0)is_prime = 0;
	if (is_prime)cout << "The number is prime.";
	else cout << "Not prime.";
}

void charQ() {
	char ch = 'a';
	for (int i = 0; ch != 'q'; i++) { cout << "pass: " << i << ' '; cin >> ch; }
}

void charQ2() {
	char ch;
	for (ch = 0; ch != 'q'; cin >> ch) cout << "Found the q. ";
}

void revNum() {
	int i;
	cout << "Enter an integer: "; cin >> i;
	for (; i; i--)cout << i;
}

void endless() {
	for (;;)cout << "Hi! ";
}

void incOut() {
	int i;
	for (i = 0; i < 10;) {
		cout << i;
		i++;
	}
}

void letters() {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 26; j++)
			for (int k = 0; k < 5; k++) cout << char('A' + j);
}

void fahCel() {
	for (int i = 0; i <= 300; i += 20) cout << "Fahrenheit " << i << ' ' << (5.0 / 9.0) * (i - 32) << " C" << endl;
}

void factorial() {
	unsigned long n, fact = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) fact *= i;
	cout << "Factoriel: " << fact;
}

void sum3dig() {
	int k, sum; cin >> k;
	for (int i = 100; i < 1000; i++) {
		sum = i % 10;
		sum += i / 10 % 10;
		sum += i / 100;
		if (sum == k) cout << "The number is: " << i << endl;
	}
}