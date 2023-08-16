#include <iostream>
using namespace std;
int budget;
int price_of_icecream;
int total;
int rem;
int number_of_icecream = 10;
int main() {
  cout << "enter price = " << endl;
  cin >> price_of_icecream;
  cout << "enter your budget = " << endl;
  cin >> budget;
  total=price_of_icecream*number_of_icecream;

  if(total>budget)
  {
    cout << "Oops! you can't buy icecream for your friends :("<<endl;
  }

  else{
    cout << "you can buy icecream for your friends :)" << endl;
    rem = budget - (price_of_icecream * number_of_icecream);
    cout << "your budget now = " << rem << endl;
  }
  
  
}

  
