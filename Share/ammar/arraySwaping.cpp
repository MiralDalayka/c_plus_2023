#include <iostream>
using namespace std;
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int pos = 4;
  pos--;
  int newArray[4];
  int newArrayCounter = 0;
  for (int i = 0; i < 5; i++) {
    if (i != pos) {
      newArray[newArrayCounter] = arr[i];
      newArrayCounter++;
    }
  }
  for (int i = 0; i < 4; i++)
    cout << newArray[i] << " ";
}
