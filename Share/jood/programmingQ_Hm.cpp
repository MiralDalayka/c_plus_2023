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

// Q3: Write a C++ program to print the sum of all odd numbers and even numbers between 2 input numbers.


#include <iostream>

using namespace std;
int main() {
  int n1, n2, sum_odd = 0, sum_even = 0;

  cout << "enter two integers:" << endl;
  cin >> n1 >> n2;
  int max = n1, min = n2;
  if (n2 > n1) {
    max = n2;
    min = n1;
  }
  for (int i = min; i <= max; i++) {
    if (i % 2 == 0) {
      sum_even += i;
    } else if (i % 2 != 0) {
      sum_odd += i;
    }
  }

  cout << "The sum of odd = " << sum_odd << endl;
  cout << "The sum of even = " << sum_even << endl;
}




