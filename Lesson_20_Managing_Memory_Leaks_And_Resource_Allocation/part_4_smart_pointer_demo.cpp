#include <iostream>
#include <memory>

void smartPointerDemo() {
    std::unique_ptr<int> p1(new int(42)); // Creating a unique pointer
    std::cout << "Value of p1: " << *p1 << std::endl;
    // No need to delete, it will deallocate automatically
}

int main() {
    smartPointerDemo();
    return 0;
}
