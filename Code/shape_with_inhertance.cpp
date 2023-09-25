#include <iostream>
using namespace std;
class Shape {
public:
  string name;
  Shape(string name) {
    cout << "I'm In Shape Class Cons 1\n";
    Shape::name = name;
  }
 Shape() {
    cout << "I'm In Shape Class Con 2\n";
  }
~Shape(){
  cout<<"OUT FORM SHAPE CLASS\n";
}



};
class Circle : public Shape {
public:
  float r;
  Circle(float r, string name) : Shape(name) {

    cout << name << "I'm Circle Class cons 1\n";
    Circle::r = r;
  }
  Circle(float r) : Shape() {

    cout << name << "I'm Circle Class cons 2\n";
    Circle::r = r;
  }
~Circle(){
  cout<<"OUT FORM CIRCLE CLASS\n";
}
};
int main() {
  // Circle c = Circle(5.5, "Circle 1");
  Circle c = Circle(5.5);
  
  // cout << c.name <<" "<< c.r << endl;
}
