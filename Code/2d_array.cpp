#include <iostream>
using namespace std;
int main() {
  // The syntax for declaring a two-dimensional array is
  // dataType name[rows][cols]
  // int marks[2];

  // cout << marks << endl;
  int num[2][3];
  num[0][0] = 10;
  num[0][1] = 100;
  num[0][2] = 1000;
  // cout << num[0][1];
  num[1][0] = 20;
  num[1][1] = 200;
  num[1][2] = 2000;

  for (int row = 0; row < 2; row++) {
    for (int col = 0; col < 3; col++) {
      cout << num[row][col] << " ";
    }
    cout << endl;
  }

  int n;
  cout << "Enter a number";
  cin >> n;
  int arr[n];

  // 10 100 1000
  // row 2 {col1 ,col2 , colN ....}
  // row N {col1 ,col2 , colN ....}
  //  dec + two-dimensional arrays can be initialized
  /*dataType name[row][col] =
{
//row 1 {col1 ,col2 , colN ....}
//row 2 {col1 ,col2 , colN ....}
//row N {col1 ,col2 , colN ....}

  }
  */
  int data[3][3] = {{1, 2, 3}, {200, 200, 400}, {50, 20, 30}};
  // int userData[3][2] = {{2, 4},
  //                       {5, 6},
  //                       {7, 8}

  // };

  // to add values or access items you need to specify which row and which col
  // arrayName[row][col] = cel == nested loop
  // loop for row
  // loop for columns
}
