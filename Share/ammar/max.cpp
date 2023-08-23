#include <iostream>
using namespace std;
int main() {
cout << "Please enter 7 values";
  int num,i,max=0,pos=1;
  for(i=1;i<=7;i++){
cin>>num;
    if (num>max){
      max=num;
     pos=i;
    }
   else if (num<0)
      
  }
   cout<<"the max = "<<max<<"the posintion = "<<pos;
}
