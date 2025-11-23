#include <iostream>

void memoryManagementFix() {
    int* p1 = new int(42); // Dynamically allocating memory
    std::cout << "Value of p1: " << *p1 << std::endl;
    delete p1; // Always remember to delete
}

int main() {
    memoryManagementFix();
    return 0;
}
