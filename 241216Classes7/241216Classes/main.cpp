//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//class samp {
//	int a;
//public:
//	void set_a(int n) { a = n; }
//	int get_a() { return a; }
//};
//
//int main() {
//	samp ob[4] = {};
//	int i;
//	for (i = 0; i < 4; i++)ob[i].set_a(i);
//	for (i = 0; i < 4; i++)cout << ob[i].get_a();
//	cout << "\n";
//	return 0;
//}

//class samp {
//	int a;
//public:
//	samp(int n) { a = n; }
//	int get_a() { return a; }
//};
//
//int main() {
//	samp ob[4] = { -1,-2,-3,-4 };
//	//samp ob[4] = { samp(-1),samp(-2),samp(-3),samp(-4) };
//	int i;
//	for (i = 0; i < 4; i++)cout << ob[i].get_a() << ' ';
//	cout << "\n";
//	return 0;
//}

//class samp {
//	int a;
//public:
//	samp(int n) { a = n; }
//	int get_a() { return a; }
//};
//
//int main() {
//	samp ob[4][2] = { 1,2,3,4,5,6,7,8 };
//	int i;
//	for (i = 0; i < 4; i++) {
//  		cout << ob[i][0].get_a() << ' ';
//		cout << ob[i][1].get_a() << endl;
//	}
//	cout << "\n";
//	return 0;
//}

//class samp {
//	int a, b;
//public:
//	samp(int n, int m) { a = n; b = m; }
//	int get_a() { return a; }
//	int get_b() { return b; }
//};
//
//int main() {
//	samp ob[4][2] = { samp(1,2),samp(3,4),samp(5,6),samp(7,8),samp(9,10),samp(11,12),samp(13,14),samp(15,16) };
//	int i;
//	for (i = 0; i < 4; i++) {
//		cout << ob[i][0].get_a() << ' ';
//		cout << ob[i][0].get_b() << "\n";
//		cout << ob[i][1].get_a() << ' ';
//		cout << ob[i][1].get_b() << "\n";
//	}
//	cout << "\n";
//	return 0;
//}

//class myclass {
//	int a;
//public:
//	myclass(int x) { a = x; }
//	int get() { return a; }
//};
//
//int main() {
//	myclass ob(120);
//	myclass* p;
//	p = &ob;
//	cout << "Value using object: " << ob.get() << endl;
//	cout << "Value using pointer: " << p->get() << endl;
//	return 0;
//}

//class samp {
//	int a, b;
//public:
//	samp(int n, int m) { a = n; b = m; }
//	int get_a() { return a; }
//	int get_b() { return b; }
//};
//
//int main() {
//	samp ob[6] = { samp(1,2),samp(3,4),samp(5,6),samp(7,8),samp(9,10),samp(11,12) };
//	samp* p;
//	p = ob;
//	for (int i = 0; i < 6; i++) {
//		cout << p << endl;
//		cout << p->get_a() << ' ';
//		cout << p->get_b() << "\n";
//		p++;
//	}
//	cout << "\n";
//	return 0;
//}

