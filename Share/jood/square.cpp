/*
 Take values of length and breadth of a rectangle from user and 
check if it is square or not.
  */
#include <iostream>
using namespace std;
int main() 
{
  int h,w;
  cout<<"Enter two values for height and width:"<<endl;
  cin>>h>>w;
  
  if(h>0 && w>0)
  {
       if(h==w)
        {
          cout<<"this is square"<<endl;
        }
        else
       {
        cout<<"this is not square"<<endl;
      
       }
  }
    
    else
    {
      cout<<"this value is not valid"<<endl;
    }
  
 
}
