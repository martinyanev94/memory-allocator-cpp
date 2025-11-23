class MoveArray {
private:
    int* arr;
    size_t size;

public:
    MoveArray(size_t s) : size(s) {
        arr = new int[size];
        for (size_t i = 0; i < size; ++i) {
            arr[i] = i; // Initialize the array
        }
    }

    ~MoveArray() {
        delete[] arr;
    }

    // Move Constructor
    MoveArray(MoveArray&& other) noexcept : arr(other.arr), size(other.size) {
        other.arr = nullptr; // Leave the other object's pointer dangling
        other.size = 0;      // Reset the other object's size
    }

    // Move Assignment Operator
    MoveArray& operator=(MoveArray&& other) noexcept {
        if (this != &other) {
            delete[] arr;       // Clean up existing resources
            arr = other.arr;    // Transfer ownership
            size = other.size;  // Copy the size
            other.arr = nullptr; // Leave the other object's pointer dangling
            other.size = 0;     // Reset the other object's size
        }
        return *this;
    }
};
