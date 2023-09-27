#include <iostream>
using namespace std;
//Compile-time Polymorphism (Static Binding):
class Math{
public:
int sum(int a,int b){
  return a+b;
}
double sum(double a,double b){
  return a+b;
}
// int sum(int a,float b){
//   return a+b;
// }
// float sum(float a){
//   return a;
// }
};
int main() {
  Math o1 = Math();
  cout<<o1.sum(5, 5 )<<endl;
  cout<<o1.sum(5.5, 5.6)<<endl;
    
}
