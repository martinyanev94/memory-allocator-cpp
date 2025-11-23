MyArray& operator=(const MyArray& other) {
    if (this != &other) { // check for self-assignment
        delete[] arr; // release existing memory
        size = other.size;
        arr = new int[size]; // allocate new memory
        for (size_t i = 0; i < size; ++i) {
            arr[i] = other.arr[i]; // copy data
        }
    }
    return *this;
}
