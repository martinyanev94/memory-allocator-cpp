void dynamicMemoryAllocation() {
    int* ptr = new int(10); // Allocating on the heap
    std::cout << "Value: " << *ptr << std::endl;
    delete ptr; // Manual deallocation
}
