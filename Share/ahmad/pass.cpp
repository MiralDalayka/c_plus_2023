#include <iostream>
using namespace std;
int main() {
  int pass=1234, x;
  //create loop for 3 times
  for (int i = 0; i < 3; i++) {
    //ask the user to input his pass
    cout << "Enter a pass :" ;
    cin >> x;
    //if the pass i equal to 1234 then we need to stop the loop by using break
    if (x == pass) {
      cout << "Pass Correct" << endl;
      break;
    }
  }

  // here check why the loop ended
  // case 1: the 3 counter is done then we need to block the user
  // case 2 the pass is correct 
  if(x!=pass){
    cout<<"You Blocked"<<endl;
  }
}
