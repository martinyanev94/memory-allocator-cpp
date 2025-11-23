#include <iostream>

class Buffer {
private:
    size_t size;
    int* data;

public:
    // Constructor
    Buffer(size_t size) : size(size), data(new int[size]) {
        std::cout << "Buffer of size " << size << " created.\n";
    }

    // Destructor
    ~Buffer() {
        delete[] data;
        std::cout << "Buffer destroyed.\n";
    }

    // Copy Constructor
    Buffer(const Buffer& other) : size(other.size), data(new int[other.size]) {
        std::copy(other.data, other.data + other.size, data);
        std::cout << "Buffer copied.\n";
    }

    // Copy Assignment Operator
    Buffer& operator=(const Buffer& other) {
        if (this == &other) return *this; // self-assignment guard
        delete[] data; // free existing resource
        size = other.size;
        data = new int[other.size];
        std::copy(other.data, other.data + other.size, data);
        std::cout << "Buffer assigned from another.\n";
        return *this;
    }

    // Move Constructor
    Buffer(Buffer&& other) noexcept : size(other.size), data(other.data) {
        other.data = nullptr; // leave the source in a valid state
        other.size = 0;
        std::cout << "Buffer moved.\n";
    }

    // Move Assignment Operator
    Buffer& operator=(Buffer&& other) noexcept {
        if (this == &other) return *this; // self-assignment guard
        delete[] data; // free existing resource
        data = other.data; // transfer ownership
        size = other.size;
        other.data = nullptr; // leave the source in a valid state
        other.size = 0;
        std::cout << "Buffer moved and assigned.\n";
        return *this;
    }
};
