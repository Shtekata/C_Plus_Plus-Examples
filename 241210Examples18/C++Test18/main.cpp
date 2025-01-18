#include<iostream>
#include<string>
#include<sstream>
using namespace std;
void people();
void student();
void telephone();

int main() {
	//people();
	//student();
	telephone();

	cout << "\n\n";
	return 0;
}

void people() {
	struct People {
		char first_name[16];
		char last_name[16];
		char egn[11];
	};
	int n; cout << "Enter number of people: "; cin >> n; cout << endl;
	People* people{ new People[n]{} };
	//People* people = new People[n];
	int* arr{ new int[n + 1] {} };
	int i, j, swap;

	for (i = 0; i < n; i++) {
		cout << "Enter person number " << i + 1 << " First name: "; cin >> people[i].first_name;
		cout << "Enter person number " << i + 1 << " Last name: "; cin >> people[i].last_name;
		cout << "Enter person number " << i + 1 << " EGN: "; cin >> people[i].egn; cout << endl;
		arr[i] = i;
	}

	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1; j++)
			if (strcmp(people[arr[j]].first_name, people[arr[j + 1]].first_name) > 0) {
				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}

	for (i = 0; i < n; i++)
		cout << people[arr[i]].first_name << ' ' << people[arr[i]].last_name << ' ' << people[arr[i]].egn << endl;

	delete[]people;
	delete[]arr;
}

void student() {
	struct Student {
		char name[30];
		char facNumber[12];
		char major[20];
		float grade;
	};
	int i, n;
	cout << "Please enter number of students: "; cin >> n; cout << endl;
	Student* student{ new Student[n]{} };

	Student* q;
	q = student;

	for (i = 0; i < n; i++) {
		cout << "Please enter name: "; cin >> (q + i)->name;
		cout << "Please enter faculty number: "; cin >> (q + i)->facNumber;
		cout << "Please enter major: "; cin >> (q + i)->major;
		cout << "Please enter grade: "; cin >> (q + i)->grade; cout << endl;
	}

	cout << "The following data has been entered: " << endl;
	for (i = 0; i < n; i++) {
		cout << (q + i)->name << ' ' << (q + i)->facNumber << ' ' << (q + i)->major << ' ' << (q + i)->grade << endl;
	}
	delete[]student;
}

void telephone() {
	struct Telephone {
		string name;
		int number;
	};
	struct Telephone index = {};
	index.name = "Jane Monroe";
	index.number = 12345;
	cout << "Name: " << index.name << endl;
	cout << "Telephone number: " << index.number;
}
