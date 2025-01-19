#include<iostream>
using namespace std;

//class myclass {
//	int a;
//public:
//	myclass();
//	~myclass();
//	void show();
//};
//myclass::myclass() {
//	cout << "In constructor\n";
//	a = 10;
//}
//myclass::~myclass() {
//	cout << "Destructing...\n";
//}
//void myclass::show() {
//	cout << a << "\n";
//}
//
//int main() {
//	myclass ob;
//	ob.show();
//
//	return 0;
//}

//class timer {
//	clock_t start = 0;
//	clock_t end = 0;
//public:
//	timer() { start = clock(); }
//	~timer() { end = clock(); cout << "Elapsed time: " << (end - start) / CLOCKS_PER_SEC << "\n"; }
//};
//
//int main() {
//	timer ob;
//	cout << "Press ENTER: "; cin.get();
//
//	return 0;
//}

//class stopwatch {
//	double begin, end;
//public:
//	stopwatch() { begin = end = 0.0; }
//	~stopwatch() { cout << "Stopwatch object being destroyed..."; show(); }
//	void start() { begin = (double)clock() / CLOCKS_PER_SEC; }
//	void stop() { end = (double)clock() / CLOCKS_PER_SEC; }
//	void show() { cout << "Elapsed time: " << end - begin << "\n"; }
//};
//
//int main() {
//	stopwatch watch;
//	long i;
//	watch.start();
//	for (i = 0; i < 320000000; i++);
//	for (i = 0; i < 32000; i++) cout << i << ' ';
//	watch.stop();
//	watch.show();
//
//	return 0;
//}

//class BaseClass1 {
//public:
//	BaseClass1() { cout << "Constructing BaseClass1\n"; }
//	~BaseClass1() { cout << "Destructing BaseClass1\n"; }
//};
//
//class BaseClass2 {
//public:
//	BaseClass2() { cout << "Constructing BaseClass2\n"; }
//	~BaseClass2() { cout << "Destructing BaseClass2\n"; }
//};
//
//class DerivedClass : public BaseClass1, public BaseClass2 {
//public:
//	DerivedClass() { cout << "Constructing DerivedClass\n"; }
//	~DerivedClass() { cout << "Destructing DerivedClass\n"; }
//};
//
//int main() {
//	DerivedClass ob;
//
//	return 0;
//}

//class myclass {
//	int a, b;
//public:
//	myclass(int x, int y) { cout << "In constructor\n"; a = x; b = y; }
//	void show() { cout << a << ' ' << b << "\n"; }
//};
//
//int main() {
//	myclass ob(5, 9);
//	ob.show();
//	return 0;
//}

class base {
public:
	base() { cout << "Constructing base class\n"; }
	~base() { cout << "Destructing base class\n"; }
};

class derived :public base {
	int j;
public:
	derived(int n) { cout << "Constructing derived class\n"; j = n; }
	~derived() { cout << "Destructing derived class\n"; }
	void showj() { cout << j << "\n"; }
};

int main() {
	derived o(10);
	o.showj();
	return 0;
}

