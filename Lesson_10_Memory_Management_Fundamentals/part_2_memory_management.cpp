void functionExample() {
    int* num = new int(10); // Allocate memory on the heap
    std::cout << "Value: " << *num << std::endl;
    delete num; // Manually free the memory
}
