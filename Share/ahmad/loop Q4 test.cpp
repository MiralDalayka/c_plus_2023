#include <iostream>
using namespace std;
int main() {
  cout<<"Q4)) hours ?"<<endl;
  int i;
  cout<<" enter num a loop"<<endl;
  cin>>i;
  for(int r=1;r<=i;r++){
  int h;
  cout<<"enter num hours =";
  cin>>h;
  cout<<endl;
  h*=60;
  h/=20;
  cout<<"maximum number of complete chess games he can play in that time  = "<<h<<endl;
  }
}