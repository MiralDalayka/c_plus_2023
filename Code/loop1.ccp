#include <iostream>
using namespace std;
int main() {
//Q1 -> Write a C++ Program to Generate Multiplication Table.
  // int num;
  // cout << "Enter a number:";
  // cin >> num;
  // for (int i = 1; i <= 12; i++) {
  //   // 1*2=2 

  //   cout << i << "*" << num << "=" << i * num << endl;
  // }
//-----------------------------------------------------

  //Q2 -> ​​Write a C++ Program to sum all numbers between 2 numbers given by the user.
  /*
input num1,num2
set c = num1 , sum = 0
loop while c<=num2
{
sum  = sum + c
c++
}

output -> sum

*/

  // int num1, num2, sum = 0, c;
  // cout << "Enter 2 numbers:";
  // cin >> num1 >> num2;
  // if (num1 > num2) {
  //   int t = num1;
  //   num1 = num2;
  //   num2 = t;
  // }
  // c = num1;

  // while (c <= num2) {
  //   sum += c;
  //   c += 1;
  // }
  // // sum between num1 and num2 is = sum
  // //  sum between 5 ,  7  is 18
  // cout << "sum between " << num1 << ", " << num2 << " = " << sum;
//----------------------------------------------------
  //Q3-> Write a C++  program to let the user guess a number from 0 -10.​ * if the answer is wrong get new input.​
  /*
input num
while num != 6
input num

-----
do {
input num
}while (num !=6);

*/

  int num, flag = 1;

  // do {
  //   if (flag == 0) {
  //     cout << "Wrong , Try again:";
  //   } else {
  //     cout << "Enter number (0-10)";
  //   }
  //   cin >> num;

  //   flag = 0;

  // } while (num != 6); //

 cout << "Enter number (0-10)";
   cin >> num;
  while(num!=6){
     cout << "Wrong , Try again:";
     cin >> num;
  }

  cout << "Good Job";
}
