void createTempWithException() {
    TempObject obj; // Automatic object
    throw std::runtime_error("Something went wrong!"); // Trigger an exception
    // obj will still be destructed when the exception occurs
}
