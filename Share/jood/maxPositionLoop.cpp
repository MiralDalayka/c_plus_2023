#include <iostream>
using namespace std;
int main() {
  int n1;
  int counter = 0;
  cout << "enter 7 positive integers:" << endl;
  int max = 0;
  for (int i = 1; i <= 7; i++) {
    cin >> n1;
    if (n1 >= 0) {
      if (n1 > max) {
        max = n1;
      }
      counter++;

    } else {
      cout << "plz enter posivive integers" << endl;
    }
  }
  cout << "max=" << max << endl;
  cout << "position=" << counter << endl;
  // Input: 10, 45, 87, 50, 90, 47, 50
}
