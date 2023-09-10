#include <iostream>
using namespace std;
int main() {
  // cout<<"Q1)) Write a C++ program to remove the nth element from the end of a given list"<<endl;
  //  int mark []={56,23,34,4,5};
  // int i;
  // cout<<" enter a num a delet 1-5"<<endl;
  // cin>>i;
  // i-=1;
  // int newnum[4];
  // int size=sizeof(mark)/sizeof(mark[0]);
  // int c=0;
  // for(int r=0;r<size;r++){
  // if(i!=r){
  //   newnum[c]=mark[r];
  //   cout<<newnum[c]<<",";
  //   c+=1;
  // } 
  // }
  // cout<<endl;
  /////////////////////////////////////////////////////
  // cout<<"Q2)) Write a C++ program to find the largest element of a given array of integers"<<endl;
  // cout<<endl;
  // int num[5];
  // for(int i=0;i<5;i++){
  //   cin>>num[i];
  // }
  // int size2=sizeof(num)/sizeof(num[4]);
  // int b=0;
  // int big=0;
  // for(int i=0;i<=size;i++){
  //   if(num[b]>big){
  //     big=num[b];
  //     b+=1;
  //   }
  // }
  // cout<<big<<endl;
  // cout<<endl;
  ////////////////////////////////////////////////////
  // cout<<"Q3))Write C++ code that takes this list and make new 2 lists of even number, odd number.Print both lists with the length of each one of them."<<endl<<endl;
  // int a[]={1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
  // int size=sizeof(a)/sizeof(a[0]);
  // int b[size],c[size];
  // int b1=0,c1=0;
  // for(int i=0;i<10;i++){
  //   if(a[i]%2==0){
  //   b[b1++]=a[i];
  //   }
  //   else{
  //     c[c1++]=a[i];
  //   }
  // }
  // cout<<"even array :  ";
  // for(int i=0;i<b1;i++)
  //   cout<<b[i]<<" ";
  // cout<<endl;
  // cout<<"odd array : ";
  // for(int i=0;i<c1;i++)
  //   cout<<c[i]<<" ";
  // cout<<endl;
  ////////////////////////////////////////////////////////
  // cout<<"Q4))Write a C++ program to find all of the longest word in a given dictionary."<<endl;
  // string num[]{"cat", "flag", "green", "country", "w3resource"};
  // int max=num[0].length();
  // string resalt=num[0];
  //  for(int i=0;i<5;i++){
  //    if (max<num[i].length()){
  //      max=num[i].length();
  //      resalt=num[i];
  //    }
  //  }
  //    cout<<"the big a : "<<resalt<<endl;
  //////////////////////////////////////
//   cout<<"Q5))Write a C++ program to check if a given string has all unique characters. "<<endl;
//   string word="axxy";
//   bool flag = true;
//   int lenght = word.length();
//   for(int i=0;i< lenght;i++){
//     for(int j=i+1;j<lenght;j++){
//       if ( word[i]==word[j]){
//         flag=false;
//       }
//     }
//   }
//   if(flag){
//     cout<<" thes not repeting "<<word<<endl;
//   }
//   else{
//     cout<<"  thes a repeting "<<word<<endl;
//   }
  /////////////////////////////////////////////////
  // cout<<"Q6))Concatenate two lists index-wise Write a program to add two lists index-wise. Create a new list that contains the 0th index item from both the list, then the 1st index item, and so on till the last element. any leftover items will get added at the end of the new list"<<endl;
  // cout<<endl<<endl;
  // string array1[]={"M", "na", "i", "Ke"};
  // string array2[]={"y", "me", "s", "lly"} ;
  // string array3[4];
  // int size=sizeof(array1)/sizeof(array1[0]);
  // for(int x=0;x<size;x++){
  //   array3[x]=array1[x]+array2[x];
  // }
  // for(int x=0;x<size;x++){
  //   cout<<array3[x]<<" ";
  // }
  ///////////////////////////////////////////////////////////////////
  // cout<<"Q7))Turn every item of a list into its square Given a list of numbers. Write a program to turn every item of a list into its square."<<endl;
  // int arr1[]={1,2,3,4,5,6,7};
  // for(int x=0;x<7;x++){
  //   arr1[x]=arr1[x]*arr1[x];
  //   cout<<arr1[x]<<",";
  // }
  // cout<<endl<<endl;
  ////////////////////////////////////////////////////////////////////
  // cout<<"Q8))Concatenate two lists in the following order"<<endl;
  // string arr={"hello","take"};
  // string srr={"dear","sir"};
  // string newq[4];
  // int neww=0;
  // for(int x=0;x<2;x++){
  //   for(int j=0;j<2;j++){
  //     newq[neww++]=arr[x]+srr[j];
      
  //   }
  // }
  // for(int i=0;i<4;i++){
  //   cout<<newq[i]<<",";
  // }
  //cout<<endl;
  ////////////////**********************************///////////////////////////
 //  cout<<"Q9))Remove empty strings from the list of strings"<<endl;
 //  string list1[]={"Mike", "", "Emma", "Kelly", "", "Brad"};
 //  int listnew=6,list2=0;
 //  for(int i=0;i<listnew;i++){
 //    if(list1[i].length()!=0){
 //      list2++;
 //    }
 //  }
 //  string arre[list2];
 //   list2=0;
 //  for(int i=0;i<listnew;i++){
 //    if(list1[i].length()!=0){
 //      arre[list2++]=list1[i];
 // }
 //   for(int i=0;i<list2;i++){
 //      cout<<arre[i]<<",";
 //    }
 //  }
  ///////////////////////////////////////////////////////////////////////////
//   cout<<endl;
//   cout<<"Q10))Replace list’s item with new value if found You have given a Dart list. Write a program to find value 20 in the list, and if it is present, replace it with 200. Only update the first occurrence of an item."<<endl;
// int liste1[7]={5,20,30,50,40,90,44};
//   for(int r=0;r<7;r++){
//     if(liste1[r]==20){
//       liste1[r]=200;
//       break;
//     }
//   }
//   for(int i=0;i<7;i++){
//     cout<<liste1[i]<<" ";
//   }
//   cout<<endl<<endl;
  
}