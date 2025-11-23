#include <iostream>
#include <cstring>

class DynamicArray {
private:
    int* array;
    size_t size;

public:
    DynamicArray(size_t size) : size(size) {
        array = new int[size];
        std::cout << "DynamicArray of size " << size << " created.\n";
    }

    ~DynamicArray() {
        delete[] array;
        std::cout << "DynamicArray destroyed.\n";
    }

    // Copy constructor
    DynamicArray(const DynamicArray& other) : size(other.size) {
        array = new int[size];
        std::memcpy(array, other.array, size * sizeof(int));
        std::cout << "DynamicArray copied.\n";
    }

    // Copy assignment operator
    DynamicArray& operator=(const DynamicArray& other) {
        if (this == &other) {
            return *this; // self-assignment check
        }
        delete[] array; // Clear existing resource
        size = other.size;
        array = new int[size];
        std::memcpy(array, other.array, size * sizeof(int));
        std::cout << "DynamicArray assigned.\n";
        return *this;
    }
};
