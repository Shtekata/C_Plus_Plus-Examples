#include<iostream>
#include<string>
using namespace std;

static void max20() {
	char str[21];
	cin >> str;
	int i = 0;
	while (str[i] != '\0')i++;
	cout << i << endl;
}

static void max15() {
	char str1[16], str2[16];
	cin >> str1;
	int i = 0;
	while (str1[i] != '\0') {
		str2[i] = str1[i]; i++;
	}
	str2[i] = '\0';
	cout << str2 << endl;
}

static void numbers() {
	char str[21];
	cin >> str;
	int i = 0, count = 0;
	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9') count++;
		i++;
	}
	cout << i << endl;
}

static void length() {
	char a[10] = "hello";
	int b = strlen(a);
	cout << b << endl;
}

static void entStr() {
	char str[5];
	cin.getline(str, 5);
	cout << str << endl;
}

static void oneChar() {
	char str[81];
	cin.getline(str, 81);
	int count = 0, i = 0;
	if (str[1] == ' ' || str[1] == '.')count++;
	while (str[i] != '.') {
		if (str[i] == ' ')
			if (str[i + 2] == ' ' || str[i + 2] == '.')count++;
		i++;
	}
	cout << count << endl;
}

static void test() {
	string food = "Pizza";
	string& meal = food;

	meal = "Mizza";

	cout << food << endl;
	cout << meal << endl;
}

static void swapNums(int& x, int& y) {
	int z = x;
	x = y;
	y = z;
}

static void test2() {
	int firstNum = 10;
	int secondNum = 20;

	cout << "Before swap: " << "\n";
	cout << firstNum << ' ' << secondNum << "\n";

	// Call the function, which will change the values of firstNum and secondNum
	swapNums(firstNum, secondNum);

	cout << "After swap: " << "\n";
	cout << firstNum << ' ' << secondNum << "\n";
}

struct xy { int x; int y; };

static xy swapNums2(int x, int y) {
	int z = x;
	x = y;
	y = z;
	xy a; a.x = x; a.y = y;
	return a;
}

static void test3() {
	int firstNum = 10;
	int secondNum = 20;

	cout << "Before swap: " << "\n";
	cout << firstNum << ' ' << secondNum << "\n";

	// Call the function, which will change the values of firstNum and secondNum
	xy b = swapNums2(firstNum, secondNum);
	firstNum = b.x;
	secondNum = b.y;

	cout << "After swap: " << "\n";
	cout << firstNum << ' ' << secondNum << "\n";
}

void myFunction(int myNumbers[5]) {
	for (int i = 0; i < 5; i++) {
		myNumbers[i] = myNumbers[i] + 5;
	}
}

static void test4() {
	int myNumbers[5] = { 10, 20, 30, 40, 50 };
	myFunction(myNumbers);
	for (int i = 0; i < 5; i++) {
		cout << myNumbers[i] << "\n";
	}
}

int main() {
	//max20();
	//max15();
	//numbers();
	//length();
	//entStr();
	//oneChar();
	//test();
	//test2();
	//test3();
	test4();

	return 0;
}