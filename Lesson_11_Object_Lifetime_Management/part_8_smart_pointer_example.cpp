#include <iostream>
#include <memory>

class SmartObject {
public:
    SmartObject() { std::cout << "SmartObject created\n"; }
    ~SmartObject() { std::cout << "SmartObject destroyed\n"; }
};

int main() {
    std::unique_ptr<SmartObject> objPtr = std::make_unique<SmartObject>(); // Automatically managed
    return 0; // Destructor called automatically
}
