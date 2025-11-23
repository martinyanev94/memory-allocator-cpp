class Buffer {
private:
    int* data;
    size_t size;

public:
    Buffer(size_t size) : size(size), data(new int[size]) {}
    
    ~Buffer() {
        delete[] data;
    }

    // Copy constructor
    Buffer(const Buffer& other) : size(other.size), data(new int[other.size]) {
        std::copy(other.data, other.data + other.size, data);
    }

    // Copy assignment operator
    Buffer& operator=(const Buffer& other) {
        if (this != &other) {
            delete[] data; // Free existing resource
            size = other.size;
            data = new int[other.size];
            std::copy(other.data, other.data + other.size, data);
        }
        return *this;
    }

    // Move constructor
    Buffer(Buffer&& other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;
        other.size = 0;
    }

    // Move assignment operator
    Buffer& operator=(Buffer&& other) noexcept {
        if (this != &other) {
            delete[] data; // Free existing resource
            data = other.data;
            size = other.size;
            other.data = nullptr;
            other.size = 0;
        }
        return *this;
    }
};
