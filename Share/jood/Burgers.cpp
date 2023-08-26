#include <iostream>
using namespace std;

int main() {
	  int A,B,T;
  
  cin>>T;
  while(T--)
    {
      cin>>A>>B;
      if(A<B)
      {
        cout<<A<<endl;
      }
      else
      {
        cout<<B<<endl;
      }
    }
	return 0;
}
