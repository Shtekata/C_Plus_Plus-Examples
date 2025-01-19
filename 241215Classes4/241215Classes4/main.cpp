#include<iostream>
using namespace std;

//class myclass {
//	int a, b;
//public:
//	void set(int i, int j) { a = i; b = j; }
//	void show() { cout << a << ' ' << b << "\n"; }
//};
//
//int main() {
//	myclass o1, o2;
//	o1.set(10, 4);
//	o2 = o1;
//	o1.show();
//	o2.show();
//	return 0;
//}

//class samp {
//	int i;
//public:
//	samp(int n) { i = n; }
//	int get_i() { return i; }
//};
//
//int sqr_it(samp o) {
//	return o.get_i() * o.get_i();
//}
//
//int main() {
//	samp a(10), b(2);
//	cout << sqr_it(a) << endl;
//	cout << sqr_it(b) << endl;
//	return 0;
//}

class samp {
	char s[80];
public:
	void show() { cout << s << endl; }
	void set(char* str) { strcpy_s(s, str); }
};

samp input() {
	char s[80];
	samp str;
	cout << "Enter a string: ";
	cin >> s;
	str.set(s);
	return str;
}

int main() {
	samp ob;
	ob = input();
	ob.show();
	return 0;
}