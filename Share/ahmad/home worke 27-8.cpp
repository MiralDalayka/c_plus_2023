#include <iostream>
using namespace std;
int main() {
cout<<"Q1.Write a C++ program to calculate the age of the user."<<endl<<endl<<"Note : ask the  user to enter the current date and his/her  birthdate."<<endl<<endl;
  int ya, mo , da , y=2023 , m=8 , d=27 ;
  cout<<"enter the current date and his/her  birthdate"<<endl;
  cout<<"                   enter a yaer             "<<endl;
  cin>> ya;
  cout<<"                    enter a month           "<<endl;
  cin>>mo;
  cout<<"                     enter a day            "<<endl;
  cin>>da;
  if(da>d){
    d+=30;
    m-=1;
  }
  if(mo>m){
    m+=12;
    y-=1;
  }
  y-=ya;
  m-=mo;
  d-=da;
  cout<<" the old you a   "<<"yaer"<<y<<"     month"<<m<<"    day"<<d<<endl;
  cout<<endl;
  
////////////////////////////////////////////////////////////////
  cout<<"Q2. Write C++ code to check if the  input  number  is prime number or not."<<endl<<endl<<"Note : prime number  is the number  that divide  on it self  and 1 only."<<endl<<endl;
  int l;
  cout<<" enter a num "<<endl;
  cin>>l;
  for(int n=2;n<l;n++){
    if(l%n==0){
      cout<<"thes a not prime num"<<endl;
     break;
    }
    else{
   cout<< "thes a prime num "<<endl;
      break;
    }
  }
///////////////////////////////////////////////////////////////////
  cout<<"Q3. Write a C++ program to print the  sum of all odd numbers  and even numbers  between  2 input  numbers."<<endl;
  int w,e,odd=0,even=0;
  cout<<"enter 2 num "<<endl;
  cin>>w>>e;
  for(int i=w;i<=e;i++){
    if(i%2!=0){
      odd+=i;
    }
    else if(i%2==0){
      even+=i;
    }
  }
  cout<<"The sum of odd = "<<odd<<endl;
  cout<<"The sum of even ="<<even<<endl;
}