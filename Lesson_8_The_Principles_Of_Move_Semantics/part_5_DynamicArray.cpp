class Array {
private:
    int* data;
    size_t length;

public:
    Array(size_t len) : length(len), data(new int[len]) {}

    ~Array() {
        delete[] data;
    }

    Array(const Array& other) : length(other.length), data(new int[other.length]) {
        std::copy(other.data, other.data + other.length, data);
    }

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            length = other.length;
            data = new int[other.length];
            std::copy(other.data, other.data + other.length, data);
        }
        return *this;
    }

    Array(Array&& other) noexcept : data(other.data), length(other.length) {
        other.data = nullptr;
        other.length = 0;
    }

    Array& operator=(Array&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            length = other.length;
            other.data = nullptr;
            other.length = 0;
        }
        return *this;
    }
};
