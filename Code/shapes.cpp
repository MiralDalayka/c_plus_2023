#include <iostream>
using namespace std;
class Circle {
  // area = pi*r*r , cur = 2*pi*r
  float radius;
  // value inside rad
  // use -> constr , set function
public:
  Circle() { // Circle(float r ) {radius = r }
    cout << "Enter the radius value:";
    cin >> radius;
  }
  // area cir
  float Area() { return 3.14 * radius * radius; }
  float Circumference() { return 3.14 * 2 * radius; }
};

class Rectangle {
  // h , w
  float height, width;

public:
  Rectangle() {
    cout << "Enter height:";
    cin >> height;
    cout << "Enter width:";
    cin >> width;
  }

  float Area() { return height * width; }
  float Circumference() { return 2 * (height + width); }
};

class Triangle {
  //
};
void printMenu(string shapes[]);
void pickShape();


int main() {
  string shapes[] = {"Circle", "Rectangle", "Triangle"};
  // print menu
  printMenu(shapes);
  //pick shape and do math
  pickShape();
}

void printMenu(string shapes[]) {
  for (int i = 0; i < 3; i++) {
    cout << i + 1 << "-" << shapes[i] << endl;
  }
}
void pickShape() {
  cout << "Pick a shape:";
  int shapeNum;
  cin >> shapeNum;
  // shapeNum--;
  switch (shapeNum) {
  case 1: {
    Circle c = Circle();
    cout << "Area " << c.Area() << endl;
    cout << "Circumference " << c.Circumference() << endl;
    break;
  }
  case 2: {
    Rectangle r = Rectangle();
    cout << "Area " << r.Area() << endl;
    cout << "Circumference " << r.Circumference() << endl;
    break;
  }
  case 3: {
    Triangle t = Triangle();
    cout << "Not Ready yet" << endl;
  }
  default:
    cout << "This shape is not suported" << endl;
  }
}
