#include <iostream>
#include <memory>

class SmartPointerExample {
public:
    SmartPointerExample() { std::cout << "SmartPointerExample created\n"; }
    ~SmartPointerExample() { std::cout << "SmartPointerExample destroyed\n"; }
};

int main() {
    std::unique_ptr<SmartPointerExample> sp(new SmartPointerExample());
    // No need to call delete; sp will automatically call the destructor
    return 0;
}
