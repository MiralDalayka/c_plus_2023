//Q1:Write a C++ program to calculate the age of the user. Note : ask the user to enter the current date and his/her birthdate.

#include <iostream>
using namespace std;
int main() {
  int age, year;
  int current_year = 2023;
  cout << "enter your birth year =" << endl;
  cin >> year;
  age = current_year - year;
  cout << "your age is " << age << endl;
}

//-----------------------------------------------------------------------------------------------------------------------------------------
// Q2:Write C++ code to check if the input number is prime number or not.Note : prime number is the number that divide on it self and 1 only.

#include <iostream>
using namespace std;
int main() {
  int num;
  bool flag = true;
  cout << "Enter any number you want= " << endl;
  cin >> num;
  if (num == 1 || num <= 0) {
    cout << "this number isn't prime ,U must enter valid integers" << endl;

  } else {
    for (int i = 2; i < num; i++) {
      if (num % i == 0) {
        flag = false;
        break;
      }
    }

    if (flag == true) {
      cout << "this number is prime" << endl;
    } else {
      cout << "this number isn't prime" << endl;
    }
  }
}
//--------------------------------------------------------------------------------------------------------------------------------
Q3:




