#include <iostream>
using namespace std;
class Person{
public:
string name;
char gender;
int ssn;
Person(string name,char gender,int ssn) {
  
Person::name=name;
Person::gender=gender;
Person::ssn=ssn;
 }
// Person() {
  //  cout << "Class Person\n";
 // }
~Person(){
  cout<<"End Constructer \n";
}


};
class Student:public Person{
public:
float mark,grade;
 Student(float mark,float grade,string name ,char gender,int ssn) :Person(name,gender,ssn){
Student::mark=mark;
Student::grade=grade;

    cout << name << "Student Constructer \n";
  }
~Student(){
  cout<<"End Constructer \n";
}
};

int main() {
   Student s = Student(87,3.34,"Ahmad",'M',993634);
  cout<<s.grade<<s.mark<<s.gender<<s.name<s.ssn
}
