/*
 Write C++ code to ask the user to enter any letter then
check if it’s vowel letter or not.
*/
#include <iostream>
using namespace std;
int main() {
  char ch;
  cout << "please enter character" << endl;
  cin >> ch;

  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    cout << "this character is vowel letter" << endl;
  } else {
    cout << "this character is not vowel letter" << endl;
  }
}
