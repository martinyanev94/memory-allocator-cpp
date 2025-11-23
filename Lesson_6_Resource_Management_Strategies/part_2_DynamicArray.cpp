#include <iostream>

class DynamicArray {
public:
    DynamicArray(size_t size) {
        data = new int[size];
        this->size = size;
        std::cout << "Array of size " << size << " allocated." << std::endl;
    }

    ~DynamicArray() {
        delete[] data;
        std::cout << "Array deallocated." << std::endl;
    }

private:
    int* data;
    size_t size;
};
