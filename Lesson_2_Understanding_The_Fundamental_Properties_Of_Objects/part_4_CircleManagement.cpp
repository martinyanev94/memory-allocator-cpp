#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    Circle(double r) : radius(r) {
        cout << "Circle created with radius: " << radius << endl;
    }
    
    ~Circle() {
        cout << "Circle with radius " << radius << " destroyed." << endl;
    }

    double getArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle stackCircle(5.0); // Stack allocation
    cout << "Area of stack Circle: " << stackCircle.getArea() << endl;

    Circle* heapCircle = new Circle(10.0); // Heap allocation
    cout << "Area of heap Circle: " << heapCircle->getArea() << endl;

    delete heapCircle; // Free the allocated memory
    return 0;
}