//class inventory {
//	char item[50];
//	double cost;
//	int on_hand;
//public:
//	inventory(const char* i, double c, int o) {
//		//cout << "i: " << i << endl;
//		strcpy_s(item, i);
//		cost = c;
//		on_hand = o;
//	}
//	void show();
//};
//void inventory::show() {
//	cout << item;
//	cout << ": $" << cost;
//	cout << " On hand: " << on_hand << "\n";
//}
//
//void printPattern(char*);
//int main() {

	/*char a[100];
	cout << "Enter string: "; cin.get(a, 100);
	inventory ob(a, 4.95, 4);*/
	/*inventory ob("wrench ala bala\0 mala mala", 4.95, 4);
	ob.show();*/

	/*char a[] = "ala bala mala";
	char* b = &a[0];
	char* c = a;
	string o = "ala bala mala";
	char* p = &o[0];
	int i = 0, j = 0;
	while (*c != '\0') {
		cout << c << endl;
		cout << *c << endl;
		cout << (void*)c << endl;
		cout << &c << endl;
		cout << a[i] << endl;
		cout << &a[i] << "\n\n";
		c++; i++;
	}
	while (*p != '\0') {
		cout << p << endl;
		cout << *p << endl;
		cout << (void*)p << endl;
		cout << &p << endl;
		cout << o[j] << endl;
		cout << &o[j] << "\n\n";
		p++; j++;
	}*/

	/*int i = 5;
	int* p_i = &i;

	short c = 'a';
	short* p_c = &c;

	char m[10] = "abc";
	char* p_m = &m[0];

	char p = 'p';
	char* p_p = &p;

	cout << "\npointer to int (4 bytes)\n";
	cout << "address: " << p_i << ' ' << "  value: " << *p_i << endl; p_i++;
	cout << "address: " << p_i << ' ' << "  value: " << *p_i << endl; p_i++;
	cout << "address: " << p_i << ' ' << "  value: " << *p_i << endl; p_i++;
	cout << "address: " << p_i << ' ' << "  value: " << *p_i << endl; p_i++;

	cout << "\npointer to short (2 bytes)\n";
	cout << "address: " << p_c << ' ' << "  value: " << *p_c << endl; p_c++;
	cout << "address: " << p_c << ' ' << "  value: " << *p_c << endl; p_c++;
	cout << "address: " << p_c << ' ' << "  value: " << *p_c << endl; p_c++;
	cout << "address: " << p_c << ' ' << "  value: " << *p_c << endl; p_c++;

	cout << "\npointer to char[] (1 bytes)\n";
	cout << "address: " << (void*)p_m << ' ' << "  value: " << *p_m << endl; p_m++;
	cout << "address: " << (void*)p_m << ' ' << "  value: " << *p_m << endl; p_m++;
	cout << "address: " << (void*)p_m << ' ' << "  value: " << *p_m << endl; p_m++;
	cout << "address: " << (void*)p_m << ' ' << "  value: " << *p_m << endl; p_m++;
	cout << "address: " << (void*)p_m << ' ' << "  value: " << *p_m << endl; p_m++;
	cout << "address: " << (void*)p_m << ' ' << "  value: " << *p_m << endl; p_m++;

	cout << "\npointer to char (1 bytes)\n";
	cout << "address: " << p_p << ' ' << "  value: " << *p_p << endl; p_p++;
	cout << "address: " << p_p << ' ' << "  value: " << *p_p << endl; p_p++;
	cout << "address: " << p_p << ' ' << "  value: " << *p_p << endl; p_p++;
	cout << "address: " << p_p << ' ' << "  value: " << *p_p << endl; p_p++;
	cout << "address: " << (void*)p_p << ' ' << "  value: " << *p_p << endl; p_p++;
	cout << "address: " << (void*)p_p << ' ' << "  value: " << *p_p << endl; p_p++;
	cout << "address: " << (void*)p_p << ' ' << "  value: " << *p_p << endl; p_p++;
	cout << "address: " << (void*)p_p << ' ' << "  value: " << *p_p << endl; p_p++;*/

	/*int a[] = { 1,2,3 };
	char ch[] = "abc";
	char* p = &ch[0];
	char ch2[3] = "a";
	cout << a << endl << ch << endl << p << endl << ch2 << endl;*/

	/*char c = '$';
	char* p = &c;
	cout << c << endl;
	cout << p << endl;*/

	/*char c[] = "abc";
	cout << c << endl;
	cout << c[0] << endl;
	cout << *c << endl;
	cout << &c << endl;
	cout << &c[0] << endl;*/

	/*char c[] = { "abc" };
	char* p = c;
	cout << &c << endl;
	cout << p << endl;
	cout << (void*)p << endl;*/

	/*char c[] = "abcd";
	printPattern(c);

	return 0;*/
	//}
	//void printPattern(char* ch) {
	//	if (*ch == '\0')
	//		return;
	//	printPattern(ch + 1);
	//	cout << ch << endl;
	//}

	//class myclass {
	//	int a, b;
	//public:
	//	myclass(int n, int m) { a = n; b = m; }
	//	int add() { return a + b; }
	//	void show();
	//};
	//void myclass::show() {
	//	int t;
	//	t = add();
	//	cout << t << "\n";
	//}
	//
	//int main() {
	//	myclass ob(10, 14);
	//	ob.show();
	//	return 0;
	//}

//int main() {
//	int* p;
//	//p = new int;
//	p = new int(9);
//	if (!p) {
//		cout << "Allocation error\n";
//		return 1;
//	}
//	//*p = 1000;
//	cout << "Here is integer at p: " << *p << "\n";
//	delete p;
//	return 0;
//}

////int f(int n);
//int f();
//int main() {
//	int i = 0;
//	//i = f(i);
//	i = f();
//	cout << "Here is i's new value: " << i << "\n";
//	return 0;
//}
////int f(int n) {
////	return n = 100;
////}
//int f() {
//	return 100;
//}

//void f(int* a);
//int main() {
//	int i = 0;
//	/*int* s = &i;
//	f(s);*/
//	f(&i);
//	cout << "Here is i's new value: " << i << "\n";
//	return 0;
//}
//void f(int* b) {
//	*b = 100;
//}

//void f(int& a);
//int main() {
//	int i = 0;
//	f(i);
//	cout << "Here is i's new value: " << i << "\n";
//	return 0;
//}
//void f(int& b) {
//	b = 100;
//}

//class myclass {
//	int x;
//public:
//	myclass() { x = 5; }
//	myclass(int n) { x = n; }
//	int getx() { return x; }
//};
//
//int main() {
//	myclass o1;
//	myclass o2(10);
//	myclass o3[5];
//	cout << "o1: " << o1.getx() << "\n";
//	cout << "o2: " << o2.getx() << "\n";
//}

