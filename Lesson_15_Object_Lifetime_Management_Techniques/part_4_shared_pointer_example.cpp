#include <memory>
#include <iostream>

void sharedPointerExample() {
    std::shared_ptr<int> sharedPtr1(new int(30));
    {
        std::shared_ptr<int> sharedPtr2 = sharedPtr1; // Now two pointers own the same resource
        std::cout << "Value: " << *sharedPtr2 << std::endl;
    } // sharedPtr2 goes out of scope, but resource is not deallocated
    std::cout << "Value after sharedPtr2 is out of scope: " << *sharedPtr1 << std::endl;
} // Memory is freed when sharedPtr1 goes out of scope
