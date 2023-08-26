// Problem
// King loves to go on tours with his friends.
// King has N cars that can seat 5 people each and M cars that can seat 7 people
// each. Determine the maximum number of people that can travel together in
// these cars. Input Format The first line of input contains a single integer T,
// the number of test cases. The first and only line of each test case contains
// two space-separated integers N and M — the number of 5-seaters and 7-seaters,
// respectively
#include <iostream>
using namespace std;
int main() {
  int N, M, T;
  // N --> number of seat 5
  // M --> number of seat 7
  cin >> T;
  while (T--) {
    cin >> N >> M;
    cout<<(N*5+M*7)<<endl;
    
  }
}
