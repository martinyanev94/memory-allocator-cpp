void processBuffer(Buffer&& buf) {
    // Process the buffer, no copying of resources
    std::cout << "Processing buffer of size " << buf.getSize() << ".\n";
}
