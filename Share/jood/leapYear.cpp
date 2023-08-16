/*
Write C++ to find if the input year is a leap year or not,
*/
#include <iostream>
using namespace std;
int main() {
  int year;
  cout << "Enter any year you want" << endl;
  cin >> year;
  if (year >= 1) {
    if (year % 4 == 0) {
      cout << "this year is a leap year";
    } else {
      cout << "this year is not a leap year";
    }
  } else {
    cout << "invalid try again please:)";
  }
}
