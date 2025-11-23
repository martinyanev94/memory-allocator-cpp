#include <iostream>
#include <memory>

class SmartClass {
public:
    SmartClass() { std::cout << "SmartClass constructor called.\n"; }
    ~SmartClass() { std::cout << "SmartClass destructor called.\n"; }
};

int main() {
    std::unique_ptr<SmartClass> ptr(new SmartClass());
    // ptr will automatically be deallocated when it goes out of scope.
    return 0;
}
