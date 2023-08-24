#include <iostream>
using namespace std;
int main() {
  cout<<"Q1))"<<endl;
  int a,b,sum=0,c;
  cout<<"enter 2 num "<<endl;
  cin>>a>>b;
  if(a>b){
    int t=a;
    a=b;
    b=t;
  }
  c=a;
  while ( c <= b){
    sum+=c;
    c+=1;
  }
  cout<<"sume betoen"<<a<<";"<<b<<"  is  "<<sum<<endl;
 cout<<"Q2))"<<endl;
 int i;
  cout<<" enter a num "<<endl;
  cin>>i;
  cout<<"Thank you for entering the number"<<endl<<"Table of the number you entered"<<endl;
  for(int j=1;j<=12;j++){
    cout<<i<<"*"<<j<<"="<<i*j<<endl;
  }
  cout<<"Q3))"<<endl;
  int n,m;
  cout<<"enter a 2 num "<<endl;
  cin>>n>>m;
  if(n>m){
    int t=n;
    n=m;
    m=t;
  }
  for(n;n<=m;n++){
    if(n%2!=0){
      cout<<n<<endl;
    }
  }
  cout<<"Q4))"<<endl;
int pas=1234,x;
      for(int t=0;t<3;t++){
        cout<<"enter a pas "<<endl;
        cin>>x;
        if(x==pas){
          cout<<"welcom ser"<<endl;
          break;
        }
        if(x!=pas){
          cout<<"pas corect"<<endl;
        }
      }
 cout<<"Q5))"<<endl;
  cout<<"enter seven positive integer values"<<endl;
  int f,max=0,u;
  for(int i=1;i<=7;i++){
    cin>>f;
  if(max>f){
    max=max;
  }
  else if(f>max){
    max=f;
    u=i;
  }
  }
  cout<<"the a num big "<<max<<endl;
  cout<<" num the plac a :"<<u<<endl;
}                                                                     