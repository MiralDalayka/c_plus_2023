#include <iostream>
using namespace std;
float sala(float s){
  //1 use =
  // 2 use else
 if(s>=2000)
   s*=0.15;
  else
  if(1300<=s&&s<2000) 
    s*=0.20;
  else
    if(700<=s&&s<1300)
      s*=0.35;
  else
  if(s<700)
    s*=0.40;
  return s;
}
int main() {
   cout<<"Q7))Company wants to give bouse to it’s employees based on their salaries:Calculate how much each employee will get after bounce salary Bounce ratio."<<endl;
  int sal;
  float d=0;
  cout<<"enter a salaries = ";
  cin>>sal;
  d=sal+sala(sal);
  cout<<sal<<"+"<<sala(sal)<<"="<<d<<endl;
}
