#include<iostream>
#include<string>
#include<sstream>
#include<map>

using namespace std;

static void arr3x3() {
	int arr[3][3] = { {1,5,2},{4,6,9},{8,3,7} };
	int row = 0;
	int col = 0;
	for (row = 0; row < 3; row++) {
		for (col = 0; col < 3; col++)cout << row << col << arr[row][col];
		cout << ' ';
	}
}

static void difference() {
	int c, d, m, n, first[10][10] = {}, second[10][10] = {}, difference[10][10] = {};
	cout << "Enter the number of rows and columns of matrix: "; cin >> m >> n;
	cout << "Enter the elements of first matrix: ";
	for (c = 0; c < m; c++)
		for (d = 0; d < n; d++)
			cin >> first[c][d];
	cout << "Enter the elements of second matrix: ";
	for (c = 0; c < m; c++)
		for (d = 0; d < n; d++)
			cin >> second[c][d];
	for (c = 0; c < m; c++)
		for (d = 0; d < n; d++)
			difference[c][d] = first[c][d] - second[c][d];
	cout << "Difference of entered matrices: ";
	for (c = 0; c < m; c++)
		for (d = 0; d < n; d++)
			cout << difference[c][d];
}

static void difference2() {
	int i, j, m, n;
	cout << "Enter the number of rows and columns of matrix: "; cin >> m >> n;
	int* arr1 = new int[m * n];
	int* arr2 = new int[m * n];
	int* difference = new int[m * n];
	cout << "Enter the elements of first matrix: " << endl;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> *(arr1 + i * n + j);
	cout << "Enter the elements of second matrix: " << endl;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> *(arr2 + i * n + j);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			*(difference + i * n + j) = *(arr1 + i * n + j) - *(arr2 + i * n + j);
	cout << "Difference of entered matrices: " << endl;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			cout << *(difference + i * n + j) << ' ';
		cout << endl;
	}
	delete[]arr1; delete[]arr2; delete[]difference;
}

static void difference3() {
	int i, j, m, n, c = 0;
	cout << "Enter the number of rows and columns of matrix: "; cin >> m >> n;
	int** arr1 = new int* [m];
	for (i = 0; i < m; i++)arr1[i] = new int[n];
	int** arr2 = new int* [m];
	for (i = 0; i < m; i++)arr2[i] = new int[n];
	int** difference = new int* [m];
	for (i = 0; i < m; i++)difference[i] = new int[n];
	cout << "Enter the elements of first matrix: " << endl;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> arr1[i][j];
	cout << "Enter the elements of second matrix: " << endl;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> arr2[i][j];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			difference[i][j] = arr1[i][j] - arr2[i][j];
	cout << "Difference of entered matrices: " << endl;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			cout << difference[i][j] << ' ';
		cout << endl;
	}
	for (i = 0; i < m; i++)delete[]arr1[i];
	for (i = 0; i < m; i++)delete[]arr2[i];
	for (i = 0; i < m; i++)delete[]difference[i];
	delete[]arr1; delete[]arr2; delete[]difference;
}

static void serverUsers() {
	int serverUsers[5][2] = { 1,14,2,28,3,19,4,8,5,15 };
	int i, server;
	cout << "Enter the server number: "; cin >> server;
	for (i = 0; i < 5; i++)
		if (server == serverUsers[i][0]) {
			cout << "There are " << serverUsers[i][1] << " users on server " << server << '.';
			break;
		}
	if (i == 5)cout << "Server not listed.\n";
}

static void textMatrix() {
	char text[10][80] = {};
	int i;
	string column;
	for (i = 0; i < 10; i++) {
		cout << i + 1 << ": ";
		cin.getline(text[i], 80);
		/*getline(cin, column);
		strcpy_s(text[i], column.c_str());*/
	}
	do {
		cout << "Enter number of string (1-10): ";
		cin >> i;
		i--;
		if (i >= 0 && i < 10)cout << text[i] << endl;
	} while (i >= 0);
}

void printFrequency() {
	string s = "Geeks For Geeks Ide";
	map<string, int> a;
	stringstream ss(s);
	string word;
	while (ss >> word) a[word]++;
	for (auto m : a)
		cout << m.first << " -> " << m.second << '\n';
}

int main() {
	//arr3x3();
	//difference();
	//difference2();
	//difference3();
	//serverUsers();
	//textMatrix();
	printFrequency();

	cout << "\n\n";
	return 0;
}