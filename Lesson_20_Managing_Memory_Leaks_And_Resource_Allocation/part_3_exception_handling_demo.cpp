#include <iostream>
#include <stdexcept>

void exceptionDemo() {
    int* p1 = new int(42);
    std::cout << "Value of p1: " << *p1 << std::endl;

    // Simulating an exception being thrown
    throw std::runtime_error("An unexpected error occurred!");

    delete p1; // This line will never be executed
}

int main() {
    try {
        exceptionDemo();
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
