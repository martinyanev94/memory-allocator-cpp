#include <memory>

void useSmartPointer() {
    std::unique_ptr<int> smartPtr(new int(30));
    std::cout << "Value: " << *smartPtr << std::endl;
} // smartPtr is automatically deleted when it goes out of scope
