#include <iostream>
#include <vector>

class Buffer {
public:
    Buffer(size_t size) : size(size), data(new int[size]) {
        std::cout << "Buffer created of size: " << size << std::endl;
    }

    Buffer(Buffer&& other) noexcept : size(other.size), data(other.data) {
        other.data = nullptr;
        other.size = 0;
        std::cout << "Buffer moved!" << std::endl;
    }

    Buffer& operator=(Buffer&& other) noexcept {
        if (this != &other) {
            delete[] data; // Clean up existing memory
            data = other.data;
            size = other.size;
            other.data = nullptr; // Nullify other
            other.size = 0;
            std::cout << "Buffer moved via assignment!" << std::endl;
        }
        return *this;
    }

    ~Buffer() {
        delete[] data;
        std::cout << "Buffer destroyed" << std::endl;
    }

private:
    size_t size;
    int* data;
};

int main() {
    std::vector<Buffer> buffers;
    buffers.reserve(3);
    buffers.emplace_back(100); // Directly creates a Buffer
    buffers.emplace_back(200); // Creates another Buffer

    Buffer tempBuffer(300);
    buffers.push_back(std::move(tempBuffer)); // Move into the vector

    return 0;
}
