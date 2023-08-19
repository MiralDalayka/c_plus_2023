#include <iostream>
using namespace std;
int main() {
float fa,ce;
  cout<<"Q1) convert temperature from Celsius to Fahrenheit"<<endl;
  cout<<endl;
  cout<<"                   enter the vale ce        "<<endl;
  cin>>ce;
  cout<<"fa = "<<(fa=(1.8*ce)+32)<<"F"<<endl;
  cout<<endl;
  cout<<"Q2)Swap Two Numbers without using temporary variable"<<endl;
    int A,B;
  cout<<endl;
  cout<<"                     enter 2 numbers "<<endl;
  cin>>A>>B;
  A=A+B;
    B=A-B;
    A=A-B;
    cout<<A<<endl;
  cout<<B<<endl;
  cout<<endl;
  cout<<"Q3)Take values of length and breadth of a rectangle from user and check if it is square or not."<<endl;
    cout<<endl;
  int l,h;
  cout<<"                        enter l and h  "<<endl;
  cin>> l>>h;
  if(l==h){
    cout<<"                       thes a square       "<<endl;
  }
  else{
    cout<<"                       thes not a square     "<<endl;
  }
  cout<<endl;
  cout<<"Q4)Take two integers values from user and print greatest among them."<<endl;
  cout<<endl;
  int S,D;
  cout<<"                enter 2 num greatest among them"<<endl;
  cin>>S>>D;
    if(S>D){
    cout<< "  greatest = "<<S<<endl;
    }
  else{
    cout<< "  greatest = "<<D<<endl;
  }
  cout<<endl;
  /*cout<<"Q5)find the number of years, weeks and days in the input days numbe"<<endl;
  int numday;
  cout<<endl;
  cout<<"                  enter to days number      "<<endl;
  cout<<endl;
  cin>> numday;
  if(numday%365==0){}
  */
  cout<<endl;
  cout<<"Q6) find if the input year is a leap year or not"<<endl;
  int yaer,bo;
  cout<<"                  enter num yaer"<<endl;
  cin>>yaer;
  if (yaer/4==bo){
    cout<<"           thes year is a leap yaer"<<endl;
  }
  else{
    cout<<    "              thes yaer is a not leap yaer    "<<endl;
  }
  cout<<endl;
  /*cout<<"Q7)ask the user to enter any letter then check if it’s vowel letter or not.The vowel letters is (a , e , i , o , u)"<<endl;
  cout<<endl;
  char L,a,e,i,o,u;
  cout<<"                   enter a letter  "<<endl;
  cin>>L;
  if(L=a){
    cout<<" thes a vowel letters"<<endl;
  }
    else if (L=e){
       cout<<" thes a vowel letters"<<endl;
    }
      else if (L=i){
         cout<<" thes a vowel letters"<<endl;
      }
        else if (L=o){
           cout<<" thes a vowel letters"<<endl;
        }
          else if ( L=u){
             cout<<" thes a vowel letters"<<endl;
          }
  else {
    cout<<"thes a not vowel letters"<<endl;
  }
  cout<<endl;
*/
  cout<<"Q8) the user to input the temperature if the temperature is less than 25then print “cold” else print “Hot”."<<endl;
  cout<<endl;
  int tem;
  cout<<"                   enter the temperature "<<endl;
  cout<<endl;
  cin>>tem;
  if(tem<=25){
    cout<< "cold"<<endl;
  }
  else {
    cout<<" hot "<<endl;
  }
  cout<<endl;
  cout<<"Q9)enter the three angles then check if it’s formed a triangle or not."<<endl;
  cout<<endl;
  cout<<"              enter three angles "<<endl;
  int Q,W,E,sum=180;
  cin>>Q>>W>>E;
  if(Q+W+E==sum){
    cout<<"thes triangle"<<endl;
  }
  else{
    cout<<"thes not triangle"<<endl;
  }
  cout<<endl;
/*  cout<<"Q10)if the last digit of the number is odd or even"<<endl;
  cout<<endl;
  */
  cout<<"Q11)Ask the user to enter two numbers and the operator then print the result."<<endl;
  cout<<"            HINT G=10    H = 20  "<<endl;
  cout<<endl;
  int G=10,H=20,J,K,SUM;
  cout<<"                    enter J AND K NUM "<<endl;
  cin>>J>>K;
  cout<<"G+H+J+K = "<<(SUM=G+H+J+K)<<endl;
  cout<<endl;
  cout<<"Q12)show a menu to the user , after user choose the item id print him the price."<<endl;
  cout<<endl;
  int id;
  cout<<"              enter num id item  1<=5 only     "<<endl;
  cout<<endl;
  cin>>id;
  cout<<endl;
  if(id==1){
    cout<<"apples = 0.50 JD"<<endl;
  }
  else if (id==2){
    cout<<"Bananas = 1.00 JD"<<endl;
  }
  else if (id==3){
    cout<<"Cherries = 0.70 JD"<<endl;
  }
  else if (id==4){
    cout<<"Mangoes = 2.00 JD"<<endl;
  }
  else if (id==5){
    cout<<"Papaya = 2.00 JD"<<endl;
  }
  else {
        cout<<"          Wrong entered number"<<endl;
  }
  
  
  
  
    
  
}