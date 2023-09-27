#include <iostream>
using namespace std;
// Run-time Polymorphism (Dynamic Binding):
class Shape {
public:
  Shape() { cout << "I'm In Shape Class Cons \n"; }
  virtual void area() { cout << "Area Function " << endl; }
  virtual void circum() { cout << "Circumferance" << endl; }
};
class Circle : public Shape {
public:
  float r;
  Circle(float r) : Shape() {

    cout << "I'm Circle Class cons \n";
    Circle::r = r;
  }

  void area() override { cout << "Area = " << r * r * 3.14 << endl; }
  void circum() override { cout << "Circumferance : " << 2 * r * 3.14 << endl; }
};

class Rectangle : public Shape {
public:
  float h, w;
  Rectangle(float h, float w) : Shape() {

    cout << "I'm Ractangle Class cons \n";
    Rectangle::h = h;
    Rectangle::w = w;
  }
  void area() override { cout << "Area =  " << h * w << endl; }
  void circum() override { cout << "Circumferance : " << 2*(h + w) << endl; }
};
int main() {
  // Circle c = Circle(1);
  // c.area();
  // c.circum();

  // Rectangle r = Rectangle(1, 2);
  // r.area();

  // Shape s = Shape();
  // s.area();
  // s.circum();

  // Shape s = Circle(1);
  // s.area();
  // s.circum();
}
