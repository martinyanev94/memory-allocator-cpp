#include <iostream>
#include <cstring>

class DynamicArray {
private:
    int* data;
    size_t size;

public:
    DynamicArray(size_t sz) : size(sz) {
        data = new int[size];
        std::cout << "Array of size " << size << " created.\n";
    }

    // Destructor
    ~DynamicArray() {
        delete[] data;
        std::cout << "Array deleted.\n";
    }

    // Copy Constructor
    DynamicArray(const DynamicArray& other) : size(other.size) {
        data = new int[size];
        std::memcpy(data, other.data, size * sizeof(int));
        std::cout << "Array copied.\n";
    }

    // Copy Assignment Operator
    DynamicArray& operator=(const DynamicArray& other) {
        if (this == &other) {
            return *this; // Handle self-assignment
        }

        delete[] data; // Release current resources
        size = other.size;
        data = new int[size]; // Allocate new memory
        std::memcpy(data, other.data, size * sizeof(int));
        std::cout << "Array assigned.\n";
        return *this;
    }
};
