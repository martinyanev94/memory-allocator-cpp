#include <iostream>
#include <memory>

void sharedPointerDemo() {
    std::shared_ptr<int> p1(new int(42)); // Creating a shared pointer
    {
        std::shared_ptr<int> p2 = p1; // Sharing ownership
        std::cout << "Value of p2: " << *p2 << std::endl;
    } // p2 goes out of scope, but memory for p1 remains
    std::cout << "Value of p1: " << *p1 << std::endl;
} // p1 goes out of scope, and memory is freed here

int main() {
    sharedPointerDemo();
    return 0;
}
