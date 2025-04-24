#include <chrono>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <thread>

using namespace std;

static void randN1() {
  srand((unsigned)time(NULL));
  int randomNum = 0;
  ofstream randNum("randNum.txt");

  for (int i = 0; i < 100; i++) {
    randomNum = rand();
    randNum << to_string(randomNum) + "\n";
    cout << to_string(randomNum) + "\n";
    // this_thread::sleep_for(chrono::milliseconds(1234));
  }

  randNum.close();
}

static void randN2() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 100);
  double randomNum = 0;
  ofstream randNum("randNum.txt");

  for (int i = 0; i < 100; i++) {
    randomNum = ceil(dis(gen) * 100) / 100;
    randNum << to_string(randomNum) + "\n";
    cout << to_string(randomNum) + "\n";
    // cout << randomNum << endl;
  }

  randNum.close();
}

#include <iomanip>  // Add this include for std::setprecision

static void randN3() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 100);
  double randomNum = 0;
  ofstream randNum("randNum.txt");

  for (int i = 0; i < 100; i++) {
    ostringstream oss;
    randomNum = ceil(dis(gen) * 100 - 0.5) / 100;
    oss << std::setprecision(4) << randomNum;
    randNum << oss.str() + "\n";
    cout << oss.str() + "\n";
  }

  randNum.close();
}

#include <format>

static void randN4() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 100);
  double randomNum = 0;
  ofstream randNum("randNum.txt");

  for (int i = 0; i < 100; i++) {
    randomNum = ceil(dis(gen) * 100) / 100;
    randNum << format("{}\n", randomNum);
    cout << format("{}\n", randomNum);
  }

  randNum.close();
}

#include <cstdio>

static void randN5() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 100);
  double randomNum = 0;
  ofstream randNum("randNum.txt");

  for (int i = 0; i < 100; i++) {
    randomNum = ceil(dis(gen) * 100) / 100;
    randNum << format("%.2f\n", randomNum);
    cout << format("{}\n", randomNum);
  }

  randNum.close();
}

static void randN6() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1, 100);
  double randomNum = 0;
  ofstream randNum("randNum.txt");

  for (int i = 0; i < 100; i++) {
    ostringstream oss;
    randomNum = ceil(dis(gen) * 100) / 100;
    oss << fixed << std::setprecision(2) << randomNum;
    randNum << oss.str() + "\n";
    cout << oss.str() + "\n";
  }

  randNum.close();
}

int main() {
  // randN1();
  // randN2();
  // randN3();
  // randN4();
  // randN5();
  randN6();

  return 0;
}