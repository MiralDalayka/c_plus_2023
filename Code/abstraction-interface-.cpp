#include <iostream>
using namespace std;
// create interface
class Shape {
  // private name
public:
  virtual void area() = 0;
  virtual void circum() = 0;
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

int main() {
  // Circle c = Circle(1);
  // c.area();
  // c.circum();
}
