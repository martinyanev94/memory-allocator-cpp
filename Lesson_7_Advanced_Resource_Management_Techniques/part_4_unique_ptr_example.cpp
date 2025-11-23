#include <iostream>
#include <memory>

class Example {
public:
    Example() {
        std::cout << "Example Created!" << std::endl;
    }
    ~Example() {
        std::cout << "Example Destroyed!" << std::endl;
    }
};

void create_example() {
    std::unique_ptr<Example> examplePtr = std::make_unique<Example>();
}
