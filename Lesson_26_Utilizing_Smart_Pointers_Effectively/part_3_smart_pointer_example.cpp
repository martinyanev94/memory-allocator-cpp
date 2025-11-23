#include <iostream>
#include <memory>

class SmartClass {
public:
    SmartClass() { std::cout << "SmartClass constructor called.\n"; }
    ~SmartClass() { std::cout << "SmartClass destructor called.\n"; }
};

void transferOwnership(std::unique_ptr<SmartClass> ptr) {
    std::cout << "Ownership transferred to function.\n";
}

int main() {
    std::unique_ptr<SmartClass> ptr1(new SmartClass());
    transferOwnership(std::move(ptr1));
    // ptr1 is now nullptr after moving.
    return 0;
}
