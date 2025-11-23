#include <iostream>
#include <stdexcept>

class ExceptionSafe {
public:
    ExceptionSafe() { std::cout << "ExceptionSafe created\n"; }
    ~ExceptionSafe() { std::cout << "ExceptionSafe destroyed\n"; }

    void riskyOperation() {
        throw std::runtime_error("Something went wrong!");
    }
};

void handleExceptions() {
    ExceptionSafe obj;
    obj.riskyOperation();  // Destructor won't be called if an exception is thrown
}

int main() {
    try {
        handleExceptions();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << '\n';
    }
    return 0;
}
