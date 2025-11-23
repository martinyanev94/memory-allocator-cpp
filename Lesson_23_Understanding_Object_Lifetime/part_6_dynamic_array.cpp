#include <iostream>
#include <cstring>

class DynamicArray {
public:
    DynamicArray(size_t size) : size(size) {
        data = new int[size];
        std::cout << "Array of size " << size << " constructed." << std::endl;
    }

    ~DynamicArray() {
        delete[] data;
        std::cout << "Array of size " << size << " destructed." << std::endl;
    }

    // Rule of Three implementations
    DynamicArray(const DynamicArray& other) : size(other.size) {
        data = new int[size];
        std::memcpy(data, other.data, size * sizeof(int));
        std::cout << "Array copied." << std::endl;
    }

    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) {
            delete[] data; // Delete the old data
            size = other.size;
            data = new int[size];
            std::memcpy(data, other.data, size * sizeof(int));
            std::cout << "Array assigned." << std::endl;
        }
        return *this;
    }

private:
    int* data;
    size_t size;
};

int main() {
    DynamicArray array1(5);
    DynamicArray array2 = array1; // Calls copy constructor
    DynamicArray array3(3);
    array3 = array1; // Calls assignment operator
    return 0;
}
