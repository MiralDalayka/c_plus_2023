#include <iostream>
using namespace std;
class Human {
public:
string name;
int age;
string gender;

void printInfo(){
  cout<<"name :" <<name<<endl;;
   cout<<"age :" <<age<<endl;
   cout<<"gender :" <<gender<<endl;
}
void talk(){
  cout<<"Hello\n";
}

void eat(){
  cout<<"eat apple\n";
}

void walk(){
  cout<<"walk sometimes\n";
}

void drink(){
  cout<<"drink water\n";
}

Human (string n , int a , string gender1){
  name = n;
 age = a;
  gender = gender1;
}
};

int main() {

  Human obj1 = Human("joud" , 23 , "F");
  obj1.printInfo();
  obj1.talk();
}
