#include <iostream>
using namespace std;

class Circle {
public:
    double radius;
  
    Circle(double r) : radius(r) {}
    
    double getArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle myCircle(5.0); // Create an object of Circle with radius 5.0
    cout << "Area of Circle: " << myCircle.getArea() << endl;
    return 0;
}
