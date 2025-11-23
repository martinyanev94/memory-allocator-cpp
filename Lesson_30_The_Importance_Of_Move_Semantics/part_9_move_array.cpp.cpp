MoveArray createArray(size_t size) {
    MoveArray temp(size);
    return temp; // would invoke the copy constructor without move semantics
}
