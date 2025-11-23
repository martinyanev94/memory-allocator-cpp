#include <iostream>
#include <utility>

class Buffer {
public:
    Buffer(size_t size) : size(size), data(new int[size]) {
        std::cout << "Buffer allocated of size: " << size << std::endl;
    }

    // Move Constructor
    Buffer(Buffer&& other) noexcept : size(other.size), data(other.data) {
        other.data = nullptr; // Transfer ownership, avoid double deletion
        other.size = 0;
        std::cout << "Buffer moved!" << std::endl;
    }

    ~Buffer() {
        delete[] data; // Release memory
        std::cout << "Buffer deallocated" << std::endl;
    }

private:
    size_t size;
    int* data;
};

int main() {
    Buffer buf1(100); // Create buffer
    Buffer buf2(std::move(buf1)); // Move buf1 to buf2
    
    return 0;
}
