#include <iostream>
#include <memory>

class SmartPointerExample {
public:
    SmartPointerExample() { std::cout << "SmartPointerExample created\n"; }
    ~SmartPointerExample() { std::cout << "SmartPointerExample destroyed\n"; }
};

void smartPointerDemo() {
    std::unique_ptr<SmartPointerExample> ptr(new SmartPointerExample()); 
    // ptr goes out of scope and its destructor is automatically called
}

int main() {
    smartPointerDemo();
    return 0; 
}
