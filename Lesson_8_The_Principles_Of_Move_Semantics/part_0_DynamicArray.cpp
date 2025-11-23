class Array {
private:
    int* data;
    size_t length;

public:
    Array(size_t len) : length(len), data(new int[len]) {}

    ~Array() {
        delete[] data;
    }

    // Copy constructor
    Array(const Array& other) : length(other.length), data(new int[other.length]) {
        std::copy(other.data, other.data + other.length, data);
    }

    // Copy assignment operator
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            length = other.length;
            data = new int[other.length];
            std::copy(other.data, other.data + other.length, data);
        }
        return *this;
    }
};
