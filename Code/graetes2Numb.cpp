/*


  Ask the user to enter two numbers then find the
largest one of them. 
  */

#include <iostream>
using namespace std;
int main() {
  int num1, num2;

  cout << "Enter 2 numbers:";
  cin >> num1 >> num2;

  if (num1 > num2)
    cout << num1 << ">" << num2 << endl;
  else if (num2 > num1)
    cout << num2 << ">" << num1 << endl;
  else
    cout << num1 << "=" << num2 << endl;
}
