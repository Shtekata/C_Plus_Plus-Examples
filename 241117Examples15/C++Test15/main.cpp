#include<iostream>
using namespace std;
void tL();
void smallSim();
void k_br();
void sumNum();
void maxNum();
void minMax();
void conSec();
void numEven();
void binary();
void avr();
void fib();
void fib2();
void primeNum();
void primeMulti();
void binary2();

int main() {
	//smallSim();
	//k_br();
	//sumNum();
	//maxNum();
	//minMax();
	//conSec();
	//numEven();
	//binary();
	//avr();
	//fib();
	//fib2();
	//primeNum();
	//primeMulti();
	binary2();

	tL();
	return 0;
}

void tL() {
	cout << "\n\n";
}

void smallSim() {
	int n, num = 0;
	char ch;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ch;
		if (ch >= 'a' && ch <= 'z')num++;
	}
	cout << "Number is " << num;
}

void k_br() {
	int k, n, x, br_c, br = 0;
	cin >> k >> n;
	for (int i = 0; i < n; i++) {
		br_c = 0;
		cin >> x;
		while (x) {
			br_c++;
			x /= 10;
		}
		if (br_c == k)br++;
	}
	cout << "Br " << br;
}

void sumNum() {
	unsigned int x, sum = 0, num = 0;
	cin >> x;
	while (x) {
		if (x % 2 == 0)sum += x;
		else num++;
		cin >> x;
	}
	cout << "Sum " << sum << "   Num " << num;
}

void maxNum() {
	unsigned int x, max = 0;
	cin >> x;
	while (x) {
		if (x % 2 == 1 && max < x)max = x;
		cin >> x;
	}
	if (max)cout << "Max " << max;
	else cout << "No odd numbers!";
}

void minMax() {
	unsigned int n, a, a1, a2, max = 0, min = 100;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a1 >> a2;
		if (a1 > a2)a = a1 - a2;
		else a = a2 - a1;
		if (max < a)max = a;
		if (min > a)min = a;
	}
	cout << "Max " << max << "   Min " << min;
}

void conSec() {
	int x, y, z, flag = 0;
	cin >> x >> y;
	for (int i = 1; i < x; i++) {
		cin >> z;
		if (z == y) { flag = 1; break; }
		else y = z;
	}
	if (flag)cout << "yes";
	else cout << "no";
}

void numEven() {
	long x, num = 0;
	cin >> x;
	while (x) {
		if ((x % 10) % 2 == 0)num++;
		x /= 10;
	}
	cout << "Num " << num;
}

void binary() {
	int x, num = 0;
	cin >> x;
	do {
		num += x % 2;
		cout << "x%2 " << x % 2 << " num " << num << " x " << x << endl;
	} while (x /= 2);
	cout << "Num " << num;
}

void avr() {
	long n;
	int max = 0, num = 0;
	double sum = 0, avr = 0;
	cin >> n;
	while (n) {
		sum += n % 10;
		if (max < n % 10)max = n % 10;
		num++;
		n /= 10;
	}
	avr = sum / num;
	cout << "Sum " << sum << " Max " << max << " Avr " << avr;
}

void fib() {
	int n, a1 = 1, a2 = 1, an = 0, i = 3;
	cin >> n;
	if (n == 1 || n == 2)an = 1;
	else while (i <= n) {
		an = a1 + a2;
		a1 = a2;
		a2 = an;
		i++;
	}
	cout << "an " << an;
}

void fib2() {
	int n, f1 = 1, f2 = 1;
	cin >> n;
	while (f2 <= n) {
		f2 += f1;
		f1 = f2 - f1;
	}
	cout << "f2 " << f2;
}

void primeNum() {
	int p, q, flag, div;
	cin >> p >> q;
	cout << "Prime numbers: ";
	for (int i = p; i <= q; i++) {
		flag = 1;
		for (div = 2; div <= i / 2; div++) {
			if (i % div == 0) {
				flag = 0;
				break;
			}
		}
		if (flag && i > 1)cout << i << ' ';
	}
}

void primeMulti() {
	int p, i = 2;
	cin >> p;
	cout << "Prime multi ";
	if (p == 1)cout << 1;
	do
		if (p % i == 0) {
			p /= i;
			cout << i << ' ';
		}
		else i++;
	while (p > 1 && i <= p / 2);
	cout << p;
	cout << endl;
}

void binary2() {
	int n;
	long bin = 0, x = 1;
	cin >> n;
	while (n) {
		bin += n % 2 * x;
		x *= 10;
		n /= 2;
	}
	cout << bin;

}