Array getArray(size_t size) {
    return Array(size); // RVO (Return Value Optimization) and Move semantics
}

int main() {
    Array myArray = getArray(10); // Here, move semantics come into play
    Array anotherArray = std::move(myArray); // Moving myArray to anotherArray
}
