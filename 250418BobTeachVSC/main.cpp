#include <iostream>
using namespace std;

int main() {
  int n, num, sum;
  cout << "How many numbers?: ";
  cin >> n;
  const int x = n;
  int* array = new int[x];
  cout << "Enter the numbers: ";
  for (int i = 0; i < n; i++) {
    cin >> num;
    array[i] = num;
    sum += array[i];
  }
  cout << sum;
  delete[] array;  // Free the allocated memory
  return 0;
}