#include <iostream>
using namespace std;
int main() {
  // this program contains from 12 questions
  int numOfQuestion;
  cout << "enter the number of question: ";
  cin >> numOfQuestion;
  switch (numOfQuestion) {
  case 1: {
    // Write a C++ program to remove the nth element from the end of a given
    // list
    int collection[] = {3, 2, 5, 7, 2, 8, 9, 4};
    int numOfIndex;
    int counterOfNew = 0;
    cout << "enter the position of number u want to remove ";
    cin >> numOfIndex;
    int size = sizeof(collection) / sizeof(int);
    int new_collection[size - 1];
    for (int i = 0; i < size; i++) {
      if (i != numOfIndex - 1) {
        new_collection[counterOfNew] = collection[i];
        counterOfNew++;
      }
    }
    for (int j = 0; j < size - 1; j++) {
      cout << new_collection[j] << " ";
    }

    break;
  }
  case 2: {
    // Write a C++ program to find the largest element of a given array of
    // integers.
    int maxNum[] = {4, 3, 8, 7, 0, 10, 11, 15};
    int max = maxNum[0];
    int size1 = sizeof(maxNum) / sizeof(int);
    for (int i = 1; i < size1; i++) {
      if (maxNum[i] > max) {
        max = maxNum[i];
      }
    }
    cout << "the maximum number is : " << max;
    break;
  }
  case 3: {
    // Let’s say you are given a list saved in a:
    // a = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]
    // Write C++ code that takes this list and make new 2 lists of even number,
    // odd number.
    // Print both lists with the length of each one of them.
    int a[] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
    int even[] = {};
    int odd[] = {};
    int cEven = 0, cOdd = 0;
    for (int i = 0; i < 10; i++) {
      if (a[i] % 2 == 0) {
        even[cEven] = a[i];
        cEven++;
      } else {
        odd[cOdd] = a[i];
        cOdd++;
      }
    }

    cout << "the length of even list = " << cEven << endl;
    for (int j = 0; j < cEven; j++) {
      cout << even[j] << " ";
    }

    cout << endl;
    cout << "the length of odd list = " << cOdd << endl;

    for (int j = 0; j < cOdd; j++) {
      cout << odd[j] << " ";
    }
    cout << endl;
    break;
  }
  case 4: {
    // Write a C++ program to find all of the longest word in a given
    // dictionary.
    string str_arr[] = {"cat", "flag", "green", "country", "w3resource"};
    string str_arr2[] = {"cat", "dog", "red", "is", "am"};
    int sizeOfstr1 = sizeof(str_arr) / sizeof(string);

    string max_length = str_arr[0];
    for (int i = 1; i < sizeOfstr1; i++) {
      if (str_arr[i] > max_length) {
        max_length = str_arr[i];
      }
    }
    cout << max_length << endl;
    //--------------------------------------------------------------
    string max_length2 = str_arr2[0];
    int sizeOfstr2 = sizeof(str_arr2) / sizeof(string);

    for (int i = 1; i < sizeOfstr2; i++) {
      if (str_arr2[i] > max_length2) {
        max_length2 = str_arr2[i];
      }
    }
    cout << max_length2;

    break;
  }

  case 5: {
    // Write a C++ program to check if a given string has all unique characters
    string str;
    string result;
    cout << "enter any thing" << endl;
    cin >> str;
    for (int i = 0; i < str.length() - 1; i++) {
      if (str[i] == str[i - 1]) {
        result = "this string has duplicate charateres";
      } else {
        result = "this string has all unique characters";
      }
    }
    cout << result;
    break;
  }
  case 6: {
    // Concatenate two lists index-wise Write a program to add two lists
    // index-wise. Create a new list that contains the 0th index item from both
    // the list, then the 1st index item, and so on till the last element. any
    // leftover items will get added at the end of the new list.
    string list1[] = {"M", "na", "i", "Ke"};
    string list2[] = {"y", "me", "s", "lly"};
    string concatnateLists[] = {};
    for (int i = 0; i < 4; i++) {
      concatnateLists[i] = list1[i] + list2[i];
    }
    for (int i = 0; i < 4; i++) {
      cout << concatnateLists[i] << "  ";
    }
    break;
  }
  case 7: {
    // Turn every item of a list into its square
    // Given a list of numbers. Write a program to turn every item of a list
    // into its square.
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    int sqrtList[] = {};
    for (int i = 0; i < 7; i++) {
      sqrtList[i] = numbers[i] * numbers[i];
      cout << sqrtList[i] << " ";
    }
    //  for (int i = 0; i < 7; i++){
    //    cout<<sqrtList[i]<<" ";
    // }
    break;
  }
  case 8: {
    // Concatenate two lists in the following order
    // list1 = ["Hello ", "take "]
    // list2 = ["Dear", "Sir"]
    //['Hello Dear', 'Hello Sir', 'take Dear', 'take Sir']

    string list_1[] = {"Hello ", "take"};
    string list_2[] = {"Dear", "Sir"};
    string concatnate_double[] = {};
    int counter = 0;
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        concatnate_double[counter] = list_1[i] + list_2[j];
        counter++;
      }
    }
    for (int i = 0; i < 4; i++) {
      cout << concatnate_double[i] << "  ";
    }
    break;
  }

  case 9: {
    // Remove empty strings from the list of strings
    // list1 = ["Mike", "", "Emma", "Kelly", "", "Brad"]

    string empty_str[] = {"Mike", "", "Emma", "Kelly", "", "Brad"};
    string remove_empty_str[] = {};
    int c = 0;
    for (int i = 0; i < 6; i++) {
      int len_str = empty_str[i].length();
      if (len_str != 0) {
        remove_empty_str[c] = empty_str[i];
        c++;
      }
    }
    for (int i = 0; i < c; i++) {
      cout << remove_empty_str[i] << " ";
    }
    break;
  }

  case 10: {
    //  Replace list’s item with new value if found
    // You have given a Dart list. Write a program to find value 20 in the list,
    // and if it is present, replace it with 200. Only update the first
    // occurrence of an item.
    int orgList[] = {5, 10, 15, 20, 25, 50, 20};
    int removedItem[] = {};
    int size_ = sizeof(orgList) / sizeof(int);
    int counter_list = 0;
    int indexOfnum = 0;

    for (int i = 0; i < size_; i++) {
      if (orgList[i] != 20) {
        indexOfnum++;
      }
    }

    for (int i = 0; i < size_; i++) {

      if (orgList[i] == orgList[indexOfnum]) {
        removedItem[counter_list] = 200;
        counter_list++;
        break;
      }

      else {

        removedItem[counter_list] = orgList[i];
        counter_list++;
      }
    }

    // cout<<counter_list<<endl;

    for (int i = 0; i < counter_list; i++) {
      cout << removedItem[i] << " ";
    }
    break;
  }
  case 11: {
    // Display Sum and Average of Array Elements Using for Loop
    int marks[] = {89, 90, 87, 75, 98, 65, 77, 89, 74, 95};
    int sum = 1;
    int avg = 1;
    int sizeOfMarks = sizeof(marks) / sizeof(int);
    for (int i = 0; i < sizeOfMarks; i++) {
      sum += marks[i];
    }
    avg = sum / sizeOfMarks;
    cout << "sum of marks = " << sum << endl;
    cout << "your avg = " << avg << endl;

    break;
  }
  case 12: {
    // How do you find all pairs of an integer array whose sum is equal to a
    // given number

    //   int numList[] = {10,14,1,8,7,5,3,9,6,2,4};
    //   int sizeOfNumList = sizeof(numList)/sizeof(int);
    //   int inputNum;
    //   cout<<"enter number:"<<endl;
    //   cin>>inputNum;
    //   int fix = 0;
    //   int sumOfnum[] = {};
    //   for (int i = 0; i < sizeOfNumList; i++){

    //       for(int j = 1 ; j<sizeOfNumList ;j++ ){
    //         if((numList[i]+numList[j]) == inputNum){
    //           sumOfnum[fix] = numList[i];
    //           fix++;
    //           sumOfnum[fix+1] = numList[j];
    //           fix++;
    //         }
    //       }

    //     }
    //     // cout<<fix<<endl;

    //     for(int i = 0 ;i<fix;i++){
    //       cout<<sumOfnum[i]<<" ";
    //     }

    //   break;
    // }

  } // for closing switch
  } // closing main
