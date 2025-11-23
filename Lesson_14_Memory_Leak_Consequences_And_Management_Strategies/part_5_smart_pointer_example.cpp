#include <iostream>
#include <memory>

void smartPointerExample() {
    std::unique_ptr<int> smartPtr(new int(42));
    std::cout << "Value: " << *smartPtr << std::endl;
    // No need to delete, memory will be released automatically
}
