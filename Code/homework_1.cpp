#include <iostream>
using namespace std;
int main() {
  //Q1
  /*
  int x, k,t;
    cout << "How much test cases you want?";
  cin>>t;
  for(int i=1;i<=t;i++)
    {
       cout << "How much your office is away from your  home?";
  cin >> x;
  k = (2 * x) * 5;
  cout << "Number of kilometers you travel through office trips in a week is ="
       << k << endl;
    }
  
// 1 --- 2
// 2 --- 1
// 6
// 6 * 5 = 30

  */
  //Q2

  /*
  // a + b = bur
  // 5 A + 5 B = 5 bur
  // 2 A + 0 B =  3 
  // 5 A , 3 B 

  int a,b,t;
  cin>>t;
 for(int i=1;i<=t;i++){
    cout<<"Enter how much Buns, pat :";
  cin>>b>>a;

  if(a>b){
    cout<<"You can make "<<b<<endl;
  }
  else 
       cout<<"You can make "<<a<<endl;
 }
*/

  //Q3
  /*
  int n,m;
  cout<<"Enter N car num that takes 5 pepole:";
  cin>>n;

   cout<<"Enter M car num  takes 7 pepole:";
  cin>>m;

  // 3 N = 5 + 5+ 5 or 3*5 = n * 5
  int max = (n*5) +( m*7);
  cout<<"The max is :"<<max<<endl;
  */

  //Q4
   // 1 h = 60 min / 20 = ans 
  int n;
  cout<<"Hom much hours do you have?";
  cin>>n;

  int maxPlays = (n * 60 ) / 20 ;

  cout<<"Max playes are :"<<maxPlays<<endl;

  

}
