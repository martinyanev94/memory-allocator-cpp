#include <iostream>

void memoryLeakExample() {
    int* leakedMemory = new int(42);
    // We’ve allocated memory but forgot to call delete
    std::cout << "Value: " << *leakedMemory << std::endl;
    // Memory leak occurs here as we do not delete leakedMemory
}
