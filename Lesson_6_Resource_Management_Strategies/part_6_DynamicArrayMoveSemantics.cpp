class DynamicArray {
public:
    // Move constructor
    DynamicArray(DynamicArray&& other) noexcept {
        data = other.data; // Steal the resource
        size = other.size;
        other.data = nullptr; // Leave other in a valid state
        other.size = 0;
        std::cout << "Array moved." << std::endl;
    }

    // Move assignment operator
    DynamicArray& operator=(DynamicArray&& other) noexcept {
        if (this != &other) {
            delete[] data; // Release existing resource
            data = other.data; // Steal the resource
            size = other.size;
            other.data = nullptr; // Leave other in a valid state
            other.size = 0;
            std::cout << "Array move assigned." << std::endl;
        }
        return *this; // Return the current object
    }
};
