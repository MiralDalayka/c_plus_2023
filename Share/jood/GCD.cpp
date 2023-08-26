// Write C++ program to find the Greatest common divisor between two
// input numbers.
#include <iostream>
using namespace std;
int main() {
  int n1, n2;
  bool flag=false;
  cout << "enter two numbers:" << endl;
  cin >> n1 >> n2;
  int max = n1;
  int min = n2;
  if (n2 > n1) {
    max = n2;
    min = n1;
  }
  for (int i = max; i > 0; i--) {
    if (max % i == 0 && min % i == 0) {
      cout << "GCD=" << i << endl;
      flag=true;
      break;
    }
  }
  if(flag==false)
  {
    cout << "there is no GCD between " << min << " and " << max << endl;
  }
}
