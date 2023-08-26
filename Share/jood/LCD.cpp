// Write C++ program or draw flowchart and write pseudo code to find the least
// common divisor between two input numbers
#include <iostream>
using namespace std;
int main() {
  int n1, n2;
  bool flag = false;
  cout << "enter two numbers:" << endl;
  cin >> n1 >> n2;
  int max = n1, min = n2;
  if (n2 > n1) {
    max = n2;
    min = n1;
  }
  for (int i = 2; i <= min; i++) {
    if (max % i == 0 && min % i == 0) {
      cout << "LCD= " << i << endl;
      flag = true;
      break;
    }
  }
  if (flag == false) {
    cout << "there is no LCD between " << min << " and " << max << endl;
  }
}
