class DynamicArray {
public:
    // Constructor
    DynamicArray(size_t size) {
        data = new int[size];
        this->size = size;
        std::cout << "Array of size " << size << " allocated." << std::endl;
    }

    // Copy constructor
    DynamicArray(const DynamicArray& other) {
        size = other.size;
        data = new int[size]; // Allocate new memory
        std::copy(other.data, other.data + size, data); // Copy the elements
        std::cout << "Array copied." << std::endl;
    }

    // Destructor
    ~DynamicArray() {
        delete[] data;
        std::cout << "Array deallocated." << std::endl;
    }

    // Copy assignment operator
    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) { // Self-assignment check
            delete[] data; // Release existing resource
            size = other.size;
            data = new int[size]; // Allocate new memory
            std::copy(other.data, other.data + size, data); // Copy the elements
            std::cout << "Array assigned." << std::endl;
        }
        return *this; // Return current object
    }

private:
    int* data;
    size_t size;
};
