#include <memory>
#include <iostream>

void uniquePointerExample() {
    std::unique_ptr<int> ptr(new int(20)); // Allocated on the heap
    std::cout << "Value: " << *ptr << std::endl;
} // Memory is automatically reclaimed when ptr goes out of scope
