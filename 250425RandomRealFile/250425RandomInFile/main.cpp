#include <fstream>
#include <iomanip>
#include <iostream>
#include <random>
#include <sstream>
#include <vector>

using namespace std;

static void inputData(int&, double&, double&);
static void randToFile(int&, double&, double&);
static void fileToVector(string&, vector<string>&);
static void analyze(double&, double&, vector<string>&);

int main() {
	int num;
	double minRand;
	double maxRand;
	string line;
	vector<string> randomNumbers;
	inputData(num, minRand, maxRand);
	randToFile(num, minRand, maxRand);
	fileToVector(line, randomNumbers);
	analyze(minRand, maxRand, randomNumbers);

	return 0;
}

static void inputData(int& a, double& b, double& c) {
	cout << "Enter number of random numbers: ";
	cin >> a;
	cout << endl << "Enter mimimun value of random numbers: ";
	cin >> b;
	cout << endl << "Enter maximum value of random numbers: ";
	cin >> c;
}

static void randToFile(int& a, double& b, double& c) {
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> dis(b, c);

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

static void analyze(double& a, double& b, vector<string>& c) {
	double perc__0_10Count = 0;
	double perc_10_20Count = 0;
	double perc_20_30Count = 0;
	double perc_30_40Count = 0;
	double perc_40_50Count = 0;
	double perc_50_60Count = 0;
	double perc_60_70Count = 0;
	double perc_70_80Count = 0;
	double perc_80_90Count = 0;
	double perc90_100Count = 0;
	double tempUnit = (b - a) / 10;
	double iterat = 0;
	double tempNum = 0;
	ofstream percFile("percentages.txt");

	for (string number : c) {
		iterat++;
		tempNum = stod(number);
		if (tempNum < tempUnit + a)
			perc__0_10Count++;
		else if (tempNum < tempUnit * 2 + a)
			perc_10_20Count++;
		else if (tempNum < tempUnit * 3 + a)
			perc_20_30Count++;
		else if (tempNum < tempUnit * 4 + a)
			perc_30_40Count++;
		else if (tempNum < tempUnit * 5 + a)
			perc_40_50Count++;
		else if (tempNum < tempUnit * 6 + a)
			perc_50_60Count++;
		else if (tempNum < tempUnit * 7 + a)
			perc_60_70Count++;
		else if (tempNum < tempUnit * 8 + a)
			perc_70_80Count++;
		else if (tempNum < tempUnit * 9 + a)
			perc_80_90Count++;
		else if (tempNum <= tempUnit * 10 + a)
			perc90_100Count++;

		cout << number << "\n perc__0_10Count: " << perc__0_10Count
			<< "\n perc_10_20Count: " << perc_10_20Count
			<< "\n perc_20_30Count: " << perc_20_30Count
			<< "\n perc_30_40Count: " << perc_30_40Count
			<< "\n perc_40_50Count: " << perc_40_50Count
			<< "\n perc_50_60Count: " << perc_50_60Count
			<< "\n perc_60_70Count: " << perc_60_70Count
			<< "\n perc_70_80Count: " << perc_70_80Count
			<< "\n perc_80_90Count: " << perc_80_90Count
			<< "\n perc90_100Count: " << perc90_100Count << "\n\n";

		percFile << number << "\n perc__0_10Count: " << perc__0_10Count
			<< "\n perc_10_20Count: " << perc_10_20Count
			<< "\n perc_20_30Count: " << perc_20_30Count
			<< "\n perc_30_40Count: " << perc_30_40Count
			<< "\n perc_40_50Count: " << perc_40_50Count
			<< "\n perc_50_60Count: " << perc_50_60Count
			<< "\n perc_60_70Count: " << perc_60_70Count
			<< "\n perc_70_80Count: " << perc_70_80Count
			<< "\n perc_80_90Count: " << perc_80_90Count
			<< "\n perc90_100Count: " << perc90_100Count << "\n\n";
	}
	double allPercCount = 0;
	int minCount = iterat;
	int maxCount = 0;
	vector<double> counts = { perc__0_10Count, perc_10_20Count, perc_20_30Count, perc_30_40Count,
		perc_40_50Count, perc_50_60Count, perc_60_70Count, perc_70_80Count, perc_80_90Count, perc90_100Count };
	for (double count : counts) {
		if (count < minCount) {
			minCount = count;
		}
		if (count > maxCount) {
			maxCount = count;
		}
		allPercCount += count;
	}
	double perc__0_10 = perc__0_10Count / allPercCount * 100;
	double perc_10_20 = perc_10_20Count / allPercCount * 100;
	double perc_20_30 = perc_20_30Count / allPercCount * 100;
	double perc_30_40 = perc_30_40Count / allPercCount * 100;
	double perc_40_50 = perc_40_50Count / allPercCount * 100;
	double perc_50_60 = perc_50_60Count / allPercCount * 100;
	double perc_60_70 = perc_60_70Count / allPercCount * 100;
	double perc_70_80 = perc_70_80Count / allPercCount * 100;
	double perc_80_90 = perc_80_90Count / allPercCount * 100;
	double perc90_100 = perc90_100Count / allPercCount * 100;
	double minPerc = 100;
	double maxPerc = 0;
	vector<double> percents = { perc__0_10, perc_10_20, perc_20_30, perc_30_40,
		perc_40_50, perc_50_60, perc_60_70, perc_70_80, perc_80_90, perc90_100 };
	for (double percent : percents) {
		if (percent < minPerc) {
			minPerc = percent;
		}
		if (percent > maxPerc) {
			maxPerc = percent;
		}
	}

	cout << fixed << setprecision(2) << setfill(' ');
	cout << "\n The percentage of numbers with values between  0 and  10 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc__0_10 << " %"
		<< "\n The percentage of numbers with values between 10 and  20 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_10_20 << " %"
		<< "\n The percentage of numbers with values between 20 and  30 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_20_30 << " %"
		<< "\n The percentage of numbers with values between 30 and  40 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_30_40 << " %"
		<< "\n The percentage of numbers with values between 40 and  50 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_40_50 << " %"
		<< "\n The percentage of numbers with values between 50 and  60 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_50_60 << " %"
		<< "\n The percentage of numbers with values between 60 and  70 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_60_70 << " %"
		<< "\n The percentage of numbers with values between 70 and  80 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_70_80 << " %"
		<< "\n The percentage of numbers with values between 80 and  90 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_80_90 << " %"
		<< "\n The percentage of numbers with values between 90 and 100 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc90_100 << " %"
		<< "\n\n" << fixed << setprecision(2) << setfill(' ')
		<< format("\n\n Min count: {}, Min percentage: ", minCount) << setw(5) << minPerc << " %"
		<< format("\n Max count: {}, Max percentage: ", maxCount) << setw(5) << maxPerc << " % \n\n";

	percFile
		<< fixed << setprecision(2) << setfill(' ')
		<< "\n The percentage of numbers with values between  0 and  10 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc__0_10 << " %"
		<< "\n The percentage of numbers with values between 10 and  20 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_10_20 << " %"
		<< "\n The percentage of numbers with values between 20 and  30 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_20_30 << " %"
		<< "\n The percentage of numbers with values between 30 and  40 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_30_40 << " %"
		<< "\n The percentage of numbers with values between 40 and  50 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_40_50 << " %"
		<< "\n The percentage of numbers with values between 50 and  60 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_50_60 << " %"
		<< "\n The percentage of numbers with values between 60 and  70 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_60_70 << " %"
		<< "\n The percentage of numbers with values between 70 and  80 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_70_80 << " %"
		<< "\n The percentage of numbers with values between 80 and  90 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc_80_90 << " %"
		<< "\n The percentage of numbers with values between 90 and 100 % "
		"of the range: "
		<< a << " - " << b << " values is: " << setw(5) << perc90_100 << " %"
		<< "\n\n" << format("\n\n Min count: {}, Min percentage: ", minCount)
		<< fixed << setprecision(2) << setfill(' ') << setw(5) << minPerc << " %"
		<< format("\n Max count: {}, Max percentage: ", maxCount)
		<< fixed << setprecision(2) << setfill(' ') << setw(5) << maxPerc << " % \n\n";
	percFile.close();
}