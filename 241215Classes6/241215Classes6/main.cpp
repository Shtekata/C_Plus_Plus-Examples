#include<iostream>
using namespace std;

//class vehicle {
//	int num_wheels;
//	int range;
//public:
//	vehicle(int w, int r) { num_wheels = w; range = r; }
//	void showv() { cout << "Wheels: " << num_wheels << endl << "Range: " << range << endl; }
//};
//
//class car :public vehicle {
//	int passengers;
//public:
//	car(int a, int b, int c) :vehicle(b, c) { passengers = a; }
//	void show() { showv(); cout << "Passengers: " << passengers << endl; }
//};
//
//class truck :public vehicle {
//	int loadlimit;
//public:
//	truck(int a, int b, int c) :vehicle(b, c) { loadlimit = a; }
//	void show() { showv(); cout << "loadlimit: " << loadlimit << endl; }
//};
//
//int main() {
//	car c(5, 4, 500);
//	truck t(30000, 12, 1200);
//	cout << "Car: \n"; c.show();
//	cout << "\nTruck: \n"; t.show();
//}

//class base {
//	int i;
//public:
//	void set_i(int n) { i = n; }
//	int get_i() { return i; }
//};
//
//class derived :public base {
//	int j;
//public:
//	void set_j(int n) { j = n; }
//	int mul() { return j * get_i(); }
//};
//
//int main() {
//	derived ob;
//	ob.set_i(10);
//	ob.set_j(5);
//	cout << ob.mul() << endl;
//	return 0;
//}

enum yn { good, bad };
enum color { red, yellow, green, orange };

void out(enum yn);
void outColor(enum color);
const char* b[] = { "good", "bad" };
const char* c[] = { "red","yellow","green","orange" };

class fruit {
public:
	enum yn annual;
	enum yn perennial;
	enum yn tree;
	enum yn tropical;
	enum color clr;
	char name[40];
};

class Apple :public fruit {
	enum yn cooking;
	enum yn crunchy;
	enum yn eating;
public:
	void seta(const char* n, enum color c, enum yn ck, enum yn crchy, enum yn e) {
		strcpy_s(name, n);
		annual = bad;
		perennial = good;
		tree = good;
		tropical = bad;
		clr = c;
		cooking = ck;
		crunchy = crchy;
		eating = e;
	}
	void show() {
		cout << name << " apple is: " << "\n";
		//cout << "Annual: "; out(annual);
		cout << "Annual: " << b[annual] << "\n";
		cout << "Perrennial: "; out(perennial);
		cout << "Tree: "; out(tree);
		cout << "Tropical: "; out(tropical);
		//cout << "Color: " << c[clr] << "\n";
		cout << "Color: "; outColor(clr);
		cout << "Good for cooking: "; out(cooking);
		cout << "Crunchy: "; out(crunchy);
		cout << "Good for eating: "; out(eating);
		cout << "\n";
	}
};

class Orange :public fruit {
	enum yn juice;
	enum yn sour;
	enum yn eating;
public:
	void seto(const char* n, enum color c, enum yn j, enum yn sr, enum yn e) {
		strcpy_s(name, n);
		annual = bad;
		perennial = good;
		tree = good;
		tropical = good;
		clr = c;
		juice = j;
		sour = sr;
		eating = e;
	}
	void show() {
		cout << name << " orange is: " << "\n";
		cout << "Annual: "; out(annual);
		cout << "Perrennial: "; out(perennial);
		cout << "Tree: "; out(tree);
		cout << "Tropical: "; out(tropical);
		cout << "Color: " << c[clr] << "\n";
		cout << "Good for juice: "; out(juice);
		cout << "Sour: "; out(sour);
		cout << "Good for eating: "; out(eating);
		cout << "\n";
	}
};

void out(enum yn x) {
	if (x == bad)cout << "bad\n";
	else cout << "good\n";
}

void outColor(enum color x) {
	switch (x)
	{
	case red: cout << "red\n";
		break;
	case yellow:cout << "yellow\n";
		break;
	case green:cout << "green\n";
		break;
	case orange:cout << "orange\n";
		break;
	}
}

int main() {
	Apple a1, a2;
	Orange o1, o2;

	a1.seta("Red Delicious", red, bad, good, good);
	a2.seta("Janathan", red, good, bad, good);
	o1.seto("Navel", orange, bad, bad, good);
	o2.seto("Valencia", orange, good, good, bad);
	a1.show(); a2.show(); o1.show(); o2.show();

	//char a[30];

	//for (int i = 0; i < 30; i++) {
	//	a[i] = i + 97;
	//	cout << "a[i] = " << a[i] << endl;
	//}
	//cout << endl;
	//for (int i = 0; i < 30; i++)
	//	cout << "a[i] = " << a[i] << endl;

	//char* str = "Hello";
	//const char* str = "Hello";
	//str[1] = 'o';
	//cout << str;
}
