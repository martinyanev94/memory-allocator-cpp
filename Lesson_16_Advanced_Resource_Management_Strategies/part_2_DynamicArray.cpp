class DynamicArray {
public:
    int* data;
    size_t size;

    DynamicArray(size_t s) : size(s) {
        data = new int[s];
    }

    // Copy constructor
    DynamicArray(const DynamicArray& other) : size(other.size) {
        data = new int[size];
        std::copy(other.data, other.data + size, data);
    }

    // Copy assignment operator
    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) {
            delete[] data; // Clean up existing resource
            size = other.size;
            data = new int[size];
            std::copy(other.data, other.data + size, data);
        }
        return *this;
    }

    ~DynamicArray() {
        delete[] data;
    }
};
