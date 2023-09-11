#include <iostream>
using namespace std;
class Human {
private:
  string name;
  char gender;
  int age;

public:
  void talk() { cout << "talk: " << endl; }

  void eat() { cout << "eat: " << endl; }

  void walk() { cout << "walk: " << endl; }

  void drink() { cout << "drink: " << endl; }
};

int main() {}
