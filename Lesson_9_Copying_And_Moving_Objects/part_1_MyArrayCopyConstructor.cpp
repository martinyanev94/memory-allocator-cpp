MyArray(const MyArray& other) : size(other.size) {
    arr = new int[size]; // allocate new memory
    for (size_t i = 0; i < size; ++i) {
        arr[i] = other.arr[i]; // copy data
    }
}
