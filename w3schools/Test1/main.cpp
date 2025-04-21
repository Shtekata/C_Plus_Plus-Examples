#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void myFunction(int myN[5], int x) {
  for (int i = 0; i < 5; i++) {
    myN[i] += x;
  }
}

void test1() {
  std::vector<string> cars = {"Volvo", "BMW", "Ford"};
  cars.push_back("Tesla");
  for (int i = 0; i < cars.size(); i++) {
    cout << cars[i] << endl;
  }
  std::vector<int> myNumbers = {10, 20, 30, 40};
  std::string greeting = "Hello";
  std::cout << "Hello, World!" << std::endl;
  string food = "Pizza";
  string* ptr = &food;
  cout << ptr << endl;
  cout << *ptr << endl;
  *ptr = "Hamburger";
  cout << food << endl;
  int myNum[5] = {10, 20, 30, 40, 50};
  myFunction(myNum, 9);
  for (int i = 0; i < 5; i++) {
    cout << myNum[i] << endl;
  }
}

void test2() {
  ofstream MyFile("filename.txt");
  MyFile
      << " 0 Files can be tricky, but it is fun enough! \n 1 Files can be "
         "tricky, but it is fun enough!\n 2 Files can be tricky, but it is "
         "fun enough! \n 3 Files can be tricky, but it is fun enough! \n 4 "
         "Files can be tricky, but it is fun enough! \n 5 Files can be "
         "tricky, but it is fun enough! \n 6 Files can be tricky, but it is "
         "fun enough! \n 7 Files can be tricky, but it is fun enough! \n 8 "
         "Files can be tricky, but it is fun enough! \n 9 Files can be "
         "tricky, but it is fun enough! \n 10 Files can be tricky, but it is "
         "fun enough!";
  MyFile.close();
  string myText;
  ifstream MyReadFile("filename.txt");
  while (getline(MyReadFile, myText)) {
    cout << myText << endl;
  }
  MyReadFile.close();
}

void test3() {
  time_t timestamp;
  time(&timestamp);
  cout << ctime(&timestamp) << endl;
  vector<string> msg{"Hello", "C++",     "World",
                     "from",  "VS Code", "and the C++ extension!"};
  for (const string& word : msg) {
    cout << word << " ";
  }
  cout << endl;
}

int main() {
  // test1();
  // test2();
  test3();
  return 0;
}