/*
. Write a C++ program to check if the last digit of the
number is odd or even.
  */
#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "enter any number you want" << endl;
  cin >> num;

  if (num % 2 == 0) {
    cout << "the last digit is even" << endl;
  } else {
    cout << "the last digit is odd" << endl;
  }
}
