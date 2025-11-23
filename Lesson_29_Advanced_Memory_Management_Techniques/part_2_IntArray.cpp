#include <iostream>

class IntArray {
private:
    int* arr;
    size_t size;

public:
    // Constructor
    IntArray(size_t s) : size(s) {
        arr = new int[size]; // allocate memory
        for (size_t i = 0; i < size; ++i) {
            arr[i] = 0; // initialize array elements to zero
        }
    }

    // Destructor
    ~IntArray() {
        delete[] arr; // clean up allocated memory
    }

    // Copy Constructor
    IntArray(const IntArray& other) : size(other.size) {
        arr = new int[size]; // allocate new memory
        for (size_t i = 0; i < size; ++i) {
            arr[i] = other.arr[i]; // copy values from the other array
        }
    }

    // Copy Assignment Operator
    IntArray& operator=(const IntArray& other) {
        if (this != &other) { // self-assignment check
            delete[] arr; // free existing resource
            size = other.size;
            arr = new int[size]; // allocate new memory
            for (size_t i = 0; i < size; ++i) {
                arr[i] = other.arr[i]; // copy values
            }
        }
        return *this;
    }

    void print() const {
        for (size_t i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};
