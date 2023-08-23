#include <iostream>
#include <math.h>
using namespace std;
int main() {
cout<<"please enter number to find fact";
  int num,fact=1;
  cin>>num;
  for(int i=1;i<=num;i++){
   fact=fact*i;
  }

  cout<<"the fact of "<<num<<"="<<fact;

}
