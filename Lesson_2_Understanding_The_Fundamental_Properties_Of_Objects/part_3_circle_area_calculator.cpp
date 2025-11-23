#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    Circle(double r) : radius(r) {}

    double getArea() {
        return 3.14159 * radius * radius;
    }

    void setRadius(double r) {
        radius = r;
    }
};

int main() {
    Circle myCircle(5.0);
    cout << "Initial Area of Circle: " << myCircle.getArea() << endl;
    
    myCircle.setRadius(10.0); // Changing the radius
    cout << "New Area of Circle after updating radius: " << myCircle.getArea() << endl;
    return 0;
}
