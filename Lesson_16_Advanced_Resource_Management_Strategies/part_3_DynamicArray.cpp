class DynamicArray {
public:
    int* data;
    size_t size;

    DynamicArray(size_t s) : size(s), data(new int[s]) {}

    // Copy constructor
    DynamicArray(const DynamicArray& other) : size(other.size) {
        data = new int[size];
        std::copy(other.data, other.data + size, data);
    }

    // Copy assignment operator
    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new int[size];
            std::copy(other.data, other.data + size, data);
        }
        return *this;
    }

    // Move constructor
    DynamicArray(DynamicArray&& other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr; // Leave the source in a valid state
        other.size = 0;
    }

    // Move assignment operator
    DynamicArray& operator=(DynamicArray&& other) noexcept {
        if (this != &other) {
            delete[] data; // Clean up existing resource
            data = other.data; // Take ownership of the resource
            size = other.size;
            other.data = nullptr; // Leave the source in a valid state
            other.size = 0;
        }
        return *this;
    }

    ~DynamicArray() {
        delete[] data;
    }
};
