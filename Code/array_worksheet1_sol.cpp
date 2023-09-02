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
  case 6: {
    string list1[] = {"M", "na", "i", "Ke"}, list2[] = {"y", "me", "s", "lly"},
           list3[4];
    // int sise = sizeof(list1)/sizeof(list1[0]);
    // int size  = 4;
    for (int i = 0; i < 4; i++) {
      list3[i] = list1[i] + list2[i]; // list3[0] = list1[0]+list2[0] = My
    }

    for (int i = 0; i < 4; i++) {
      cout << list3[i] << " ";
    }
    break;
  }
  case 7: {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int newArray[size];
    for (int i = 0; i < size; i++) {
      newArray[i] = numbers[i] * numbers[i]; // newArray[1] = 2 * 2 = 4
    }

    for (int i = 0; i < size; i++) {
      cout << newArray[i] << " ";
    }
    cout << endl;
    //// original array
    for (int i = 0; i < size; i++) {
      numbers[i] = numbers[i] * numbers[i];
    }
    for (int i = 0; i < size; i++) {
      cout << numbers[i] << " ";
    }

    break;
  }
  case 8: {
    string list1[] = {"Hello ", "take "}, list2[] = {"Dear", "Sir"};
    string newList[4];
    int newListCounter = 0;
    int size1 = sizeof(list1) / sizeof(list1[0]),
        size2 = sizeof(list2) / sizeof(list2[0]);
    for (int i = 0; i < size1; i++) {
      for (int j = 0; j < size2; j++) {
        newList[newListCounter++] = list1[i] + list2[j]; // i=1
        // newlist[0] = hello + dear  , newlist[1] = hello + sir
      }
    }

    for (int i = 0; i < 4; i++) {
      cout << newList[i] << ",";
    }

    break;
  }
  case 9: {
    string list1[] = {"Mike", "", "Emma", "Kelly", "", "Brad"};
    // int listOneSize = sizeof(list1)/sizeof(list1[0]);
    int listOneSize = 6, list2Size = 0;

    for (int i = 0; i < listOneSize; i++) {
      if (list1[i].length() != 0) {
        list2Size++;
      }
    }
    string newList[list2Size];
    list2Size = 0;
    for (int i = 0; i < listOneSize; i++) {
      if (list1[i].length() != 0) {
        newList[list2Size++] = list1[i];
      }
    }

    for (int i = 0; i < list2Size; i++) {
      cout << newList[i] << " ";
    }
  }
  case 10: {
    int list1[] = {5, 10, 15, 20, 25, 50, 20};
    int size = sizeof(list1) / sizeof(list1[0]);
    // first occurrence
    //  for(int i=0;i<size;i++){
    //    if(list1[i]==20)
    //    {
    //      list1[i] = 200;
    //      break;
    //    }
    //  }
    // lase occurrence
    for (int i = size - 1; i >= 0; i--) {
      if (list1[i] == 20) {
        list1[i] = 200;
        break;
      }
    }
    for (int i = 0; i < size; i++) {
      cout << list1[i] << " ";
    }

    break;
  }
  case 11: {
    int array[] = {20, 30, 40};
    int sum = 0, avg;
    for (int i = 0; i < 3; i++) {
      sum += array[i];
    }
    cout << "Sum is =" << sum << endl << "Avg = " << sum / 3 << endl;
    break;
  }

  case 12: {
    // How do you find all pairs of an integer array whose sum is equal to a
    // given number? 4
    // [2 , 3 ,1 ,2 ] -> 2,2 - 3,1
    int array[] = {15, 5, 20, 0, 10, 10}, sum,
        size = sizeof(array) / sizeof(array[0]);
    cout << "Enter the sum:";
    cin >> sum;
    for (int i = 0; i < size; i++) {
      for (int j = i + 1; j < size; j++) {
        if (array[i] + array[j] == sum)
          cout << array[i] << "," << array[j] << endl;
      }
    }
  }
  }
  return 0;
}
