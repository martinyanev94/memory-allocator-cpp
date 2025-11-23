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

    // Copy constructor for copying
    DynamicArray(const DynamicArray& other) : size(other.size) {
        data = new int[size];
        std::memcpy(data, other.data, size * sizeof(int));
        std::cout << "Array copied." << std::endl;
    }

    // Move constructor for moving
    DynamicArray(DynamicArray&& other) noexcept : size(other.size), data(other.data) {
        other.data = nullptr; // Leave the moved-from object in a safe state
        other.size = 0;
        std::cout << "Array moved." << std::endl;
    }

    // Copy assignment operator
    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) {
            delete[] data; // Clean up existing resource
            size = other.size;
            data = new int[size];
            std::memcpy(data, other.data, size * sizeof(int));
            std::cout << "Array assigned." << std::endl;
        }
        return *this;
    }

    // Move assignment operator
    DynamicArray& operator=(DynamicArray&& other) noexcept {
        if (this != &other) {
            delete[] data; // Clean up existing resource
            data = other.data;
            size = other.size;
            other.data = nullptr; // Leave the moved-from object in a safe state
            other.size = 0;
            std::cout << "Array moved and assigned." << std::endl;
        }
        return *this;
    }

private:
    int* data;
    size_t size;
};

int main() {
    DynamicArray array1(5);
    DynamicArray array2 = std::move(array1); // Move array1 to array2
    DynamicArray array3(3);
    array3 = std::move(array2); // Move assignment from array2 to array3
    return 0;
}
