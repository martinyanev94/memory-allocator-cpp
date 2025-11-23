#include <iostream>
#include <memory>

class SharedExample {
public:
    SharedExample() {
        std::cout << "SharedExample Created!" << std::endl;
    }
    ~SharedExample() {
        std::cout << "SharedExample Destroyed!" << std::endl;
    }
};

void shared_example_function() {
    std::shared_ptr<SharedExample> sharedPtr1 = std::make_shared<SharedExample>();
    {
        std::shared_ptr<SharedExample> sharedPtr2 = sharedPtr1; // shared ownership
    } // sharedPtr2 goes out of scope, but sharedPtr1 remains
}
