#include<iostream>
using namespace std;
void books();
void strcpyy();
void printBook(struct Books* book, int);

struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main() {
	books();
	//strcpyy();

	return 0;
}

void books() {
	struct Books Book1;
	struct Books Book2;

	strcpy_s(Book1.title, "Learn C++ Programming");
	strcpy_s(Book1.author, "Chand Miyan");
	strcpy_s(Book1.subject, "C++ Programming");
	Book1.book_id = 6495407;

	strcpy_s(Book2.title, "Learn C++ Programming2");
	strcpy_s(Book2.author, "Chand Miyan2");
	strcpy_s(Book2.subject, "C++ Programming2");
	Book2.book_id = 6495408;

	/*struct Books* book;
	book = &Book1;
	printBook(book, 1);
	book = &Book2;
	printBook(book, 2);*/

	printBook(&Book1, 1);
	printBook(&Book2, 2);
}

void strcpyy() {
	char str1[] = "Sample string";
	char str2[40];
	char str3[40];
	strcpy_s(str2, str1);
	strcpy_s(str3, "copy successful");

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
}

void printBook(struct Books* book, int num) {
	cout << "Book " << num << " title: " << book->title << endl;
	cout << "Book " << num << " author: " << book->author << endl;
	cout << "Book " << num << " subject: " << book->subject << endl;
	cout << "Book " << num << " id: " << book->book_id << endl;
}