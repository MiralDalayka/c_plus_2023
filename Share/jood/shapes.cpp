#include <iostream>
using namespace std;
class Circle {
  float r;

public:
  // constructor
  Circle() {
    cout << "enter value for radius :";
    cin >> r;
  }

  // area of circle (pi * r * r)
  float Area() { return 3.14 * r * r; }

  float Circumference() { return 2 * 3.14 * r; }
};

class Rectangle {
public:
  float l, w;
  // constructor
  Rectangle() {
    cout << "enter value for length and width :";
    cin >> l >> w;
  }
  // area of rectangle ( L * W)
  float Area() { return l * w; }

  float Circumference() { return (l * w) * 2; }
};

class Triangle {
public:
  float base, hight, side;

  Triangle() {
    cout << "enter value for base, hight and side :";
    cin >> base >> hight >> side;
  }
  // area of rectangle ( 0.5 * base * hight)
  float Area() { return base * hight * 0.5; }

  float Circumference() { return base + hight + side; }
};

class Cylinder {
public:
  float r, h;
  // constructor
  Cylinder() {
    cout << "enter value for raduis and hight :";
    cin >> r >> h;
  }
  // area of Cylinder (2*pi*r*h + 2*pi*r*r)
  float Area() { return (2 * 3.14 * r * h) + (2 * 3.14 * r * r); }

  float Circumference() { return 2 * 3.14 * r * h; }
};

class Cone {
public:
  float r, l;
  // constructor
  Cone() {
    cout << "enter value for raduis and length :";
    cin >> r >> l;
  }
  // area of cone (pi*r*l )
  float Area() { return 3.14 * r * l; }

  float Circumference() { return 2 * 3.14 * r; }
};

void viewMenu(string shapes[]) ;
void pickShape();


int main() {
  string shapes[] = {"Circle", "Rectangle", "Triangle", "Cylinder", "Cone"};
  viewMenu(shapes);
  pickShape();
  // Circle o = Circle();
  // cout<<o.Area();
  
}

//functions
void viewMenu(string shapes[]) {
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << " - " << shapes[i] << endl;
  }
}

void pickShape(){
  int shapeNum;
cout<<"enter number to pick shape:";
cin>>shapeNum;
  switch(shapeNum){
    case 1:{
      Circle obj1 = Circle();
      cout<<"Area of circle = "<<obj1.Area()<<endl;
      cout<<"Circumference of circle = "<<obj1.Circumference()<<endl;
      break;
    }
    case 2:{
      Rectangle obj1 = Rectangle();
      cout<<"Area of Rectangle = "<<obj1.Area()<<endl;
      cout<<"Circumference of Rectangle = "<<obj1.Circumference()<<endl;
      break;
    }
     case 3:{
      Triangle obj1 = Triangle();
      cout<<"Area of Triangle = "<<obj1.Area()<<endl;
      cout<<"Circumference of Triangle = "<<obj1.Circumference()<<endl;
      break;
    }
    case 4:{
      Cylinder obj1 = Cylinder();
      cout<<"Area of Cylinder = "<<obj1.Area()<<endl;
      cout<<"Circumference of Cylinder = "<<obj1.Circumference()<<endl;
      break;
    }

    case 5:{
      Cone obj1 = Cone();
      cout<<"Area of Cone = "<<obj1.Area()<<endl;
      cout<<"Circumference of Cone = "<<obj1.Circumference()<<endl;
      break;
    }
    default:
    cout<<"this id not supported"<<endl;
  }
}
