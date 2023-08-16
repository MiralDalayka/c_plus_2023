/*Write C++ code to convert temperature from Celsius to 
Fahrenheit.
*/
#include <iostream>
using namespace std;
int main() {
  int temp;
  cout<<"Enter value for temperature in celsius= "<<endl;
  cin>>temp;
  //1 degree Celsius multiply by 1.8 and add 32
  temp=(temp*1.8)+32;
  cout<<"temperature in fahrenheit = "<<temp<<endl;
  
}
