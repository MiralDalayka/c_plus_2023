#include <iostream>
using namespace std;
/*
# functions types:
1: returned value
2: void
# How to implement a function:
1: header
return-data-type function-name (p1,p2,p3,...)
void function-name (p1,p2,p3,...)
2: body
{
write what your function will do
}
*/
// ---------------------------------------------
/*
# functions needs input : how to pass data from main to a function
# function-header(HERE PASS DATA --> parameterss)
# passing varibales can be in 2 ways:
1- byValue: means that ---> copy the var value -> pass it So the actual
varialbe value will NOT change
SYNTAX: functionHeader (var name)

2- byReferance: means that ---> pass the
actual variable it self,So the actual varialbe value will  change
SYNTAX: functionHeader (dataType& var name)

*/

int subFunction(int a, int b) { return a - b; }

string edit() { return "Welcome To SDK"; }

void printFunction(string msg){
  cout<<"*********"<<msg<<"*********"<<endl;
}
void printFunction(string msg,int num){
  cout<<"*********"<<msg<<" "<<num<<"*********"<<endl;
}
int summation(int a, int b, int c) {
  a = 100;
  cout << "Inside function " << a << endl;
  int sum = a + b + c;
  return sum;
}
float FractionsSummation(int num1,float num2) {
 return num1;
}

//overloading

int sum(int a,int b){
  cout<<"INT FUN\n";
  return a+b;
}
 double sum(double a ,double b){
  cout<<"DOUBLE FUN\n";
   
   return a+b;
 }

float sum (int a, float b){
  cout<<"FLOAT FUNCTION\n";
  return a+b;
}


void editValue(int& x){
  x = 5;
}

int main() {
  //   int a,b,c;
  //   cout<<"Enter 3 valus:";
  //   cin>>a>>b>>c;
  // int result = summation(a,b,c);
  //   cout<<"Outside function "<<a<<endl;
  // cout<<result<<endl;
  // cout<<summation(5,6,9);
  // cout<<subFunction(5,6)<<endl;
// string res = edit();
//   cout << edit() << endl; // == cout<<res<<endl;

// printFunction("Welcome");
// cout<<"*********"<<"Welcome"<<"*********"<<endl;

// cout<<"*********"<<"Have a nice Day "<<"*********"<<endl;
// printFunction("Have a nice Day");

  // cout<<FractionsSummation(2.2,5.5)<<endl;
  // cout<<sum(5,5);
  // cout<<sum(5.5,5.5);
  // cout<<sum(5,5.5);

  //call by value 
int num = 50;
  printFunction("Before",num);
  editValue(num);
  printFunction("After",num);

  cout<<&num<<endl;
  
  
  
  
  
}
