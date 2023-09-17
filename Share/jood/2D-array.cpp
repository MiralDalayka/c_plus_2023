#include <iostream>
using namespace std;
int main() {
  int qN;
  cout << "Enter the number of question:";
  cin >> qN;

  switch (qN) {
  case 1: {
    // Find the second lowest and highest numbers in a given array.
    int arr[3][2] = {{3, 4}, {7, 3}, {8, -1}};
    int max = 0, min = 0;

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
        if (arr[i][j] > max) {
          max = arr[i][j];
        } else if (arr[i][j] < min)
          min = arr[i][j];
      }
    }
    int max2 = 0, min2 = arr[0][1];
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
        if (arr[i][j] > max2 && arr[i][j] < max) {
          max2 = arr[i][j];
        } else if (arr[i][j] > min) {
          if (arr[i][j] < min2 && arr[i][j] != min)
            min2 = arr[i][j];
        }
      }
    }
    cout << min << " " << max << endl;
    cout << min2 << " " << max2;
    break;
  }

  case 2: {
    // Write C++ code to sum all numbers in 2D array
    int sum = 0;
    int arr2[3][3] = {{2, 4, 5}, {7, 2, 9}, {16, 10, 3}};
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        sum += arr2[i][j];
      }
    }
    cout << sum;
    break;
  }

  case 3: {
    //. Write C++ code to sum numbers in each row in 2D array.
    int sumR = 0;
    int arr2[3][3] = {{2, 4, 5}, {7, 2, 9}, {16, 10, 3}};
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        sumR += arr2[i][j];
      }

      cout << sumR << endl;
      sumR = 0;
    }
    break;
  }

  case 4: {
    // 4. Write C++ code to sum numbers in each column in 2D array.
    int sumC = 0;
    int newSum = 0;
    int arr2[3][3] = {{2, 4, 5}, {7, 2, 9}, {16, 10, 3}};
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        sumC += arr2[j][i];
      }

      cout << sumC << endl;
      sumC = 0;
    }

    break;
  }

  case 5: {
    // 5. Write C++ code to sum numbers in the main diagonal in 2D array
    int sum = 0;
    int arr2[3][3] = {{2, 4, 5}, {7, 2, 9}, {16, 10, 3}};
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (i == j)
          sum += arr2[i][j];
      }
    }
    cout << sum;
    break;
  }

  // case 6: {
    // Write a C++ program to find the element that appears once in an array of
    // integere
    

  } // close switch
} // close main
