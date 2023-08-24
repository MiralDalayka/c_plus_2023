#include <iostream>
using namespace std;
int main() {
//test a case 
  int num;
  cout<<"ples enter id 1-5 "<<endl;
  cin>>num;
  switch (num){
    case 1:
      {
        cout<<"appels="<<"0.50";
        break;
      }
    case 2:{
      cout<<"bananes=1.00";
      break;
    }
    case 3:{
      cout<<"cheeres=0.70";
      break;
    }
    case 4 :{
      cout<<"mango=2.00";
      break;
    }
    case 5 :{
      cout<<"papeas=2.00";
      break;
    }
    default:{
      cout<<"rong inpout";
    }
  }
}