#include <iostream>
using namespace std;
int main() {
  // whay do we need arrys:
  //  int m1=34,m2=50,m3 = 15;
  //  cout<<m1<<endl<<m2<<endl<<m3;
  //  //marks [34,50,15]
  //  // marks
  //------------------------
  //  1. arrays declrations:
  /*
  - declare array : dataType name[fixedsize]
  - initialization dataType name[]={value1,value2,....}
  - initialization dataType name[size]={value1,value2}
         values should be <= size   ,  empty -> 0
    */
  // DT name = 5;
  // int marks[3];
  //  int x;
  // x =6;

  int marks[3];
  marks[0] = 34;
  marks[1] = 50;
  marks[2] = 15;

  cout << marks[0] << "," << marks[1] << "," << marks[2] << endl;

  // int x=6;

  int marks2[] = {34, 50, 15};
  cout << marks2[0] << "," << marks2[1] << "," << marks2[2] << endl;

  // marks2[100] = 5;
  // cout<<marks2[100] ;

  int marks3[3] = {34, 50, 15};
  cout << marks3[0] << "," << marks3[1] << "," << marks3[2] << endl;
  //------------------------
  // 2.  How can we input data into array after decleration
  //  int num[5];
  //  num[0]=12;
  //------------------------

  // 3 Access arrays:
  //  index  --> length-1
  //  arrayName [index]
  //   3.A.  How to get data from array
  //   cout<<num[1]<<endl;

  // 3.B . What about multiple values?
  // we need loop

  for (int i = 0; i < 3; i++) {
    cout << marks3[i] << ",";
  }
  cout << endl;

  // How to get array size?

  int size = sizeof(marks3) / sizeof(marks3[0]);
  cout << "sizeof(marks3)" << sizeof(marks3) << endl;
  cout << "sizeof(marks3[0])" << sizeof(marks3[0]) << endl;
  cout << size << endl;

  for (int i = 0; i < size; i++) {
    cout << marks3[i] << ",";
  }
  cout << endl;

  double num[] = {5, 6, 6, 55, 7, 5};
  int size2 = sizeof(num) / sizeof(num[0]);
  for (int i = 0; i < size2; i++)
    cout << num[i] << ",";
  cout << endl;

  //-----
    int num2[]={55,55,44,55,99};
    cout<<"Enter the number t remove:";
    int i ;
    cin>>i;
    i-=1;
    int newNum[4];
    int size3 = sizeof(num2)/sizeof(num2[0]);//5

  int c=0;
   for(int j=0;j<size3;j++){
     if(i!=j)
     {
        newNum[c]=num2[j];
     cout<<newNum[c]<<endl;
     c+=1;
     }
   }
}
