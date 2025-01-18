#include<iostream>
using namespace std;
void tL();
void reverse();
void reverse2();
void cipher();
void sum();
void charQ();
void oneTen();
void six();
void day();
void months();
void count();
void twoNum();
void arithmetic();
void noBreak();
void vowel();
void dayWeek();
void goTo();

int main() {
	//reverse();
	//reverse2();
	//cipher();
	//sum();
	//charQ();
	//oneTen();
	//six();
	//day();
	//months();
	//count();
	twoNum();
	//arithmetic();
	//noBreak();
	//vowel();
	//dayWeek();
	//goTo();

	tL();
	return 0;
}

void tL() {
	cout << "\n\n";
}

void reverse() {
	int x; cout << "x = "; cin >> x;
	while (x != 0) { cout << x % 10; x /= 10; }
}

void cipher() {
	char ch;
	cout << "Enter your message: "; cin >> ch;
	while (ch != '\n') { cout << (char)(ch + 1); cin.get(ch); }
}

void sum() {
	int sum = 0, i = 0;
	while (i <= 1000) {
		sum += i;
		i++;
	}
	cout << "Sum = " << sum;
}

void reverse2() {
	int x, reverse = 0; cout << "x = "; cin >> x;
	while (x != 0) {
		reverse *= 10;
		reverse += x % 10;
		x /= 10;
	}
	cout << "Reverse = " << reverse;
}

void charQ() {
	char ch;
	do ch = getchar();
	while (ch != 'q');
}

void oneTen() {
	int i;
	for (i = 1; i < 100; i++) {
		cout << i;
		if (i == 10)break;
	}
}

void six() {
	int i;
	char ch;
	for (i = 1; i < 10000; i++) {
		if (!(i % 6)) {
			cout << i << ", more? (y/n)";
			cin >> ch;
			if (ch == 'n')break;
			cout << endl;
		}
	}
}

void day() {
	int day; cin >> day;
	switch (day)
	{
	case 1:cout << "Mon"; break;
	case 2:cout << "Tu"; break;
	case 3:cout << "Wed"; break;
	case 4:cout << "Thu"; break;
	case 5:cout << "Fri"; break;
	case 6:cout << "Sat"; break;
	case 7:cout << "Sun"; break;
	default: cout << "There is not a such a day.";
	}
}

void months() {
	unsigned int month, year;
	cin >> month >> year;
	switch (month)
	{
	case 2:if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))cout << 29 << endl;
		  else cout << 28 << endl;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: cout << 31; break;
	case 4:
	case 6:
	case 9:
	case 11: cout << 30; break;
	default: cout << "There is no a such month."; break;
	}
}

void count() {
	int x;
	for (x = 0; x < 100; x++) {
		continue;
		cout << x;
	}
}

void twoNum() {
	int total = 0, i, j;
	do {
		cout << "Enter next number (0 to stop): "; cin >> i;
		cout << "Enter number again: "; cin >> j;
		if (i != j) { cout << "Mismatch" << endl; continue; }
		total += i;
	} while (i);
	cout << "Total is " << total;
}

void arithmetic() {
	int a, b;
	char ch;
	cout << "Do you want to Add, Subtract, Multiply or Divide?" << endl;
	do {
		cout << "Enter first letter: "; cin >> ch;
	} while (ch != 'A' && ch != 'S' && ch != 'M' && ch != 'D');
	cout << endl << "Enter first number: "; cin >> a;
	cout << endl << "Enter second number: "; cin >> b;
	switch (ch)
	{
	case'A':cout << endl << a + b; break;
	case'S':cout << endl << a - b; break;
	case'M':cout << endl << a * b; break;
	case'D':if (b != 0)cout << endl << a / b;
		   else cout << endl << "Cannot divide by zero"; break;
	}
}

void noBreak() {
	char ch;
	do {
		cout << "Enter a character, q to quit: "; cin >> ch; cout << endl;
		switch (ch)
		{
		case'a':cout << "Now is " << endl;
		case'b':cout << "the time " << endl;
		case'c':cout << "for all good men" << endl; break;
		case'd':cout << "The summer " << endl;
		case'e':cout << "soldier" << endl;
		}
	} while (ch != 'q');
}

void vowel() {
	char ch;
	cout << "Enter the letter: "; cin >> ch;
	switch (ch)
	{
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':
	case'y':cout << " is a vowel"; break;
	default:cout << " is a consonant";
	}
}

void dayWeek() {
	int x, den, mes, god, visok;
	cin >> den >> mes >> god;

	x = god % 100;
	cout << x << endl;
	x = x + x / 4;
	cout << x << endl;
	x = x + den;
	cout << x << endl;

	if (((god % 4 == 0) && (god % 100 != 0)) || (god % 400 == 0)) visok = -1;
	else visok = 0;

	switch (mes)
	{
	case 1:x = x + 1 + visok; break;
	case 2:x = x + 4 + visok; break;
	case 3:case 11:x = x + 4; break;
	case 5:x = x + 2; break;
	case 6:x = x + 5; break;
	case 8:x = x + 3; break;
	case 9:x = x + 6; break;
	case 10:x = x + 1; break;
	default:
		break;
	}

	cout << x << endl;

	if (god < 1900) x = x + 2;
	else if (god < 200) x = x + 6;
	else x = x + 5;

	cout << x << endl;

	switch (x % 7)
	{
	case 1:cout << "Monday" << endl; break;
	case 2:cout << "Tuesday" << endl; break;
	case 3:cout << "Wednesday" << endl; break;
	case 4:cout << "Thursday" << endl; break;
	case 5:cout << "Friday" << endl; break;
	case 6:cout << "Saturday" << endl; break;
	case 0:cout << "Sunday" << endl; break;
	}

	system("Pause");
}

void goTo() {
	int i = 1;
again:
	cout << i << ' ';
	i++;
	if (i <= 10)goto again;
}