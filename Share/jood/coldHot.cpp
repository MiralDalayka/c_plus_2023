/*
Write C++ program to ask the user to input the 
temperature if the temperature is less than 25 then print 
“cold” else print “Hot”.
*/
#include <iostream>
using namespace std;
int main() {
  float temp;
  cout<<"enter any value you want"<<endl;
  cin>>temp;
  if (temp<25)
  {
    cout<<"Cold"<<endl;
  }
  else
  {
    cout<<"Hot"<<endl;
  }
}
