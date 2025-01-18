#include<iostream>
#include<string>
#include<sstream>
using namespace std;
struct Movies {
	string title;
	int year = 0;
}films[3];
void printMovie(Movies movie);
void movies();
void count();
void stingstreamTest();
int countWords(string);
void movies2();
void movies3();
void movies4();
void movies5();

int main() {
	//movies();
	//count();
	//stingstreamTest();
	//movies2();
	//movies3();
	movies4();
	//movies5();

	cout << "\n\n";
	return 0;
}

void printMovie(Movies movie) {
	cout << movie.title;
	cout << "(" << movie.year << ")\n";
}

void movies() {
	//Movies movies[3];
	string mystr;

	for (int i = 0; i < 3; i++) {
		cout << "Enter title: "; getline(cin, films[i].title);
		cout << "Enter year: "; getline(cin, mystr);
		stringstream(mystr) >> films[i].year;
	}

	cout << "\nYou have entered these movies:\n";
	for (int i = 0; i < 3; i++)printMovie(films[i]);
}

void count() {
	string s = "geeks for geeks geeks "
		"contribution placements";
	cout << " Number of words are: " << countWords(s);
}

int countWords(string str) {
	stringstream s(str);
	string word;
	int count = 0;
	while (s >> word) count++;
	return count;
}

void stingstreamTest() {
	string x;
	int y;
	string z;
	int val = 123;
	string val2 = "Ala Bala";
	stringstream geek;
	stringstream geek2;
	stringstream geek3;
	geek << val;
	geek >> x;
	geek2 << val;
	geek2 >> y;
	geek3 << val2;
	geek3 >> z;
	cout << x + "4" << endl;
	cout << y + 4 << endl;
	cout << z + "9" << endl;
}

void movies2() {
	int n;
	cout << "Enter number of movies: "; cin >> n;
	//Movies* pmovies{ new Movies[3]{} };
	Movies movies[3];
	/*Movies* a;
	a = &movies[0];*/
	Movies(*pmovies)[3] = &movies;
	/*Movies movie;
	Movies* vmovie;
	vmovie = &movie;*/
	string mystr;
	string title;
	cin.get();

	//for (int i = 0; i < 3; i++) {
	//	cout << "Enter title: "; getline(cin, pmovies[i].title);
	//	cout << "Enter year: "; getline(cin, mystr);
	//	stringstream(mystr) >> pmovies[i].year;
	//}

	for (int i = 0; i < 3; i++) {
		//cout << "Enter title: ";  (*pmovies)[1].title = "ala bala";
		//cout << "Enter year: "; (*pmovies)[1].year = 7;
		cout << "Enter title: "; getline(cin, title);
		cout << "Enter year: "; getline(cin, mystr);
		stringstream(title) >> (*pmovies)[i].title;
		stringstream(mystr) >> (*pmovies)[i].year;
	}

	cout << "\nYou have entered these movies:\n";
	for (int i = 0; i < 3; i++)
		printMovie(movies[i]);

	/*(*pmovies)[0].title = "as";
	(*pmovies)[0].year = 7;
	(*pmovies)[1].title = "asa";
	(*pmovies)[1].year = 8;
	(*pmovies)[2].title = "asdv";
	(*pmovies)[2].year = 9;*/
}

void movies3() {
	int n;
	cout << "Enter number of movies: "; cin >> n;
	//Movies* pmovies{ new Movies[n]{} };
	cin.get();
	Movies* pmovies = new Movies[n];
	string mystr;
	string title;

	for (int i = 0; i < n; i++) {
		cout << "Enter title: "; getline(cin, title);
		stringstream(title) >> pmovies[i].title;
		cout << "Enter year: "; getline(cin, mystr);
		stringstream(mystr) >> pmovies[i].year;
	}

	cout << "\nYou have entered these movies:\n";
	for (int i = 0; i < n; i++)
		printMovie(pmovies[i]);
}

void movies4() {
	Movies movies[3];
	Movies(*pmovies)[3];
	pmovies = &movies;
	string mystr;

	for (int i = 0; i < 3; i++) {
		cout << "Enter title: "; getline(cin, (*pmovies)[i].title);
		cout << "Enter year: "; getline(cin, mystr);
		stringstream(mystr) >> (*pmovies)[i].year;
	}

	cout << "\nYou have entered these movies:\n";
	for (int i = 0; i < 3; i++)
		printMovie((*pmovies)[i]);
}

void movies5() {
	int n;
	cout << "Enter number of movies: "; cin >> n; cin.get();
	Movies* pmovies = new Movies[n];
	string mystr;

	for (int i = 0; i < n; i++) {
		cout << "Enter title: "; getline(cin, pmovies->title);
		cout << "Enter year: "; getline(cin, mystr);
		stringstream(mystr) >> pmovies->year;
		pmovies++;
	}

	cout << "\nYou have entered these movies:\n";
	for (int i = -n; i < 0; i++)
		printMovie(pmovies[i]);

	pmovies -= n;
	delete[]pmovies;
}