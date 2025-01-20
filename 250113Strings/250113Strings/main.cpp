#include<iostream>
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

int main() {
	max20();
	//max15();
	//numbers();
	//length();
	//entStr();
	//oneChar();

	return 0;
}