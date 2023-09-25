#include <iostream>
using namespace std;
class Shape {
public:
  string name;
  Shape(string name) {
    cout << "I'm In Shape Class Cons 1\n";
    Shape::name = name;
  }
void area(){
  cout<<"Area Function "<<endl;
}
  ~Shape() { cout << "OUT FORM SHAPE CLASS\n"; }
};
class Circle : public Shape {
public:
  float r;
  Circle(float r, string name) : Shape(name) {

    cout << name << "I'm Circle Class cons 1\n";
    Circle::r = r;
  }

void area(){
  cout<<"Area = "<<r*r*3.14<<endl;
}
  ~Circle() { cout << "OUT FORM CIRCLE CLASS\n"; }
};

class Rectangle : public Shape {
public:
  float h, w;
  Rectangle(float h, float w, string name) : Shape(name) {

    cout << name << "I'm Ractangle Class cons 1\n";
    Rectangle::h = h;
    Rectangle::w = w;
  }
void area(){
  cout<<"Area =  "<<h*w<<endl;
}
  ~Rectangle() { cout << "OUT FORM RECTANGLE CLASS\n"; }
};
int main() { 
  
//   Circle c = Circle(5.5, "Circle 1");
//   Rectangle r   = Rectangle(1,2,"Rectangle 1");
// c.area();
//   r.area();

//   Shape s= Shape("NONE");
//   s.area();

  Shape test = Circle(1,"Circle");
  test.area();
  
  

}