//class myclass {
//	int x;
//public:
//	myclass() { x = 5; }
//	myclass(int n) { x = n; }
//	int getx() { return x; }
//};
//
//int main() {
//	myclass o1[10];
//	myclass o2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++) {
//		cout << "o1[" << i << "]:" << o1[i].getx() << "\n";
//		cout << "o2[" << i << "]:" << o2[i].getx() << "\n";
//	}
//}

//class strtype {
//	char* p;
//public:
//	strtype(const char* s) {
//		int l;
//		l = strlen(s) + 1;
//		p = new char[l];
//		if (!p) { cout << "Allocation error\n"; exit(1); }
//		strcpy_s(p, l, s);
//	}
//	~strtype() {
//		if (p[0] != -35)
//			delete[] p;
//	}
//	char* get() { return p; }
//};
//
//void show(strtype x) {
//	char* s;
//	s = x.get();
//	cout << s << "\n";
//}
//
//int main() {
//	strtype a("Hello"), b("There");
//	show(a);
//	show(b);
//	return 0;
//}

//class strtype {
//	char* p;
//public:
//	strtype(const char* s) {
//		int l;
//		l = strlen(s) + 1;
//		p = new char[l];
//		if (!p) { cout << "Allocation error\n"; exit(1); }
//		strcpy_s(p, l, s);
//	}
//	strtype(const strtype& y) {
//		int l;
//		l = strlen(y.p) + 1;
//		p = new char[l];
//		if (!p) { cout << "Allocation error\n"; exit(1); }
//		strcpy_s(p, l, y.p);
//	}
//	~strtype() {
//		delete[] p;
//	}
//	char* get() {
//		return p;
//	}
//};
//
//void show(strtype x) {
//	char* s;
//	s = x.get();
//	cout << s << "\n";
//}
//
//int main() {
//	strtype a("Hello"), b("There");
//	show(a);
//	show(b);
//	return 0;
//}

//class coord {
//	int x, y;
//public:
//	coord() { x = 0; y = 0; }
//	coord(int i, int j) { x = i; y = j; }
//	void get_xy(int& i, int& j) {
//		i = x;
//		j = y;
//	}
//	coord operator+(coord z);
//};
//coord coord::operator+(coord z) {
//	coord temp;
//	temp.x = x + z.x;
//	temp.y = y + z.y;
//	return temp;
//}
//
//int main() {
//	coord o1(10, 10), o2(5, 3), o3;
//	int x, y;
//	o3 = o1 + o2;
//	o3.get_xy(x, y);
//	cout << "(o1+o2) X: " << x << " Y: " << y << "\n";
//	return 0;
//}

//class coord {
//	int x, y;
//public:
//	coord() { x = 0; y = 0; }
//	coord(int i, int j) { x = i; y = j; }
//	void get_xy(int& i, int& j) {
//		i = x;
//		j = y;
//	}
//	friend coord operator+(coord m, coord n);
//};
//coord operator+(coord m, coord n) {
//	coord temp;
//	temp.x = m.x + n.x;
//	temp.y = m.y + n.y;
//	return temp;
//}
//
//int main() {
//	coord o1(10, 10);
//	coord o2(5, 3);
//	coord o3;
//	int x, y;
//	o3 = o1 + o2;
//	o3.get_xy(x, y);
//	cout << "(o1+o2) X: " << x << " Y: " << y << "\n";
//	return 0;
//}

//void swap(int*, int*);
//
//int main() {
//	int a, b;
//	cout << "Enter two numbers ";
//	cin >> a >> b;
//	cout << "\nOld values :  a = " << a << "\tb = " << b;
//	swap(&a, &b);
//	cout << "\nNew values :  a = " << a << "\tb = " << b;
//	return 0;
//}
//
//void swap(int* p1, int* p2) {
//	int temp;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}

//void swap(int&, int&);
//
//int main() {
//	int a, b;
//	cout << "Enter two numbers ";
//	cin >> a >> b;
//	cout << "\nOld values : a = " << a << "\tb = " << b;
//	swap(a, b);
//	cout << "\nNew values : a = " << a << "\tb = " << b;
//	return 0;
//}
//
//void swap(int& x, int& y) {
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//}

int* swap(int, int);

int main() {
	int a, b;
	cout << "Enter two numbers ";
	cin >> a >> b;
	cout << "\nOld values : a = " << a << "\tb = " << b;
	int* ptr = swap(a, b);
	a = ptr[0];
	b = ptr[1];
	cout << "\nNew values : a = " << a << "\tb = " << b;
	return 0;
}

int* swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	int a[2] = {};
	a[0] = x;
	a[1] = y;
	return a;
}
