#include <iostream>
using namespace std;
int main() {
cout<<"Q1)) destans ?"<<endl;
for(int i=1;i<=4;i++){
  int x,day=5;
  cout<<"enter a k/m = "<<endl;
  cin>>x;
  cout<<x<<"+"<<x<<"*"<<day<<"="<<(x+x)*day<<endl;
  }
 cout<<"Q2)) burger ?"<<endl;
 for(int r=1;r<=4;r++){
  int p,b;
   cout<<"enter num a patties =";
  cin>>p;
  cout<<endl;
  cout<<"enter num a buns =";
  cin>>b;
  cout<<endl;
  if(p<=b){
    cout<<"To make   "<<p<<"    burger"<<endl;
  }
  else if(p>=b){
    cout<<"To make    "<<  b<<"  burger"<<endl;
  }
  }
  for(int i=1;i<=4;i++){
  cout<<"Q3)) car ?"<<endl;
  int n,m;
  cout<<"enter num car a can seat 5 people each =";
  cin>>n;
  cout<<endl;
  cout<<"enter num car a can seat 7 people each =";
  cin>>m;
  cout<<endl;
  n*=5;
    m*=7;
  cout<<" a can seat "<<n+m<<" people each "<<endl;
  }
}
