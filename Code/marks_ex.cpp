#include <iostream>
using namespace std;

/*
Ask the user to enter his mark. ​
Based on the mark of the student, calculate the grade using this range.​
​
80 or above A grade​
60 or above B grade​
40 or above C grade​
39 or less Fail

*/
int main() {
  int mark;

  cout << "Enter your mark:";
  cin >> mark;
  string result = "Wrong input";
  /*
data --> validation test
    */
// (mark < 0 || mark > 100) ==> cout<<"Wrong input"
  if (mark >= 0 && mark <= 100) {
    if (mark >= 80) {
      result = "A";
    } else if (mark >= 60) {
      result = "B";
    } else if (mark >= 40) {
      result = "C";
    } else {
      result = "Fail";
    }
  }

  cout << "Result = " << result << endl;
}
