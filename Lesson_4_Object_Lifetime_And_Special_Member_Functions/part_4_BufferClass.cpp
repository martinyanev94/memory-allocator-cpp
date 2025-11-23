class Buffer {
private:
    size_t size;
    int* data;

public:
    Buffer(size_t n) : size(n), data(new int[n]) { }

    Buffer(const Buffer& other) : size(other.size), data(new int[other.size]) {
        std::copy(other.data, other.data + other.size, data);
    }

    Buffer(Buffer&& other) noexcept : size(other.size), data(other.data) {
        other.data = nullptr; // Prevent destruction of the moved-from object
        other.size = 0;
    }

    Buffer& operator=(const Buffer& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new int[size];
            std::copy(other.data, other.data + size, data);
        }
        return *this;
    }

    Buffer& operator=(Buffer&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            size = other.size;
            other.size = 0;
            other.data = nullptr; // Leave in a safe state
        }
        return *this;
    }

    ~Buffer() {
        delete[] data; // Cleanup
    }
};
