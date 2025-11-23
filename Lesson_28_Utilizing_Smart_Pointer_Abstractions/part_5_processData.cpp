#include <iostream>

void processData(void* ptr, size_t type) {
    if (type == 1) {
        int* intPtr = static_cast<int*>(ptr);
        std::cout << "Processing int: " << *intPtr << std::endl;
    } else if (type == 2) {
        double* doublePtr = static_cast<double*>(ptr);
        std::cout << "Processing double: " << *doublePtr << std::endl;
    }
}

int main() {
    int intValue = 10;
    double doubleValue = 10.5;

    processData(&intValue, 1);
    processData(&doubleValue, 2);
    return 0;
}
