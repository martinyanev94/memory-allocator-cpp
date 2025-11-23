#include <iostream>
#include <memory>

void processArray() {
    std::unique_ptr<int[]> arrayPtr(new int[10]);
    for (int i = 0; i < 10; ++i) {
        arrayPtr[i] = i * 10; // Initialize array elements
    }

    for (int i = 0; i < 10; ++i) {
        std::cout << "Array element " << i << ": " << arrayPtr[i] << std::endl;
    }
} // arrayPtr is automatically destroyed here

int main() {
    processArray();
    return 0;
}
