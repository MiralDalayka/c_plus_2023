#include <iostream>
using namespace std;
void posNegFun(int num);
void evenOddFun(int num2);
void checkFun(int a);
int maxFun(int num1, int num2, int num3);
void area(int a1, int a2, int a3);
double bonus(double salary) ;
double calculator(double n1, double n2, char c);
void checkLeap(int year);

int main() {
  int age;
  cout << "enter your age:" << endl;
  cin >> age;

  int n1, n2, n3;
  cout << "enter three numbers:";
  cin >> n1 >> n2 >> n3;

  int ang1, ang2, ang3;
  cout << "enter 3 values of angels:" << endl;
  cin >> ang1 >> ang2 >> ang3;
  double s ;
  cout<<"enter your salary = "<<endl;
  cin>>s;

  double num1,num2;
  char c;
  cout<<"enter two numbers and operator"<<endl;
  cin>>num1>>num2>>c;

  int y;
  cout<<"enter year to check if  leap year or not: ";
  cin>>y;

  posNegFun(3);
  posNegFun(-9);

  evenOddFun(8);
  evenOddFun(3);
  checkFun(age);
  cout << maxFun(n1, n2, n3);
  area(ang1, ang2, ang3);
  cout<<bonus(s);
  cout<<calculator(num1, num2, c);
  checkLeap(y);
}

//  1- Write a C++ code to check if the number is positive or negative
void posNegFun(int num) {
  if (num > 0) {
    cout << "this number is positive" << endl;
  } else {
    cout << "this number is negative" << endl;
  }
}

// 2- Write a C++ code to check number is Even or odd.

void evenOddFun(int num2) {
  if (num2 % 2 == 0) {
    cout << "this number is even" << endl;
  } else {
    cout << "this number is odd" << endl;
  }
}

// 3- Write a C++ code to find whether a given year is a leap year or not.

void checkLeap(int year){
  if (year % 4 == 0){
    if(year % 100 == 0){
      if(year % 400 == 0)
      {
        cout<<"this year is leap year"<<endl;
      }
      else
      {
     cout<<"this year is not leap year"<<endl;
     }
    }
    else{
   cout<<"this year is not leap year"<<endl;
    }
  }
  cout<<"this year is not leap year"<<endl;

}

/* 4- Write a C++ code to read the age of a candidate and determine whether it
is eligible for casting his/her own vote. input : 21 Expected Output :
Congratulation! You are eligible for casting your vote.*/
void checkFun(int a) {
  if (a >= 18) {
    cout << "Congratulation! You are eligible for casting your vote." << endl;
  } else {
    cout << "not allowed" << endl;
  }
}

/*5- Write a C++ code to o find the largest of three numbers.
Input: 12 25 52
Expected Output :
1st Number = 12, 2nd Number = 25, 3rd Number = 52
The 3rd Number is the greatest among three.*/

int maxFun(int num1, int num2, int num3) {
  int max = num1;
  if (num2 > max)
    max = num2;
  if (num3 > max)
    max = num3;
  cout << "the max number = ";
  return max;
}
// 6- Write a C++ code to check whether a triangle can be formed by the given
// value for the angles. Input: 40 55 65 Expected Output: The triangle is not
// valid.

void area(int a1, int a2, int a3) {
  if (a1 + a2 + a3 == 180)
    cout << "\nthis traingle is valid";
  else
    cout << "\nthis traingle is not valid";
}
// 7-Company wants to give bouse to it’s employees based on their
//  salaries:
//  Calculate how much each employee will get after bounce
//  salary Bounce ratio.
//  2000<S --> 15%
//  1300<S<2000 -->  20%
//  700<S<1300  --> 35%
//  less than 700 -->  40%
double bonus(double salary) {
   double b;
  if (salary >= 2000) {
     b = salary*0.15;
  }
  else if(salary>=1300 && salary<2000){
     b = salary*0.20;
  }
  else if (salary>700 && salary<1300){
     b = salary*0.35;
  }
  else if(salary<=700){
     b = salary*0.40;
  }
  cout<<"\nbonus =  ";
  return  b;
}

  // 8-Write a c++ program to create menu driven calculator that
  // performs basic arithmetic operations (add, subtract, multiply and
  // divide) using switch case and functions. The calculator should input
  // two numbers and an operator from user.
double calculator(double n1, double n2, char c){
    switch (c){
      
      case '+':
      cout<<endl;
      return n1+n2;
      
      case '-':
      cout<<endl;
      return n1-n2;
      case '*':
      cout<<endl;
      return  n1*n2;
      case '/':
      cout<<endl;
      return n1/n2;
    }
}

// 9-Write a c++ program to input an alphabet and check whether it is
//vowel or consonant using switch case.
