#include <iostream>
using namespace std;
class Student {

public:
  string name;
  int grade;
bool summer;

  // -------------------
  void printInfo() {
    cout << "Name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "grade: " << grade << endl;
    cout << "gpa: " << gpa << endl;
    cout << "summer: " << summer << endl;
    
  }
  bool setAge(int a) {
    if (a < 0)
      return false;
    age = a;
    return true;
  }
  Student(string n,int g,int a,float gp) { 
    cout << "Constructor\n";
    name = n;
    grade = g;
    age = a;
    gpa = gp;
    summer = false;
  
  
  }
Student(string n,int g,int a,float gp,bool s) { 
    cout << "Constructor\n";
    name = n;
    grade = g;
    age = a;
    gpa = gp;
  summer = s;
  
  
  }

private:
  float gpa;
  int age;
};
int main() {
  // int x = 4;
  Student ob1 = Student("Ali",5,12,3.5);
  // cout<<ob1.name<<endl;
  // cout<<ob1.gpa<<endl;

  ob1.printInfo();
  // ob1.age = -1;
  // bool result =  ob1.setAge(5);
  // ob1.printInfo();
  // cout<<result<<endl;

  // ob1.printInfo();
  cout<<"________________________\n";

  Student ob2 = Student("Sara",6,13,4,true);
  ob2.printInfo();
  
}
