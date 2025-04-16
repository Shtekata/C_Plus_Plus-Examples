#include <iostream>
#include <random>
#include <regex>
#include <string>
using namespace std;

void roulette();
void playGame(string&);
void numberOrColor(string&);
void placeClientBet(string&, double&);
void betMoney(double&, double&, string&);
void betNumbers(double&,
                double&,
                double&,
                uniform_int_distribution<int>&,
                mt19937&,
                bool&);
void betColors(string&,
               double&,
               double&,
               uniform_real_distribution<double>&,
               mt19937&,
               bool&);
void exit(string&);

int main() {
  roulette();
}

void roulette() {
  double bet, num, money = 10000;
  string betS, game, choice, colour;
  bool noMoney = false;
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> rangeNumber(0, 32);
  uniform_real_distribution<double> rangeColor(0, 1);

  cout << "Welcome to the roulette table! Your balance is $10 000. \n";

  do {
    playGame(game);
    if (game == "No")
      break;
    numberOrColor(choice);
    betMoney(bet, money, betS);

    if (choice == "Number") {
      do {
        betNumbers(num, bet, money, rangeNumber, gen, noMoney);
        if (noMoney)
          break;
        cout << "\n Do you want to continue betting on numbers? \n";
        exit(choice);
        if (choice == "Yes")
          betMoney(bet, money, betS);
      } while (choice != "No");
    } else {
      do {
        betColors(colour, bet, money, rangeColor, gen, noMoney);
        if (noMoney)
          break;
        cout << "\nDo you want to continue betting on colors? \n";
        exit(choice);
        if (choice == "Yes")
          betMoney(bet, money, betS);
      } while (choice != "No");
    }
  } while (!noMoney);
  if (money <= 0) {
    cout << "\n No money left. Please reload!\n";
    cout << " Goodbye!" << endl;
  }
}

void playGame(string& x) {
  cout << "\n Do you want to bet on a number or a color?: ";
  cin >> x;
  while (x != "Yes" && x != "No") {
    cout << " Invalid choice!\n Please enter 'Yes' or 'No'!\n";
    cout << " Your choice is: ";
    cin >> x;
  }
  if (x == "No") {
    cout << "\n Okay, goodbye! \n";
  }
}

void numberOrColor(string& x) {
  cout << "\n Please enter 'Number' or 'Color': ";
  cin >> x;
  while (x != "Number" && x != "Color") {
    cout << "Invalid choice! Enter 'Number' or 'Color'! \n";
    cout << " Please try again: ";
    cin >> x;
  }
}

void placeClientBet(string& x, double& y) {
  cout << endl << "Place your bet: $";
  cin >> x;
  while (!regex_match(x, regex("^(?:\\d+(?:\\.\\d+)?)$"))) {
    cout << "Invalid bet. \n Please try again: ";
    cin >> x;
  }
  y = stod(x);
}

void betMoney(double& x, double& y, string& v) {
  placeClientBet(v, x);
  while (x > y) {
    cout << "Not enough money! Place a smaller bet.\n";
    placeClientBet(v, x);
  }
}

void betNumbers(double& x,
                double& y,
                double& z,
                uniform_int_distribution<int>& a,
                mt19937& b,
                bool& c) {
  cout << endl << "What number are you betting on?: ";
  cin >> x;
  while (x < 0 || x > 32) {
    cout << "Invalid number!\n Please enter number between 0 and 32!\n";
    cout << " Your number is: ";
    cin >> x;
  }
  int i = a(b);
  if (x == i) {
    cout << "You won $" << y * 32 << ".\n";
    z += y * 31;
    cout << "Your balance is $" << z << endl;
  } else {
    cout << "You lost $" << y << ".\n";
    cout << "The correct number was: " << i << endl;
    z -= y;
    cout << "\nYour balance is: " << z << '$' << endl;
    if (z == 0)
      c = true;
  }
}

void betColors(string& x,
               double& y,
               double& z,
               uniform_real_distribution<double>& a,
               mt19937& b,
               bool& c) {
  cout << "Red or Black? : ";
  cin >> x;
  while (x != "Red" && x != "Black") {
    cout << "Invalid color! Try again.\n Please enter 'Red' or 'Black'!\n";
    cout << " Your choice is: ";
    cin >> x;
  }
  if (a(b) >= 0.1 && a(b) <= 0.47) {
    cout << "You won $" << y * 2 << ".\n";
    z += y * 2;
    cout << "Your balance is $" << z << endl;
  } else {
    cout << "You lost $" << y << ".\n";
    z -= y;
    cout << "Your balance is $" << z << endl;
    if (z == 0)
      c = true;
  }
}

void exit(string& x) {
  cout << " Please enter 'Yes' or 'No': ";
  cin >> x;
  while (x != "Yes" && x != "No") {
    cout << " Invalid choice!\n Please enter 'Yes' or 'No'!\n";
    cout << " Your choice is: ";
    cin >> x;
  }
  if (x == "No") {
    cout << "\n Okay, pick again! \n";
  }
}