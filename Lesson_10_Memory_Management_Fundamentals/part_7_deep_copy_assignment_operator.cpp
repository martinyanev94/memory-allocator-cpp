DeepCopy& operator=(const DeepCopy& other) {
    if (this != &other) { // Check for self-assignment
        delete data; // Free existing resource
        data = new int(*(other.data)); // Deep copy
    }
    return *this;
}
