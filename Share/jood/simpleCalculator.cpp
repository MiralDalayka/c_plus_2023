// calculator
#include <iostream>
using namespace std;
int main() {
  int num1;
  int num2;
  char ch;

  cout << "enter value for num1" << endl;
  cin >> num1;
  cout << "enter value for num2" << endl;
  cin >> num2;
  cout << "enter value for mathmatical operator" << endl;
  cin >> ch;

  switch (ch) {
  case ('+'):
    cout << num1 << "+" << num2 << "= " << num1 + num2 << endl;
    break;
  case ('-'):
    cout << num1 << "-" << num2 << "= " << num1 - num2 << endl;
    break;
  case ('*'):
    cout << num1 << "*" << num2 << "= " << num1 * num2 << endl;
    break;
  case ('/'):
    cout << num1 << "/" << num2 << "= " << num1 / num2 << endl;
    break;
  case ('%'):
    cout << num1 << "%" << num2 << "= " << num1 % num2 << endl;
    break;
  default:
    cout << "this character is not valid" << endl;
  }
}
