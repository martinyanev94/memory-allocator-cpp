#include <iostream>

class Example {
public:
    Example() {
        std::cout << "Constructor called!" << std::endl;
    }

    ~Example() {
        std::cout << "Destructor called!" << std::endl;
    }
};

void createObject() {
    Example obj; // Automatic object
    // obj will be destructed when this block ends
}

int main() {
    createObject();
    std::cout << "Object created and destroyed within the function scope." << std::endl;
    return 0;
}
