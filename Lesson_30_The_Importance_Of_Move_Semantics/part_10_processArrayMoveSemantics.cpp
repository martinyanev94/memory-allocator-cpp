void processArray(MoveArray&& arr) {
    // Manipulate arr without copying
    std::cout << "Processing an array of size: " << arr.getSize() << std::endl;
}
processArray(MoveArray(5)); // Move semantics
