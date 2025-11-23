#include <iostream>
#include <memory>

class SmartClass {
public:
    SmartClass() { std::cout << "SmartClass constructor called.\n"; }
    ~SmartClass() { std::cout << "SmartClass destructor called.\n"; }
};

int main() {
    std::shared_ptr<SmartClass> ptr1(new SmartClass());
    {
        std::shared_ptr<SmartClass> ptr2 = ptr1; // Shared ownership
        std::cout << "ptr1 and ptr2 share ownership.\n";
    } // ptr2 goes out of scope here, but SmartClass remains alive.

    std::cout << "ptr1 still owns the resource.\n";
    return 0;
}
