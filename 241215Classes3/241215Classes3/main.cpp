#include<iostream>
using namespace std;

class addr {
	char name[40];
	char street[40];
	char city[30];
	char zip[10];
public:
	void store(const char* n, const char* s, const char* c, const char* z);
	void display();
};
void addr::store(const char* n, const char* s, const char* c, const char* z) {
	strcpy_s(name, n);
	strcpy_s(street, s);
	strcpy_s(city, c);
	strcpy_s(zip, z);
}
void addr::display() {
	cout << name << " ";
	cout << street << " ";
	cout << city << " ";
	cout << zip << endl;
}

int main() {
	addr a;
	a.store("Kaufland", "bul. Ovcha Kupel 136", "Sofia", "1306");
	a.display();
	return 0;
}