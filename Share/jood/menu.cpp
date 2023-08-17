#include <iostream>
using namespace std;
int main() {
  int id;

  cout << "please enter id =" << endl;
  cin >> id;

  switch (id) {
  case 1:
    cout << "your item is Apple and price = 0.5JD" << endl;
    break;
  case 2:
    cout << "your item is Banana and price = 1.0JD" << endl;
    break;
  case 3:
    cout << "your item is Cherry and price = 0.7JD" << endl;
    break;
  case 4:
    cout << "your item is Mango and price = 2.0JD" << endl;
    break;
  case 5:
    cout << "your item is Papaya and price = 2.0JD" << endl;
    break;
  default:
    cout << "your id not valid, try again!" << endl;
  }
}
