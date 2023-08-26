// Problem
// Chef has recently started playing chess, and wants to play as many games as
// possible. He calculated that playing one game of chess takes at least 20
// minutes of his time. Chef has N hours of free time. What is the maximum
// number of complete chess games he can play in that time? Input Format The
// first line of input will contain a single integer T, denoting the number of
// test cases. Each test case consists of a single line containing a single
// integer, N
#include <iostream>
using namespace std;
int main() {
  int T, N;
  cin >> T;
  while (T--) {
    cin >> N;
    cout << (N * 60) / 20 << endl;
  }
}
