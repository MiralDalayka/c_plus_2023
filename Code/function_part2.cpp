#include <iostream>
using namespace std;
bool checkNumSign(float num);
bool isLeapYear(int year);
int main() {
  // 1- Write a C++ code to check if the number is positive or negative
  // float n;
  // cout << "Enter a number:";
  // cin >> n;
  // bool result = checkNumSign(n); // true  false
  // cout << "Is " << n << " Positive?" << result << endl;

  // -----------------------------------
  // input -> 2020, 2002, 2001 --> leap
  // year / 4  = T --> y / 100 --> / 400 T = leap
  // / 4 -> leap
  // 4 --> 100 / 4-- F not leap year
  int year;
  cout << "Enter Year To Check is it's a leap year or not:";
  cin >> year;
  bool msg = isLeapYear(year);
  if(msg)
  cout << year << " is a Leap Year" << endl;
  else
  cout << year << " is a common Year" << endl; 
  // if statment 
  // if (cond) [T] else [F]
  // cond ? [T] : [F]
  msg ?   cout << year << " is a Leap Year\n" :
  cout << year << " is a common Year" << endl; 
  // msg == true
  msg == true ?cout << year << " is a Leap Year\n" :
  cout << year << " is a common Year" << endl; 
}

bool checkNumSign(float num) {
  if (num < 0)
    return false;
  // else
  return true;
}

// string isLeapYear(int year) {
//   if (year % 4 == 0) {
//     if (year % 100 == 0) {
//       if (year % 400 == 0) {
//         return "Leap Year";
//       }
//       else {
//         return "Common Year";
//       }
//     }
//     else
//     {
//       return "Leap Year";
//     }
//   }
//   else
//   {
//     return "Common Year";
//   }

// }

bool isLeapYear(int year) {
  // string leap = "Leap Year",common= "Common Year";
  bool leap = true, common = false;

  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0)
        return leap;
    } else {
      // cout<<"@@@@@"<<endl;
      return leap;
    }
  }
  // cout<<"***"<<endl;
  return common;
}
