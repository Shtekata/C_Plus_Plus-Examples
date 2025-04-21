#include <deque>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

void vectorS() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  for (string car : cars) {
    cout << car << endl;
  }
  cout << cars[1] << endl;
  cout << cars.front() << endl;
  cout << cars.back() << endl;
  cout << cars.at(2) << endl;
  cout << cars.size() << endl;
  // cout << cars.at(6) << endl;
  // cout << cars[6] << endl;
  cars[0] = "Opel";
  cout << cars[0] << endl;
  cars.at(0) = "Volvo";
  cout << cars.at(0) << endl;
  cars.push_back("Toyota");
  cout << cars.back() << endl;
  cout << cars.size() << endl;
  cars.pop_back();
  cout << cars.size() << endl;
  cout << cars.empty() << endl;
  vector<string> cars2;
  cout << cars2.empty() << endl;
  for (int i = 0; i < cars.size(); i++) {
    cout << cars[i] << endl;
  }
}

void listS() {
  list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  for (string car : cars) {
    cout << car << endl;
  }
  cout << cars.front() << endl;
  cout << cars.back() << endl;
  cars.front() = "Opel";
  cars.back() = "Toyota";
  cout << cars.front() << endl;
  cout << cars.back() << endl;
  cars.push_front("Tesla");
  cars.push_back("VW");
  for (string car : cars) {
    cout << car << endl;
  }
  cars.pop_front();
  cars.pop_back();
  cout << "--------------" << endl;
  for (string car : cars) {
    cout << car << endl;
  }
  cout << cars.size() << endl;
  cout << cars.empty() << endl;
  list<string> cars2;
  cout << cars2.empty() << endl;
}

void stackS() {
  stack<string> cars;
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");
  cout << cars.top() << endl;
  cars.top() = "Tesla";
  cout << cars.top() << endl;
  cars.pop();
  cout << cars.top() << endl;
  cout << cars.size() << endl;
  cout << cars.empty() << endl;
  stack<string> cars2;
  cout << cars2.empty() << endl;
}

void queueS() {
  queue<string> cars;
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");
  cout << cars.front() << endl;
  cout << cars.back() << endl;
  cars.front() = "Tesla";
  cars.back() = "VW";
  cout << cars.front() << endl;
  cout << cars.back() << endl;
  cars.pop();
  cout << cars.front() << endl;
  cout << cars.size() << endl;
  cout << cars.empty() << endl;
  queue<string> cars2;
  cout << cars2.empty() << endl;
}

void dequeS() {
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  for (string car : cars) {
    cout << car << endl;
  }
  cout << cars[0] << endl << "---" << endl;
  cout << cars.front() << endl << "---" << endl;
  cout << cars.back() << endl << "---" << endl;
  cout << cars.at(2) << endl << "---" << endl;
  // cout << cars.at(6) << endl << "---" << endl;
  // cout << cars[6] << endl << "---" << endl;
  cars[0] = "Opel";
  cout << cars[0] << endl << "---" << endl;
  cars.at(0) = "Volvo";
  cout << cars.at(0) << endl << "---" << endl;
  cars.push_front("Tesla");
  cars.push_back("VW");
  for (string car : cars) {
    cout << car << endl;
  }
  cars.pop_front();
  cars.pop_back();
  cout << cars.size() << endl;
  cout << cars.empty() << endl;
  deque<string> cars2;
  cout << cars2.empty() << endl;
  for (int i = 0; i < cars.size(); i++) {
    cout << cars[i] << endl;
  }
}

int main() {
  cout << endl;

  // vectorS();
  // listS();
  // stackS();
  // queueS();
  dequeS();

  cout << endl;
  return 0;
}
