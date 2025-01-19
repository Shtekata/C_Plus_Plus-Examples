#include<iostream>
using namespace std;

class card {
	char title[80];
	char author[40];
	int number;
public:
	void store(const char* t, const char* name, int num);
	void show();
};
void card::store(const char* t, const char* name, int num) {
	strcpy_s(title, t);
	strcpy_s(author, name);
	number = num;
}
void card::show() {
	cout << "Title: " << title << "\n";
	cout << "Author: " << author << "\n";
	cout << "Number on hand: " << number << "\n";
}

int main() {
	card book1, book2, book3;

	book1.store("Dune", "Frank Herbert", 2);
	book2.store("The Foundation Trilogy", "Isaac Asimov", 2);
	book3.store("The Rainbow", "D. H. Lawrence", 1);

	book1.show();
	book2.show();
	book3.show();
	return 0;
}