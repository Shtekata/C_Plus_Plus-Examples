#include <format>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <random>
#include <sstream>
#include <vector>

using namespace std;

static void inputData(int&, int&, int&);
static void randToFile(int&, int&, int&);
static void fileToVector(string&, vector<string>&);
static void analyze(int&, int&, vector<string>&);

int main() {
	int num;
	int minRand;
	int maxRand;
	string line;
	vector<string> randomNumbers;
	inputData(num, minRand, maxRand);
	randToFile(num, minRand, maxRand);
	fileToVector(line, randomNumbers);
	analyze(minRand, maxRand, randomNumbers);

	return 0;
}

static void inputData(int& a, int& b, int& c) {
	cout << "Enter number of random numbers: ";
	cin >> a;
	b = 1;
	c = 100;
	cout << "\n\n";
}

static void randToFile(int& a, int& b, int& c) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(b, c);

	ofstream randNumFile("randomNumbers.txt");
	for (int i = 0; i < a; i++) {
		stringstream sstr;
		sstr << fixed << std::setprecision(2) << setw(7) << setfill(' ')
			<< dis(gen);
		randNumFile << sstr.str() + "\n";
	}
	randNumFile.close();
}

static void fileToVector(string& a, vector<string>& b) {
	ifstream randNumFile("randomNumbers.txt");
	while (getline(randNumFile, a))
		b.push_back(a);
	randNumFile.close();
}

static void analyze(int& a, int& b, vector<string>& c) {
	map<string, int> hitCountMap;
	for (int i = a; i <= b; i++) {
		if (i < 10)
			hitCountMap[format("  {}", i)] = 0;
		else if (i < 100)
			hitCountMap[format(" {}", i)] = 0;
		else
			hitCountMap[format("{}", i)] = 0;
	}

	int tempNum = 0;
	double iterat = 0;
	ofstream percFile("percentages.txt");

	for (string number : c) {
		tempNum = stoi(number);
		iterat++;
		if (iterat < 10) {
			cout << format("Random Number №       {} ", iterat);
			percFile << format("Random Number №       {} ", iterat);
		}
		else if (iterat < 100) {
			cout << format("Random Number №      {} ", iterat);
			percFile << format("Random Number №      {} ", iterat);
		}
		else if (iterat < 1000) {
			cout << format("Random Number №     {} ", iterat);
			percFile << format("Random Number №     {} ", iterat);
		}
		else if (iterat < 10000) {
			cout << format("Random Number №    {} ", iterat);
			percFile << format("Random Number №    {} ", iterat);
		}
		else if (iterat < 100000) {
			cout << format("Random Number №   {} ", iterat);
			percFile << format("Random Number №   {} ", iterat);
		}
		else if (iterat < 1000000) {
			cout << format("Random Number №  {} ", iterat);
			percFile << format("Random Number №  {} ", iterat);
		}
		else {
			cout << format("Random Number № {} ", iterat);
			percFile << format("Random Number № {} ", iterat);
		}
		if (tempNum < 10) {
			cout << format("is:   {} \n\n", tempNum);
			percFile << format("is:   {} \n\n", tempNum);
			hitCountMap[format("  {}", tempNum)]++;
		}
		else if (tempNum < 100) {
			cout << format("is:  {} \n\n", tempNum);
			percFile << format("is:  {} \n\n", tempNum);
			hitCountMap[format(" {}", tempNum)]++;
		}
		else {
			cout << format("is: {} \n\n", tempNum);
			percFile << format("is: {} \n\n", tempNum);
			hitCountMap[format("{}", tempNum)]++;
		}
	}

	map<string, double> percentagesMap;
	int minCount = iterat;
	int maxCount = 0;
	double minPerc = 100;
	double maxPerc = 0;

	for (const auto& number : hitCountMap) {
		if (number.second < 10) {
			cout << format("\n {}_count:    {}", number.first, number.second);
			percFile << format("\n {}_count:    {}", number.first, number.second);
		}
		else if (number.second < 100) {
			cout << format("\n {}_count:   {}", number.first, number.second);
			percFile << format("\n {}_count:   {}", number.first, number.second);
		}
		else if (number.second < 1000) {
			cout << format("\n {}_count:  {}", number.first, number.second);
			percFile << format("\n {}_count:  {}", number.first, number.second);
		}
		else {
			cout << format("\n {}_count: {}", number.first, number.second);
			percFile << format("\n {}_count: {}", number.first, number.second);
		}
		percentagesMap[number.first] = number.second / iterat * 100;
		if (minCount > number.second)
			minCount = number.second;
		if (maxCount < number.second)
			maxCount = number.second;
	}

	cout << "\n\n" << fixed << setprecision(2) << setfill(' ');
	percFile << "\n\n";
	for (const auto& number : percentagesMap) {
		cout << format(
			"\n The percentage of numbers with а value {} in the range "
			"{} to {} is: ",
			number.first, a, b)
			<< setw(5) << number.second << " %";
		percFile
			<< fixed << setprecision(2) << setfill(' ')
			<< format(
				"\n The percentage of numbers with а value {} in the range "
				"{} to {} is: ",
				number.first, a, b)
			<< setw(5) << number.second << " %";
		if (minPerc > number.second)
			minPerc = number.second;
		if (maxPerc < number.second)
			maxPerc = number.second;
	}
	cout << fixed << setprecision(2) << setfill(' ');
	cout << format("\n\n Min count: {}, Min percentage: ", minCount) << setw(5) << minPerc << " %";
	cout << format("\n Max count: {}, Max percentage: ", maxCount) << setw(5) << maxPerc << " % \n\n";
	percFile << format("\n\n Min count: {}, Min percentage: ", minCount)
		<< fixed << setprecision(2) << setfill(' ') << setw(5) << minPerc << " %";
	percFile << format("\n Max count: {}, Max percentage: ", maxCount)
		<< fixed << setprecision(2) << setfill(' ') << setw(5) << maxPerc << " % \n\n";
	percFile.close();
}