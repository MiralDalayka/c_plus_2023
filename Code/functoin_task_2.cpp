#include <iostream>
using namespace std;
int *removeValueFromArray(int oldArray[], int newArray[], int size, int n) {
  // old - 1 --> new
  n--;
  int newCounter = 0;
  for (int i = 0; i < size; i++) {
    if (i != n) {
      newArray[newCounter++] = oldArray[i];
    }
  }
  return newArray;
}
void printArray(int array[],int size){
  for(int i=0;i<size;i++)
    cout<<array[i]<<" ";

  cout<<endl;
}
int main() {
  int oldArray[5] = {1, 2, 3, 4, 5}, newArray[4];
  
   removeValueFromArray(oldArray,newArray,5,3);
  printArray(newArray,4);
}
