// #include <bits/stdc++.h>
#include <chrono>
#include <fstream>
#include <iostream>
#include <random>
// #include <thread>
#include <vector>

using namespace std;

static void randN1() {
  srand((unsigned)time(NULL));
  int randomNum = 0;
  ofstream randNumFile("randNumSrand.txt");

  for (int i = 0; i < 100; i++) {
    randomNum = rand();
    randNumFile << to_string(randomNum) + "\n";
    cout << to_string(randomNum) + "\n";
    // this_thread::sleep_for(chrono::milliseconds(1234));
  }

  randNumFile.close();
}

static void randN2() {
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

static void randN3() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 10000);
  ofstream randNumFile("randNumRandom.txt");
  vector<double> randomNumbers;
  double number = 0;
  double numberFormat = 0;

  for (int i = 0; i < 100; i++) {
    number = dis(gen);
    stringstream sstr;
    sstr << fixed << std::setprecision(2) << setw(7) << setfill(' ')
         << number;
    randNumFile << sstr.str() + "\n";
    cout << sstr.str() + "\n";
    sstr >> numberFormat;
    randomNumbers.push_back(numberFormat);
  }

  cout << fixed << setprecision(2) << setfill(' ');
  for (double number : randomNumbers)
    cout << setw(7) << number << "\n\n";

  randNumFile.close();
}

static void randN4() {
  srand((unsigned)time(0));
  static int MY_RANGE_MAX = 200001;
  for (int i = 0; i < 100; i++)
    cout << (1.0 * rand() / RAND_MAX) * MY_RANGE_MAX << endl;
}

int main() {
  // randN1();
  // randN2();
  randN3();
  // randN4();

  return 0;
}