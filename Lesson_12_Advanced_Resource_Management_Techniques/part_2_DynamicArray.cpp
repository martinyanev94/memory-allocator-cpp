class DynamicArray {
    // ... [previous code omitted for brevity]

    // Move constructor
    DynamicArray(DynamicArray&& other) noexcept : array(other.array), size(other.size) {
        other.array = nullptr; // Leave other in a valid state
        other.size = 0;
        std::cout << "DynamicArray moved.\n";
    }

    // Move assignment operator
    DynamicArray& operator=(DynamicArray&& other) noexcept {
        if (this == &other) {
            return *this; // self-assignment check
        }
        delete[] array; // Delete current resource
        array = other.array; // Transfer ownership
        size = other.size;

        other.array = nullptr; // Leave other in a valid state
        other.size = 0;
        std::cout << "DynamicArray move-assigned.\n";
        return *this;
    }
};
