int* createNumber() {
    int* num = new int(20); // Allocate on the heap
    return num; // Returning pointer to heap memory
}

void example() {
    int* pointer = createNumber();
    delete pointer; // Properly delete memory
    // pointer is now dangling
    // std::cout << *pointer; // Using it here is dangerous
}
delete pointer;
pointer = nullptr; // Now it's safe
