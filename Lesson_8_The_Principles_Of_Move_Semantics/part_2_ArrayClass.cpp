class Array {
private:
    int* data;
    size_t length;

public:
    Array(size_t len) : length(len), data(new int[len]) {}

    ~Array() {
        delete[] data;
    }

    // Move constructor
    Array(Array&& other) noexcept : data(other.data), length(other.length) {
        other.data = nullptr; // Leave other's data in a safe state
        other.length = 0;
    }

    // Move assignment operator
    Array& operator=(Array&& other) noexcept {
        if (this != &other) {
            delete[] data; // Clean up existing resource
            data = other.data; // Steal the resource
            length = other.length;

            // Leave other in a valid state
            other.data = nullptr;
            other.length = 0;
        }
        return *this;
    }
};
