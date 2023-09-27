#include <iostream>
using namespace std;
// abstraction:
// * private var - public methods
class Student {
  string name;
  int age;
// string ssn;

public:
  bool setName(string name) {

    if (name.length() >= 3) {
      Student::name = name;
      return true;
    }

    else {
      return false;
    }
  }
  bool setAge(int age) {
    if (age >= 6) {
      Student::age = age;
      return true;
    }

    else {
      return false;
    }
  }

string getName(){
  return name;
}

int getAge(){
  return age;
}

};
int main() {
  Student s = Student();
  int age;
  string name;
  do {
    cout << "Enter your Name:";
    cin >> name;

  } while (!(s.setName(name)));
  do {
    cout << "Enter your Age:";
    cin >> age;

  } while (!(s.setAge(age)));

cout<<"User Info:\n";
  cout<<"Name :"<<s.getName()<<endl;
  cout<<"Age :"<<s.getAge()<<endl;
  
}
