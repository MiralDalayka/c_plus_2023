#include <iostream>
using namespace std;
int main() {
  int numOfQ;
  cout << "Enter:";
  cin >> numOfQ;

  switch (numOfQ) {

  case 1: {
    cout << "DONE" << endl;
    break;
  }
  case 2: {
    int arr[5] = {2, 56, 76, -3, 65};
    int max = arr[0]; // 2
    for (int i = 0; i < 5; i++) {
      if (max < arr[i]) {
        max = arr[i];
      }
    }
    cout << "Max is " << max << endl;
    break;
  }
  case 3: {
    // a = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]
    int array[] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
    int size = sizeof(array) / sizeof(array[0]);
    int oddArray[size], evenArray[size];
    int oddCounter = 0, evenCounter = 0;
    for (int i = 0; i < size; i++) {
      if (array[i] % 2 == 0) {
        evenArray[evenCounter++] = array[i];
      } else {
        oddArray[oddCounter++] = array[i];
      }
    }
    // print
    cout << "Odd Array:\n";
    for (int i = 0; i < oddCounter; i++)
      cout << oddArray[i] << " ";

    cout << endl;
    cout << "Even Array:\n";
    for (int i = 0; i < evenCounter; i++)
      cout << evenArray[i] << " ";
    break;
  }
  case 4: {
    // Example-1: { "cat", "flag", "green", "country", "w3resource" }
    // Result:"w3resource"

    // string arr[] = {"cat", "flag", "green", "country", "w3resource"};
    // int max = arr[0].length(); // 2
    // string result = arr[0];
    // for (int i = 0; i < 5; i++) {
    //   if (max < arr[i].length()) {
    //     max = arr[i].length();
    //     result = arr[i];
    //   }
    // }
    // cout << "Max is " << result << endl;
    //--------------------------
    string arr[] = {"cat", "dog", "red", "is", "am"};
    // Result: "cat", "dog", "red"

    int max = arr[0].length(); // 2
    for (int i = 0; i < 5; i++) {
      if (max < arr[i].length()) {
        max = arr[i].length();
      }
    }
    for (int i = 0; i < 5; i++) {
      if (arr[i].length() == max) {
        cout << arr[i] << " ";
      }
    }
    break;
  }
  case 5: {
    string word = "abc";
    bool flag = true;
    int length = word.length();
    for (int i = 0; i < length; i++) {
      for (int j = i + 1; j < length; j++) {
        if (word[i] == word[j]) {
          flag = false;
          break;
        }
      }
    }
    //-----------------------
    if (flag) {
      cout << "no reapeating in " << word << endl;
    } else
      cout << "reapeating in " << word << endl;
  }
  }
  return 0;
}
