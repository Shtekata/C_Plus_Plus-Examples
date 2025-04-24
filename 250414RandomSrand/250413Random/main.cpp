// #include <bits/stdc++.h>
#include <chrono>
#include <fstream>
#include <iostream>
// #include <thread>

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
  srand((unsigned)time(0));
  static int MY_RANGE_MAX = 200001;
  for (int i = 0; i < 100; i++)
    cout << (1.0 * rand() / RAND_MAX) * MY_RANGE_MAX << endl;
}

int main() {
  // randN1();
  randN2();

  return 0;
}