// Problem
// Chef wants to become fit for which he decided to walk to the office and
// return home by walking. It is known that Chef's office is X km away from his
// home. If his office is open on 5 days in a week, find the number of
// kilometers Chef travels through office trips in a week. Input Format  First
// line will contain T, number of test cases. Then the test cases follow.  Each
// test case contains of a single line consisting of single integer X. Output
// Format For each test case, output the number of kilometers Chef travels
// through office trips in a week.

#include <iostream>
using namespace std;
int main() {
  int days_in_week = 5;
  int T, X;
  cout << "enter number=" << endl;
  cin >> T;
  for (int i = 1; i <= T; i++) {

    cout << "enter value of x= " << endl;
    cin >> X;
    cout << "the number of kilometers Chef travels through office trips in a "
            "week= "
         << (X * 2 * days_in_week) << endl;
    ;
  }
}
