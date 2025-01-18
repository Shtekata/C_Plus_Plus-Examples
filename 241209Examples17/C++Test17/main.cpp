#include <iostream>
#include <string>
using namespace std;
void student();
void printStudent(struct Student);
void student2();
void printStudent2(struct Student);
void students();
void firm();
void test();
void hospital();
void hospital2();

struct Student {
	char first_name[20];
	char second_name[20];
	char last_name[20];
	char egn[11];
	double sreden_uspeh;
};

int main() {
	student();
	//student2();
	//students();
	//firm();
	//test();
	//hospital();
	//hospital2();

	cout << "\n\n";
	return 0;
}

void student() {
	Student a = { "Petar","Ivanov","Dimitrov","9810147040",4.5 };
	printStudent(a);
}

void printStudent(Student x) {
	cout << x.first_name << endl;
	cout << x.second_name << endl;
	cout << x.last_name << endl;
	cout << x.egn << endl;
	cout << x.sreden_uspeh << endl;
}

void student2() {
	Student a;
	cout << "Ime: ";
	cin >> a.first_name;
	cout << "Prezime: ";
	cin >> a.second_name;
	cout << "Familia: ";
	cin >> a.last_name;
	cout << "EGN: ";
	cin >> a.egn;
	cout << "sreden uspeh: ";
	cin >> a.sreden_uspeh;
	printStudent2(a);
}

void printStudent2(Student x) {
	cout << x.first_name << ' ';
	cout << x.second_name << ' ';
	cout << x.last_name << " ";
	cout << x.egn << " ";
	cout << x.sreden_uspeh << " ";
}

void students() {
	Student students[35] = {};
	int n;
	cout << "Number of students: "; cin >> n; cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "First name: "; cin >> students[i].first_name;
		cout << "Second name: "; cin >> students[i].second_name;
		cout << "Last name: "; cin >> students[i].last_name;
		cout << "EGN: "; cin >> students[i].egn;
		cout << "Average grade: "; cin >> students[i].sreden_uspeh; cout << endl;
	}
	for (int i = 0; i < n; i++) {
		if (students[i].sreden_uspeh >= 5.5) {
			cout << students[i].first_name << ' ' << students[i].second_name << ' ' << students[i].last_name << ' ';
			cout << students[i].egn << ' ' << students[i].sreden_uspeh << ' ' << endl;
		}
	}

}

void firm() {
	struct Firma {
		char name[31];
		char egn[11];
		char position[21];
		double salary;
	};

	int n; cout << "Enter number of workers: ";
	cin >> n; cout << endl;
	Firma workers[21] = {};
	for (int i = 0; i < n; i++) {
		cout << "Enter " << i + 1 << " player data" << endl;
		cout << "Enter your name: ";
		//cin.get();
		cin.ignore();
		//cin.get(workers[i].name, 31);
		cin.getline(workers[i].name, 31);
		//cin >> workers[i].name;

		cout << "Enter your egn: ";
		cin >> workers[i].egn;
		cout << "Enter your position: ";
		cin >> workers[i].position;
		cout << "Enter your salary: ";
		cin >> workers[i].salary; cout << endl;
	}
	for (int i = 0; i < n; i++)
		if (workers[i].salary < 700)cout << workers[i].name << endl;
}

void test() {
	struct Asen {
		char name[20];
	};
	Asen sen[100] = {};
	for (int i = 0; i < 5; i++) {
		cout << "Enter your full name: " << endl;
		cin.get(sen[i].name, 20);
		cin.ignore();
		cout << sen[i].name << endl;

	}
}

void hospital() {
	struct Hospital {
		string name;
		string diagnosis;
		int days;
	};
	string disease;
	int numPatients;

	cout << "Enter number of patients: " << endl; cin >> numPatients;
	Hospital* patients{ new Hospital[numPatients]{} };

	for (int i = 0; i < numPatients; i++) {
		cin.ignore();
		cout << "Enter name of patient: " << endl; getline(cin, patients[i].name);
		cout << "The disease of patinent is: " << endl; cin >> patients[i].diagnosis;
		cout << "Patient stay is: " << endl; cin >> patients[i].days; cout << endl;
	}

	Hospital stay = patients[0];
	cout << "Enter disease: "; cin >> disease;

	for (int i = 0; i < numPatients; i++) {
		if (patients[i].days > stay.days)stay = patients[i];
		if (patients[i].diagnosis == disease)
			cout << "The people who have disease are: " << patients[i].name << endl;
	}

	cout << "The data for the person with the most days of stay is: " << stay.name << ' ' << stay.diagnosis << ' ' << stay.days;
	delete[] patients;
}

void hospital2() {
	struct Hospital {
		char name[30];
		char diagnosis[30];
		int days;
	};
	char disease[30];
	int numPatients;

	cout << "Enter number of patients: " << endl; cin >> numPatients;
	Hospital* patients{ new Hospital[numPatients]{} };

	for (int i = 0; i < numPatients; i++) {
		cin.ignore();
		cout << "Enter name of patient: " << endl; cin.getline(patients[i].name, 30);
		cout << "The disease of patinent is: " << endl; cin >> patients[i].diagnosis;
		cout << "Patient stay is: " << endl; cin >> patients[i].days; cout << endl;
	}

	int ind = 0, max = patients[0].days;
	cout << "Enter disease: "; cin >> disease;

	for (int i = 0; i < numPatients; i++) {
		if (patients[i].days > max) { max = patients[i].days; ind = i; }
		if (strcmp(patients[i].diagnosis, disease) == 0)
			cout << "The people who have disease are: " << patients[i].name << endl;
	}

	cout << "The data for the person with the most days of stay is: " << patients[ind].name << ' ' << patients[ind].diagnosis << ' ' << patients[ind].days;
	delete[] patients;
}