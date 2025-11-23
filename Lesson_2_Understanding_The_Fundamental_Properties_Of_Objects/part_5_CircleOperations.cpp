#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    Circle(double r) : radius(r) {
        cout << "Circle created with radius: " << radius << endl;
    }

    Circle(const Circle& other) : radius(other.radius) {
        cout << "Circle copied with radius: " << radius << endl;
    }

    Circle& operator=(const Circle& other) {
        if (this != &other) {
            radius = other.radius;
            cout << "Circle assigned new radius: " << radius << endl;
        }
        return *this;
    }

    double getArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle circleA(5.0);
    Circle circleB = circleA; // Invokes copy constructor
    Circle circleC(10.0);
    circleC = circleA; // Invokes assignment operator

    return 0;
}
