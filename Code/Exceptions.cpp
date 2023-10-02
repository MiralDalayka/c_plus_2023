#include <iostream>
using namespace std;
int main() {
  //Handling Exceptions within a Program
  int y, f = 5, x;

  if (f != 0)
    x = 10 / f;

  else
    x = 0;

  y = x + 1;
  cout << y << endl;
}
//-----------------------------
#include <cassert>
#include <iostream>
using namespace std;
int main() {
  // Handling Exceptions with assert
  int y = 10, f = 5, x;

  // assert(f != 0); // T 5!=0 T

  // // assert(f == 0); // F ERROR 5==0 F
  // cout << "Test" << endl;

  // cin >> x;
  // // if(x==0) == assert x!=0
  // assert(x != 0);

  // cout << y / x << endl;

  // int age;
  // cout<<"Enter your Age:";
  // cin>>age;
  // assert(age>0);
  // cout<<"Age is:"<<age<<endl;
  string name;
   cout<<"Enter your name:";
  cin>>name;
  assert(name.length()>2);
  cout<<"Name is :"<<name<<endl;
}
//--------------------
#include <iostream>
using namespace std;
int main() {
  int x;
  try {
    cout << "Enter a number:";
    cin >> x;
    if (x == 0)
      throw(0);
    else
      cout << "10/"<<x<<" = " << 10 / x << endl;
    if(x<0)
       throw(1);
  } catch (int exp) {
    cout << "Something happend : Num should not be zero"  << endl;
  }
}
