#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    double radius;

    Circle(double r) : radius(r) {}
    
    double getArea() override {
        return 3.14159 * radius * radius;
    }
};

class Square : public Shape {
public:
    double side;

    Square(double s) : side(s) {}

    double getArea() override {
        return side * side;
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Square(4.0);

    cout << "Area of Circle: " << shape1->getArea() << endl;
    cout << "Area of Square: " << shape2->getArea() << endl;

    delete shape1;
    delete shape2;
    return 0;
}
