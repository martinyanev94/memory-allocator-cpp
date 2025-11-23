#include <iostream>

void memoryLeakDemo() {
    int* p1 = new int(42); // Dynamically allocating memory
    std::cout << "Value of p1: " << *p1 << std::endl;
    // Do not delete p1, which leads to a memory leak
}

int main() {
    memoryLeakDemo();
    return 0;
}
