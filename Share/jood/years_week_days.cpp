/*
Write C++ code to find the number of years, weeks and days in
the input days number
*/
#include <iostream>
using namespace std;
int main() {
  int num_of_days;
  int years;
  int week;
  int days;
  cout << "enter number of days=" << endl;
  cin >> days;
  years = int(days / 365);
  week = (days % 365) / 7;
  num_of_days = (days % 365) % 7;

  cout << days << " day= " << years << " years, " << week << " weeks and "
       << num_of_days << " days." << endl;
}
