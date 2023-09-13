#include <iostream>
using namespace std;
class circle {
  float r;

public:
  circle() {
    cout << "Input the raduis:";
    cin >> r;
    cout << r << endl;
  }

  void Area() {
    float area = r * r * 3.14;
    // return data -> float :::: return  r*r*3.14
    cout << "Circle Area = " << area << endl;
  }
  void Circumference() {
    float circumference = 2 * r * 3.14;
    // return data -> float :::: return  r*r*3.14
    cout << "Circle Circumference = " << circumference << endl;
  }
};
class regtangel {
  float height, width;

public:
  regtangel(float h, float w) {
    height = h;
    width = w;
  }
  void Area() {
    float area = height * width;
    cout << "Regtangel Area = " << area << endl;
  }
  void Circumference() {
    float circumference = 2 * (height + width);
    cout << "Rectangel Circumference = " << circumference << endl;
  }
};

void viewMenu();
int main() {
  viewMenu();
  // circle c1 = circle();
  // c1.Area();
  // c1.Circumference();
  //-----------------
  // float height,width;

  //    cout<<"Input the height and width:";
  //   cin>>height>>width;
  //   regtangel r1= regtangel(height,width);
  //   r1.Area();
  //   r1.Circumference();
}

void viewMenu() {
  string shapes[] = {"circle", "rectangel"};
  for (int i = 0; i < 2; i++) {
    // cout<<shapes[i]<<" "<<i+1<<endl;;
    cout << i + 1 << "- " << shapes[i] << endl;
  }
}
