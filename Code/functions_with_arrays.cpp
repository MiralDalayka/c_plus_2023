#include <iostream>
using namespace std;
// 1. How To Implement a function that takes an array as parameter ?
//  DT FName (intput : DT AName[])

void printArray(int array[], int size) {

  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
}

void implementArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    array[i] = i * 8;
  }
}

int main() {
  // 2. To pass an array to a function use it's name
  //  functionName(arrayName);

  int numbers[10];
  int size = sizeof(numbers) / sizeof(numbers[0]);
  cout << "Before:\n";
  printArray(numbers, size);
  implementArray(numbers, size);
  cout << "After:\n";
  printArray(numbers, size);
}
