#include <chrono>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <queue>
#include <random>
#include <stack>
#include <vector>

using namespace std;

static void randBase() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 10000);
  double randomNum = 0;
  ofstream randNumFile("randNumRandom.txt");

  for (int i = 0; i < 100; i++) {
    ostringstream oss;
    randomNum = ceil(dis(gen) * 100 - 0.5) / 100;
    oss << randomNum;
    randNumFile << oss.str() + "\n";
    cout << oss.str() + "\n";
  }

  randNumFile.close();
}

static void randFile() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 10000);
  ofstream randNumFile("randNumRandom.txt");
  int num;
  cout << "Enter number of random numbers: ";
  cin >> num;

  for (int i = 0; i < num; i++) {
    stringstream sstr;
    sstr << fixed << std::setprecision(2) << setw(7) << setfill(' ')
         << dis(gen);
    randNumFile << sstr.str() + "\n";
    cout << sstr.str() + "\n";
  }

  randNumFile.close();
}

static void randArray() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 10000);
  double randomNumbers[100] = {};

  for (int i = 0; i < 100; i++)
    randomNumbers[i] = dis(gen);

  cout << fixed << setprecision(2) << setfill(' ');
  for (double number : randomNumbers)
    cout << setw(7) << number << "\n";
}

static void randNewArray() {
  int num;
  cout << "Enter number of random numbers: ";
  cin >> num;
  double min = 1;
  double max = 10000;
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(min, max);
  double* randomNumbers = new double[num];

  for (int i = 0; i < num; i++)
    randomNumbers[i] = dis(gen);

  cout << fixed << setprecision(2) << setfill(' ');
  for (double* i = randomNumbers; *i >= min && *i <= max; i++)
    cout << setw(7) << *i << "\n";
}

static void randVector() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 10000);
  vector<double> randomNumbers;

  for (int i = 0; i < 100; i++)
    randomNumbers.push_back(dis(gen));

  cout << fixed << setprecision(2) << setfill(' ');
  for (double number : randomNumbers)
    cout << setw(7) << number << "\n";
}

static void randList() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 10000);
  list<double> randomNumbers = {};
  int num;
  cout << "Enter number of random numbers: ";
  cin >> num;

  for (int i = 0; i < num; i++)
    randomNumbers.push_front(dis(gen));

  cout << fixed << setprecision(2) << setfill(' ');
  for (double number : randomNumbers)
    cout << setw(7) << number << "\n";
}

static void randStack() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 10000);
  stack<double> randomNumbers = {};
  int num;
  cout << "Enter number of random numbers: ";
  cin >> num;

  for (int i = 0; i < num; i++)
    randomNumbers.push(dis(gen));

  int size = randomNumbers.size();
  cout << fixed << setprecision(2) << setfill(' ');
  for (int i = 0; i < size; i++) {
    cout << setw(7) << randomNumbers.top() << " | Size: " << setw(3)
         << randomNumbers.size() << " | i: " << setw(3) << i << "\n";
    randomNumbers.pop();
  }
}

static void randQueue() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 10000);
  queue<double> randomNumbers = {};
  int num;
  cout << "Enter number of random numbers: ";
  cin >> num;

  for (int i = 0; i < num; i++)
    randomNumbers.push(dis(gen));

  int size = randomNumbers.size();
  cout << fixed << setprecision(2) << setfill(' ');
  for (int i = 0; i < size; i++) {
    cout << setw(7) << randomNumbers.front() << " | Size: " << setw(3)
         << randomNumbers.size() << " | i: " << setw(3) << i << "\n";
    randomNumbers.pop();
  }
}

static void randDeque() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 10000);
  deque<double> randomNumbers = {};
  int num;
  cout << "Enter number of random numbers: ";
  cin >> num;

  for (int i = 0; i < num; i++)
    randomNumbers.push_front(dis(gen));

  cout << fixed << setprecision(2) << setfill(' ');
  for (double number : randomNumbers)
    cout << setw(7) << number << "\n";
}

int main() {
  // randBase();
  randFile();
  // randArray();
  // randNewArray();
  // randVector();
  // randList();
  // randStack();
  // randQueue();
  // randDeque();

  return 0;
}